#include "Dvector.h"

using namespace std; 

/**
 *  \file Dvector.cpp
 *  \brief La classe Dvector
 *  \author SIALA Rafik et TRIMECH Abdellatif
 *  \date 02/02/2016
 */

Dvector::Dvector(){
        cout<<"Construction par défaut d'un vecteur\n";  
        dim=0;
        vector=new double[dim];   
}

Dvector::Dvector(int d)
{
        dim=d; 
        if (dim != 0){
                vector=new double[dim];
                cout<<"Construction d'un vecteur sans initialisation\n";
        }
        else{
                vector = NULL ;
                cout<<"Construction d'un vecteur vide\n";
        }
}

Dvector::Dvector(int d,double v)
{	
        dim=d;
        if (dim != 0) {
                vector=new double[dim];
                cout<<"Construction d'un vecteur avec initialisation\n";  
        }
        else {
                vector = NULL ;
                cout<<"Construction d'un vecteur vide\n";
        }
        for (int i=0;i<dim;i++)
                vector[i]=v;
}

Dvector::Dvector(const Dvector & V) 
{
        dim=V.dim;
        vector=new double[dim];
        for(int i=0;i<dim;i++)
                vector[i]=V.vector[i];
        cout<<"Construction d'un vecteur par recopie\n";       
}

Dvector::Dvector(std::string fichier){
        ifstream file((char*)fichier.c_str(), ios::in);  
        if(file.is_open())  {       
                string ligne;  // Déclaration d'une chaîne qui contiendra la ligne lue
                int index=0;  // Déclaration d'un entier qui contiendra l'indice courant dans le vecteur    

                //  On compte le nombre de lignes du fichier 
                while (getline(file, ligne)) 
                        index++;
                dim=index;

                //  Allocation du vecteur
                vector=new double[dim]; 
    
                // Fermeture et reouverture du fichier. 
                file.close();
                ifstream file((char*)fichier.c_str(), ios::in);  

                //  On construit le vecteur en parcourant le fichier
                index=0;  // Reinitialisation de l'indice courant dans le vecteur
                while (getline(file, ligne)) { 
                        vector[index]= strtod((char*)ligne.c_str(),NULL);
                        index++;
                }
                file.close();  
                cout<<"Construction d'un vecteur à partir d'un fichier\n";  
        }
        else  {
                cerr << "Impossible d'ouvrir le fichier !" << endl << "Construction d'un vecteur de taille nulle\n";
                dim=0;
                vector=new double[dim]; // Car le destructeur va être appellé automatiquement à la fin
        }    
}

Dvector::~Dvector() {
        cout<<"Destruction d'un vecteur\n";
        if (vector != NULL)
                delete[] vector; 
}

void Dvector::display(std::ostream& str)
{	
        if (dim==0)
                cout<<"Le vecteur est vide\n";
        for (int i=0;i<dim;i++)
                str<<vector[i]<<"\n";
}

int Dvector::size() { return dim; }

int Dvector::fillRandomly()
{
        srand(time(NULL));
        for (int i=0;i<dim;i++)
                vector[i]=rand();
        return 0;
}

double &Dvector::operator()(int d) {
        if ((d >= 0) && (d <= size()-1)){
                return vector[d] ;
        }
        else{
                cout<<"element indisponible \n " ;
                exit(1) ;
        }
}

Dvector &Dvector::operator +(double r , Dvector v){
        if (v.dim == 0){
                return NULL ;
        }
        else if (r == 0) {
                return v ;
        }
        else {
                Dvector vect = new double[v.dim];
                for (int i=0; i<v.dim ; i++)
                        vect.vector[i] = v.vector[i] + r ;
                return(vect) ;
        }
}

Dvector &Dvector::operator -(double r , Dvector v){
        if (v.dim == 0){
                return NULL ;
        }
        else if (r == 0) {
                return v ;
        }
        else {
                Dvector vect = new double[v.dim];
                for (int i=0; i<v.dim ; i++)
                        vect.vector[i] = v.vector[i] - r ;
                return(vect) ;
        }
}

Dvector &Dvector::operator *(double r , Dvector v){
        if (v.dim == 0){
                return NULL ;
        }
        else if (r == 1) {
                return v ;
        }
        else {
                Dvector vect = new double[v.dim];
                for (int i=0; i<v.dim ; i++)
                        vect.vector[i] = v.vector[i] * r ;
                return(vect) ;
        }
}

Dvector &Dvector::operator /(double r , Dvector v){
        if (r == 0){
                cout << "Erreur : Division par zero \n" ;
                exit(1) ;
        }
        else if (v.dim == 0){
                return NULL ;
        }
        else if (r == 1) {
                return v ;
        }
        else {
                Dvector vect = new double[v.dim];
                for (int i=0; i<v.dim ; i++)
                        vect.vector[i] = v.vector[i]/r ;
                return(vect) ;
        }
}
