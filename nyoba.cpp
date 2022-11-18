#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int i,j;

    cout << "1 2 3 4 5 6 7 8 9 10" << endl;
    for (i = 1; i<=10; i++)
        {
            cout << i << " ";
            for (j=i; j<=10; j++)
            {
                cout << i*j << " ";
            }
            cout << endl;
        }
    return 0;
}
