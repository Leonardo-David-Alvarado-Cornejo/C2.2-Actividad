//Class Persona

class Persona{
	
	private://Atributos
		int cedula;
		string nombre;
		int aa,ma,da,an,mn,dn,a,m,d;
		float peso;
		float altura;
		float IMC;
			
	public: //Metodos
		Persona(int,string,int,int,int,float,float,float);//Contructor
		void ingresar();
		void mostrar();
		void edad();
		void corporal();
		void escribir();
		void lectura();
    	    				 
};
//Constructor


                 void Persona::ingresar(){
                    cout<<"\t\t\t\t //==============================================//"<<endl; 
                 	cout<<"\t\t\t\t //        1.Ingrese su Cedula           :       //"<<endl;                        	
                 	cout<<"\t\t\t\t //        2.Ingrese su Nombre           :       //"<<endl;
					cout<<"\t\t\t\t //        3.Ingrese su Fecha Nacimineto :       //"<<endl;
					cout<<"\t\t\t\t //        4.Ingrese su Peso (Kg)        :       //"<<endl;
					cout<<"\t\t\t\t //        5.Ingrese su Estatura (Mt)    :       //"<<endl;                  	                 	
                 	cout<<"\t\t\t\t //==============================================//"<<"\n\n";
                 	cout<<"\t\t1 - C.I. : ";cin>>cedula;
                 	cout<<"\n";
                 	cout<<"\t\t2 - Nombre : ";cin>>nombre;
                 	cout<<"\n";
                 	cout<<"\t\t3 - Dia: ";cin>>dn;
                 	cout<<"\t\t  - Mes: ";cin>>mn;
                 	cout<<"\t\t  - Anios: ";cin>>an;                
                 	cout<<"\n"; 
                 	cout<<"\t\t4 - Peso (Kg) : ";cin>>peso;
                 	cout<<"\n";				
                 	cout<<"\t\t5 - Estatura (Mt) : ";cin>>altura;
                 	cout<<"\n";								 	 	                 	
                 }   

void Persona::mostrar(){
	                
    system("cls");

    cout<<"\n\n"; 
    cout<<"\t\t\t\t\t //========================================//"<<endl; 
	cout<<"\t\t\t\t\t      1.Cedula             :  "<<0<<cedula<<"\n";         
    cout<<"\t\t\t\t\t      2.Nombre             :  "<<nombre<<"\n";    
	cout<<"\t\t\t\t\t      3.Fecha Nacimiento   :  "<<dn<<"/"<<mn<<"/"<<an<<"\n"; 
	cout<<"\t\t\t\t\t      4.Peso               :  "<<peso<<"(Kg)"<<"\n";          
	cout<<"\t\t\t\t\t      5.Estatura           :  "<<altura<<"(Mt)"<<"\n"; 
    cout<<"\t\t\t\t\t //========================================//"<<endl;
    cout<<"\n";    	

}
