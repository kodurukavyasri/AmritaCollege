#include<iostream>
#include<stack>
class Balancing{
    private: {
        char expr;
        balanced(expr)
    }
        
    public: {
        int balanced(char expr){
            stack<char> s;
            for (char ch : expr){
                if (ch == '(' || ch == '{' || ch == '['){
                    s.push();
                }elseif(ch = ')'|| ch == '}' || ch =="]"){
                    if (s.empty())
                    return false;

                    char top = s.top();
                    s.pop();
                    if ((ch == ')' && top !='(')) ||
                       ((ch == '}' && top !='{')) ||
                       ((ch == ']' && top !='[')) {
                        return false;
                       }

                }
            }
        }
        return s.empty();
    }
};

int main(){
    string expression = "{[()]}";
    if (balanced(expression)){
        cout << "THe Expression is balanced " << endl;
    } else {
        cout << "THe expression is not balanced." << endl;
    }
    return 0;
}