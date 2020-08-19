#include <bits/stdc++.h>
using namespace std;
int main()
{
        int arr[] = {3,4,2,0,1},f=1;
        //int arr[] = { 1, 2, 3, 0 }, f = 1;
        int n = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < n; i++)
        {
            if (arr[arr[i]] != i){
                f=0;
                break;
            }
        }
        if (f)
            cout << "yes";
        else
            cout << "no";
        return 0;
}