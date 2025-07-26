#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

struct SNAKE_POSITION {
    int X, Y;
};

class family {
    static const int H;
    static const int W;
    char ** F;
    family(const family &);
    family operator=(const family &);
public:
    family() {
        F = new char*[family::H];
        for(int c = 0; c < family::H; ++c) {
            F[c] = new char[family::W];
        }
    }
    ~family() {
        for(int c = 0; c < family::H; ++c) {
            delete[] F[c];
        }
        delete[] F;
    }

    void print() {
        for(int c = 0; c < H; ++c) {
            for(int r = 0; r < W; ++r) {
                cout << F[c][r];
            }
            cout << endl;
        }
    }

    void clear() {
        for(int c = 0; c < H; ++c) {
            for(int r = 0; r < W; ++r) {
                F[c][r] = ' ';
            }
        }
    }

    int get_W() const { return W; }
    int get_H() const { return H; }

    void draw(int y, int x, char what) {
        F[y][x] = what;
    }

} F;

class food_cls {
    SNAKE_POSITION pos;
    char symbol;
public:
    food_cls(): symbol('X'), pos() {
        pos.X = pos.Y = -1;
    }

    void set_pos(int X, int Y) {
        pos.X = X;
        pos.Y = Y;
    }

    void reposition(const family & F) {
        pos.X = rand() % F.get_W();
        pos.Y = rand() % F.get_H();
    }

    int get_X() const { return pos.X; }
    int get_Y() const { return pos.Y; }
    char get_symbol() const { return symbol; }
} food;

class snake_cls {
    enum { UP, DOWN, LEFT, RIGHT } dir;
    char symbol, head_symbol;
    SNAKE_POSITION pos[100];
    SNAKE_POSITION & head;
    int speed;
    int size;
    bool can_turn;
public:
    snake_cls(int X, int Y):
        symbol('#'), head_symbol('@'), pos(),
        speed(1), size(1), dir(RIGHT),
        head(pos[0]), can_turn(true)
    {
        pos[0].X = X;
        pos[0].Y = Y;
    }

    bool check_food(const food_cls & food) {
        if (food.get_X() == head.X && food.get_Y() == head.Y) {
            size += 1;
            return true;
        }
        return false;
    }

    void get_input(const family & F) {
        if (GetAsyncKeyState(VK_UP) && dir != DOWN) {
            dir = UP;
        }
        if (GetAsyncKeyState(VK_DOWN) && dir != UP) {
            dir = DOWN;
        }
        if (GetAsyncKeyState(VK_LEFT) && dir != RIGHT) {
            dir = LEFT;
        }
        if (GetAsyncKeyState(VK_RIGHT) && dir != LEFT) {
            dir = RIGHT;
        }
    }

    void move(const family & F) {
        SNAKE_POSITION next = { 0, 0 };
        switch (dir) {
        case UP:
            next.Y = -speed;
            break;
        case DOWN:
            next.Y = speed;
            break;
        case LEFT:
            next.X = -speed;
            break;
        case RIGHT:
            next.X = speed;
        }
        for (int c = size - 1; c > 0; --c) {
            pos[c] = pos[c - 1];
        }
        head.X += next.X;
        head.Y += next.Y;

        if (head.X < 0 || head.Y < 0 || head.X >= F.get_W() || head.Y >= F.get_H()) {
            throw "DEAD!!!!";
        }
    }

    void draw(family & F) {
        for (int c = 0; c < size; ++c) {
            if (c == 0) {
                F.draw(pos[c].Y, pos[c].X, head_symbol);
            } else {
                F.draw(pos[c].Y, pos[c].X, symbol);
            }
        }
    }

    int get_X() const { return head.X; }
    int get_Y() const { return head.Y; }
    char get_symbol() const { return symbol; }
} snake(1, 1);

const int family::H = 24;
const int family::W = 79;

void play_game(string playerName, int &highScore, string &highScorePlayer) {
    F.clear();
    food.set_pos(5, 5);
    int score = 0;

    while (1) {
        F.clear();
        snake.get_input(F);
        try {
            snake.move(F);
        } catch (const char * er) {
            F.clear();
            cerr << er << endl;
            cout << "Your score: " << score << endl;
            if (score > highScore) {
                highScore = score;
                highScorePlayer = playerName;
                ofstream outFile("highscore.txt");
                if (outFile.is_open()) {
                    outFile << highScorePlayer << " " << highScore;
                    outFile.close();
                }
                cout << "New high score!" << endl;
            }
            break;
        }
        snake.draw(F);
        F.draw(food.get_Y(), food.get_X(), food.get_symbol());

        if (snake.check_food(food)) {
            food.reposition(F);
            score += 10;
        }

        cout << "Score: " << score << " | High Score: " << highScore << " (" << highScorePlayer << ")" << endl;
        F.print();

        Sleep(1000 / 30);
        system("cls");
    }
}

int main() {
    string playerName;
    int highScore = 0;
    string highScorePlayer;

    // Read high score from file
    ifstream inFile("highscore.txt");
    if (inFile.is_open()) {
        inFile >> highScorePlayer >> highScore;
        inFile.close();
    }

    cout << "Enter your name: ";
    getline(cin, playerName);

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        play_game(playerName, highScore, highScorePlayer);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cin.ignore();  // To ignore the newline character left in the buffer
    }

    return 0;
}
