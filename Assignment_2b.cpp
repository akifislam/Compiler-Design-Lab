#include <bits/stdc++.h>
using namespace std;

set<char> vowels;
set<char> consonants;

bool isVowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    return false;
}
void countVowel_Consonant(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            if (isVowel(str[i]))
            {
                vowels.insert(str[i]);
            }
            else if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && !isVowel(str[i]))
            {
                consonants.insert(str[i]);
            }
        }
    }
}
void printAnswer()
{
    cout << "These are vowels found in the string : " << endl;
    for (auto item : vowels)
    {
        cout << item << "\t";
    }
    cout << "\n\n";
    cout << "These are consonants found in the string : " << endl;

    for (auto item : consonants)
    {
        cout << item << "\t";
    }
}
int main()
{
    string str = "Munmun is the student of Computer Science & Engineering";
    countVowel_Consonant(str);
    printAnswer();
}