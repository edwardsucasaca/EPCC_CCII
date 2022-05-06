/*
Exercise 2. convertSeconds.cpp

• Write a program that converts a total number of
seconds to hours, minutes, and seconds. • It should (1) prompt the user for input, (2) read an
integer from the keyboard, (3) calculate the result, and
(4) use std::cout to display the output. Enter the number of seconds to convert: 5000
5000 seconds = 1 hours, 23 minutes, and 20 seconds

*/

#include <iostream>

int main(){

	int seconds;
	int hours = 0, minutes = 0;

	std::cout << "Enter the number of seconds to convert: ";
	std::cin >> seconds;

	while(seconds >= 60){
		minutes++;
		seconds -= 60;
		if(minutes >= 60){
			hours++;
			minutes -= 60;
		}
	}

	std::cout << hours << " hours, " << minutes << " minutes, and " << seconds <<" seconds\n";


}