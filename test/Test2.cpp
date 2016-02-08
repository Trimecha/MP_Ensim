#include "../src/Dvector.h"

int main() {
    // On construit le vecteur V1=(2,2,2)
    Dvector V1(3,2); 
    std::cout<<"La taille du vecteur V1 est: "<<V1.size()<<"\n";
    std::cout<<"Contenu de V1 aprés initialisation\n";
    V1.display(std::cout);
    // On modifie le vecteur V1 en le remplissant aléatoirement 
    V1.fillRandomly();
    std::cout<<"Contenu de V1 aprés remplissage aléatoire\n";
    V1.display(std::cout);
    std::cout<<"On crée une copie V2 de V1\n";
    // On teste la construction par copie
    Dvector V2(V1);
    std::cout<<"La taille du vecteur V2 est: "<<V2.size()<<"\n";
    std::cout<<"Contenu de V2\n";
    V2.display(std::cout);    
    return 0;
}