
// ****************************    DATA STRUCTURES - How to work with arrays (NOT DYNAMIC ARRAY)    ******************************


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    float montsArray[6];
//
//    float total = 0;
//    for (int i = 0; i < 6; i++) {
//        cout << "Enter money spend for month " << i + 1 << ": ";
//        cin >> montsArray[i];
//        total += montsArray[i];
//    }
//
//    float average = total / 6;
//    float afterTwoYears = average * 12;
//
//    cout << "total: " << total << endl;
//    cout << "average: " << average << endl;
//    cout << "AfterTwoYears: " << afterTwoYears << endl;
//
//    return 0;
//}

// *********************  STL STACK, empty(), push(), pop(), size, top    *************************

//
//#include <iostream>
//#include<stack>
//using namespace std;

//funkciata trqbwa da varne parametri
// recieve a stack of integers and  and call the parametar stack1 
//void printStackElements(stack<int> stack1) {
//    while (!stack1.empty())
//    { 
//        // top vzima posledni element koito e vaveden i go slaga naj otgore i pop sotwetno go trie sled tova
//        cout << stack1.top() << endl;
//        stack1.pop();
//    }
//}

//int main()
//{
//    //create a stack <> - in this brackets we insert what kind of type we store
//    stack<int>numberStack;
//    // adding an element
//    numberStack.push(5);
//    numberStack.push(4);
//    numberStack.push(56);
    // remove element from stack
    //numberStack.pop();
    //numberStack.pop();
    //numberStack.pop();

    //izvikvame funkciqta i i podavame parametar, kojto e sazdaden w nashiq stack
   // printStackElements(numberStack);

    //prawim proverka dali e prazna ili ne
    //if (numberStack.empty()) {
    //    cout << "Stack is empty" << endl;
    //} else {
    //    cout << "Stack is not empty" << endl;
    //}
    //// print size of Stack
    //cout << "Stack size is " << numberStack.size() << endl;

//    return 0;
//}


// *********************    Queue  .front()   .back()    *************************

//
//#include <iostream>
//#include<queue>
//using namespace std;
//
//void printQueue(queue<int> queue) {
//    while (!queue.empty()) {
//        cout << queue.front() << " ";
//        queue.pop();
//    }
//    cout << endl;
//}
//
//int main() {
//
//    queue<int> myQueue;
//    myQueue.push(1);
//    myQueue.push(2);
//    myQueue.push(3);
//
//    cout << "Size is " << myQueue.size() << endl;
//
//    // връща първия елемент от опашката
//    cout << "First element is " << myQueue.front() << endl;
//    // връща последния елемент от опашката
//    cout << "Last element is " << myQueue.back() << endl;
//
//    cout << "My queue: " << endl;
//    printQueue(myQueue);
//
//return 0;
//}
 
// ***********************************************    Arrays of Object    ****************************************

//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    string Name;
//    int Age;
//    char Gender;
//    float ProgrammingGrade;
//
//    //create a constructot
//    Student(string name, int age, char gender, float programmingGrade) {
//        Name = name;
//        Age = age;
//        Gender = gender;
//        ProgrammingGrade = programmingGrade;
//    }
//};
//
//int main()
//{
//    //int luckyNumbers[5] = { 1, 3 ,5 ,13,24 };
//
//    //First  nitialize an array 
//    Student students[3]{
//        {"Sashka", 30, 'f', 9},
//        {"Vanko", 31, 'm', 8},
//    {"Petar", 38, 'm', 6} 
//    };
//
//
//    //Second  nitialize an array  
//    //Student students[3];
//
//    /*for (int i = 0; i < 3; i++) {
//        cout << "Student " << i << endl;
//
//        Student s;
//        cout << "Name: ";
//        cin >> s.Name;
//        cout << "Age: ";
//        cin >> s.Age;
//        cout << "Gender: ";
//        cin >> s.Gender;
//        cout << "ProgramingGrade: ";
//        cin >> s.ProgrammingGrade;
//
//        students[i] = s;
//    }*/
//
//    // access a property of each individual elements
//    //cout << "Programming grade of first student is " << students[0].ProgrammingGrade;
//
//    float sumOfGrades = 0;
//    for (int i = 0; i < 3; i++) {
//        sumOfGrades += students[i].ProgrammingGrade;
//    }
//    cout << "Average is " << sumOfGrades/3;
//
//    
//    return 0;
//}


// ***********************************************    Structures     ****************************************


#include <iostream>
using namespace std;

// тази структура репрезентира blueprints, нямаме данни за атрибутите
struct Smartphone {
    string name;
    int storageSpace;
    string color;
    float price;
};

struct Person {
    string name;
    int age;
    Smartphone smartphone;
};

void printSmartphoneInfo(Smartphone smartphone) {
    cout << "name: " << smartphone.name << endl;
    cout << "storageSpace: " << smartphone.storageSpace << "GB" << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl;
}

void printPersonInfo(Person person) {
    cout << "name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    printSmartphoneInfo(person.smartphone);
}

int main()
{
    // първото е типа Smartphone (пише се с главна), второто е променлива с име smartphone (пише се с малка);
    Smartphone smartphone;
    smartphone.name = "IPhone 13 Pro";
    smartphone.storageSpace = 32;
    smartphone.color = "black";
    smartphone.price = 999.99;

    Smartphone smartphone2;
    smartphone2.name = "Samsung Galaxy";
    smartphone2.storageSpace = 64;
    smartphone2.color = "silber";
    smartphone2.price = 888.88;


    //printSmartphoneInfo(smartphone);
    //printSmartphoneInfo(smartphone2);

    Person p;
    p.name = "Pepi";
    p.age = 39;
    p.smartphone = smartphone2;
    printPersonInfo(p);

    return 0;
}


