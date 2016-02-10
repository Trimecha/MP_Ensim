#ifndef OPERATEURH
#include "Dvector.h"

#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <stdlib.h>


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
    /**
     *  Retourne un Dvector dont les elements sont la somme d'un element de v1 et d'un element de v2 
     *  \param v1: premier vecteur à sommer
     *  \param v2: deuxiemme vecteur à sommer
     *  \return un vecteur de meme dimension que v1
    */
        Dvector operator+(Dvector const &v1 , Dvector const &v2);
    /**
     *  Retourne un Dvector dont les elements sont la soustraction d'un element de v1 et d'un element de v2 
     *  \param v1: premier vecteur à sommer
     *  \param v2: deuxiemme vecteur à sommer
     *  \return un vecteur de meme dimension que v1
    */
        Dvector operator-(Dvector const &v1 , Dvector const &v2);
    /**
     *  Retourne un Dvector dont les elements sont de signe inverse des elements de v 
     *  \param v: Dvecteur
     *  \return un vecteur de meme dimension que v
    */
        Dvector operator-(Dvector const &v);

#endif