
#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if (st.empty()) return false;

                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main() {
    Solution solution;
    string input;
    getline(cin, input);
    bool valid = solution.isValid(input);
    cout << (valid ? "Valid" : "Invalid") << endl;
    return 0;
}