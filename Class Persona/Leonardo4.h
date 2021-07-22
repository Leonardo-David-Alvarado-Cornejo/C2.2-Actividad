                
                  void Persona::escribir(){
	                ofstream archivo;
	
	                archivo.open("Archivo.txt",ios::out); //Abriendo el archivo
	
	                if(archivo.fail()){
		               cout<<"No se pudo abrir el archivo";
		               exit(1);
	                }
	
	                archivo<<"Cedula : "<<0<<cedula<<"\n";  
	                archivo<<"Nombre : "<<nombre<<"\n";  
					archivo<<"Fecha Nacimiento : "<<dn<<"/"<<mn<<"/"<<an<<"\n";  
					archivo<<"Peso : "<<peso<<"(Kg)"<<"\n";
					archivo<<"Estatura : "<<altura<<"(Mt)"<<"\n"; 
					archivo<<"Edad : "<<a<<"  anios "<<m<<" meses y "<<d<< " dias"<<"\n";
					archivo<<"Indice Masa Corporal : "<<IMC<<"\n";    					       	                
	                archivo.close(); //Cerrar el archivo
                  }	               	    
