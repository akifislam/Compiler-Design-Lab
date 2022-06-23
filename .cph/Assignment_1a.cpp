#include <bits/stdc++.h>
using namespace std;

// Md. Tareq Zaman, Part-3, 2011"
// Count the number of words, letters, digits and other characters

int countWords(string str)
{
    int words = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            words++;
    }
    return words + 1;
}

int countLetters(string str)
{
    int letters = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            letters++;
    }
    return letters;
}

int countDigits(string str)
{
    int digits = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            digits++;
    }
    return digits;
}

int main()
{

    string str = "Md. Tareq Zaman, Part-3, 2011";
    cout << "Words : " << countWords(str) << endl;
    cout << "Letters : " << countLetters(str) << endl;
    cout << "Digits : " << countDigits(str) << endl;
}