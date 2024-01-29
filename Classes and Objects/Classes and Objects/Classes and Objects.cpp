// ************************************************     Classes and Objects    ************************************************
//

//#include <iostream>
//#include<list>
//using namespace std;
//
//class YouTubeChannel {
//    // ако не направим класа public, след това не можем да го извикаме отдолу в main метода
//public:
//    string Name;
//    string OwnerName;
//    int subscribersCount;
//    list<string> PublishedVideoTitles;
//
//};
//
//int main() {
//    // create an objects
//    YouTubeChannel ytChannel;
//    ytChannel.Name = "La Travel";
//    ytChannel.OwnerName = "Petar Pavel";
//    ytChannel.subscribersCount = 25478;
//    ytChannel.PublishedVideoTitles = { "Miami Beach 2022","Valencia vacation", "Walking in Turkey", "New Yaer in Deutschland" };
//
//    cout << "Name: " << ytChannel.Name << endl;
//    cout << "OwnerName: " << ytChannel.OwnerName << endl;
//    cout << "SubscribersCount: " << ytChannel.subscribersCount << endl;
//
//    // за да изпринтираме list, не може просто да го застъпим (cout << "Published videos: " << ytChannel.PublishedVideoTitles << endl;),
//    //  трява задължително да го обходим с някакъв цикъл, в случая foreach
//
//    for (string videoTitle : ytChannel.PublishedVideoTitles) {
//        cout << "Title: " << videoTitle << endl;
//    }
//
//    YouTubeChannel ytChannel2;
//    ytChannel2.Name = "Muskeln";
//    ytChannel2.OwnerName = "Lüger";
//    ytChannel2.subscribersCount = 14000;
//    ytChannel2.PublishedVideoTitles = { "Bench press","Plan", "Rope jumping", "Triceps exrcises" };
//
//    cout << "Name: " << ytChannel2.Name << endl;
//    cout << "OwnerName: " << ytChannel2.OwnerName << endl;
//    cout << "SubscribersCount: " << ytChannel2.subscribersCount << endl;
//
//
//    for (string videoTitle : ytChannel2.PublishedVideoTitles) {
//        cout << "Title: " << videoTitle << endl;
//
//    }
//    return 0;
//}


//// **************************************     Construktors (the same code for YouTubeChannel)    ******************************************
//
////
//// конструктора има същото име като класа и няма ретурн тайп
//
//#include <iostream>
//#include<list>
//using namespace std;
//
//class YouTubeChannel {
//    // ако не направим класа public, след това не можем да го извикаме отдолу в main метода
//public:
//    string Name;
//    string OwnerName;
//    int subscribersCount;
//    list<string> PublishedVideoTitles;
//
//    // This is the construktor of YouTubeChannel class
//    // create a constructor with two parameters this construktor is invoke every time, I create a n object
//    YouTubeChannel(string name, string ownerName) {
//        Name =  name;
//        OwnerName = ownerName;
//        // задаваме в началото потребителите да са 0
//        subscribersCount = 0;
//    }
//
//    void GetInfo() {
//        cout << "Name: " << Name << endl;
//        cout << "OwnerName: " << OwnerName << endl;
//        cout << "SubscribersCount: " << subscribersCount << endl;
//        // за да изпринтираме list, не може просто да го застъпим (cout << "Published videos: " << ytChannel.PublishedVideoTitles << endl;),
//    //  трява задължително да го обходим с някакъв цикъл, в случая foreach
//
//        for (string videoTitle : PublishedVideoTitles) {
//            cout << "Title: " << videoTitle << endl;
//        }
//    }
//
//};
//
//int main() {
//    // create an objects, и подаваме параметрите от конструктора
//    YouTubeChannel ytChannel("La Travel", "Petar Pavel");
//    ytChannel.PublishedVideoTitles.push_back("Miami Beach 2022");
//    ytChannel.PublishedVideoTitles.push_back("Valencia vacation");
//    ytChannel.PublishedVideoTitles.push_back("Walking in Turkey");
//    ytChannel.PublishedVideoTitles.push_back("New Yaer in Deutschland");
//    YouTubeChannel ytChannel2("Muskeln", "Lüger");
//    ytChannel2.PublishedVideoTitles.push_back("Bench press");
//    ytChannel2.PublishedVideoTitles.push_back("Rope jumping");
//    ytChannel2.PublishedVideoTitles.push_back("Plank");
//    ytChannel2.PublishedVideoTitles.push_back("Triceps exrcises");
//    
//
//    ytChannel.GetInfo();
//    ytChannel2.GetInfo();
//
//    return 0;
//}


//// **************************************     Encapsulation    ******************************************
//
////
//
//
//#include <iostream>
//#include<list>
//using namespace std;
//
//class YouTubeChannel {
//  
//    // са енкапсолирани и можем да ги използваме само в класа, затова правим в класа конструктор и методи
//    //  с които да ги изплозваме в майн метода отдолу
//private:
//    string Name;
//    string OwnerName;
//    int subscribersCount;
//    list<string> PublishedVideoTitles;
//
//public:
//
//    // This is the construktor of YouTubeChannel class
//    // create a constructor with two parameters this construktor is invoke every time, I create a n object
//    YouTubeChannel(string name, string ownerName) {
//        Name = name;
//        OwnerName = ownerName;
//        // задаваме в началото потребителите да са 0
//        subscribersCount = 0;
//    }
//
//    void GetInfo() {
//        cout << "Name: " << Name << endl;
//        cout << "OwnerName: " << OwnerName << endl;
//        cout << "SubscribersCount: " << subscribersCount << endl;
//        // за да изпринтираме list, не може просто да го застъпим (cout << "Published videos: " << ytChannel.PublishedVideoTitles << endl;),
//    //  трява задължително да го обходим с някакъв цикъл, в случая foreach
//
//        for (string videoTitle : PublishedVideoTitles) {
//            cout << "Title: " << videoTitle << endl;
//        }
//    }
//
//    void Subscribe() {
//        subscribersCount++;
//    }
//
//    void Unsubscribe() {
//        if(subscribersCount > 0)
//        subscribersCount--;
//    }
//
//    void PublishVideo(string title) {
//        PublishedVideoTitles.push_back(title);
//    }
//
//};
//
//int main() {
//    // create an objects, и подаваме параметрите от конструктора
//    YouTubeChannel ytChannel("La Travel", "Petar Pavel");
//    ytChannel.PublishVideo("Miami Beach 2022");
//    ytChannel.PublishVideo("Valencia vacation");
//    ytChannel.PublishVideo("Walking in Turkey");
//    ytChannel.PublishVideo("New Yaer in Deutschland");
//
//    
//    ytChannel.Subscribe();
//    ytChannel.Subscribe();
//    ytChannel.Subscribe();
//    ytChannel.Subscribe();
//    ytChannel.Unsubscribe();
//    ytChannel.GetInfo();
//
//    return 0;
//}


// **************************************     Inheritence    ******************************************

//

//
//#include <iostream>
//#include<list>
//using namespace std;
//
//
////  This is Base class
//class YouTubeChannel {
//
//    // са енкапсолирани и можем да ги използваме само в класа, затова правим в класа конструктор и методи
//    //  с които да ги изплозваме в майн метода отдолу
//private:
//    string Name;
//    //string OwnerName; Закоментирам го защото е преместен долу в protected класа
//    int subscribersCount;
//    list<string> PublishedVideoTitles;
//protected:
//    // направим protected: за да можем да го застъпим понадолу в void Practice(), който се намира в друг клас CookingYouTubeChannel
//    string OwnerName;
//
//public:
//
//    // This is the construktor of YouTubeChannel class
//    // create a constructor with two parameters this construktor is invoke every time, I create a n object
//    YouTubeChannel(string name, string ownerName) {
//        Name = name;
//        OwnerName = ownerName;
//        // задаваме в началото потребителите да са 0
//        subscribersCount = 0;
//    }
//
//    void GetInfo() {
//        cout << "Name: " << Name << endl;
//        cout << "OwnerName: " << OwnerName << endl;
//        cout << "SubscribersCount: " << subscribersCount << endl;
//        // за да изпринтираме list, не може просто да го застъпим (cout << "Published videos: " << ytChannel.PublishedVideoTitles << endl;),
//    //  трява задължително да го обходим с някакъв цикъл, в случая foreach
//
//        for (string videoTitle : PublishedVideoTitles) {
//            cout << "Title: " << videoTitle << endl;
//        }
//    }
//
//    void Subscribe() {
//        subscribersCount++;
//    }
//
//    void Unsubscribe() {
//        if (subscribersCount > 0)
//            subscribersCount--;
//    }
//
//    void PublishVideo(string title) {
//        PublishedVideoTitles.push_back(title);
//    }
//
//};
//
//// This is derived class (производен клас)
//// : public означава, че всичко което е публично в YouTubeChannel, класът CookingYouTubeChannel го е наследил
//class CookingYouTubeChannel : public YouTubeChannel {
//    // create a constructor, правиме го публик за да може да бъде достъпен отвън, в майн метода
//    // след като направим конструктор за CookingYouTubeChannel, с : извикваме конструктора на YouTubeChannel
//    //  и подаваме name и ownerName от конструктора на CookingYouTubeChannel 
//public:
//    CookingYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {
//
//    }
//    // създаваме специфичен метод само за този клас CookingYouTubeChannel
//
//    void Practice() {
//        // за да изкараме това съсобщение и за двата класа долу ще добавим ownerName в cout, за да видим кои държи канала
//        // но има проблем ownerName не можем да го застъпим от YouTubeChannel, защото там е private, трябва да го направим protected:
//        cout << OwnerName << "practice, learning, experiment with dishes" << endl;
//    }
//};
//
//int main() {
//
//    CookingYouTubeChannel cookingYtChannel("Srabska skara", "Maistor Miro "); // въвеждаме имена на променливите name i ownerName чрез ytChannel
//    CookingYouTubeChannel cookingYtChannel2("Skembe chorba", "Mustafa "); // въвеждаме втори канал
//    // можем да застъпим всички методи на родителския клас
//    cookingYtChannel.PublishVideo("How to make a Kebapche");
//    cookingYtChannel.PublishVideo("How to make a Kufte");
//    cookingYtChannel.Subscribe();
//    cookingYtChannel.Subscribe();
//    cookingYtChannel.GetInfo();
//    cookingYtChannel.Practice(); // dostypen e samo w CookingYouTubeChannel
//    cookingYtChannel2.Practice(); // в втория канал също можем да достъпим метода Практис(), защото е в родителски клас CookingYouTubeChannel
//
//    return 0;
//}


// **************************************     Polymorphism    ******************************************

//

//
//#include <iostream>
//#include<list>
//using namespace std;
//
//
////  This is Base class
//class YouTubeChannel {
//
//    // са енкапсолирани и можем да ги използваме само в класа, затова правим в класа конструктор и методи
//    //  с които да ги изплозваме в майн метода отдолу
//private:
//    string Name;
//    //string OwnerName; Закоментирам го защото е преместен долу в protected класа
//    int subscribersCount;
//    list<string> PublishedVideoTitles;
//protected:
//    // направим protected: за да можем да го застъпим понадолу в void Practice(), който се намира в друг клас CookingYouTubeChannel
//    string OwnerName;
//     // ще го добавим в публичния конструктор YouTubeChannel отдолу 
//    // и след това ще го извика в Practice метода за да се инкрементира
//    int ContentQuality;
//
//public:
//
//    // This is the construktor of YouTubeChannel class
//    // create a constructor with two parameters this construktor is invoke every time, I create a n object
//    YouTubeChannel(string name, string ownerName) {
//        Name = name;
//        OwnerName = ownerName;
//        // задаваме в началото потребителите да са 0
//        subscribersCount = 0;
//        ContentQuality = 0;
//    }
//
//    void GetInfo() {
//        cout << "Name: " << Name << endl;
//        cout << "OwnerName: " << OwnerName << endl;
//        cout << "SubscribersCount: " << subscribersCount << endl;
//        // за да изпринтираме list, не може просто да го застъпим (cout << "Published videos: " << ytChannel.PublishedVideoTitles << endl;),
//    //  трява задължително да го обходим с някакъв цикъл, в случая foreach
//
//        for (string videoTitle : PublishedVideoTitles) {
//            cout << "Title: " << videoTitle << endl;
//        }
//    }
//
//    void Subscribe() {
//        subscribersCount++;
//    }
//
//    void Unsubscribe() {
//        if (subscribersCount > 0)
//            subscribersCount--;
//    }
//
//    void PublishVideo(string title) {
//        PublishedVideoTitles.push_back(title);
//    }
//
//    void CheckAnalystics() {
//        if (ContentQuality < 5)
//        {
//            cout << Name << " has bad quality Content " << endl;
//        }
//        else {
//            cout << Name << " has great quality Content " << endl;
//        }
//    }
//
//};
//
//// This is derived class (производен клас)
//// : public означава, че всичко което е публично в YouTubeChannel, класът CookingYouTubeChannel го е наследил
//class CookingYouTubeChannel : public YouTubeChannel {
//    // create a constructor, правиме го публик за да може да бъде достъпен отвън, в майн метода
//    // след като направим конструктор за CookingYouTubeChannel, с : извикваме конструктора на YouTubeChannel
//    //  и подаваме name и ownerName от конструктора на CookingYouTubeChannel 
//public:
//    CookingYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {
//
//    }
//    // създаваме специфичен метод само за този клас CookingYouTubeChannel
//
//    void Practice() {
//        // за да изкараме това съсобщение и за двата класа долу ще добавим ownerName в cout, за да видим кои държи канала
//        // но има проблем ownerName не можем да го застъпим от YouTubeChannel, защото там е private, трябва да го направим protected:
//        cout << OwnerName << "practice, learning, experiment with dishes" << endl;
//        ContentQuality++;
//    }
//};
//
//class SingersYouTubeChannel : public YouTubeChannel {
//
//public:
//    SingersYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {
//
//    }
//
//    void Practice() {
//        cout << OwnerName << "learning new songs and how to dance" << endl;
//        ContentQuality++;
//    }
//};
//
//int main() {
//
//    CookingYouTubeChannel cookingYtChannel("Srabska skara", "Maistor Miro "); // въвеждаме имена на променливите name i ownerName чрез ytChannel
//    // created SingersYouTubeChannel
//    SingersYouTubeChannel singersYtChannel("Born to be my baby", "Bon Jovi ");
//
//    cookingYtChannel.Practice();
//    singersYtChannel.Practice();
//    singersYtChannel.Practice();
//    singersYtChannel.Practice();
//    singersYtChannel.Practice();
//    singersYtChannel.Practice();
//
//    // създаваме поинтер * yt1 на базовия клас YouTubeChannel и му assign-ваме адреса на &cookingYtChannel 
//    // поинтъра на базовия клас може да поинтне(Вземе?) променливата на derived klas
//    YouTubeChannel* yt1 = &cookingYtChannel;
//    yt1->CheckAnalystics(); // -> metod, kogato izwikwzme pointer
//
//    // създаваме поинтер * yt2 на базовия клас YouTubeChannel и му assign-ваме адреса на &singersYtChannel 
//    YouTubeChannel* yt2 = &singersYtChannel;
//    yt2->CheckAnalystics();
//
//    return 0;
//}



// **************************************    Virtual Functions, Pure Virtual Functions and Abstract Classes in OOP    ******************************************

//

#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void MakeSound() {
        cout << "Instrument playning.." << endl;
    }
};

class Accordion:public Instrument {
public:
    void MakeSound() {
        cout << "Accordion playning.." << endl;
    }
};

int main() {

    
    Instrument pee;
    pee.MakeSound();
    Instrument* i1 = new Accordion;
    i1->MakeSound();

    return 0;
}


