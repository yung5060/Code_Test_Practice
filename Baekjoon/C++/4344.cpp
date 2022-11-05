#include <iostream>
#include <vector>

int main()
{
    int rep;
    std::cin >> rep;

    for (int i = 0; i < rep; i++)
    {
        int num_students;
        std::cin >> num_students;
        double total = 0;
        std::vector<int> array;
        for (int i = 0; i < num_students; i++)
        {
            int a;
            std::cin >> a;
            array.push_back(a);
            total += a;
        }
        double mean = total / num_students, over = 0;
        for (const auto &score : array)
        {
            if (score > mean)
            {
                over++;
            }
        }
        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << (double)over / num_students * 100 << "%" << std::endl;
    }
}