#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;

    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");

    cout << "Top Element: " << s.top() << endl;

    s.pop();
    cout << "Top Element: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    cout << "Empty or not: " << s.empty() << endl;
}