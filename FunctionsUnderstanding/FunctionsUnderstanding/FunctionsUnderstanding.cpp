//     
//       *****************************  What is function parameter/argument (multiple, default)  ***************************************
// 
// 
//#include <iostream>
//using namespace std;
//
//void introduceMe(string name, string city, int age = 0) {
//    // Задаваме на int age дефоутна стоиност.
//    // Интереснот е че ако искаме да зададем на някой от другите параметри дефоутна стойност,
//    // например града НЕ МОЖЕ, трябва задължително първо да зададем на последни параметир в функцията, в случая int age. 
//
//    cout << "My name is " << name << endl;
//    cout << "I am from " << city << endl;
//
//    // правим проверка за годините и ако в случай, че не сме ги подали в функцията, просто не се изписват, а не връщат 0,
//    // в случая с Боянски.
//    if (age != 0)
//    cout << "I am " << age << " years old" << endl;
//}
//
//int main()
//{
//    // Вариант в които стойностите идват от потребителя,
//    // Деклатрираме параметри, които не необходимо да са същите като във функцията, по горе, достатъчно е само това, че са зададени от кой тип са,
//    //string, string, int в функциата извън майн метода
//
//    string name1, city1; 
//    int age1;
//
//    cout << "Name: ";
//    cin >> name1;
//    cout << "City: ";
//    cin >> city1;
//    cout << "Age: ";
//    cin >> age1;
//
//        introduceMe(name1, city1, age1);
//  
//    // Вариант в които задаваме стойности тук
//    /*introduceMe("Petrov", "Pernik", 39);
//    introduceMe("Boqnski", "Karjali");*/
//    
//    return 0;
//    
//}



//     
//       *****************************  Functions return statement, How to check prime number  ***************************************



//#include <iostream>
//using namespace std;
//
//bool isPrimeNumber(int number) {
//	bool isPrime = true;
//	for (int i = 2; i < number; i++) {
//		if (number % i == 0) {
//			isPrime = false;
//			break;
//		}
//	}
//	return isPrime;
//}
//
//int main() {
//
//	int number;
//	cout << "Number: ";
//	cin >> number;
//
//	bool isPrime = isPrimeNumber(number);
//
//	if (isPrime) {
//		cout << "Prime number" << endl;
//	}
//	else {
//		cout << "Not Prime number" << endl;
//	}
//	return 0;
//}



//     
//       *****************************  Functions return all prime numbers between 2 and 100 (with function in for loop)  ***************************************


//#include <iostream>
//using namespace std;
//
//bool isPrimeNumber(int number) {
//	for (int i = 2; i < number; i++) {
//		if (number % i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//
//	for (int i = 2; i < 100; i++) {
//		bool isPrime = isPrimeNumber(i);
//		if (isPrime) {
//			cout << i << " is prime Number" << endl;
//		}
//	}
//	return 0;
//}


//     
//       *****************************  Function overloading ***************************************

// Можем да запишем функции с едно и също име, но с различен тип променливи и компилатора сам избира коя е точнота функция.

//#include <iostream>
//using namespace std;
//
//int sum(int a, int b);
//double sum(double a, double b);
//float sum(float a, float b, float c);
//
//int main() {
//
//	cout << sum(6, 9) << endl;
//	cout << sum(2.3, 4.4) << endl;
//	cout << sum(1.9, 8.7, 11) << endl;
//	//return 0; работи но реших да използвам pause>0;
//	system("pause>0");
//}
//
//int sum(int a, int b) {
//	return a + b;
//}
//
//double sum(double a, double b) {
//	return a + b;
//}
//
//float sum(float a, float b, float c) {
//	return a + b + c;
//}

//     
//       *****************************       How to build an ATM application in C++     ***************************************


//#include <iostream>
//using namespace std;
//
//void showMenu() {
//	cout << "*******************   MEBU **********************" << endl;
//	cout << "1. Check Balance" << endl;
//	cout << "2. Deposit" << endl;
//	cout << "3. Withdraw" << endl;
//	cout << "4. Exit" << endl;
//	cout << "*************************************************" << endl;
//}
//
//int main() {

	// check balance, deposit, withdraw, showMenu
//	int option;
//	double balance = 500;
//
//	do {
//		showMenu();
//		cout << "Option: ";
//		cin >> option;
//		system("cls");
//
//		switch (option) {
//		case 1: cout << "Balance is " << balance << "$" << endl; break;
//		case 2: cout << "Deposit amount: ";
//			double depositAmount;
//			cin >> depositAmount;
//			balance += depositAmount;
//			//cout << balance;
//			break;
//		case 3: cout << "Withdraw amount: ";
//			double withdrawAmount;
//			cin >> withdrawAmount;
//
//			if (withdrawAmount <= balance) {
//				balance -= withdrawAmount;
//				//cout << balance;
//			}
//			else {
//				cout << "Not enough money!" << endl;
//			}
//			break;
//		}
//	} while (option!= 4);
//
//	return 0;
//}



//     
//       *****************************       What is recursion? Learn recursive functions!     ***************************************

//    рекурсията е функция, която се извиква самостоятелно, много важно е да имаш условие, което да спре постоянното извикване.
//    Zadachata e... Sum numbers between m and n

// репение с функция рекурсия

//#include <iostream>
//using namespace std;
//
//int recursive_sum(int m, int n) {
//	if (m == n) 
//		return m;
//		return m + recursive_sum(m + 1, n);
//	
//}
//
//int main() {
//
//	int m;
//	int n;
//	cout << "Enter value for m, but m must to be smaller than n" << endl;
//	cin >> m;
//	cout << "Enter value for n" << endl;
//	cin >> n;
//
//
//	cout << "The sum between m-n is: " << recursive_sum(m, n) << endl;
//	return 0;
//}

//  ----------------------------------------------------------
// 
 ////решение с фор лууп

//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	int m;
//	int n;
//	cout << "Enter value for m, but m must to be smaller than n" << endl;
//	cin >> m;
//	cout << "Enter value for n" << endl;
//	cin >> n;
//	int sum = 0;
//
//	for (int i = m; i <= n; i++) {
//		sum += i;
//	}
//
//	cout << "The sum between m-n is: " << sum << endl;
//	return 0;
//}


//     
//       *****************************      What are generic functions and templates?      ***************************************

//    OObqsnenie  generic functions are the same code, but with diferent datatype


//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//
//	return 0;
//}

//     
//       *****************************      Return multiple values from a function using pointers      ***************************************


//  VARIANT 1  Standarten nachin s dve ednakvi funkcii

//#include <iostream>
//using namespace std;
//
//int getMin(int numbers[],int size) {
//	int min = numbers[0];
//	for (int i = 1; i < size; i++) {
//		if (numbers[i] < min) {
//			min = numbers[i];
//		}
//	}
//	return min;
//}
//
//int getMax(int numbers[], int size) {
//	int max = numbers[0];
//	for (int i = 1; i < size; i++) {
//		if (numbers[i] > max) {
//			max = numbers[i];
//		}
//	}
//	return max;
//}
//
//
//int main() {
//
//	int numbers[5] = {5, 4, -2, 29, 6};
//	cout << "Min Number is: " << getMin(numbers, 5)  << endl;
//	cout << "Max Number is: " << getMax(numbers, 5) << endl;
//
//	return 0;
//}


// ----------------------------              


//  VARIANT 2  Използваме една фукция за двете стойности мин и макс, като задаваме параметри с поинтери(*) и след това в
//             майн метода задаваме рефенции(&) към тях (предаваме адреси).


//#include <iostream>
//using namespace std;
//
//void getMinAndMax(int numbers[],int size, int*min, int*max) { // izpolzwame pointeri za min i max
//	for (int i = 1; i < size; i++) {
//		if (numbers[i] < *min) {
//			*min = numbers[i];
//		}
//		if (numbers[i] > *max) {
//			*max = numbers[i];
//		}
//	}
//}
//
//
//int main() {
//
//	int numbers[5] = { 5, 4, -2, 29, 6 };
//
//	//  когати използваме поинтери в фунцията, променливите мин и маь трябва да бъдат декларирани в майн метода
//	int min = numbers[0];
//	int max = numbers[0];
//	// слагаме рефернция(&) към функцията и предаваме адресите на поинтерите мин и мах от функзията getMinAndMax()
//	getMinAndMax(numbers, 5, &min, &max);
//
//	cout << "Min value is: " << min << endl;
//	cout << "Max value is: " << max << endl;
//
//	return 0;
//}









