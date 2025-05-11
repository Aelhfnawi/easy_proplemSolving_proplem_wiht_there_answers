#include <iostream>
#include <string>
using namespace std;

string exellator(int ON)
{
    string result;
    
    while (ON > 0)
    {
        ON--;
        int reminder = ON % 26;
        result = char('A' + reminder) + result;
        ON /= 26;
    }
    return result;
}
int main()
{
    cout << exellator(701);
}
