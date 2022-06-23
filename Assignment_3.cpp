#include <bits/stdc++.h>
using namespace std;

map<string, string> database;

void loadDatabase(string codeWord, string abbreviatedWord)
{
    database[codeWord] = abbreviatedWord;
}
int main()
{
    loadDatabase("CSE-3141", "Computer Science & Enginnering, 3rd year, 1st semester, Compiler Design, Theory");
    loadDatabase("CSE-3162", "Computer Science & Enginnering, 3rd year, 1st semester, Software Development Lab III, Lab");
    string codeword;
    cin >> codeword;
    cout << database[codeword] << endl;
}