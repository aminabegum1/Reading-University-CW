#include <iostream>
using std::string;

class Student { /*This class acts as a blueprint for the student or class that you choose.
				It stores behaviours and attributes */
private: //encapsulated these properties arent available outside of the class - hidden within the class
	string Name;
	string School;
	int Age;

public: // enables information to be viewed outside of the class (Access Modifiers) 
	void setName(string name) { // setter
		Name = name;
	}
	string getName() { // getter
		return Name;
	}
	void setSchool(string school) {
		School = school;
	}
	string getSchool() {
		return Name;
	}
	void setAge(int age) {
		Age = age;
	}
	int getAge() {
		return Age;
	}

	void StudentInformation() { // Class method which creates a function where the student information can be represented
		std::cout << "Name - " << Name << std::endl;
		std::cout << "School - " << School << std::endl;
		std::cout << "Age - " << Age << std::endl;

	}

	Student(string name, string school, int age) { //Constructor 
		Name = name;
		School = school;
		Age = age;
	};


	int main()
	{
		Student student1 = Student("Sarah", "Little Heath", 16);
		student1.Name = "Sarah";
		student1.School = "Little Heath";
		student1.Age = 16;
		student1.StudentInformation();

		Student student2 = Student("Omar", "West Grove High", 17);
		student2.Name = "Omar";
		student2.School = "West Grove High";
		student2.Age = 17;
		student2.StudentInformation();

		student1.setAge(16);
		std::cout << student1.getName() << "is" << student1.getAge() << "years old" << std::endl;

	}
};