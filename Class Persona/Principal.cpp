#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
#include "Leonardo1.h"
#include "Leonardo2.h"
#include "Leonardo3.h"
#include "Leonardo4.h"
#include "Leonardo5.h"

//Constructor
Persona::Persona(int _cedula,string _nombre,int _an,int _mn,int _dn,float _peso,float _altura,float _IMC){
	cedula = _cedula;
	nombre = _nombre;
	an = _an;
	mn = _mn;
	dn = _dn;
	peso = _peso;
	altura = _altura;   
	IMC = _IMC;
}

int cedula;
string nombre;
int aa,ma,da,an,mn,dn,a,m,d;
float peso;
float altura;
float IMC;

Persona p1 = Persona(cedula,nombre,an,mn,dn,peso,altura,IMC);

//FUCION PRINCIPAL

int main()
{
	int op;
    
	  
	do{

    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\t\t\t\t  //                PROGRAMA: Class Persona            //"<<endl;
    	cout<<"\t\t\t\t  //                                                   //"<<endl;
    	cout<<"\t\t\t\t  //     AUTOR : Leonardo David Alvarado Cornejo       //"<<endl;
    	cout<<"\t\t\t\t  //                                                   //"<<endl;
    	cout<<"\t\t\t\t  //                    VESION: 3.0                    //"<<endl;
    	cout<<"\t\t\t\t  //===================================================//"<<endl;
    	cout<<"\n\n";
	    cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\t\t      //        1) OPCION.- 1 Ingresar y mostrar los datos personales            //"<<endl;
	    cout<<"\t\t      //        2) OPCION.- 2 Obtener Mostrar la edad de la persona              //"<<endl;   
		cout<<"\t\t      //        3) OPCION.- 3 Mostrar el indice comporal                         //"<<endl;
		cout<<"\t\t      //        4) OPCION.- 4 Guardar los datos en un archivo .txt               //"<<endl;
		cout<<"\t\t      //        5) OPCION.- 5 Recuperar los datos desde el archivo .txt          //"<<endl;
		cout<<"\t\t      //        0) Salir                                                         //"<<endl;
		cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\n\n";  
		cout<<" Digite una Opcion: ";    
		cin>>op; 
		
	    switch(op){
		    case 1:
		    // Ingresar y mostrar los datos personales //	
		    system("cls");            		    
			p1.ingresar();	
            p1.mostrar();
		    system("pause");
		    system("cls");     
		    break;
	    
		    case 2:
		    // Obtener Mostrar la edad de la persona //	
		    system("cls");             		    
			p1.edad();	          
		    system("pause");
		    system("cls"); 
		    break;
		
		    case 3:
		    // Mostrar el indice comporal  //	
		    system("cls");
            p1.corporal();
		    system("pause");
		    system("cls"); 
		    break;
		    
		    case 4:
		    // Guardar los datos en un archivo .txt  //	
		    system("cls");				
            p1.escribir();
		    system("pause");
		    system("cls"); 	
		    break;
		
		    case 5:
		    // Recuperar los datos desde el archivo .txt //	
		    system("cls");
            p1.lectura();
		    system("pause");
		    system("cls"); 	
		    break;

            default:
       	    if(op < 0||op >5){
               system("cls");
               cout<<endl<<"Este numero no es valido. . . "<<endl;
               cout<<endl<<"Presione Enter "<<endl;
               cout<<"\n\n";
		       system("pause");
		       system("cls");
		       }					
		}

	        if(op==0){		
	          cout<<"\n\n\tSalimos del Sistema: "<<endl;
	        }	
	
	}while(op!=0);

	return(0);
}
