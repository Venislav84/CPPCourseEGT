// Find the longest sequence of numbers with map
//
//#include <iostream>
//#include <map>
//#include <set>
//using namespace std;
//
//using namespace std;
////typedef std::multimap<int, double, std::less<int>> Mmid; ot drug proekt
//typedef std::multimap<int, int, std::less<int>> Count;
//
//int main() {
//	map<int, int> counters; // key-value - with number how many times find in sequence
//	int size = 14;
//	int arr[] = { 12,12,4,4,4,8,1,4,4,4,4, 9, 8, 8};
//	std::set<int> mySet;
//	mySet.insert(arr, arr + size);
//	for (int el : mySet) {
//		cout << el << " ";
//		counters[el] = 0;
//	}
//	for (pair<int, int> el :counters) {
//		cout << el.first << " -> " << el.second << endl;
//	}
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		// start count
//		// // is current elemnet is equal to the next element -> count++
//		// if current element is diffrent then next element -> update map key : element and value count
//		
//		int current = arr[i];
//		int nextNumver = arr[i + 1];
//		if (current == nextNumver)
//		{
//			count++;
//		} else{
//			count = 0;
//			continue;
//		}
//		
//		cout << current << "-> " <<count << endl;
//	}
//	
//	return 0;
//}

// Demonstrating Standard Library vector class template.
#include <iostream>
using std::cout;
using std::endl;

#include <vector> // vector class-template definition
using std::vector;

// prototype for function template printVector
template < typename T > void printVector(const vector< T >& integers2);

int main()
{
    const int SIZE = 6; // define array size
    int array[SIZE] = { 1, 2, 3, 4, 5, 6 }; // initialize array
    vector< int > integers; // create vector of ints

    cout << "The initial size of integers is: " << integers.size()
        << "\nThe initial capacity of integers is: " << integers.capacity();

    // function push_back is in every sequence collection
    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);

    cout << "\nThe size of integers is: " << integers.size()
        << "\nThe capacity of integers is: " << integers.capacity();
    cout << "\n\nOutput array using pointer notation: ";

    // display array using pointer notation
    for (int* ptr = array; ptr != array + SIZE; ptr++)
        cout << *ptr << ' ';

    cout << "\nOutput vector using iterator notation: ";
    printVector(integers);
    cout << "\nReversed contents of vector integers: ";

    // two const reverse iterators
    vector< int >::const_reverse_iterator reverseIterator;
    vector< int >::const_reverse_iterator tempIterator = integers.rend();

    // display vector in reverse order using reverse_iterator
    for (reverseIterator = integers.rbegin();
        reverseIterator != tempIterator; ++reverseIterator)
        cout << *reverseIterator << ' ';

    cout << endl;
    return 0;
} // end main

// function template for outputting vector elements
template < typename T > void printVector(const vector< T >& integers2)
{
    typename vector< T >::const_iterator constIterator; // const_iterator

    // display vector elements using const_iterator
    for (constIterator = integers2.begin();
        constIterator != integers2.end(); ++constIterator)
        cout << *constIterator << ' ';
} // end function printVector

////------------------------------------------------------------------------------------------------------------------

//#include <iostream>
//#include <List>
//using namespace std;
//void printList();
//
//
//int main()
//{
//    std::list<int> myList;
//    int number = 1;
//
//    while (number != 0) {
//        cout << "Enter number or 0 for end" << endl;
//        cin >> number ;
//        if (number != 0)
//        {
//            myList.push_back(number);
//        }
//        else
//            break;
//
//    }
//   
//
//    int sum = 0;
//    double avg = 0;
//    size_t listSize = myList.size();
//    for (int i = 0; i < listSize; i++)
//        
//    {
//        sum = sum + myList.front();
//        myList.pop_front();
//    }
//    cout << endl;
//    
//
//    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
//    {
//        cout << "Sum: " << sum << endl;
//    }
//    
//
//    //double avg = sum / i;
//    //cout << "Average: " << avg << endl;
//}


