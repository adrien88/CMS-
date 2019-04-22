
/*
    including
*/
#include <iostream>
#include <string>
// #include <cmath>

// namespace
using namespace std;

/*
    core
*/
int main ()
{
    // valeur age
    int annee(0);
    // valeur nom
    string nom("");

    cout << "Coucou les gens. :)" << endl << "Comment vous appelez vous ?" << endl;
    getline(cin, nom);

    cout << "Quelle est votre année de naisance ?" << endl;
    cin >> annee;

    cout << "Vous vous appelez : " << nom << " et avez " << (2019-annee) << " ans." << endl;
    return 0;
}
