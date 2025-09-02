#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isBalanced(string& s) {
    int top = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            s[++top] = s[i]; 
        } 
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (top == -1) return false; 
            if ((s[i] == ')' && s[top] != '(')||(s[i] == '}' && s[top] != '{')||(s[i] == ']' && s[top] != '[')) {
                return false;
            }
            top--;
        }
    }
    return top == -1; 
}

int main() {
    string s1 = "[{()}]";
    
    if(isBalanced(s1)){
        cout<<"Yes string is balanced";
    }
    return 0;
}