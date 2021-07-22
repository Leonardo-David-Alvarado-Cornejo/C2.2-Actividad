				void Persona::edad(){
				
					cout<<"\n";
					cout<<"\t\t\t\t         //======================================//"<<endl; 
 	                cout<<"\t\t\t\t         //           La Fecha Nacimiento        //"<<endl;
 	                cout<<"\t\t\t\t         //======================================//"<<endl;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Dia: "<<dn;
 	                cout<<"\n\n";
 	                cout<<"\t\t\t - Mes: "<<mn;
 	                cout<<"\n\n";
 	                cout<<"\t\t\t - Anios: "<<an;
              		cout<<"\n";
					  		
					cout<<"\n";
					cout<<"\t\t\t\t      //============================================//"<<endl; 
 	                cout<<"\t\t\t\t      //           Ingrese la Fecha Actual          //"<<endl;
 	                cout<<"\t\t\t\t      //============================================//"<<endl;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Dia: ";cin>>da;
 	                cout<<"\n";
 	                cout<<"\t\t\t - Mes: ";cin>>ma;
 	                cout<<"\n";
                    cout<<"\t\t\t - Anios: ";cin>>aa;
                    cout<<"\n";

 	                if(da>dn){
 		               d=da-dn;
 	                 }
					 else
					 {
	 	               da=da+31;
 		               ma=ma-1;
 		               d=da-dn;
 	                 }

	                 if(ma>mn){
 		                m=ma-mn;
 	                 }
					else
					{
 		               ma=ma+12;
 		               aa=aa-1;
 		               m=ma-mn;
 	                 }
	                  a=aa-an;
	                  cout<<"\t\t\t\t //======================================================//"<<endl;
	                  cout<<"\t\t\t                  Usted tiene : "<<a<<"  anios "<<m<<" meses y "<<d<< " dias"<<endl;
	                  cout<<"\t\t\t\t //======================================================//"<<endl;
                }  
