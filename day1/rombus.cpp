#include <bits/stdc++.h>
using namespace std;
void solid(int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < (n - i) - 1; j++){
            cout << " ";
        }
        for (j = 0; j < n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void hollow(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i) - 1; j++){
            cout << " ";
        }
        if(i==0 || i==n-1){
            for (j = 0; j < n; j++){
                cout << "* ";
            }
        }
        else{
            cout<<"* ";
            for(j=0;j<n-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout << endl;
    }
}
int main()
{
    int inp,i,j;
    cin>>inp;
    solid(inp);
    cout<<endl<<endl;
    hollow(inp);
}