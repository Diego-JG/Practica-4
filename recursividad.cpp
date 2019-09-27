#include <iostream>
#include<conio.h>
using namespace std;
int factorial( int dat1)//Se hace la funcion del factorial
{
	if(dat1==0){//El dato 1=0 lo cuales el valor de dat1 es 1
		dat1=1;
	}else{
		dat1=dat1*factorial(dat1-1);//El
	}
	return dat1;
	
}
int valor(int dat1){//Realiza el paso por valor
	dat1=1;
	return dat1;
}

int valore(int &dat1){//Raliza el paso por referencia o el dato de memoria
	dat1+=10;
	return dat1;
}

int main()
{
    int dat1;
    
    
    cout<<"Dame los valores"<<endl;
    cout<<"digite valor 1: "; cin>>dat1;
    int res, res2;
    
    res=valor(dat1);
    ///imprimer dato1,res
    cout<<"Por valor: "<<res<<endl;
    res2=valore(dat1);
    ///imprimir dato1
    cout<<"Por referencia: "<<&res2<<endl;
    
    cout<<"El factorial es:"<<factorial( dat1)<<endl;

   
   	
    getch();
    return(0);
}

