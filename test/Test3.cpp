#include "../src/Dvector.h"
#include "../src/operateur.h"
using namespace std; 
// On teste la construction à partir d'un fichier
int main(int argc, char* argv[]) {
	Dvector V4 = Dvector(3, 15.);
	V4.size() ;
	Dvector V = 5. + V4 ;
	cout<<" valeur test addition (5 + " <<V4(2) << "): " << V(2) << "\n" ;
	Dvector V1 = V - 6 ;
	cout<<" valeur test soustraction (" << V(2) << " - 6) : " << V1(2) << "\n" ;
	Dvector V2 = 10 * V4;
	cout<<" valeur test multiplication (" << V4(2) << " * 10) : " << V2(2) << "\n" ;
	Dvector V3 = V2/15;
	cout<<" valeur test division (" << V2(2) << " / 15) : " << V3(2) << "\n" ;
	/*****************************************/
	Dvector V5 = V1 + V2 ;
	cout<<" valeur test addition vecteur (" << V2(2) << " + " << V1(2) << "): " << V5(2) << "\n" ;
	Dvector V6 = V2 - V1 ;
	cout<<" valeur test soustraction vecteur (" << V2(2) << " - " << V1(2) << "): " << V6(2) << "\n" ;
	Dvector V7 = -V6 ;
	cout<<" valeur test - unitaire vecteur ( -" << V2(2) << " ): " << V7(2) << "\n" ;

    return 0;
}
