#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> result;
    for (int i = 0; i < n; i++)
    {
        vector<int> map1;
        vector<int> map2;
        string temp = "";
        int a = arr1[i];
        int b = arr2[i];
        while (a != 0)
        {
            map1.push_back(a % 2);
            a /= 2;
        }
        while (b != 0)
        {
            map2.push_back(b % 2);
            b /= 2;
        }
        int diff1 = n - map1.size();
        int diff2 = n - map2.size();
        for (int i = 0; i < diff1; i++)
            map1.push_back(0);
        for (int i = 0; i < diff2; i++)
            map2.push_back(0);
        for (int i = n - 1; i >= 0; i--)
        {
            char s = (map1[i] || map2[i]) ? '#' : ' ';
            temp.push_back(s);
        }
        result.push_back(temp);
    }
    return result;
}

int main()
{
    vector<int> arr1 = {9, 20, 28, 18, 11};
    vector<int> arr2 = {30, 1, 21, 17, 28};
    vector<string> answer = solution(5, arr1, arr2);
    for (const auto &it : answer)
    {
        cout << it << endl;
    }
    cin.get();
}