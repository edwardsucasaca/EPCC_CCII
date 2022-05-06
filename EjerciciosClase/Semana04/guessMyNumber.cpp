/*
Exercise 3. guessMyNumber.cpp

• The goal of this exercise is to program a Guess My Number game. When it’s finished, it should work like this:

I'm thinking of a number between 1 and 100 (including both). Can you guess what it is?
Type a number: 45
Your guess is: 45
The number I was thinking of is: 14
You were off by: 31

• To choose a random number, use the random library of C++
<random> https://en.cppreference.com/w/cpp/numeric/random

*/
#include <iostream>
#include <random>
#include <cmath>

int main(){

	int number;
	std::cout << "I'm thinking of a numbe between 1 and 100 (including both).\nCan you guess what it is?\n";
	std::cout << "Type a number: ";
	std::cin >> number;

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1,100);

	int randomNumber = dist(mt);
	int difference = randomNumber - number; 
	std::cout << "Your guess is: " << number << "\n";
	std::cout << "The number I was thinking of is: " << randomNumber << "\n";
	std::cout << "You were off by: " << abs(difference) << "\n";

}