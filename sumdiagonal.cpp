#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 
	int i,j,a[4][4],sum=0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0; i<4; i++)
	{
						sum=sum+a[i][i];
			
	}
	cout<<"Sum= "<<sum<<endl;
	getch();
	return 0;
}

