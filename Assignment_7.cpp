// 7. Write a program to recognize C++
// 1. Keyword 2. Identifier 3. Operator 4. Constant
#include <bits/stdc++.h>
using namespace std;
char singleQuote = '\'';
char doubleQuote = '\"';

vector<string> keywords = {"alignas", "decltype", "namespace", "struct",
                           "alignof", "default", "not", "	this",
                           "double", "auto", "nullptr",
                           "bitand", "else", "operator", "true", "enum", "or", "try",
                           "bool", "typedef",
                           "break", "export", "private", "typeid",
                           "case", "typename",
                           "catch", "false", "public", "union", "using", "return", "virtual",
                           "class", "goto", "short", "void",
                           "if", "signed", "const", "inline", "sizeof", "int", "static", "while",
                           "long", "xor", "continue"};

vector<string> all_operators = {
    "+",
    "^",
    "-",
    "*",
    "/",
    "%",
    "++",
    "--",
    "+=",
    "-=",
    "%=",
    "*=",
    "/=",
    "==",
    "!=",
    ">",
    "<",
    ">>",
    "<<",
    ">=",
    "<=",
    "%=",
    "%",
    "||",
    "&&",
    "&",
};

void fire_up()
{
    sort(keywords.begin(), keywords.end());
    sort(all_operators.begin(), all_operators.end());
}

bool isConstant(string input)
{
    bool isConstant = false;

    // Check if it is a number
    if (input[0] == doubleQuote && input[input.size() - 1] == doubleQuote)
    {
        // cout << "Double Quotation Found !" << endl;
        return true;
    }
    else if (input[0] == singleQuote && input[input.size() - 1] == singleQuote && input.size() == 3)
    {
        // cout << "Single Quotation Found !" << endl;
        return true;
    }

    else if (isdigit(input[0]))
    {
        isConstant = true;
        int pointCount = 0;
        // Check if rest of the characters are number (and 1 point)
        for (int i = 1; i < input.size(); i++)
        {
            if (input[i] == '.')
            {
                pointCount++;
            }
            else if (!isdigit(input[i]))
            {
                isConstant = false;
                break;
            }
        }
        if (pointCount == 1 && isConstant)
            return true;
        else
            return false;
    }
    return false;
}

bool isKeyword(string input)
{
    if (binary_search(keywords.begin(), keywords.end(), input))
        return true;
    else
        return false;
}

bool isOperator(string input)
{
    if (binary_search(all_operators.begin(), all_operators.end(), input))
        return true;
    else
        return false;
}

bool isIdentifier(string input)
{
    bool isIdentifier = false;

    if (isalpha(input[0]) || (input[0] == '_'))
    {
        isIdentifier = true;
        for (int i = 1; i < input.size(); i++)
        {
            if (!isalpha(input[i]) && !isdigit(input[i]) && input[i] != '_')
            {
                isIdentifier = false;
                break;
            }
        }
    }
    if (isIdentifier)
        return true;
    else
        return false;
}

int main()
{
    fire_up();
    string input;
    cin >> input;
    if (isConstant(input))
    {
        cout << "Constant" << endl;
    }
    else if (isKeyword(input))
    {
        cout << "Keyword" << endl;
    }
    else if (isOperator(input))
    {
        cout << "Operator" << endl;
    }
    else if (isIdentifier(input))
    {
        cout << "Identifier" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}