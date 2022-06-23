#include <bits/stdc++.h>
using namespace std;

set<string> words;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    return false;
}

void seperateWord(string str)
{
    string word = "";
    for (auto letter : str)
    {
        if (letter == ' ')
        {
            words.insert(word);
            word = "";
        }
        else
        {
            word += letter;
        }
    }
    words.insert(word);
}

void printAnswer()
{
    cout << "First String with Vowel : " << endl;

    for (auto word : words)
    {
        if (isVowel(word[0]))
            cout << word << " ";
    }
    cout << "." << endl;
    cout << endl;

    cout << "Second String with Consonant : " << endl;

    for (auto word : words)
    {
        if (isalpha(word[0]) && !isVowel(word[0]))
            cout << word << " ";
    }
    cout << "." << endl;
    cout << endl;
}
int main()
{
    string str = "Munmun is the student of Computer Science & Engineering";
    seperateWord(str);
    printAnswer();
}
