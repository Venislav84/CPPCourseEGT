#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    // overload "==" operator
    bool operator==(const YouTubeChannel& channel) const{
        // we create a aditional attribute in YouTubeChannel call id(identifier) and we can compare with name
        // it si bool, because that the logic of ==(operator)
        // без const ни връща грешка, защото функциата не трябва да сменя параметъра, затова трябва да направим този параметър константа,
        // с второто const казваме че bool operator== е равен на функция константа(правим самата функция константа)
        return this->Name == channel.Name;
    }
};

// creat a overloading fuction with first and second parameter(came from cout << yt1;) with reference we are passing the original
ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    return  COUT;
}

// overload (+, -, <, >...);
struct MyCollection {
    list<YouTubeChannel>myChannels;
    // overloading +=(operator) with function first parameter(MyCollection is automaticly made and we don need in a function), we need only
    // the second (yt1)
    void operator+= (YouTubeChannel& channel) {
        // this replaced MyCollection and push list of channels with name channel
        this->myChannels.push_back(channel);
    }

    void operator-= (YouTubeChannel& channel) {
        // this replaced MyCollection and remove list of channels with name channel
        this->myChannels.remove(channel);
    }
};

ostream& operator << (ostream& COUT, MyCollection& myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}



int main()
{
    YouTubeChannel yt1 = YouTubeChannel("LA Travel", 8106);
    YouTubeChannel yt2 = YouTubeChannel("Schnelle Autos", 9302);
    cout << yt1 << yt2;

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;
    cout << myCollection;

            //cout << myCollection;  Това връща грешка,защото пак като в предния случай компилатора не разпознава операндите и трябва
            // горната функция (ostream& operator <<) да я копираме и пригодим и за  MyCollection

           //cout << yt1 << yt2;    Това връща грешка, защото допълнителната функция е void, а трябва да я направим ostream& и трябва да return COUT
    

          //  *** cout << yt1; //Това връща грешка без допълнителна функция, защото компилатора не знае как да сравнинтези два операнда,
          //  и трябва да се overloadnat ще създадет overload функция(void operator)




    return 0;
}
