#include <iostream>
using namespace std;
void zigzag(int arr[], int n){
    bool f = true;
    for (int i = 0; i <= n - 2; i++){
        if (f){
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        else{
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        f = !f;
    }
}
int main()
{
    int arr[] = {5, 3, 7, 9, 8, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    zigzag(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
    return 0;
}