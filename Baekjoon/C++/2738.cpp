#include <iostream>
#include <vector>

int main()
{
    int m, n;
    std::cin >> n >> m;
    std::vector<std::vector<int>> matrix1, matrix2;

    for (int i = 0; i < n; i++)
    {
        std::vector<int> tmp;
        for (int j = 0; j < m; j++)
        {
            int num;
            std::cin >> num;
            tmp.push_back(num);
        }
        matrix1.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        std::vector<int> tmp;
        for (int j = 0; j < m; j++)
        {
            int num;
            std::cin >> num;
            tmp.push_back(num);
        }
        matrix2.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }
}