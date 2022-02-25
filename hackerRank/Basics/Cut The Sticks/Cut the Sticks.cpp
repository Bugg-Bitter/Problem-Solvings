#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int arr[T];

    for(int i=0;i<T;i++)
        cin >> arr[i];

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    for(int j=0;j<T;j++)
        if(arr[j] != arr[j-1])
            cout << (*(&arr + 1) - arr)-j << endl;
    return 0;
}
