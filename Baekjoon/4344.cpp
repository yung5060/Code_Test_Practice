#include <iostream>

int main()
{
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        int num_students;
        std::cin >> num_students;
        double total = 0;
        for (int i = 0; i < num_students; i++)
        {
            double a;
            std::cin >> a;
            total += a;
        }
    }
}