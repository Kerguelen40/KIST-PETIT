#ifndef CLIENT_HPP
#define CLIENT_HPP


#include <iostream>
#include <string>

class Client
{

	private:

	std::string _nom;
	std::string _prenom;

	public:

	Client();
	Client(std::string n, std::string p);
	~Client();
	void setNom();
	void setPrenom();
	std::string getNom();
	std::string getPrenom();
	void affiche();

	friend std::ostream & operator<<(std::ostream &os, const Client& c){
return (os << "Nom : " << c._nom << " // Prenom : " << c._prenom << std::endl);
	}
};


#endif
