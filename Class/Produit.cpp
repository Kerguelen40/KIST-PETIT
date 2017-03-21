#include <iostream>
#include <string>
#include "Produit.hpp"

using namespace std;

Produit::Produit()
{
	GetEan();
	GetTitre();
	GetAuteur();
	GetAvaloir();
}

Produit::Produit(int e,std::string t, std::string au,int a)
{

	_ean = e;
	_titre=t;
	_auteur=au;
	_avaloir =a;
	std::cout << "Edition" << std::endl;
}


Produit::~Produit()
{
	std::cout << "Destruction Livre" << std::endl;
}


int Produit::GetEan()
{
	return (this->_ean);
}

void Produit::SetEan()
{
	std::cout << "Code du produit : ";
	std::cin >> this->_ean;
}


std::string Produit::GetTitre()
{
	return (this->_titre);
}

void Produit::SetTitre()
{
	std::cout << "Titre du produit : ";
	std::cin >> this->_titre;
}


std::string Produit::GetAuteur()
{
	return (this->_auteur);
}

void Produit::SetAuteur()
{
	std::cout << "Auteur du produit : ";
	std::cin >> this->_auteur;
}

int Produit::GetAvaloir()
{
	return (this->_avaloir);
}

void Produit::SetAvaloir()
{
	std::cout << "Avaloir d'auteur : ";
	std::cin >> this->_avaloir;
}




bool operator==(Produit const& a,Produit const& b){
  return (a.estEgal(b));
}

bool Produit::estEgal(Produit const& p)const{
  return ((_ean == p._ean) && ( _titre== p._titre)&&(_auteur == p._auteur) && ( _avaloir== p._avaloir));
}
