#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string word;
    std::cin >> word;

    std::vector<std::string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (const auto &letter : croatian)
    {
        while (true)
        {
            int idx = word.find(letter);
            if (idx == std::string::npos)
            {
                break;
            }
            word.replace(idx, letter.size(), "$");
        }
    }
    std::cout << word.size();
}

// int main()
// {
//     std::string word;
//     std::cin >> word;

//     std::string::iterator it = word.begin();
//     int count = 0;
//     while (it != word.end())
//     {
//         if (*it == 'c')
//         {
//             if (*(it + 1) == '-' || *(it + 1) == '=')
//             {
//                 it += 2;
//                 count++;
//             }
//             else
//             {
//                 count++;
//                 it++;
//             }
//         }
//         else if (*it == 'd')
//         {
//             if (*(it + 1) == '-')
//             {
//                 it += 2;
//                 count++;
//             }
//             else if (*(it + 1) == 'z')
//             {
//                 if (*(it + 2) == '=')
//                 {
//                     it += 3;
//                     count++;
//                 }
//             }
//             else
//             {
//                 it++;
//                 count++;
//             }
//         }
//         else if (*it == 'n' || *it == 'l')
//         {
//             if (*(it + 1) == 'j')
//             {
//                 it += 2;
//                 count++;
//             }
//             else
//             {
//                 it++;
//                 count++;
//             }
//         }
//         else if (*it == 's' || *it == 'z')
//         {
//             if (*(it + 1) == '=')
//             {
//                 it += 2;
//                 count++;
//             }
//             else
//             {
//                 it++;
//                 count++;
//             }
//         }
//         else
//         {
//             it++;
//             count++;
//         }
//     }
//     std::cout << count;
// }