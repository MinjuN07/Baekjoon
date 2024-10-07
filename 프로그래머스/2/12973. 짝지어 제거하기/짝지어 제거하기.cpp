#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> stack;
    for(int i=0;i<s.length();i++) {
        if(!stack.empty() && stack.top() == s[i]) {
            stack.pop();
            continue;
        }
        stack.push(s[i]);
    }
    while(!stack.empty()) {
        char t = stack.top();
        stack.pop();
        if(!stack.empty() && t != stack.top()) return 0;
        stack.pop();
    }
    return 1;
}