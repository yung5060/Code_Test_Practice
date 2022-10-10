#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());
    int answer = 0;
    for (int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[i];
    }
    return answer;
}

int main()
{
    vector<int> A = {1, 4, 2};
    vector<int> B = {5, 4, 4};
    cout << solution(A, B) << endl;
    cin.get();
}