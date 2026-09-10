#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> s;

    
    s.push(10);
    s.push(20);
    s.push(30);

    
    cout << "Stack elements: ";

    stack<int> temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;

    
    s.pop();

    
    cout << "Stack after pop: ";

    temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;


    cout << "Top element: " << s.top();

    return 0;
}