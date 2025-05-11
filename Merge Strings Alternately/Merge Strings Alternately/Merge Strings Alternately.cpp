#include <iostream>
#include < string >
using namespace std;

string merger(string s1, string s2)
{
    int i = 0, j = 0;
    string result;
    
    while (i < s1.length()&& j< s2.length())
    {
        result += s1[i];
        result += s2[j];
        i++;
        j++;
    }
    while (i<s1.length())
    {
        result += s1[i];
        i++;
    }
    while (j < s2.length())
    {
        result += s2[j];
        j++;
    }

    return result;
}

int main()
{
    string s1 = "ahmed";
    string s2 = "henaaaaaaaaaaaaaaaaa";
    cout << merger (s1 , s2 );
}

