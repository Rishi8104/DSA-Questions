#include <bits/stdc++.h>
using namespace std;
 
int search(int arr[], int n, int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]== k){
            return i;
        }
    }
    return -1;
    
 }

int main(void)
{
    int arr[]= {2,8,9,3,7,8,6,9,2,48};
    int k = 9;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = search(arr, n, k);
    (result== -1)
    ?cout << "Element is not present in array"
    :cout << "Element is present in array "<< result;
    return 0;
}