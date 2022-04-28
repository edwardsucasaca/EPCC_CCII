//Tabla de multiplicar

#include <iostream>

int main(){

	int multiplicacion;

	for(int i = 1; i <= 12; i++){
		for(int j = 1; j <= 12; j++){
			
			multiplicacion = i*j;
			std::cout << multiplicacion << " ";
			
			if(multiplicacion < 100){
				
				std::cout << " ";
				if(multiplicacion < 10)
					std::cout << " ";
			}
		}
		std::cout << std::endl << std::endl;
	}
}