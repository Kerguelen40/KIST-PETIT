#include "Client.hpp"
#include <iostream>
#include <string>
using namespace std;

Client::Client()
{

	setNom();
	setPrenom();

}
Client::Client(string n, string p)
{

	_nom = n;
	_prenom = p;

}
Client::~Client()
{

}
void Client::setNom()
{

	cout << "Selectionnez le nom : ";
	cin >> _nom;

}
void Client::setPrenom()
{

	cout << "Selectionnez le prenom : ";
	cin >> _prenom;

}
string Client::getNom()
{
	return _nom;
}
string Client::getPrenom()
{
	return _prenom;
}

