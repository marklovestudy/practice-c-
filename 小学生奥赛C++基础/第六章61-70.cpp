#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int count=1,i;
	for (i=0;i<10;i++) a[i]=true;
	i=9;
	while(count<=1000)
	{
		i=(i+count)%10;
		count++;
		a[i]=false;
	}
	for (i=0;i<10;i++)
	{
		if (a[i]==true)
		{
			cout<<i+1<<" ";
		}
	}
	return 0;
}
