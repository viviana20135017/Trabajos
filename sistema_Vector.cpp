#include<iostream>
using namespace std;
int menu();
int agregar(int num,int vec[],int &cont,int tam);
int  mostrar(int vec[],int cont);
int borrar(int num,int vec[],int &cont);
int buscar(int num,int vec[],int cont);
int insertar(int num,int pos,int vec[],int &cont);

int main()
{
	int vec[15];
	int opc;
	int cont=0;
	int num;
	
	do
	{
		menu();
		cin>>opc;
		
		system("cls");
		switch(opc)
		{
			case 1:
				
				cout<<"Coloca un numero: ";
				cin>>num;
				agregar(num,vec,cont,15);
			
			break;
			
			case 2:
				
				mostrar(vec,cont);
				
			break;
			
			case 3:
				int b;
				cout<<"Que numero quieres Borrar: ";
				cin>>num;
				borrar(num,vec,cont);
				
			
			break;
			
			case 4:
				
				int a;
				cout<<"Coloca el numero a buscar: ";
				cin>>num;
				a=buscar(num,vec,cont);
				if(num==vec[a])
				{
					cout<<a<<"  "<<vec[a]<<endl;
				}
				else
				{
					cout<<"tu numero no esta";
				}
			break;
			
			case 5:
				int pos;
				cout<<"Que numero quieres poner: ";
				cin>>num;
				cout<<"En que Posicion: ";
				cin>>pos;
				pos-=1;
				insertar(num,pos,vec,cont);
			break;
			
		}
	}while(opc !=0);
	return 0;
}	


int menu()
{
	cout<<"    Menu    "<<endl;
	cout<<"1<-- Agregar"<<endl;
	cout<<"2<-- Mostrar"<<endl;
	cout<<"3<-- Borrar"<<endl;
	cout<<"4<-- Buscar"<<endl;
	cout<<"5<-- Insertar"<<endl;
	cout<<"0<-- Salir"<<endl;
	cout<<"coloca una opcion: ";
}

int agregar(int num,int vec[],int &cont,int tam)
{
	if(cont==tam)
	{
		return 0;
	}
	else
	{
		vec[cont]=num;
		cont++;
		return 1;
	}
	
}

int mostrar(int vec[],int cont)
{

	for(int i=0;i<cont;i++)
		cout<<i<<"  "<<vec[i]<<endl;
}

int borrar(int num,int vec[],int &cont)
{
	int ax;
	int i=buscar(num,vec,cont);
	
		if(i!=-1)
		{
			for(int n=i;n<cont-1;n++)
			{
				vec[n]=vec[n+1];
			}
			cont--;
		}
	
}

int buscar(int num,int vec[],int cont)
{
	for(int i=0;i<cont;i++)
	{
		if(num==vec[i])
		{
			return i;
		}
	}
	return -1;
}

int insertar(int num,int pos,int vec[],int &cont)
{
	cont++;
	
	for(int i=cont;i>pos;i--)
	{
		vec[i]=vec[i-1];
		
	}
	vec[pos]=num;
}
