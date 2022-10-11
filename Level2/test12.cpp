#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit)
{
    sort(people.rbegin(), people.rend());
    vector<int>::iterator it1 = people.begin();
    vector<int>::iterator it2 = people.end() - 1;
    while (it1 < it2)
    {
        if (*it1 + *it2 <= limit)
        {
            it2--;
        }
        it1++;
    }
    return it2 - people.begin() + 1;
}

int main()
{
    vector<int> people = {70, 80, 50};
    cout << solution(people, 100) << endl;
    cin.get();
}