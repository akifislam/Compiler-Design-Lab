#include <bits/stdc++.h>
using namespace std;

int vowel = 0, consonant = 0;

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
                vowel++;
                // cout << "GOT VOWEL : " << str[i] << " | VowelCount : " << vowel << endl;
            }
            else if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && !isVowel(str[i]))
            {
                consonant++;
                // cout << "GOT CONSONANT : " << str[i] << " | ConsonantCount : " << consonant << endl;
            }
        }
    }
}
int main()
{
    string str = "Munmun is the student of Computer Science & Engineering";
    countVowel_Consonant(str);
    cout << "No of Vowel : " << vowel << endl;
    cout << "No of Consonant : " << consonant << endl;
}