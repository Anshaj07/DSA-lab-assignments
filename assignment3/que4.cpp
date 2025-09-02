#include <iostream>
#include <stack>
#include <string>
using namespace std;
int getPrecedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0; 
}
bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); 
        }
        else if (isOperator(ch)) {
            while (!st.empty() && getPrecedence(st.top()) >= getPrecedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch); 
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string result = infixToPostfix(infix);
    cout << "Postfix expression: " << result << endl;

    return 0;
}
