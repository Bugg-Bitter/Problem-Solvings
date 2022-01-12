#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T,pivot;
    cin >> T;
    int arr[T];
    for(int j=0;j<T;j++)
        cin >> arr[j];
    pivot = arr[T-1];
    for(int i=T-1;i>=0;i--)
    {
        if(i == 0)
            arr[i] = pivot;

        else if(arr[i-1] >= pivot)
            arr[i] = arr[i-1];
        else if(pivot > arr[i-1])
        {
            arr[i] = pivot;
        }

        for(int k=0;k<T;k++)
            cout << arr[k] << " ";
            cout << endl;
            if(pivot == arr[i])break;
    }
    return 0;
}
