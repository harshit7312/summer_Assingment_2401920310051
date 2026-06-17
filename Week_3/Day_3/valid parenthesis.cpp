
#include <iostream>
#include <string>
#include <stack>
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
    std::string input;
    if (std::getline(std::cin, input)) {
        bool valid = solution.isValid(input);
        std::cout << (valid ? "Valid" : "Invalid") << std::endl;
    }
    return 0;
}