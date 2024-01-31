
//     
//       *****************************      Introduction to C++ pointers      ***************************************

   //         Пойнтера е контейнер, който съхранява адреса

//#include <iostream>
//using namespace std;
//
//
//int main() {
//    int n = 6;
//
//    // & пред n ще ни върне адреса, а не стойността 
//    cout << &n << endl; 
//
//    // създаваме поинтер, който съдържа адреса на променливата n, пойнтъра и променливата трябва да бъдат от един и същи тип, в случая int
//    int* ptr = &n;
//    cout << ptr << endl;
//
//    // ако сложим * пред поинтъра, в този случай ще ни върне стойността
//    cout << *ptr << endl;
//
//    //  ако на пойнтъра му присвиме стойност 10, той ще върне 10
//    *ptr = 10;
//    cout << *ptr << endl;
//
//    // ако сега извикаме променливата n, тя ще върне вече десет, защото поинтера е 10, а той пази в себе си адреса на n.
//    cout << n << endl;
//
//    // на пойнтъра не можем да присвояваме директно стойност, трябва да създадем променлива, след това да променливата към пойнтъра,
//    // той ще и запише адреса и след това ще му зададем стойност, която ще бъде записана на този адрес
//
//    int v;
//    int* ptr2 = &v;
//    *ptr2 = 7;
//    cout << "V = " << v << endl;
//    cout << "ptr = " << *ptr2 << endl;
//}



//     
//       *****************************       What is a void pointer       ***************************************



//#include <iostream>
//using namespace std;
//
//// при void pointer не можеш директно да го реферираш, но той може да приема различни по тип променливи от инт, дабъл, флоат...
//
//void printNumber(int* numberPtr) {
//    cout << *numberPtr << endl;
//}
//
//void printChar(char* charPtr) {
//    cout << *charPtr << endl;
//}
//
//// function that print any data type
//void print(void* ptr, char type) {
//    switch (type)
//    {
//                         // cast vame int kam pointera
//    case 'i': cout << *((int*)ptr) << endl; break;
//    case 'c': cout << *((char*)ptr) << endl; break;
//      
//    }
//}
//
//int main() {
//
//    int number = 5;
//    char letter = 'a';
//
//    //cout << number << endl;
//    
//    /*printNumber(&number);
//    printChar(&letter);*/
//
//    print(&number, 'i');
//    print(&letter, 'c');
//
//    return 0;
// 
//}

   //     
//   *****************************       Return multiple values from a function using pointers       *************************************


//#include <iostream>
//using namespace std;
//
//// funkciq, koqto assinva dwete stojnosti na adresite, a main metoda trqbwa da gi zastapim
//// we receive two pointers int* min, int* max
//void getMinAndMax(int numbers[], int size, int* min, int* max) {
//	for (int i = 1; i < size; i++)
//	{
//		if (numbers[i] > *max) {    // trqbwa s * da zadadem referenciq na max inche ni vrashta greshka
//			*max = numbers[i];
//		}
//		if (numbers[i] < *min) {   
//			*min = numbers[i];
//		}
//	}
//}
//
//int main() {
//
//    int numbers[5] = {5, 4, -2, 29, 6};
//
//	int min = numbers[0];
//	int max = numbers[0];
//
//	getMinAndMax(numbers, 5, &min, &max);
//
//	cout << "Min: " << min << endl;
//	cout << "Max: " << max << endl;
//
//    return 0;
// 
//}



//     
//   *****************************       Dynamic arrays       *************************************

// with dynamic arrays we can create a size of array in real world time

//#include <iostream>
//using namespace std;


//int main() {
//
//	int size;
//	cout << "Size: " << endl;
//	cin >> size;
//	// int arr[size];   връща грешка, защото сайз по принцип трябва да бъде декларирам преди това, с долния метод чрез поинтер,
//	// можем да го променим 
//	int* arr = new int[size]; // new - alocate memory that we ask, korto ozna`awa `e ako tazi pamet ne ni
//	// trqbva poveche trqbwa da q delete
//
//	for (int i = 0; i < size; i++)
//	{
//		 cout << "Array[" << i << "] ";
//		 cin >> arr[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		//cout << arr[i] << " ";   // това е един начин да реферираш аррай, zastapwame elementite ot array na specialna positiq
//		cout << *(arr + i) << " ";  // the name of the array is the address of the first element i tova e vtoriq na4in da referirame array
//	}
//	
//	delete[]arr;
//	arr = NULL;
//
//	return 0;
//
//}

//----------------------------**************** 

//#include <iostream>
//using namespace std;
//
//void myFunction() {
//	// това казва, в моята динамична памет дай ми аррай от интигерс с 5 елемента, ако изпълним функцията ще за губим поинтера
//	int* ptr = new int[5];
//
//
//	ptr[2] = 10;
//	cout << "hi I'am ptr2 " << ptr[2];
//	delete ptr;
//}
//
//int main() {
//
//	myFunction();
//
//	return 0;
//
//}


//  *****************************************************************************************************
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {

	// create a function pointer
	int (*funcPtr)(int, int) = add;

	// two ways to invoke a function
	cout << add(2, 3) << endl;
	cout << funcPtr(3, 4) << endl;

	return 0;

}