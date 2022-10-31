#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m)
{
    vector<int> n_list;
    vector<int> m_list;
    vector<int> final;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (i == sqrt(n))
        {
            n_list.push_back(i);
        }
        else if (!(n % i))
        {
            n_list.push_back(i);
            n_list.push_back(n / i);
        }
    }

    for (int i = 1; i <= sqrt(m); i++)
    {
        if (i == sqrt(m))
        {
            m_list.push_back(i);
        }
        else if (!(m % i))
        {
            m_list.push_back(i);
            m_list.push_back(m / i);
        }
    }
    sort(n_list.begin(), n_list.end());
    sort(m_list.begin(), m_list.end());
    int result = 1;
    for (vector<int>::iterator it1 = n_list.begin(); it1 != n_list.end(); it1++)
    {
        for (vector<int>::iterator it2 = m_list.begin(); it2 != m_list.end(); it2++)
        {
            if (*it1 == *it2)
                result = *it1;
        }
    }
    final.push_back(result);
    final.push_back(m * n / result);
    return final;
}

int main()
{
    vector<int> result1 = solution(15, 4);
    for (vector<int>::iterator it = result1.begin(); it != result1.end(); it++)
    {
        cout << *it << " ";
    }
    cin.get();
}