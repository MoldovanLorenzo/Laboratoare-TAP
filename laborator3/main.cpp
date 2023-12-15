#include <iostream>
#include "Punct.h"
#include <vector>
using namespace std;

int main() {
    int n,x,y;

    cout<<"introduceti numarul de puncte";
    cin>> n;
    vector<Punct> vectorPuncte;

    for(int i=1;i<=n;i++)
    {
        cout<<"introduceti cordonatele punctelor";
        cin>>x>>y;
        Punct punct(x,y);
        vectorPuncte.push_back(punct);
    }
    Punct centru = Punct::centruDeGreutate(vectorPuncte);
    cout>>"centrul de greutate este: ";
    centru.afisezaCordonate;
    return 0;
}
