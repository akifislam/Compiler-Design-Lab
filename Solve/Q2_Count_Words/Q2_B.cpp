// 2 (b) Find out which vowels and consonants are in these sentences
// Example Sentence : Munmun is the student of Computer Science and Engineering

#include <bits/stdc++.h>
using namespace std;

set<char> vowels;
set<char> consonants;

bool isVowel(char letter)
{
    letter = tolower(letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        return true;
    return false;
}

void makeList(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (isVowel(str[i]))
            vowels.insert(tolower(str[i]));

        else if (isalpha(str[i]))
            consonants.insert(tolower(str[i]));
    }
}

void printAnswer()
{
    cout << "Vowels: " << endl;
    int count = 1;
    for (auto item : vowels)
    {
        cout << count << ": " << item << "\n";
        count++;
    }
    cout << "\n\n";
    count = 1;
    cout << "Consonants : " << endl;

    for (auto item : consonants)
    {
        cout << count << ": " << item << "\n";
        count++;
    }
    cout << "\n\n";
}

int main()
{
    freopen("../Testcases/Q2_B_input.txt", "r", stdin);
    string str;
    getline(cin, str);
    makeList(str);
    printAnswer();
}
