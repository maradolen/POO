#include <string>
using namespace std;

class Personne
{
private:
string nom,prenom,dateNaissance;

public:
Personne(string leNom,string lePrenom, string laDateNaissance);
string getNom() {return this->nom;}
string getPrenom() {return this->prenom;}
string getDateNaissance() {return this->dateNaissance;}
};