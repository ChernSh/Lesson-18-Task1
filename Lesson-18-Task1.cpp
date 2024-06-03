#include <iostream>
#include "Computer.h"
using namespace std;

int main()
{
    int N = 5;
    Computer* arr = new Computer[N]{
        {"HP3000", 2.4, 8, false, 16500},
        {"Apple Pro 2016", 3.2, 16, false, 66500},
        {"Asus 1200", 1.8, 4, true, 8200},
        {"Samsung Pro Max", 3.2, 16, true, 20500},
        {"acer navy", 1.4, 4, false, 5500}
    };
}

