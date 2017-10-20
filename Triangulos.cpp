#include<iostream>
using namespace std;
void menu();
int triangulo1(int a);
int triangulo2(int b);
int triangulo3(int c);
int triangulo4(int d);
int main()
{
	int tam;
	int opc;	
	do
	{
		menu();
		cin>>opc;
		
		switch(opc)
		{
			case 1:
				cout<<"De que tamano lo quieres: ";
				cin>>tam;
				triangulo1(tam);		
			break;
		
			case 2:
				cout<<"De que  tamano lo quieres: ";
				cin>>tam;
				triangulo2(tam);
			break;
		
			case 3:
			cout<<"De que  tamano lo quieres: ";
				cin>>tam;
				triangulo3(tam);
			break;
			
			case 4:
				cout<<"De que tamano lo quieres: ";
				cin>>tam;
				triangulo4(tam);
			break;
		}
	
	}while(opc !=0);
	return 0;
}	

void menu()
{
cout<<" \n   Triangulos    \n";
		cout<<"1---> Triangulo 1 \n";
		cout<<"2---> Triangulo 2 \n";
		cout<<"3---> Triangulo 3 \n";
		cout<<"3---> Triangulo 4 \n";
		cout<<"0---> Salir \n";
		cout<<"Coloca un el numero de la opcion: ";
		
}

int triangulo1(int a)
{
	int x;
	int y=1;
	for(y=1;y<=a;y++)
	{
		cout<<y<<" ";
		for(x=1;x<=y;x++)
		{
		cout<<"*";
		}
		cout<<"\n";
	}
}

int triangulo2(int b)
{
	int x;
	int y=1;
	for(y=1;y<=b;y++)
	{
		cout<<y<<" ";
		for(x=b;x>=y;x--)
		{
		cout<<"*";
		}
		cout<<"\n";
	}
}

int triangulo3(int c)
{
	int x;
	int y=1;
	int sep;
	for(y=1;y<=c;y++)
	{
		cout<<y<<" ";
		for(x=0;x<y;x++)
		{
		cout<<" ";
		}
		for(sep=c;sep>=x;sep--)
		{
			cout<<"*";			
		}
		cout<<"\n";
	}
}

int triangulo4(int d)
{
	int x;
	int y;
	int sep;
	for(y=1;y<=d;y++)
	{
		cout<<y<<" ";
		for(x=y;x<d;x++)
			{
				cout<<" ";
			}
		for(sep=y;sep>0;sep--)
			{
				cout<<"*";
			}
		
		cout<<"\n";
	}
}
