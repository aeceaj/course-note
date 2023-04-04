#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool IsOperator(char op)
{
    return op == '#' || op == '(' || op == ')' || op == '+' || op == '-' || op == '*' || op == '/';
}

/**
 * @brief Priority of operator in stack.
 * @param op Operator char.
 * @return Priority (0-6).
 */
int ISP(char op)
{
    switch (op)
    {
    case '#':
        return 0;
    case '(':
        return 1;
    case ')':
        return 6;
    case '+':
    case '-':
        return 3;
    case '*':
    case '/':
        return 5;
    }
    throw "Not an operator!";
}

/**
 * @brief Priority of operator in coming.
 * @param op Operator char.
 * @return Priority (0-6).
 */
int ICP(char op)
{
    switch (op)
    {
    case '#':
        return 0;
    case '(':
        return 6;
    case ')':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 4;
    }
    throw "Not an operator!";
}

/**
 * @brief Convert infix expression to postfix expression.
 * @param infix Infix expression.
 * @return Postfix expression.
 */
string InfixToPostfix(string infix)
{
    infix += '#'; // Add end mark
    int len = infix.length();
    string postfix = "";
    stack<char> charStack;
    charStack.push('#');
    int i = 0;
    while (i < len)
    {
        if (IsOperator(infix[i]))
        {
            char top = charStack.top();
            if (ICP(infix[i]) > ISP(top))
            {
                // Push the operator
                charStack.push(infix[i++]);
            }
            else if (ICP(infix[i]) < ISP(top))
            {
                // Pop the operator and output, string pointer doesn't move
                charStack.pop();
                postfix += top;
            }
            else
            {
                // Pop when priorities are equal (which represents a bracket pair), string pointer moves
                charStack.pop();
                i++;
            }
        }
        else if (infix[i] != ' ')
        {
            // Output when the char is number
            postfix += infix[i++];
        }
        else
        {
            i++;
        }
    }
    return postfix;
}

int main()
{
    string expr = "a+b-a*((c+d)/e-f)+g";
    cout << InfixToPostfix(expr) << endl;
    return 0;
}
