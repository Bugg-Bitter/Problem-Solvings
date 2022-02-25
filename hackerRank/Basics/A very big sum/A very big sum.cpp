#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
long int addnum(long int num[200],long int sum[200])
{
	int carry=0;
	int temp;
	int i;

	for(i=0; i<20; i++)
	{
		temp=num[i]+carry;
		sum[i]=temp%10;
		carry=temp/10;
	}
}
int main()
{
    int lim,i;
    long int x[100];
    cin >> lim;
    for(i=0;i<lim;i++)
    cin >>x[i];
    for(i=0;i<lim;i++)
    addnum(x[i]);

    return 0;
}
