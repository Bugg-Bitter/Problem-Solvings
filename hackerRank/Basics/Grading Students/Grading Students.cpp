#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,next;
    cin >> T;
    int arr[T];
    for(i=0;i<T;i++)
        cin >> arr[i];
    for(i=0;i<T;i++)
    {
        next = (arr[i] + (5-arr[i]%5));
        if(arr[i] < 38)
        {
            cout << arr[i] << endl;
            continue;
        }
        else if((next - arr[i]) < 3)
            arr[i] = next;
            cout << arr[i] << endl;
    }
    return 0;
}
