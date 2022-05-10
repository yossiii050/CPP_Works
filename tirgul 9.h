#include <iostream>
using namespace std;
#include<typeinfo>



class Person {

protected:

	string Name;

	string id;

	int age;

public:

	Person(string Name, string id, int age) :Name(Name), id(id), age(age) {};

	virtual void print() {

		cout << "Name is: " << Name << endl << "Id is: " << id << endl << "age is :" << age << endl;

	};

	virtual ~Person() {};

};





class Student :public Person {

protected:

	int Numcourse;

public:

	Student(string Name, string id, int age) :Person(Name, id, age), Numcourse(0) {};

	virtual ~Student() override{};

	void print() override {

		Person::print();

		cout << "Number of cuorse :" << Numcourse << endl << "Salary is :" << this->salary() << endl;

	};

	void setCourse(int course) {

		this->Numcourse = course;

	};

	int salary() {

		return Numcourse * 400;

	};

};

class Invest :public Person
{
protected:
	int  nision;
	string special;
	int NumArticle;
public:
	Invest(string Name, string id, int age, int nis, string special) :Person(Name, id, age), nision(nis), special(special), NumArticle(0) {};
	void setArticle(int num) {
		NumArticle = num;
	};
	void print() override {
		Person::print();
		cout <<"nision is :"<<nision<<endl<<"Special is:"<<special<<endl<< "Number of Article :" << NumArticle << endl << "Salary is :" << this->salary() << endl;
	};

	virtual int salary() {
		return (10000 + 100 * nision + 50 * NumArticle);
	};
};

class InbestHelper :public Invest {
public:
	InbestHelper(string Name, string id, int age, int nis, string special) :Invest(Name, id, age,nis,special) {};

	int salary() override {
		return (3500 + 100 * nision);
	};
};

int main()

{

	InbestHelper p("yossi yosupov", "318638566", 24,10,"Nashim");

	p.print();

	//p.setArticle(8);

	//p.print();



	//cout<<"hello world";



	return 0;

}

