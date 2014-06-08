#include <iostream>
#include <cmath>

int main(){
	int count = 0;
	int total = 0;

	//Brute force method
	for (int i=3; i < 1000; i++){
		if (i%3 == 0 || i%5 == 0){
			count++;
			total += i;
		}

	}
	std::cout << "Found " << count << " numbers, and\n";
	std::cout << "they sum to " << total << ".\n";
	return 0;
}