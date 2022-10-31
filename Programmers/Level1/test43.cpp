#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    vector<string> days = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    vector<int> days_in_month;

    for (int i = 0; i < 12; i++)
    {
        int temp = i + 1;
        if (temp == 2)
        {
            days_in_month.push_back(29);
            continue;
        }
        days_in_month.push_back((temp < 8) ? ((temp & 1) ? 31 : 30) : ((temp & 1) ? 30 : 31));
    }
    int total_days = b;
    for (int i = 0; i < a - 1; i++)
    {
        total_days += days_in_month[i];
    }
    int day_index = (4 + total_days) % 7;
    return days[day_index];
}

int main()
{
    cout << solution(5, 24) << endl;
    cin.get();
}