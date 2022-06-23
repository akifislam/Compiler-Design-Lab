#include <bits/stdc++.h>
using namespace std;

// Md. Tareq Zaman, Part-3, 2011"
// Seperate letters digits and other characters

vector<char> letters;
vector<char> digits;
vector<char> others;

void differentiator(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            digits.push_back(str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            letters.push_back(str[i]);
        else
            others.push_back(str[i]);
    }
}

void print(vector<char> str, string headline)
{
    cout << headline << ": \n";
    for (int i = 0; i < str.size() - 1; i++)
    {
        cout << str[i] << "  ";
    }
    cout << str.back();
    cout << "\n\n"
         << endl;
}
int main()
{
    string str = "Md. Tareq Zaman, Part-3, 2011";
    differentiator(str);
    print(letters, "The letters are : ");
    print(digits, "The digits are : ");
    print(others, "The others are : ");
}