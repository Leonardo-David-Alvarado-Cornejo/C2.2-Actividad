                 
				 void Persona::lectura(){
	                ifstream archivo;
	                string texto;
	                
	                archivo.open("Archivo.txt",ios::in); //Abriendo el archivo modo lectura
	
	                if(archivo.fail()){
		               cout<<"No se pudo abrir el archivo";
		               exit(1);
	                }
	                
	                while(!archivo.eof()){  //mientras no sea el final del archivo	
	                	getline(archivo,texto);
	                	cout<<texto<<endl;	
									               	                	
	                }	                
	                	archivo.close(); // Cerramos el archivo	                
                 }	    
