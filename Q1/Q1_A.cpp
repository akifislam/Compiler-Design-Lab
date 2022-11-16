// 1. a) Count number of words, letters, digits and other characters.

#include <bits/stdc++.h>
using namespace std;

set<char> letters;
set<char> digits;
set<char> others;

void differentiator(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            digits.insert(str[i]);
        else if (isalpha(str[i]))
            letters.insert(tolower(str[i]));
        else
        {
            if (str[i] != ' ')
                others.insert(str[i]);
        }
    }
}

void print(set<char> str, string headline)
{
    cout << headline << ": \n";
    int counter = 1;
    for (auto letter : str)
    {
        cout << counter << ": " << letter << endl;
        counter++;
    }
    cout << "\n\n"
         << endl;
}

int main()
{
    freopen("../Testcases/Q1_A_input.txt", "r", stdin);
    string str; // A Quick Brown Fox Jumps Over The Lazy Dog, Fox No. 282, Baker Street, England
    getline(cin, str);
    cout << str << endl;
    differentiator(str);
    print(letters, "The letters are : ");
    print(digits, "The digits are : ");
    print(others, "The others are : ");
}
