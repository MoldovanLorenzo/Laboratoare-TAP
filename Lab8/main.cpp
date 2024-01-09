#include <iostream>
#include <fstream>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;


int main() {
    /*
    //problema 1
    ifstream inputFile("Fila.txt");
    ofstream outputFile("FilaIesire.txt");
    unordered_set <string> cuvinte;
    string cuvant;
    while(inputFile >> cuvant)
    {
        cuvinte.insert(cuvant);

    }
    inputFile.close();
    for(const auto& cuvant:cuvinte)
    {

        outputFile<<cuvant<<" ";
    }
    outputFile.close();
     */
    //problema 2
    /*
    ifstream inputFile("FilaIntrare2");
    ofstream outputFile("Filaiesire2");

    map<string, unsigned> nrcuvinte;
    string cuvant;
    while (inputFile >> cuvant) {
        ++nrcuvinte[cuvant];
    }
    inputFile.close();
    for (const auto pair: nrcuvinte)
    {
        outputFile<<pair.first<<":"<<pair.second<< endl;
    }
     */
    //problema 3
    ifstream inputFile("FilaIntrare3");
    ofstream outputFile("FilaIesire3");

    map<unsigned ,map<string, unsigned >> nrAparariti;
    while(inputFile >> nrAparariti)
    {

    }
    for(const auto&)
    return 0;
}

