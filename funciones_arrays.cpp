#include <iostream>
int main() {

	int num;
	int lista[3]={0};
	int num_buscar;
	
	std::cout<<"Introduzca 3 numeros:"<<std::endl;
	
	for (int i =0;i<3;i++){
		std::cout<<"Intro num "<<i<<":"<<std::endl;
		std::cin>>num;
		lista[i]=num;
	}

		std::cout<<"Numero a buscar:"<<std::endl;
		std::cin>>num_buscar;
	
	int cont=0;
	for (int k=0;k<3;k++){
		if(num_buscar==lista[k]){
		std::cout<<"El numero esta en la posicion: \n"<<k<<std::endl;
		
		}else{
			
			cont++;
			if (cont==3){
			std::cout<<"El Numero no esta!\n"<<std::endl;
			}
		}
		

	}
	std::cout<<"Lista de numeros:\n"<<std::endl;
		for (int j=0;j<3;j++){

		std::cout<<"POS "<<j<<": "<<lista[j]<<std::endl;
	}
	
	
	
	
	
	
}

