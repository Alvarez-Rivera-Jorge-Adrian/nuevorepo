#include <iostream>
using namespace std;
void proceso();

int main(){
 proceso();
	
}

void proceso(){
	int Entrega,Dia,Mes,Ano,Dia1,Mes1,Ano1;
	system("color 9F");
	
	cout<<"INTRODUCE LA FECHA DE ENTREGA DE LA ACTIVIDAD CON NUMEROS ENTEROS EJEMPLO 1/4/2019 :\n"<<endl;
	
	cout<<"INGRESA DIA:\n"<<endl;
	cin>>Dia;
	if(Dia>=1 && Dia<=30){
		
		cout<<"INGRESA MES:\n"<<endl;
		cin>>Mes;
		if(Mes>=1 && Mes<=12){
			
			cout<<"INGRESA ANIO:\n"<<endl;
			cin>>Ano;
			if(Ano>=2019){
				
				cout<<"!!!AQUI EL ESTUDIANTE ENTREGA SU ACTIVIDAD!!!\n\n"<<endl;
				cout<<"FECHA LIMITE DE ENTREGA: "<<Dia<<"/"<<Mes<<"/"<<Ano<<endl;
				cout<<"\nINGRESA DIA:\n"<<endl;
				cin>>Dia1;
				if(Dia>=1 && Dia<=30){
					
					cout<<"INGRESA MES:\n"<<endl;
					cin>>Mes1;
					if(Mes>=1 && Mes<=12){
						
						cout<<"INGRESA ANIO:\n"<<endl;
						cin>>Ano1;
						if(Ano1>=2019){
							if(Ano1<=Ano){
								if(Mes1<=Mes){
									if(Dia1<=Dia){
										cout<<"ACTIVIDAD ENTREGADA DENTRO DE RANGO\n"<<endl;
									}
								}
							}
							if(Ano1>=Ano){
								if(Mes1>Mes){
									if(Dia1>Dia){
										cout<<"ACTIVIDAD ENTREAGADA MUY TARDE NO TIENE VALOR\n"<<endl;
									}
								}
							}
							if(Ano1==Ano){
								if(Mes1==Mes){
									if(Dia1>Dia && Dia1<=Dia+2){
										cout<<"ACTIVIDAD ENTREGADA CON RETARDO\n"<<endl;
									}
								}
							}
						}else{
							cout<<"ERROR NUMERO FUERA DE RANGO\n"<<endl;
						}
					}else{
						cout<<"ERROR NUMERO FUERA DE RANGO\n"<<endl;
					}
				}else{
					cout<<"ERROR NUMERO FUERA DE RANGO\n"<<endl;
				}
				
			}else{
				cout<<"ERROR NUMERO FUERA DE RANGO\n"<<endl;
			}
		}else{
			cout<<"ERROR NUMERO FUERA DE RANGO\n"<<endl;
		}
	}else{
		cout<<"ERROR NUMERO FUERA DE RANGO\n"<<endl;
	}
	
}
