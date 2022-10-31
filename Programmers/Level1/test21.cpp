#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
    int sum = 0;
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        sum += *it;
    }
    return 45 - sum;
}

int main()
{
    vector<int> array1 = {1, 2, 3, 4, 6, 7, 8, 0};
    vector<int> array2 = {5, 8, 4, 0, 6, 7, 9};
    cout << solution(array1) << endl;
    cout << solution(array2) << endl;
    cin.get();
}