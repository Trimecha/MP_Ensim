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
  	int size() const {return dim;};
    /**
     *  Remplir le vecteur aléatoirement par des valeurs dans l'intervalle [0,1]
     *  \return La dimention du vecteur
    */
  	int fillRandomly();
    /**
     *  Retourne l'element du vecteur d'indice d
     *  \param d: indice de l'element
     *  \return element du vecteur d'indice d
    */
        double &operator()(int d);
};

 /**
     *  Retourne un Dvector dont les elements sont la somme d'un element de v et du reel r 
     *  \param r: element pour la somme
     *  \param v: vecteur à sommer
     *  \return un vecteur de meme dimension que v
    */
        Dvector operator+(double const &r , Dvector const &v);
    /**
     *  Retourne un Dvector dont les elements sont la soustraction d'un element de v et du reel r 
     *  \param r: element pour la soustraction
     *  \param v: vecteur à soustraire
     *  \return un vecteur de meme dimension que v
    */
        Dvector operator-(Dvector const &v , double const &r);   
     /**
     *  Retourne un Dvector dont les elements sont la multiplication d'un element de v et du reel r 
     *  \param r: element pour la multiplication
     *  \param v: vecteur à multiplier
     *  \return un vecteur de meme dimension que v
     */   
        Dvector operator*(double const &r , Dvector const &v);
     /**
     *  Retourne un Dvector dont les elements sont la division d'un element de v sur un reel r 
     *  \param r: element pour la division
     *  \param v: vecteur à diviser
     *  \return un vecteur de meme dimension que v
     */ 
        Dvector operator/(Dvector const &v , double const &r);


#endif
