#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Balancing {
public:
    // Function to check if the expression is balanced
    bool balanced(const string& expr) {
        stack<char> s; // Stack to hold opening brackets
        for (char ch : expr) {
            // If the character is an opening bracket, push it onto the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                s.push(ch);
            }
            // If the character is a closing bracket
            else if (ch == ')' || ch == '}' || ch == ']') {
                // If the stack is empty, it means there's no matching opening bracket
                if (s.empty())
                    return false;

                char top = s.top(); // Get the top element of the stack
                s.pop(); // Remove the top element

                // Check if the closing bracket matches the opening bracket
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false; // Mismatched brackets
                }
            }
        }
        // If the stack is empty at the end, all brackets were matched
        return s.empty();
    }
};

int main() {
    Balancing balancer;
    string expression = "{[()]}"; // Example expression

    // Check if the expression is balanced
    if (balancer.balanced(expression)) {
        cout << "The Expression is balanced." << endl;
    } else {
        cout << "The Expression is not balanced." << endl;
    }

    return 0;
}
