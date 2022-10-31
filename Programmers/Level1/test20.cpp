#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n)
{
    string answer = "";
    for (int i = 1; i <= n; i++)
        (i % 2) ? answer.append("¼ö") : answer.append("¹Ú");
    return answer;
}

int main()
{
    cout << solution(3) << endl;
    cout << solution(4) << endl;
    cin.get();
}