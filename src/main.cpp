#include "thickpointer.h"
#include <iostream>

class Apa {
public:
    void move(int x, int y) {
        x = x;
        y = y;
        std::cout << "moving apa " << x << ", " << y << std::endl;
    };

private:
    int x = 0;
    int y = 0;
};

class Bepa {
public:
    void move(int x, int y) {
        std::cout << "moving bepa " << x << ", " << y << std::endl;
    };
};

// The theory does not work yet...
int main(int argc, char *argv[]) {
    std::cout << "hello there\n";

    auto apa = Apa{};
    auto bepa = Bepa{};

    auto p = ThickPointer<Movable>{&apa};

    p.move(10, 20);

    p = &bepa;

    p.move(20, 30);

    return 0;
}
