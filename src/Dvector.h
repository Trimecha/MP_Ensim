#ifndef DVECTORH
#define DVECTORH

#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <stdlib.h>

/**
 *  \file Dvector.cpp
 *  \brief La classe Dvector
 *  \author SIALA Rafik et TRIMECH Abdellatif
 *  \date 02/02/2016
*/

class Dvector {
	private:
	double * vector;
  	int dim;
        public:
    /**
     *  Construction par defaut
    */
  	Dvector();
    /**
     *  Construction avec un parametre dimension
     *  \param d: Dimension du vecteur 
    */
  	Dvector(int dim);
    /**
     *  Construction avec un parametre dimension et une valeur initiale
     *  \param dim: Dimension du vecteur 
     *  \param vInit: Valeur initiale 
    */
  	Dvector(int dim,double vInit);
    /**
     *  Construction par copie
     *  \param V: Le vecteur à copier
    */
  	Dvector(const Dvector & V);
    /**
     *  Construction à partir d'un fichier 
     *  \param fichier: Le fichier contenant les composantes du vecteur
    */
	Dvector(std::string fichier);
    /**
     *  Destruction
    */
	~Dvector();
    /**
     *  Afficher le contenu du vecteur
     *  \param str: sortie sur laquelle on ecrit le vecteur
    */
  	void display(std::ostream& str);
    /**
     *  Retourner la dimension du vecteur
     *  \return La dimension du vecteur
    */
  	int size();
    /**
     *  Remplir le vecteur aléatoirement par des valeurs dans l'intervalle [0,1]
     *  \return La dimention du vecteur
    */
  	int fillRandomly();
    /**
     *  Remplir le vecteur aléatoirement par des valeurs dans l'intervalle [0,1]
     *  \return La dimention du vecteur
    */
        double &operator()(int d);
};

#endif
