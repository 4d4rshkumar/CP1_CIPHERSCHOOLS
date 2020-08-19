#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k;
    cin >> n;

    for (i = 1; i <= n; i++){
        for (k = (n - i); k > 0; k--){
            cout << " ";
        }
        for (j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}