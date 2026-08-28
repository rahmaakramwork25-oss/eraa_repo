#include <iostream>

using namespace std;
maxnumber(int x, int y,int z )
''

    {
        if (x>=y && x>=z)
        {
            return x;
        }
        if (y>=x && y>=z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
    int main()
    {
        cout<<maxnumber(8,7,4);
    }



