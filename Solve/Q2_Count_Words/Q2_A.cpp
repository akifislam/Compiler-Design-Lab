// 2 (a) Count how many vowels and consonants are in a sentence
// Example Sentence : Munmun is the student of Computer Science and Engineering

#include <bits/stdc++.h>
using namespace std;

int vowel = 0, consonant = 0;

bool isVowel(char letter)
{
    letter = tolower(letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        return true;
    return false;
}

void countVowelConsonant(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            if (isVowel(str[i]))
                vowel++;
            else if (isalpha(str[i]))
                consonant++;
        }
    }
}

int main()
{
    freopen("../Testcases/Q2_A_input.txt", "r", stdin);
    string str;
    getline(cin, str);
    countVowelConsonant(str);
    cout << "No of Vowel : " << vowel << endl;
    cout << "No of Consonant : " << consonant << endl;
}