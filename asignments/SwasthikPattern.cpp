#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i < r / 2)
            {
                if (j < r / 2)
                {
                    if (j == 0){
                        cout << "*";
                    }
                    else{
                        cout << " "
                             << " ";
                    }
                }

                else if (j == r / 2)
                    cout << " *";
                else
                {
                    if (i == 0){
                        cout << " *";
                    }
                }
            }
            else if (i == r / 2){
                cout << "* ";
            }
            else
            {
                if (j == r / 2 || j == r - 1){
                    cout << "* ";
                }

                else if (i == r - 1){
                
                    if (j <= r / 2 || j == r - 1)
                        cout << "* ";
                    else
                        cout << " "
                             << " ";
                }
                else{
                    cout << " "
                         << " ";
                     }
            }
        }
        cout << "\n";
    }
    return 0;
}