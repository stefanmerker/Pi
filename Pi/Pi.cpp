#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Pi!\n";
	double summe = 0;
	double summeohne = 0;
	double pi = 0;
	double abstand;
	
	double xpos;
	double ypos;

	for (double delta = 10; delta <= 10000; delta = (delta + 100)) {

		double quadrat = 0;

		for (int y = 0; y < delta; y++) {
			for (int x = 0; x < delta; x++) {
				xpos = x / delta;
				ypos = y / delta;
				
				abstand = (xpos - 0.5)*(xpos - 0.5) + (ypos - 0.5)*(ypos - 0.5);

				//std::cout << abstand << " ";

				summeohne++;

				if (abstand <= 0.25) {
					summe++;
				}
			}

			//std::cout << "\n";
		}

		//std::cout << "Summe: " << summe << "\n";

		pi = (summe / summeohne)*4;

		std::cout << "Iterationen: " << delta << " => pi: " << pi <<"\n";
	}
}
