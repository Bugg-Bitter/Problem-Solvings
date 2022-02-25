#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,c=0;
    cin >> T;
    int arr[T];
    for(i=0;i<T;i++)
        cin >> arr[i];
        i=0;
        while(i<T-1)
        {
        if((arr[i+2] == 0)&& arr[i] != 1)
        {
          c++;
          i+=2;
        }
        else if((arr[i+1] == 0)&& arr[i] != 1)
        {
            i++;
            c++;
        }
        else
            i++;
        }
       cout << c << endl;
    return 0;
}
