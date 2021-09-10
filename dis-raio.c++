#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    
    cout<<"Qual o tempo ? \n" ;
    cin >>a;

    b=a*360;
    
    cout <<"Distância de um Raio :"<< b; 
    cout <<"\n"; 
    
    system("pause");
}
