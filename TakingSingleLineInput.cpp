#include <bits/stdc++.h>
using namespace std;

/* input.txt

Dear Eram and Farjana,

How are you? Hope you are all well.
My Compiler Exam is not going well.
Please help me :(

Sincerely
Akif


*/
int main()
{
    // freopen("input.txt", "r", stdin);
    ifstream infile("input.txt");

    // string word;

    // cin >> word;
    // cout << word << endl;

    // Output : Dear

    string sentence;
    // getline(cin, sentence);
    // cout << sentence << endl;

    // Output : Dear Eram and Farjana,

    while (getline(infile, sentence))
    {
        cout << sentence << endl;
        ;
    }
}