// 4. Build a lexical analyzer for Integer, ShortInt, LongInt 
#include <bits/stdc++.h>
using namespace std;

bool checkInteger(string str)
{
    bool isStartingOK = false;

    int size = str.size();
    // Example : j
    if (size >= 1)
    {
        if ((str[0] >= 'i' && str[0] <= 'n') || (str[0] >= 'I' && str[0] <= 'N'))
        {
            isStartingOK = true;
        }
    }
    bool isRestOK = true;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            isRestOK = false;
            break;
        }
    }

    if (isStartingOK && isRestOK)
        return true;
    else
        return false;
}

bool checkShortInt(string str)
{
    int size = str.size();

    if (str.size() > 4)
        return false;

    bool isValidShortInt = true;

    // First Character '0' , then false
    if (str[0] == '0')
        isValidShortInt = false;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
        {
            isValidShortInt = false;
            break;
        }
    }
    if (isValidShortInt)
        return true;
    else
        return false;
}

bool checkLongInt(string str)
{
    int size = str.size();

    if (str.size() <= 4)
        return false;

    bool isValidLongInt = true;

    // First Character '0' , then false
    if (str[0] == '0')
        isValidLongInt = false;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
        {
            isValidLongInt = false;
            break;
        }
    }
    if (isValidLongInt)
        return true;
    else
        return false;
}

int main()
{
    freopen("./Testcases/Q4_input.txt", "r", stdin);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string str;
        cin >> str;
        cout << "Scanned : " << str << endl;
        if (checkInteger(str))
        {
            cout << "Integer Variable" << endl;
        }
        else if (checkShortInt(str))
        {
            cout << "Short Integer Number" << endl;
        }
        else if (checkLongInt(str))
        {
            cout << "Long Integer Number" << endl;
        }
        else
        {
            cout << "Invalid Input or Undefined" << endl;
        }
        cout << "\n"
             << endl;
    }
}