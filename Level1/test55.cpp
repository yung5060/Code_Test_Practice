#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    vector<int> basket;
    for (const auto &move : moves)
    {
        vector<vector<int>>::iterator it = board.begin();
        int doll = 0;
        while (doll == 0)
        {
            if (it == board.end())
                break;
            doll = (*it)[move - 1];
            (*it)[move - 1] = 0;
            it++;
        }
        if (doll == 0)
            continue;
        if (basket.empty())
            basket.push_back(doll);
        else if (basket.back() == doll)
        {
            basket.pop_back();
            answer += 2;
        }
        else
            basket.push_back(doll);
    }

    return answer;
}

int main()
{
    vector<vector<int>> board = {{0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1}};
    vector<int> moves = {1, 5, 3, 5, 1, 2, 1, 4};
    cout << solution(board, moves) << endl;
    cin.get();
}