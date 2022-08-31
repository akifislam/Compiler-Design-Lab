// 2 (b) Divide the string into two seperate string.
// One string contains the words started with Vowel
// Another string contains the words started with consonants
// Example Sentence : Munmun is the student of Computer Science and Engineering

#include <bits/stdc++.h>
using namespace std;

set<string> words;

bool isVowel(char letter)
{
    letter = tolower(letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        return true;
    return false;
}

void seperateWord(string str)
{
    string word = "";
    for (auto letter : str)
    {
        if (!isalpha(letter))
        {
            words.insert(word);
            word = "";
        }
        else

            word += letter;
    }
    words.insert(word);
}

void printAnswer()
{
    cout << "String Started with Vowel : " << endl;

    for (auto word : words)
    {
        if (isVowel(word[0]))
            cout << word << " ";
    }
    cout << "."
         << "\n\n";

    cout << "String Started with Consonant : " << endl;

    for (auto word : words)
    {
        if (isalpha(word[0]) && !isVowel(word[0]))
            cout << word << " ";
    }
    cout << "."
         << "\n\n";
}
int main()
{
    freopen("./Testcases/Q2_C_input.txt", "r", stdin);
    string str;
    getline(cin, str);
    seperateWord(str);
    printAnswer();
}
