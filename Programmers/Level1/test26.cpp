#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>>::iterator it1 = arr1.begin();
    vector<vector<int>>::iterator it2 = arr2.begin();
    vector<vector<int>> result;
    while (it1 != arr1.end() && it2 != arr2.end())
    {
        vector<int>::iterator it3 = (*it1).begin();
        vector<int>::iterator it4 = (*it2).begin();
        vector<int> temp;
        while (it3 != (*it1).end() && it4 != (*it2).end())
        {
            temp.push_back(*it3 + *it4);
            it3++;
            it4++;
        }
        result.push_back(temp);
        it1++;
        it2++;
    }
    return result;
}

int main()
{
}