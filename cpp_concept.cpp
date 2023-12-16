#include <iostream>
#include <memory>  // for smart pointer
#include<thread>   // for threads
#include<unistd.h>
using namespace std;

//copy constructor >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// class base
// {
// public:
// 	int *pointer;
// 	base()
// 	{
// 		pointer=new int;
// 		*pointer=0;
// 	}
// 	base (base const &temp)
// 	{
// 		pointer=new int;
// 		this->pointer=temp.pointer;
// 	}
// 	void set_pointer(int x)
// 	{
// 		*pointer=x;
// 	}
// 	void print()
// 	{
// 		cout<<*(this->pointer)<<endl
// 	}
// };

// int main()
// {
// 	base a;
// 	a.set_pointer(50);
// 	a.print();
// 	base b=a;
// 	b.print();
// }

// intialiser list >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// class car
// {
// public:
// 	string car_name;
// 	int engine;


// 	//intialising through intialiser list
// 	car(string tcar_name,int tcar_engine)
// 	:car_name(tcar_name),engine(tcar_engine)
// 	{

// 	}


// 	// car()
// 	// {
// 	// 	car_name="unknown";
// 	// 	engine=0;
// 	// }
// 	void print()
// 	{
// 		cout<<car_name<<endl<<engine<<endl;
// 	}

// };
// int main()
// {

// 	string* msg= new string[5];
// 	for(int i=0;i<5;i++)
// 	{
// 		cin>>msg[i];
// 	}
// 	for(int i=0;i<5;i++)
// 	{
// 		cout<<msg[i]<<endl;
// 	}
	// cout<<*msg<<endl;
	// long long flo=5;
	// cout<<flo<<endl;
	// cout<<typeid(flo).name()<<endl;
	// cout<<sizeof(flo)<<endl;

	// car c1("buggati",745);
	// c1.print();
	
	// cout<<5+10;
	// return 0;
//}

//int gb_var=10;

//templates >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// template<typename t>
// t add(t a,t b)
// {
// 	t sum=a+b;
// 	cout<<typeid(sum).name()<<endl;
// 	return sum;
// }

// int main()
// {
// 	// cout<<"Mrinal kumar";
// 	// char temp='m';
// 	// string *ptr= (string*) &temp;
// 	// int temp=5;
// 	// double *ptr=
// 	// char *ptr=new char[15];
// 	//cout<<*ptr;

// 	//references>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// 	// int a=10;
// 	// //int& ref=a;
// 	// ref=&a;
// 	// cout<<ref<<endl;
// 	// int a=8;
// 	// double* ptr = (double*) &a;
// 	// *ptr = 100;
// 	// cout<<a<<*ptr<<endl;
// 	// int a=5,b=10;
// 	// int& ref=a;
// 	// ref=b;
// 	// cout<<a<<endl;
// 	// cout<<ref<<endl;
// 	// cout<<b<<endl;

// 	//cout<<(::gb_var)<<endl;


// 	//unique pointer>>>>>>>>>>>>>>>>>>>>>>>>





//Static keyword >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


/*static member is member of class itself not the object. the static var is shared across each object created from that class.
static var will have only one instance across every object.
if we have two static variable with same name in diff files use extern keyword in first var file. that will take the value from second var file on compiling.
static variable dusre file m access krne k liye 'extern' keyword us hota hai.

class start
{
public:
	static int level;        //static var is intialized to 0.
							// static can be intialized in static func
	static void print()		// static func is used to intialize/realise static var only.
	{
		level=10;
		cout<<level<<endl;
	}
	
};

//int start::level=1;

int main()
{

	cout<<start::level<<endl;
	start::print();
	return 0;
}

*/

// enum >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


//user defined data type.
//used to assign names to integral constants

//declaration
// enum months {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

// enum months {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,de};
// // dec shayad decimal k liye use ho rha hai isiliye overloading ka error de rha tha dec us krne p.

// enum State {Working = 1, Failed = 0, Freezed = 0};

// // twister
// enum day {sunday = 1, monday, tuesday = 5,wednesday, thursday = 10, friday, saturday};
// //				1 		2 		5 			6 				10 			11 		12
// // 1 uske bad 2 fir 5 uske bad 6 fir 10 uske k bad 11 fir 12 ; intialisation k baad next number allocate hoga untill koi khud se intialise na kre, fir wahan se counting start hogi.

// int main()
// {
// 	enum months m;
// 	m=mar;
// 	cout<<m<<endl; //output : 2


// 	for(int i=jan;i<=de;i++)
// 	{
// 		cout<<i<<" "; // 0 1 2 3 4 .......10 11
// 	}
// 	//agr 0 se nhi jahiye jan ko 1 se initialise krdo wahan se counting start hoga

// 	cout<<endl;
// 	cout<<Failed<<endl;  //output : 0

// 	for(int i=sunday;i<=saturday;i++) // i=1;i<=12
// 	{
// 		cout<<i<<" "; 				 // 1,2,3,4,5,6,7,8,9,10,11,12
// 	}
// }


//   UNION >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>




//all members share the same memory location.both x and y share the same location. If we change x, we can see the changes being reflected in y.
  
// Declaration of union is same as the structures
// union test {
//     int x, y;
// };
  
// int main()
// {
//     // A union variable t
//     union test t;
  
//     // t.y also gets value 2
//     t.x = 2;
  
//     cout << "After making x = 2:"
//          << endl
//          << "x = " << t.x
//          << ", y = " << t.y
//          << endl;
  
//     // t.x is also updated to 10
//     t.y = 10;
  
//     cout << "After making Y = 10:"
//          << endl
//          << "x = " << t.x
//          << ", y = " << t.y
//          << endl;
  
//     return 0;
// }


// reference >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// int &ref=a;
// now ref will act as a duplicate of a. you can place inplace of a, can modify ref and changes will reflect to a.


// int main()
// {
//     int a = 10;

//     int& ref = a;
  
//     // Value of a is now changed to 20
//     ref = 20;
//     cout << "a = " << a << endl;
  
//     // Value of a is now changed to 30
//     a = 30;
//     cout << "ref = " << ref << endl;
  
//     return 0;
// }





// Implicit and explicit conversion  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// implicit conversion : compiler convert the type implicitly (on its own)
// explicit conversion : jisme hame type khud se define krna hota hai

// class base
// {
// private:
// 	string name;
// 	int age;
// public:
// 	base(string& name)
// 	{
// 		this->name=name;
// 		this->age=-1;
// 	}
// 	base(int age)
// 	{
// 		this->name="NULL";
// 		this->age=age;
// 	}
// 	void print()
// 	{
// 		cout<<this->name<<"'s age is : "<<this->age<<endl;
// 	}
// };

// int main()
// {
// 	base b2 = 22; //implicit conversion, kyu k object integer k equal hone ka sense hi nhi bn rha hai. compiler implicitly convert krega as a constructor is declared with integer as parameter.
// 				  // this will not work if we mark our constructor with explicit  i.e explicit base (int age)
// 	b2.print();



// 	base b3 = base(23);  	// explicit, create an object with para constructor and intialising it to b3
// 	b3.print();

// 	base b4(24);			// strict explicit as we are calling parameterised constructor and intialising the object
// 	b4.print();

// 	base b5 = (base) 25;   // typecasting or explicitly casting into base
// 	b5.print();
	
	
// }








// private destructor   >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// Whenever we want to control the destruction of objects of a class, we make the destructor private.
//For dynamically created objects, it may happen that you pass a pointer to the object to a function and the function deletes the object. If the object is referred after the function call, the reference will become dangling.


// class Test {
// private:
//     ~Test() {}
// };
// int main()
// { 
// 	Test t;  // ERROR : delete krne jb destructure k pas jaega wo private hone k wajah se access nhi kr paega.
// 	Test t1 = new Test; // Run ho jaega. as new se create krne k baad hm logo ko destructur khud se call krna hota hai jo isme nhi kiya hmne. so no error.
// 	Test *t2;   // Run ho jaega as no object is created no object would be destroyed
// 	delete t1; // ERROR : destructure called and wo private hai.
// }

//way to access private destructor friend function

// class Test {
// private:
// 	~Test() {cout<<"destructor called";}
// public:
// 	friend void del(Test*);
// };

// void del(Test *ptr)
// {
// 	delete ptr;
// }

// int main()
// {
// 	Test *t = new Test;
// 	del(t);
// }

// Another way to access private destructor

// class Test {
// private:
// 	~Test() {cout<<"destructor called";}
// public:
// 	void del()
// 	{ 
// 		delete this;
// 	}
// };

// int main()
// {
// 	Test *t = new Test;
// 	t->del();
// }



// Vectors  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// vector is dynamic array. means jb vector ka size overload ya khatam hone lgta hai tb compiler current vector k double size ka memory allocated krta hai heap p aur purane vector ka element copy krke usko delete kr deta hai
// 

// templates >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// template<typename t>
// t addition(t& a,t& b)
// {
//     t sum=a+b;
//     return sum;
// }
// int main()
// {
//     float x=10.23,y=20.44;
//     cout<<addition(x,y); //30.67
    
//     return 0;
// }






// smart pointers >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



//smart pointer are special type of pointer which is dynamically created pointer but we don't have to call delete explicitly to free the memory compiler does it on its own.
//Type :
//unique pointer : it is a scoped pointer. when this scoped pointer object is no longer in scope, then the pointer is deallocated by calling delete automatically.
// you cannot copy unique pointer. we create two unq pointer pointer to same memory. once first pointer get out of scope the other becomes dangling pointer.

// explicit conversion of constructor in unique_pointer

// unique_ptr<base> b (new base()); RIGHT 

// unique_ptr<base> b= new base();  WRONG as the constructor of unique pointer is explicit meaning there will be no implicit conversion in constructor. new return pointer which is implicitly converted to object
// unique_ptr<base> b = make_unique<base> (); ideal way


// class base
// {
// public:
// 	base()
// 	{
// 		cout<<"Constructor"<<endl;
// 	}
// 	~base()
// 	{
// 		cout<<"destructor"<<endl;
// 	}
// 	void print()
// 	{
// 		cout<<"Hello unique pointer"<<endl;
// 	}
// };
// int main()
// {
//
// 	unique_ptr<base> b1(new base());
// 	b1->print();
// 	unique_ptr<base> b2 = b1; // error as b1 is deleted when it goes out of scope leaving b2 as dangling pointer.   copy constructor of unique pointer is set to delete so it can't be copied

//  unique_ptr<base> b1 = make_unique<base>(); // ideal way to call unique pointer
// }






// shared pointer >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// limitation of unique pointer was it can't be copied or it can't share memory with other unique poiner.

//shared pointer removes the limitaion now we can share a ref with two shared ptr and will not call delete constructor of shared ptr.
// it store the reference_count i.e r_c count no. of allocation of shared_ptr when one shared_ptr goes out of scope its reference count decreases by 1. and delete constructor is called when ref count reaches 0.

// class base
// {
// public:
// 	base()
// 	{
// 		cout<<"Constructor"<<endl;
// 	}
// 	~base()
// 	{
// 		cout<<"destructor"<<endl;
// 	}
// 	void print()
// 	{
// 		cout<<"Hello shared pointer"<<endl;
// 	}
// };
// int main()
// {
// 	shared_ptr<base> b1(new base());
// 	b1->print();
//	shared_ptr<base> b1 = make_shared<base>();
// 	shared_ptr<base> b2=b1;

// }




// Abstraction >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// By creating a pure virtual function in base class and its declaration in derived class is way of implementing abstraction
// we cannot create object of abstract class i.e class containing pure virtual function

// class base
// {
//     public:
//     virtual void print()=0;
// };

// class derived : public base
// {
//     public:
//     void print()
//     {
//         cout<<"Hello"<<endl;
//     }
// };
// int main()
// {
//     derived d;
//     d.print();

//     base* b=new derived; // we can have a pointer to a base class instantiated by derived class object
//     //base* b =new base; // ERROR creating object of base
//     b->print();
// }

// Mutable keyword >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// If const is declared after the function, the function couldn't change value inside it. int change() const {}
// using mutable, we tell compiler that value can be changed 
// it means that this variable can be modified even in a const member function of the class


// class base
// {
// public:
// 	// int temp; // ERROR as temp is not specified mutable hence can't be changed in the below const function
// 	mutable int temp;
// 	int change()const 
// 	{
// 		temp=10;
// 		return temp;
// 	}
// };

// int main()
// {
// 	base b1;
// 	b1.change();

// }


// New keyword >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// allocated a memory in heap and return a pointer of that memory created.
// new calls constructor too, other than malloc than is purely used to create dynamic memory.

// int* a=new int;
// int* b= new int[];
// base* b1= new base; //calls constructor too




// delete keyword >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

// deletes the memory assigned by new. compulsory to be called once new is called.
// calls destructor 

// delete a;
// delete[] b;
// delete b1;




// Volatile keyword>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



// by specificing volatile we tell compiler that its value can be changed by external factors the compiler cannot predict or control.
// volatile is used when you need to work with memory-mapped hardware registers, 

// Define a volatile global variable
// volatile int externalValue = 0;

// // Simulate an external interrupt that changes the value
// void simulateExternalInterrupt() {
//     // In a real scenario, this function would be called by hardware
//     // to update the externalValue variable asynchronously.
//     externalValue = 42;
// }

// int main() {
//     cout << "Initial value of externalValue: " << externalValue << std::endl;

//     // Simulate an external interrupt changing the value
//     simulateExternalInterrupt();

//     cout << "Updated value of externalValue: " << externalValue << std::endl;

//     return 0;
// }




// Multithreading >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// it is strategy to use concurrent process at same time.
// using function pointer hm invoke krega function ko jo parallelrly execute hoga. 
// wo function existing process se connect hoga using thread.join().
// infinte loop wala func run hoga unless enter nhi dabaenge (cin.get()) enter dbane k baad result false ho jaega infinte while loop m result false ho jaega fir func execution stop.
// th.join() se wo thread main ya current process se join ho jaega.

// static bool result=true;
// void print()
// {
//     while(result)
//     {
//         cout<<"intializing......."<<endl;
//     }
//     cout<<this_thread::get_id()<<endl;  //get the id of thread. will be diff for below thread id as both are two diff thread/ process.
// }
// int main()
// {
//     thread th  (print);
//   //thread object function pointer
//     cin.get();
//     result=false;
//     th.join(); 		// will join the above thread with current thread
//     cin.get();
//     cout<<"Thanks for using thread : "<<this_thread::get_id()<<endl;
// }



// another example multithreading >>>>>>>>>>>>>>

// void task1()
// {
// 	for(int i=0;i<10;++i)
// 	{
// 		sleep(1);
// 		cout<<"Task "<<i<<endl;
// 	}
// }
// void task2()
// {
// 	for(int i=0;i<10;++i)
// 	{
// 		sleep(1);
// 		cout<<"Task "<<i<<endl;
// 	}
// }

// int main()
// {
// 	thread t1(task1);
// 	thread t2(task2);

// 	t1.join();
// 	t2.join();
// }


// Singleton Design pattern >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// way to create only one instance of a class
// First of all we marked our constructor as private that will stop us to create instance of class
// second we create a instance of class in class it self using static as it can be access without object
// Third we create a function that will return our in class instance when that get function is called

// class singleton
// {
// public:
// 	static singleton& get()		// Third we create a function that will return our in class instance when that get function is called
// 	{
// 		return single;
// 	}

// 	void print()
// 	{
// 		cout<<"singleton is implemented "<<endl;
// 	}
// private:
// 	singleton()					// First of all we marked our constructor as private that will stop us to create instance of class
// 	{

// 	}
// 	static singleton single;	// second we create a instance of class in class it self using static as it can be access without object
// };

// singleton singleton::single;

// int main()
// {
// 	singleton::get().print();
//   ----instance---- --func--
//  you cannot make an instance of the class you can only access the class using only singleton::get() i.e only one instance.
// }



















