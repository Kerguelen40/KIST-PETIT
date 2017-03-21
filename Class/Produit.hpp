#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>

class Produit
{
private:

    int _ean;
    std::string _titre;
    std::string _auteur;
    int _avaloir;

public:
    Produit();
    Produit(int e,std::string t, std::string au,int a);
    ~Produit();
    int GetEan();
    void SetEan();
    std::string GetTitre();
    void SetTitre();
    std::string GetAuteur();
    void SetAuteur();
    int GetAvaloir();
    void SetAvaloir();

    friend std::ostream & operator<<(std::ostream & os, const Produit& p){
		return (os << p._ean<<" "<< p._titre<<" "<<p._auteur<<" "<<p._avaloir );}
		bool estEgal(Produit const&)const;

};

#endif
