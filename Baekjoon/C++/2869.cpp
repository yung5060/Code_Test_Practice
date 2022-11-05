#include <iostream>

int main()
{
    int A, B, V, snail = 0;
    std::cin >> A >> B >> V;

    int days = ((V - A) % (A - B) == 0) ? (V - A) / (A - B) + 1 : (V - A) / (A - B) + 2;

    std::cout << days;
}