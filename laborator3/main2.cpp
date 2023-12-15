#include <iostream>
#include <vector>
#include "Carte.h"
using namespace std;

inline void cautaSiAfiseazaAutor(const vector<Carte>& cartiVector, string autorCautat) {
    bool gasit = false;

    for (const Carte& carte : cartiVector) {
        if (carte.autor == autorCautat) {
            cout << "Autor: " << carte.autor << " | Titlu: " << carte.titlu << " | ID: " << carte.id << " | Pret: " << carte.pret << endl;
            gasit = true;
        }
    }

    if (!gasit) {
        cout << "Nu s-au gasit carti pentru autorul cautat." << endl;
    }
}
int main()
{
    int n;
    cout<<"numarul de instante: ";
    cin>> n;
     vector<Carte> cartiVector;
     for(int i=1;i<=n;i++) {
         cout << "autor: ";
         string autor;
         cout << "titlu: ";
         string titlu;
         cout << "id: ";
         int id;
         cout << "pret: ";
         double pret;

         Carte carti(autor, titlu, id, pret);
         cartiVector.push_back(carti);

         cout<<"numarul de instante este: "<<i;
     }
         string autorCautat;
         cout<<"autorulCautat: ";
         cin>>autorCautat;
         cautaSiAfiseazaAutor(cartiVector,autorCautat);

}