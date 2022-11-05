#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> lecture(30, false);

    for (int i = 0; i < 28; i++)
    {
        int a;
        std::cin >> a;
        lecture[a - 1] = true;
    }
    for (int i = 0; i < 30; i++)
    {
        if (!lecture[i])
        {
            std::cout << i + 1 << std::endl;
        }
    }
}