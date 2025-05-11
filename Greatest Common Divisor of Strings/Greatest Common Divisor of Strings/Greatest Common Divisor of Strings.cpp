#include <iostream>
#include <string>
using namespace std;

string commonFactor(string s1, string s2)
{
    int L1 = s1.length();
    int L2 = s2.length();
    int factornum = min(L2, L1);
    string factorio;
    string shorterString = (L1 <= L2) ? s1 : s2;

    for (int i = factornum; i >= 0; i--)
    {
        if (L1 % factornum == 0 && L2 % factornum == 0)
        {
            break;
        }
        factornum--;
    }

    int L3 = (shorterString.length() / factornum);
    int L4 = (shorterString.length() / factornum);

    for (int i = 0; i < factornum; i++)
    {
        factorio += shorterString[i];
    }

    return factorio;
}

string gcdOfStrings(string str1, string str2)
{
    string result = commonFactor(str1, str2);
    if (result == str1.substr(0, result.length()) && result == str2.substr(0, result.length()))
    {
        return result;
    }
    else
    {
        return "";
    }
}

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";

    string result = gcdOfStrings(str1, str2);
    if (!result.empty())
    {
        std::cout << "Greatest common divisor: " << result << "\n";
    }
    else
    {
        std::cout << "No common divisor found.\n";
    }

    return 0;
}
