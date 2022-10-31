#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a;
    int b;
    cin >> a >> b;
    string s = "";
    for (int i = 0; i < a; i++)
        s.push_back('*');
    for (int j = 0; j < b; j++)
        cout << s << endl;
    cin.get();

    return 0;
}