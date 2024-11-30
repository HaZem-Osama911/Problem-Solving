#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b;
    int r = 0;
    cin >> a >> b;
 
    for (int i = 0; i < b; i++)
    {
        if (a <= b)
        {
            a = a * 3;
            b = b * 2;
            r = r + 1;
        }
    }
    cout << r;
}
