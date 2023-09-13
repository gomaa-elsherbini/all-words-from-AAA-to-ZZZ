#include <iostream>
#include <string>
using namespace std;



void printInvertedPattern()
{
    for (int x = 65; x <=90; x++)
    {
        cout << "=====\n";
        cout << char(x) << endl;
        cout << "=====\n";
        
        for (int i = 65; i <=90; i++)
        {
            cout << "=====\n";
            cout << char(i) << endl;
            cout << "=====\n";
            
            for (int y = 65; y <= 90; y++)
            {
                cout<<char(x)<<char(i)<<char(y)<<"\n";
            }
        }
    }
}

int main()
{
    printInvertedPattern();

    return 0;
}
