#include <iostream>
#include <vector>
#include <string>

// int main()
// {
//     std::cout << 1 << std::endl;
//     std::cout << 3 << std::endl;
//     std::cout << 5 << std::endl;
//     std::cout << 7 << std::endl;
//     for (int i = 8; i <= 10000; i++)
//     {
//         int tmp = i;
//         tmp %= 1001;
//         tmp %= 101;
//         tmp %= 11;
//         int a = tmp;
//         tmp %= 2;
//         if (tmp)
//         {
//             int b = (a + 11) / 2;
//             tmp = (a + 11) % 2;
//             if (tmp || b > 9)
//             {
//                 std::cout << i << std::endl;
//             }
//         }
//     }
// }

int main()
{
    std::vector<bool> array(10000, false);

    for (int i = 0; i < 10000; i++)
    {
        int tmp = i + 1;
        std::string num = std::to_string(i + 1);
        for (const auto &it : num)
        {
            tmp += it - 48;
        }
        if (tmp <= 10000)
        {
            array[tmp - 1] = true;
        }
    }
    for (int i = 0; i < 10000; i++)
    {
        if (!array[i])
        {
            std::cout << i + 1 << std::endl;
        }
    }
}