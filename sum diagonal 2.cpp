#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,a[4][4],d1sum=0;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		cin>>a[i][j];
	}
	for(i=0; i<4; i++)
	{
	for(j=3; j>=0; j--)
	{
	   	if(i+j==3)
         {
				        	d1sum=d1sum+a[i][j]; 
 		}
    }      
		
   } 
	cout<<"sum = "<<d1sum<<endl;
	getch();
	return 0;
}
