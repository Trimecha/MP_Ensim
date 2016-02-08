#include "../src/Dvector.h"

// On teste les constructeurs
int main() {
	Dvector V1 = Dvector(); 
  	V1.display(std::cout);

  	Dvector V2 = Dvector(0); 
  	V2.display(std::cout);
  	 
	Dvector V3 = Dvector(3);
  	V3.display(std::cout);

  	Dvector V4 = Dvector(3, 1.);
  	V4.display(std::cout);

  	Dvector V5 = Dvector(0, 1.);
  	V5.display(std::cout);  	
  	return 0;
}