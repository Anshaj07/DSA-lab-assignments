#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char ch : postfix) {
        if (isdigit(ch)) {
   
            st.push(ch - '0');
        }
        else {
    
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            int result;

            switch (ch) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/': result = val1 / val2; break; 
                default:
                    cout << "Invalid operator: " << ch << endl;
                    return -1;
            }
            st.push(result);
        }
    }
    return st.top();
}

int main() {
    string postfix;
    cout << "Enter a postfix expression (e.g. 53+82-*): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
