//   ******************************  STL vector  ******************************************************
//
//  Vector ви предоставя всички предимства на динамичния масив с по-малко работа и грешки
//  Векторните елементи се съхраняват в непрекъсната памет (за разлика от някои други колекции, напр. свързан списък)
//  Vector има способността да се преоразмерява автоматично, когато даден елемент бъде вмъкнат или изтрит
//  STL вектор ви предоставя много различни функционалности, които се използват за работа с векторни колекции

#include <iostream>
#include<vector>
using namespace std;


int main()
{
    //създаваме вектор от тип int с име numbers
    vector<int> numbers;
    // добавяме му стойност в случая 0
    // push_back() добавя елемент в края
    numbers.push_back(7911118);

    // правим един фор цикъл, който добавя стойностите за i в вектора

    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(i);
    }

    //  foreach метод, който връща всяка една от стойностите на вектора, които са присвоени в фор цикъла (в случая от едно до 10)
    for(int number : numbers)
    cout << number << endl;

    // iterators показват специална локация в вектора например begining and end 
    // auto означава, моля те провери какъв тип връща тази част и автоматично я добави към it iterartora 
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        //cout << it << endl;   // връща грешка, защото не може да се принтира итератора самостоятелно
        // следващите три опции принтират
        // стойността на елемента
         cout << *it << endl;
        // адреса на итератора
         cout << &it << endl;
        // адреса на елемента
         cout << &(*it) << endl;
    }

    // size() връща размера на вектора
    cout << "Size is: " << numbers.size() << endl;
  
    // max_size() връща максималния размер на вектора
    cout << "Max size is: " << numbers.max_size() << endl;

    // capacity() връща капацитета на вектора
    cout << "Capacity: " << numbers.capacity() << endl;

    // empty() показва дали вектора е празен
    if (numbers.empty())
    {
        cout << "Vector is empty" << endl;
    }
    else {
        cout << "Vector is not empty" << endl;
    }

    // Класическия начин за застъпване на елемент по индекс
    cout << "Element[0] is: " << numbers[0] << endl;
    // Прави съшото като горното само че използва at() функцията
    cout << "Element at(0) is: " << numbers.at(0) << endl;

    // Показва първия елемент
    cout << "Front element: " << numbers.front() << endl;
    // Показва последния елемент
    cout << "Back element: " << numbers.back() << endl;

    //insert element at specific position in vector
    numbers.insert(numbers.begin() + 2, 88);

    //erase element from a specific position
    //numbers.erase(numbers.begin() + 2);

    //remove last element of vector
    numbers.pop_back();

    // print element from vector
    for (auto n : numbers)
    cout << n << endl;

    // resize() променя размера на вектора ще зададем 5, което означава че сега вектора вместо 11(какъвто е размерът до момента)
    // ще стане вектор с 5 елемента;
    numbers.resize(5);
    cout << "After resizing new size is: " << numbers.size() << endl;

    // Трие всички елемети на вектора
    numbers.clear();
    cout << "Size after cleaning is : " << numbers.size() << endl;
}

