//Pyramid repeated pattern of numbers using while loop
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Input number of rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j ++;
        }
        i ++;
        cout << endl;
    }
    return 0;
}