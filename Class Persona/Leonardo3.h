				void Persona::corporal(){
					
					cout<<"\n";
					cout<<"\t\t\t\t         //========================================//"<<endl; 
 	                cout<<"\t\t\t\t         //        Mostrar  Indice Comporal        //"<<endl;
 	                cout<<"\t\t\t\t         //========================================//"<<endl; 	                
 	                cout<<"\n\n";
 	                cout<<"\t\t\tEl peso es : "<<peso<<" y la altura es : "<<altura<<" "<<"\n\n"; 
					 IMC = peso / (altura*altura);
					cout<<"\t\t\tEL IMC es de : "<<IMC<<"\n\n"; 
					if(IMC<18){
						cout<<"\t\t\tTienes un Peso bajo : Te encuentra en Excelente Salud "<<"\n\n";
					}else{
						if(IMC>=18 && IMC<=24.9){
							cout<<"\t\t\tTienes un Peso Normal : Tu Salud es Buena siga asi manteniendo su Salud "<<"\n\n";
					    }else{
						    if(IMC>=25 && IMC<=26.9){
							    cout<<"\t\t\tTienes un Sobrepeso : Tu Salud indica que debe hacer un mejoramiento en su alimentacion y ejercicio"<<"\n\n";
						    }else{
						    	if(IMC>=27 && IMC<=29.9){
						    		cout<<"\t\t\tTienes una Obesidad grado 1 : Tu Salud esta en un rango bajo de riesgo "<<"\n\n";
								}else{
									if(IMC>=30 && IMC<=39.9){
										cout<<"\t\t\tTienes una Obesidad grado 2 : Tu Salud esta en un rango medio de riesgo "<<"\n\n";
									}else{
										if(IMC>=40){
											cout<<"\t\t\tTienes una Obesidad grado 3 : Tu Salud esta en riesgo Muerte "<<"\n\n";
										}	
									}	
								}						    								    		
						    }
					    }
					} 	         	                					                
			    }
