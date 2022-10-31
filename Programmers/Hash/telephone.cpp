#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book)
{
    sort(phone_book.begin(), phone_book.end());
    vector<string>::iterator it = phone_book.begin();
    while (it != phone_book.end() - 1)
    {
        string prefix = string((*(it + 1)).begin(), (*(it + 1)).begin() + (*it).size());
        cout << prefix << endl;
        if (prefix == *it)
        {
            return false;
        }
        it++;
    }
    return true;
}

int main()
{
    vector<string> phone_book = {"119", "97674223", "1195524421"};
    cout << solution(phone_book) << endl;
    cin.get();
}