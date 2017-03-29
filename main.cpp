#include"Class/Produit.hpp"
#include"Class/Client.hpp"
#include <iostream>

using namespace std;


void Ventes(){}
void Creation(){}
void AjoutLivre(){}
void AjouterAuteur(){}

int main(int argc, char const *argv[]) {
  int menu;

  do
      {
          cout<<endl<<" ----------------------- MENU -----------------------"<<endl<<endl;
          cout<<"1. Ventes"<<endl;
          cout<<"2. Creation "<<endl;
          cout<<"3. Ajouter livre"<<endl;
          cout<<"4. Ajouteur auteur"<<endl;
          cout<<"0. Quitter"<<endl<<endl;
          cout<<"Choix : ";
          cin>>menu;


          switch(menu)
          {
              case 0 : break;

              case 1 : Ventes();
              break;

              case 2 : Creation();
              break;

              case 3 : AjoutLivre();
              break;

              case 4 : AjouterAuteur();
              break;


          }

      }while (menu!=0);












  return 0;
}
