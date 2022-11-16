#include <bits/stdc++.h>

using namespace std;

vector<string> A = {"+", "-", "*", "/"};

vector<string> seperateWords(string str)
{

    sort(A.begin(), A.end());
    vector<string> words;

    string cur_word = "";

    for (auto letter : str)
    {
        if (binary_search(A.begin(), A.end(), letter))
        {
            words.push_back(word);
            cur_word = "";
        }
        else
            cur_word += letter;
    }
    words.push_back(cur_word);

    // Seperated Words
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << "\t";
    }
    cout << "\n\n";
    return words;
}

int main()
{
    freopen("./Testcases/Q12_input.txt", "r", stdin);
    string input_sentence;
    getline(cin, input_sentence);
    cout << "Input : " << input_sentence << endl;
    seperateWords(input_sentence);
}