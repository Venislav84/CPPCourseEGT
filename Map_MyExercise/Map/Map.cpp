//
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main()
//{ 
//    // map съдържа <ключ от тип стринг, валуе от тип стринг> и го кръщаваме myDictionary, ключовете са уникални
//
//    map<string, string> myDictionary;
//
//    // insert elements in myDictionary
//    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
//    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
//    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
//    myDictionary.insert(pair<string, string>("banana", "die Banane"));
//
//    // застъпване на елемент от мапа и променяне на стойността
//    myDictionary["strawberry"] = "Yagoda";
//    // map syshto ima size
//    cout << myDictionary.size() << endl;
//
//    // clear delete all elements in map collection
//    //myDictionary.clear();
//    // map подрежда резултата във възходящ ред
//    for (auto pair : myDictionary) {
//
//        // pair.first вика ключа, pair.second вика стойността
//        cout << pair.first << " - " << pair.second << endl;
//    }
//
//    return 0;
//}


//  ********************************      Map + List      ******************************************


#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main()
{
    // създаваме map с име pokedox с ключ string и стоиност list<string>
    map<string, list<string>> pokedox;

    // добавяме елемент 
    list<string> pickacuAttacks{ "thinder shok", "tail whip", "quick attack" };
    list<string> charamnderAttacks{ "flame thrower", "scary face" };
    list<string> chikoritaAttacks{ "razor leaf", "poison powder" };

    // добавяме кък мап ключ и валуе
    pokedox.insert(pair<string, list<string>>("Pickachu", pickacuAttacks));
    pokedox.insert(pair<string, list<string>>("Charmander", charamnderAttacks));
    pokedox.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

    // print result
    // с for обикаляме през всички двойки(pair) в (pokedox)
    for (auto pair : pokedox) {
        // първото което принтираме е key
        cout << pair.first << " - ";

        // вторият цикъл обикаля през list of attack и принтира стойностите
        for (auto attack : pair.second) {
            cout << attack << ", ";
        }
        // и с тази команда отиваме на следващия ред на всики покемон
        cout << endl;
    }

    return 0;
}


