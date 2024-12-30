#include<iostream>
#include<stack>
#include<sstream>

using namespace std;
int evaluatePostfix(const string & expr){
    stack<int> s;
    stringstream ss(expr);
    string token;

    while (ss >> token){
        if (isdigit(token[0])){
            s.push(stoi(token));
        } else {
            int b = s.top(); 
            s.pop();
            int a = s.top();
            s.pop();

            switch (token[0]){
                case '+': s.push(a+b);break;
                case '-': s.push(a-b);break;
                case '*': s.push(a*b);break;
                case '/': s.push(a/b);break;
            }
        }
    }
    return s.top();
}

int main(){
    string postfixExpr = "3 4 + 2 * 7 /";
    cout << "Result of postfix evaluation:" << evaluatepostfix(postfixExpr) << endl;
    return 0;
}