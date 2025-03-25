#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(const string& s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        // Check if the current character is an opening bracket
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            // If the stack is empty, the string is not balanced
            if (st.empty()) {
                return false;
            }

            // Check if the top of the stack matches the current closing bracket
            char top = st.top();
            if ((top == '(' && s[i] == ')') ||
                (top == '{' && s[i] == '}') ||
                (top == '[' && s[i] == ']')) {
                st.pop(); // Pop the matching opening bracket
            } else {
                return false; // Mismatch found
            }
        }
    }

    // If the stack is empty, the string is balanced
    return st.empty();
}

int main() {
    string s = "{([])}";
    if (isBalanced(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}