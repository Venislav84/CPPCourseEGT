#include <iostream>
using namespace std;
#include <algorithm>

class Student
{
public:

    string Name;
    int Age;
    char Gender;
    float ProgrammingGrade;

    Student(string name, int age, char gender, float programmingGrade) {
        Name = name;
        Age = age;
        Gender = gender;
        ProgrammingGrade = programmingGrade;
    }
    
};

// method for sort is this example by grade
// This is like original function but with "const" we say don't change
// хубаво е преминаваме през обектите чрез референция, по този начин метода който създаваш работи върху ориганалния метод, проблема тук е че
// това може да промени обектите, за да го избегнем трябва да ги направим констаоти с const
// иначе без & се работи със стойността(value) и компилатора копира обекта и се работи върху това копие а не върху оригинала
bool compareByGrade(const Student& s1, const Student& s2) {
    // compare in ascending order
    return s1.ProgrammingGrade < s2.ProgrammingGrade;
}
// sort by name
bool compareByName(const Student& s1, const Student& s2) {
    // compare in alphabetical order
    return s1.Name < s2.Name;
}

int main()
{

    Student students[5]{
        {"John", 20, 'm', 9},
        {"Bob", 24, 'm', 8},
        {"Alice", 19, 'f', 9.2},
        {"Eve", 29, 'f', 8.5},
        {"Sashka", 42, 'f', 7.2},
    };

    // Search in Array
    for (int i = 0; i < 5; i++) {
        if (students[i].Name == "Alice") {
            cout << "Alice is found of index: " << i << endl;
            students[i].ProgrammingGrade = 10;
            break;
        }
    }

    // Sort...we have to #include <algorithm> 
    //the first parametar is the name of the array, the second element is the pointer of my last element in the array(students + 5...students is
    // the first pointer + 5 spaces in the memory), the parametar is method that we inmplement upper...that return bool type and receive two objects

    sort(students, students + 5, compareByGrade);
    cout << "Sort by Grade: " << endl;
        for (int i = 0; i < 5; i++)
        {
            
            cout << students[i].Name << endl;
        }

        cout << "******************************************************************" << endl;

        
    sort(students, students + 5, compareByName);
    
    // reverse student after sort, firts parametar is the beginnig of the array, second parametar is the pointer to the end of the array
    // reverse(students, students + 5);

    // max element, firts parametar is the beginnig of the array, second parametar is the pointer to the end of the array, third parametar
    // is custom method to compare object
    Student* maxGradeStudent = max_element(students, students + 5, compareByGrade);
    cout << "Max grade students is: " << maxGradeStudent->Name << endl;

    // min element, firts parametar is the beginnig of the array, second parametar is the pointer to the end of the array, third parametar
    // is custom method to compare object
    Student* minGradeStudent = min_element(students, students + 5, compareByGrade);
    cout << "Min grade students is: " << minGradeStudent->Name << endl;

    cout << "Sort by Name: " << endl;
    for (int i = 0; i < 5; i++)
    {
        
        cout << students[i].Name << endl;
    }
    return 0;
}
