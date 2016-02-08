#include "../src/Dvector.h"

// On teste la construction à partir d'un fichier
int main(int argc, char* argv[]) {
	Dvector V4 = Dvector(3, 1.);
	cout<<" valeur " << V4(1) ;
    return 0;
}
