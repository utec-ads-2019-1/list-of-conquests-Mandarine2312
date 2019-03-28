#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
    int num;
    map<string, int> paises;

    string name;

    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        getline(cin, name, ' ');
        cin.ignore(100, '\n');


        if(paises.find(name) == paises.end()){
            paises[name] = 1;
        }else{
            paises[name] = paises[name] + 1;
        }
    }


    for(auto pais : paises){
        cout << pais.first << " " << pais.second << endl;
    }


    return 0;
}