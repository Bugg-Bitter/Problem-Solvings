#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,sum=0,i,j=0,num,pos=0;
    cin >> a >> b >> c;
    int arr[b];
    for(i=a; i<=b; i++,j++)
    {
        int rev_num = 0;
        num = i;
        while(num > 0)
        {
            rev_num = rev_num*10 + num%10;
            num/=10;
        }
        arr[j] = rev_num;
    }
    j=0;
    for(i=a; i<=b; i++,j++)
    {
        if(i > arr[j])
        {
           if(((i-arr[j])%c)==0)
                pos++;
        }
        else if(arr[j] > i)
        {
            if(((arr[j]-i)%c)==0)
                pos++;
        }
        else if(arr[j] == i)
            pos++;

    }
    cout << pos << endl;
    return 0;
}
/*
if(rev_num < i)
            swap(i,rev_num);
        if(((i-rev_num)%c) == 0)
            pos++;
*/
