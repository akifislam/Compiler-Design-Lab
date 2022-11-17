// 9. Write a program that will check and English sentence given in present indefinite form
// to justify whether it is syntactically valid or invalid according to the following Chomskey Normal Form

#include <algorithm>
#include <bitset>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <ostream>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

// Subject

// Proper Noun
vector<string> PN = {"Sagor", "Selim", "Salma", "Nipu"};

// Pronoun
vector<string> P = {"he", "she", "I", "we", "you", "they"};

// Predicate

// Verb
vector<string> V = {"read", "eat", "take", "run", "write"};

// Noun
vector<string> N = {"book", "cow", "dog", "home", "grass", "rice", "mango"};

void sorter()
{
    sort(PN.begin(), PN.end());
    sort(P.begin(), P.end());
    sort(V.begin(), V.end());
    sort(N.begin(), N.end());
}
vector<string> seperateWords(string str)
{
    vector<string> words;
    string word = "";

    for (auto letter : str)
    {
        if (letter == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else

            word += letter;
    }
    words.push_back(word);
    return words;
}

bool isCorrect(string sentence)
{
    vector<string> words = seperateWords(sentence);

    if (words.size() != 2 && words.size() != 3)
        return false;

    bool isGoodSubject = false;
    bool isGoodPredicate_1 = false;
    bool isGoodPredicate_2 = false;

    // Checking for Good Subject
    if ((binary_search(PN.begin(), PN.end(), words[0])) || (binary_search(P.begin(), P.end(), words[0])))
    {
        cout << "Scanned : " << words[0] << " | OK" << endl;
        isGoodSubject = true;
    }
    else
        return false;

    // Checking for Good Predicate
    if (words.size() == 2)
    {
        if (binary_search(V.begin(), V.end(), words[1]))
            // isGoodPredicate_1 = true;
            return true;
        else
            return false;
    }

    else if (words.size() == 3)
    {
        if ((binary_search(V.begin(), V.end(), words[1])) && (binary_search(N.begin(), N.end(), words[2])))
            return true;
        else
            return false;
    }
    else
        return false;
}

int main()
{
    sorter();
    freopen("./Testcases/Q9_input.txt", "r", stdin);
    string input_sentence;
    getline(cin, input_sentence);
    cout << "Input : " << input_sentence << endl;
    if (isCorrect(input_sentence))
        cout << "Valid Sentence" << endl;
    else
        cout << "Invalid Sentence" << endl;
}