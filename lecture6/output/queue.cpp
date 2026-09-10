#include <iostream>
#include <queue>

using namespace std;

int main()
{
    
    queue<int> q;

    
    q.push(100);
    q.push(200);
    q.push(300);

    
    cout << "Queue elements: ";

    queue<int> temp = q;

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;

    q.pop();

    
    cout << "Queue after dequeue: ";

    temp = q;

    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << endl;

    
    cout << "Front element: " << q.front();

    return 0;
}