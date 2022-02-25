#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,j,ele,minIndex,maxIndex,mini;
    cin >> T;
    mini = T;
    int arr[T];
    for(i=0;i<T;i++)
        cin >> arr[i];

    for(i=0;i<T;i++)
    {
         for(j=i+1;j<T;j++)
         {
             if(arr[i] == arr[j]){
                if(mini > (j-i))
                    mini = j-i;
             }
         }
    }
    if(mini == T)
    cout << -1;
    else
        cout << mini;
    return 0;
}
