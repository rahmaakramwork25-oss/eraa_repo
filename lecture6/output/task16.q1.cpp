#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 25, 30, 45, 60, 75};

    int value = 45;
    bool found = false;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == value)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}