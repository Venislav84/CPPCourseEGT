#pragma once


/*1. Syntax Explanation:
 Describe what the folowing line in C++ does: int* ptr = &var;

 Отговор:
 Създаваме поинтер, който съдържа адреса на променливата var, пойнтъра и променливата трябва да бъдат от един и същи тип, в случая int.
 На пойнтъра не можем да присвояваме директно стойност, трябва да създадем променлива, след това да присвоим променливата към пойнтъра,
той ще и запише адреса и след това ще му зададем стойност, която ще бъде записана на този адрес.

Answer:
  We create a pointer that contains the address of the variable var, the pointer and the variable must be of the same type, int in this case.
  We cannot assign a value directly to the pointer, we must create a variable, then assign the variable to the pointer,
it will write its address and then we'll assign it a value that will be written to that address.





2. Concept Clarification:
 Explain the difference between a while loop and a do-while loop in C++.

Отговор:

- Проверка на условието
   While: Първо се проверява условието и след това изразът(ите) се изпълняват.
   Do While: Операторът(ите) се изпълнява поне веднъж, преди условието да бъде проверено.
- Използване на точка и запетая
While: Не се използва точка и запетая в края на цикъла Докато.
Do While: do{...}while(условие); В края на цикъла Do While се използва точка и запетая.
- Изискване за скоба
While: Скобите не са задължителни, ако има само един израз.
Do While: Скобите винаги са задължителни, независимо от броя на изразите.
- Инициализация на променливи
While: Променлива трябва да бъде инициализирана в условието, преди цикълът да бъде изпълнен.
Do While: Променливата може да се инициализира преди или в рамките на цикъла.
- Тип контрол
While: Цикълът е с контролиран вход.
Do While: Цикълът Do While е с контролиран изход.

Answer:

 - Condition Check
  While: The condition is checked first, and then the statement(s) is executed.
  Do While: The statement(s) is executed at least once before the condition is checked.
- Semicolon Usage
	While: while(condition) No semicolon is used at the end of the While loop.
	Do While: do{...}while(condition); A semicolon is used at the end of the Do While loop.
- Bracket Requirement
	While: Brackets are not required if there is only one statement.
	Do While: Brackets are always required, regardless of the number of statements.
- Variable Initialization
	While: A variable must be initialized in the condition before the loop is executed.
	Do While: The variable can be initialized before or within the loop.
- Control Type
	While: The While loop is an entry-controlled loop.
	Do While: The Do While loop is an exit-controlled loop.

	link:  https://testbook.com/key-differences/difference-between-while-and-do-while-loop-in-c-c-plus-plus-java







3. Code Analysis:
	Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.

Отговор:

Цикълът for е команда за контролен поток, която се използва за изпълнение на част от код въз основа на валидността на някои условия.
Това кара кода да се изпълнява многократно.

Answer:

	A for loop is a control flow statement that is used to execute a piece of code based on the validity of some conditions.
	It makes the code execute repeatedly.


	#include <iostream>
	using namespace std;
	int main()
	{
	  for (int i=0;i<5;i++)
	  cout << i <<endl;
	}





	4. Function Usage:
	Write about how function prevent code duplication and give an example of a single C++ function that calculates the square of a number.

	#include <iostream>
	#include <cmath>
	using namespace std;

	int main() {
		int number = 5;
		float square = pow(number, 2);
		cout << "The square of " << number << " is: " << square << endl;
		return 0;
	}




	5.   Memory Management
	Discuss the importance of memory management in C++ and explain the difference between stack and heap memory allocation.

	Отговор:

	Разпределение на стека: Разпределението се извършва върху съседни блокове памет.
	Наричаме го разпределение на стекова памет, защото разпределението се случва в стека за извикване на функция.
	Размерът на паметта, която трябва да бъде разпределена, е известен на компилатора и всеки път, когато се извика функция,
	неговите променливи получават памет, разпределена в стека. И когато извикването на функцията приключи, паметта за променливите се освобождава.
	Всичко това се случва с помощта на някои предварително дефинирани рутинни процедури в компилатора.
	Програмистът не трябва да се тревожи за разпределението на паметта и премахването на променливите на стека.
	Този вид разпределение на паметта е известно още като временно разпределение на паметта, защото веднага щом методът приключи
	неговото изпълнение всички данни, принадлежащи към този метод, се изтриват автоматично от стека.
	Това означава, че всяка стойност, съхранена в схемата на паметта на стека, е достъпна, докато методът не е завършен
	изпълнението му и в момента е в работно състояние.

	Нарича се heap, защото е купчина памет, достъпна за програмистите за разпределяне и деалокиране.
	Всеки път, когато направим обект, той винаги се създава в Heap-space и информацията за препращане към тези обекти
	винаги се съхраняват в стековата памет. Разпределението на паметта на стека не е толкова безопасно, колкото разпределението на
	паметта на стека, тъй като данните се съхраняват
	в това пространство е достъпен или видим за всички нишки.

	Answer:

	Stack Allocation: The allocation happens on contiguous blocks of memory. 
	We call it a stack memory allocation because the allocation happens in the function call stack.
	The size of memory to be allocated is known to the compiler and whenever a function is called,
	its variables get memory allocated on the stack. And whenever the function call is over, the memory for the variables is de-allocated.
	This all happens using some predefined routines in the compiler. 
	A programmer does not have to worry about memory allocation and de-allocation of stack variables.
	This kind of memory allocation is also known as Temporary memory allocation because as soon as the method finishes
	its execution all the data belonging to that method flushes out from the stack automatically. 
	This means any value stored in the stack memory scheme is accessible as long as the method hasn’t completed
	its execution and is currently in a running state.

	Heap Allocation: 
	It is called a heap because it is a pile of memory space available to programmers to allocate and de-allocate. 
	Every time when we made an object it always creates in Heap-space and the referencing information to these objects is
	always stored in Stack-memory. Heap memory allocation isn’t as safe as Stack memory allocation because the data stored
	in this space is accessible or visible to all threads.






	6.  Object-oriented programming
	Explain the concept of encapsulation in C++ and how it is achieved using classes.

	Отговор:

	Значението на капсулирането е да се гарантира, че "чувствителните" данни са скрити от потребителите. 
	За да постигнете това, трябва да декларирате променливите/атрибутите на класа като частни (не могат да бъдат достъпни извън класа).
	Ако искате други да четат или променят стойността на частен член, можете да предоставите публични методи за получаване и задаване.	Answer:

	The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
	To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
	If you want others to read or modify the value of a private member, you can provide public get and set methods.
 





	7.  Error handling
	Discribe how exceptions are used in C++ for error handling, with an example of a try-catch block.

	Отговор:

	Обработката на изключения в C++ се извършва с помощта на ключовите думи try и catch. 
	За да се уловят изключения, част от кода се поставя под проверка. Това става чрез затваряне на тази част от кода в блок try. 
	Когато възникне изключение в блока try, контролът се прехвърля към манипулатора на изключения.

	#include <iostream>
	using namespace std;

	int main() {
	  try {
		int age = 15;
		if (age >= 18) {
		  cout << "Access granted - you are old enough.";
		} else {
		  throw (age);
		}
	  }
	  catch (int myNum) {
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << myNum;
	  }
	  return 0;
	}

	Answer:

	Exception handling in C++ is done using the try and catch keywords. 
	To catch exceptions, a portion of code is placed under inspection. This is done by enclosing this portion of code in a try block. 
	When an exception occurs within the try block, control is transferred to the exception handler.




	8. STL Containers	
	Write about the purpose and use of the std::vector container in C++.

	Отговор:
	Векторният клас на C++ Standard Library е шаблон на клас за контейнери на последователности. 
	Векторът съхранява елементи от даден тип в линейно подреждане и позволява бърз произволен достъп до всеки елемент. 
	Векторът е предпочитаният контейнер за последователност, когато производителността на случаен достъп е от първостепенно значение.

	Answer:

	The C++ Standard Library vector class is a class template for sequence containers. 
	A vector stores elements of a given type in a linear arrangement, and allows fast random access to any element. 
	A vector is the preferred container for a sequence when random-access performance is at a premium.





	9. Pointers and References
	Discuss the difference between pointers and references in C++ and provide scenarios where one might be prefered over the other.

	Отговор:

	- Преназначаване
	Pointers:
	Променливата не може да бъде преназначена в справка.
	References:
	Променливата може да бъде преназначена в указатели.
	- Адрес на паметта
	Pointers:
	Той споделя същия адрес като оригиналната променлива.
	References:
	Указателите имат свой собствен адрес в паметта.
	- Работа
	Pointers:
	Отнася се за друга променлива.
	References:
	Той съхранява адреса на променливата.
	-Нулева стойност
	Pointers:
	Той няма нулева стойност.
	References:
	Може да има присвоена стойност като нула.
	- Аргументи
	Pointers:
	Тази променлива се препраща от метода предаване по стойност.
	References:
	Указателят работи по метода, известен като предаване по референция.

	Answer:

	- Reassignment
	References:
	The variable cannot be reassigned in Reference.
	Pointers:
	The variable can be reassigned in Pointers.
	- Memory Address
	References:
	It shares the same address as the original variable.
	Pointers:
	Pointers have their own memory address.
	- Work
	Pointers:
	It is referring to another variable.
	References:
	It is storing the address of the variable.
	-Null Value
	Pointers:
	It does not have null value.
	References:
	It can have value assigned as null.
	- Arguments
	Pointers:
	This variable is referenced by the method pass by value.
	References:
	The pointer does it work by the method known as pass by reference.





	9. Advanced Features
	Explain the concept of templates in C++ and how they support generic programming. Include a simple example of a template function.

	Отговор:

	Шаблоните са основата за общото програмиране в C++. Като строго типизиран език, C++ 
	изисква всички променливи да имат специфичен тип, или изрично деклариран от програмиста, или изведен от компилатора. 
	Въпреки това много структури от данни и алгоритми изглеждат еднакви, без значение с какъв тип работят.

	Answer:

	Templates are the basis for generic programming in C++. 
	As a strongly-typed language, C++ requires all variables to have a specific type, 
	either explicitly declared by the programmer or deduced by the compiler. 
	However, many data structures and algorithms look the same no matter what type they are operating on.

	#include <iostream>
	using namespace std;

	// One function works for all data types.  This would work
	// even for user defined types if operator '>' is overloaded
	template <typename T> T myMax(T x, T y)
	{
		return (x > y) ? x : y;
	}

	int main()
	{
		cout << myMax<int>(3, 7) << endl; // Call myMax for int
		cout << myMax<double>(3.0, 7.0)
			 << endl; // call myMax for double
		cout << myMax<char>('g', 'e')
			 << endl; // call myMax for char

		return 0;
	}

*/