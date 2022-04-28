/*
Producto maximo de dos numeros en una secuencia

-Dada una secuencia de n numeros no negativos y mayores que cero
-El objetivo es encontrar el mayor numero que se pueda obtener multiplicando dos numeros de esta secuencia
-Usando un bucle for

*/

#include <iostream>
#include <vector>

int main(){
	
	int n;//cantidad de elementos a ingresar
	int mayor = 0;
	int segundo = 0;

	std::cout << "Numero de elementos a ingresar: ";
	std::cin >> n;

	std::vector<int> secuenciaNumeros(n);

	std::cout << "Ingrese los numeros de la secuencia:\n";
	
	for(int i=0; i<n; i++){
		
		
		std::cin >> secuenciaNumeros[i];

		if(secuenciaNumeros[i]>0){
			
				if(secuenciaNumeros[i] > mayor){
			
					segundo = mayor;
					mayor = secuenciaNumeros[i];
				
				}else if(secuenciaNumeros[i] > segundo)	{
					
					segundo = secuenciaNumeros[i];
				}

		}else{
			std::cout << "Numero ingresado no valido, ingrese otro: "<<std::endl;
			std::cin >> secuenciaNumeros[i];
			if(secuenciaNumeros[i] > mayor){
			
					segundo = mayor;
					mayor = secuenciaNumeros[i];
				
				}else if(secuenciaNumeros[i] > segundo)	{
					
					segundo = secuenciaNumeros[i];
				}
		}

	}
	int multiplicacion = mayor * segundo;
	std::cout << "Resultado: " << multiplicacion << std::endl;
	
}