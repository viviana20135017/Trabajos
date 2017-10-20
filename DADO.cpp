#include<iostream>
#include<stdlib.h>
using namespace std;
int dado();

int main()
{
	int cara[6];
	for(int n=1;n<=100;n++)
	{
		
		cout<<dado()<<endl;
	}
	
	return 0;
}

int dado()
{
		int n;
		n=rand()%6+1;
		return n;
		
}
