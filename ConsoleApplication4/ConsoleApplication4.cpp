#include <cctype> 
#include <iostream>
using namespace std;






int main()
{
    int MyAray[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> MyAray[i];
    }
    for (int i = 4; i >= 0; i--)
    {
        cout << MyAray[i] << " ";
    }

    
    return 0;
}