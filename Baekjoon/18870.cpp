#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> arr1;

    for (int i = 0; i < N; i++)
    {
        int a;
        std::cin >> a;
        arr1.push_back(a);
    }
    std::vector<int> arr2(arr1);
    std::sort(arr1.begin(), arr1.end());
    arr1.erase(std::unique(arr1.begin(), arr1.end()), arr1.end());
    for (const auto &it : arr2)
    {
        std::vector<int>::iterator a = std::lower_bound(arr1.begin(), arr1.end(), it);
        std::cout << a - arr1.begin() << " ";
    }
}