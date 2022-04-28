/*
your job is to write a program that reads 
integers from the standard input, sorts them into 
ascending order, and then prints the sorted numbers, 
one per line

un programa que lea números enteros de la entrada estándar,
 los clasifique en orden ascendente y
  luego imprima los números ordenados, uno por línea
*/

#include <iostream>
#include <vector>

int main(){

	int n;//cantidad de elementos a ingresar
	int aux;

	std::cout << "Numero de elementos a ingresar: ";
	std::cin >> n;

	std::vector<int> secuenciaNumeros(n);

	std::cout << "Ingrese los numeros de la secuencia:\n";
	
	for(int i = 0; i < n; i++){
		std::cin >> secuenciaNumeros[i];
	}

	//Ordenar de forma ascendente

	for(int i = 0; i < n; i++){
		
		for(int j = i; j < n; j++){
			
			if(secuenciaNumeros[i] > secuenciaNumeros[j]){
				
				aux = secuenciaNumeros[i];
				secuenciaNumeros[i] = secuenciaNumeros[j];
				secuenciaNumeros[j] = aux;
			}
		}
	}

	//Mostrar ordenados
	std::cout << "Numeros ordenados ascendentemente:\n";
	
	for(int i = 0; i < n; i++){
		std::cout << secuenciaNumeros[i] << std::endl;
	}
}