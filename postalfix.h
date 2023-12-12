#ifndef H_StackType 
#define H_StackType 
#include <cassert>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

class InfixPostfix {
private:
    string ifx;
    string pfx;
    bool precedence(char op1, char op2) {
        if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-')) return true;
        else return false;
    }
    void convertToPostfix() {
        stack<char> s;
        for (int i = 0; i < ifx.length(); i++) {
            if (ifx[i] >= 'A' && ifx[i] <= 'Z') pfx += ifx[i];
            else if (ifx[i] == '(') s.push(ifx[i]);
            else if (ifx[i] == ')') {
                while (!s.empty() && s.top() != '(') {
                    pfx += s.top();
                    s.pop();
                }
                s.pop();
            } else {
                while (!s.empty() && s.top() != '(' && precedence(s.top(), ifx[i])) {
                    pfx += s.top();
                    s.pop();
                }
                s.push(ifx[i]);
            }
        }
        while (!s.empty()) {
            pfx += s.top();
            s.pop();
        }
    }

public:
    InfixPostfix(string infix) : ifx(infix) { convertToPostfix(); }
    ~InfixPostfix() {}
    void showInfix() { cout << "Infix Expression: " << ifx << endl; }
    void showPostfix() { cout << "Postfix Expression: " << pfx << endl; }
};
#endif