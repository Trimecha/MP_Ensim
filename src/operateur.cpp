
#include "operateur.h"
using namespace std; 

Dvector operator +(const double & r ,const Dvector & v){
        if (v.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else if (r == 0) {
                Dvector vect(v);
                return vect ;
        }
        else {
                Dvector vec = (Dvector)v ; // à verifier pas d'autre solution ..car v = const
                Dvector vect(v.size());
                for (int i=0; i<v.size() ; i++)
                        vect(i) = vec(i) + r ;
                return(vect) ;
        }
}


Dvector operator -(const Dvector  &v ,const double  &r){
        if (v.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else if (r == 0) {
                return v ;
        }
        else {
                Dvector vec = (Dvector)v ;  
                Dvector vect(v.size());
                for (int i=0; i<v.size() ; i++)
                        vect(i) = vec(i) - r ;
                return(vect) ;
        }
}

Dvector operator *(const double  &r ,const Dvector  &v){
        if (v.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else if (r == 1) {
                return v ;
        }
        else {
                Dvector vec = (Dvector)v ; 
                Dvector vect(v.size());
                for (int i=0; i<v.size() ; i++)
                        vect(i) = vec(i) * r ;
                return(vect) ;
        }
}

Dvector operator /(const Dvector  &v ,const double  &r){
        if (r == 0){
                cout << "Erreur : Division par zero \n" ;
                exit(1) ;
        }
        else if (v.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else if (r == 1) {
                return v ;
        }
        else {
                Dvector vec = (Dvector)v ; 
                Dvector vect(v.size());
                for (int i=0; i<v.size() ; i++)
                        vect(i) = vec(i)/r ;
                return(vect) ;
        }
}

Dvector operator +(const Dvector & v1 ,const Dvector & v2){
        if (v1.size() != v2.size()){
                cout << "Erreur : different size \n" ;
                exit(1) ;
        }
        else if (v1.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else {
                Dvector vec1 = (Dvector)v1 ; // à verifier pas d'autre solution ..car v = const
                Dvector vec2 = (Dvector)v2 ;
                Dvector vect(v1.size());
                for (int i=0; i<v1.size() ; i++)
                        vect(i) = vec1(i) + vec2(i) ;
                return(vect) ;
        }
}

Dvector operator -(const Dvector & v1 ,const Dvector & v2){
        if (v1.size() != v2.size()){
                cout << "Erreur : different size \n" ;
                exit(1) ;
        }
        else if (v1.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else {
                Dvector vec1 = (Dvector)v1 ; // à verifier pas d'autre solution ..car v = const
                Dvector vec2 = (Dvector)v2 ;
                Dvector vect(v1.size());
                for (int i=0; i<v1.size() ; i++)
                        vect(i) = vec1(i) - vec2(i) ;
                return(vect) ;
        }
}

Dvector operator -(const Dvector & v){
        if (v.size() == 0){
                Dvector vect(0); 
                return  vect;
        }
        else {
                Dvector vec = (Dvector)v ;
                Dvector vect(v.size());
                for (int i=0; i<v.size() ; i++)
                        vect(i) = -vec(i) ;
                return(vect) ;
        }
}