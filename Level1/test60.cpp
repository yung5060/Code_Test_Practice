#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number)
{
    int answer = 0;
    vector<int>::iterator num1 = number.begin();
    while (num1 != number.end() - 2)
    {
        vector<int>::iterator num2 = num1 + 1;
        while (num2 != number.end() - 1)
        {
            vector<int>::iterator num3 = num2 + 1;
            while (num3 != number.end())
            {
                if (*num1 + *num2 + *num3 == 0)
                {
                    answer++;
                }
                num3++;
            }
            num2++;
        }
        num1++;
    }
    return answer;
}

int main()
{
    vector<int> list1 = {-2, 3, 0, 2, -5};
    vector<int> list2 = {-3, -2, -1, 0, 1, 2, 3};
    vector<int> list3 = {-1, 1, -1, 1};
    cout << solution(list1) << endl;
    cout << solution(list2) << endl;
    cout << solution(list3) << endl;
    cin.get();
}