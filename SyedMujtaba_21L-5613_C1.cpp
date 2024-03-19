#include<iostream>
#include<string>
using namespace std;
class Person {
protected:
	string first_name;
	string last_name;
	int age;
public:
	Person(string fname = " ", string lname = " ", int a = 0) {
		first_name = fname;
		last_name = lname;
		age = a;
	}
	void setfname(string fname) {
		first_name = fname;
	}
	void setlname(string lname) {
		last_name = lname;
	}
	void setAge(int a) {
		age = a;
	}
	string getfname() {
		return first_name;
	}
	string getlname() {
		return last_name;
	}
	int getAge() {
		return age;
	}
	void PrintInformation() {
		cout << first_name << " " << last_name << " is " << age << " years old. " << endl;
	}
	~Person() {}
};
class Student :public Person {
protected:
	float cgpa;
public:
	Student(string fname, string lname, int age, float gpa=0) :Person(fname, lname, age) {
		cgpa = gpa;
	}
	void setGpa(float gpa) {
		cgpa = gpa;
	}
	float getCgpa() {
		return cgpa;
	}
	void PrintInformation() {
		cout << first_name << " " << last_name << " is " << age << " years old , his CGPA is " << cgpa << ". " << endl;
	}
	~Student() {}
};
class Graduate : public Student {
	string thesistopic;
public:
	Graduate(string fname, string lname, int age, float gpa, string thesis) :Student(fname, lname, age, gpa) {
		thesistopic = thesis;
	}
	void setThesis(string thesis) {
		thesistopic = thesis;
	}
	string getThesis() {
		return thesistopic;
	}
	void PrintGraduate() {
		cout << first_name << " " << last_name << " is a graduate student , his cgpa is " << cgpa << " and his Thesis Topic is " << thesistopic << ". " << endl;
	}
	~Graduate() {}
};
class UnderGraduate : public Student {
	string finalProject;
public:
	UnderGraduate(string fname, string lname, int age, float gpa, string Project) :Student(fname, lname, age, gpa) {
		finalProject = Project;
	}
	void setProject(string Project) {
		finalProject = Project;
	}
	string getProject() {
		return finalProject;
	}
	void PrintUnderGraduate() {
		cout << first_name << " " << last_name << " is an undergraduate student , his cgpa is " << cgpa << " and his Final Year Project is titled " << finalProject << ". " << endl;
    }
	~UnderGraduate() {}
};
class Faculty :public Person {
	int NoOfCourses = 0;
	int Extension = 0;
public:
	Faculty(string fname, string lname, int age, int Courses = 0, int ext = 0) :Person(fname, lname, age) {
		NoOfCourses = Courses;
		Extension = ext;
	}
	void setCourses(int Courses) {
		NoOfCourses = Courses;
	}
	int getCourses() {
		return NoOfCourses;
	}
	void setExtension(int ext) {
		Extension = ext;
	}
	int getExtension() {
		return Extension;
	}
	void PrintInformation() {
		cout << "Faculty Member Name : " << first_name << " " << last_name << " , Age : " << age;
		cout << " , Number Of Courses : " << NoOfCourses << " , Extension : " << Extension << ".  " << endl;
	}
	~Faculty() {}
};
int main() {
	Person s("Mujtaba", "Zaidi", 20);
	s.PrintInformation();
	cout << endl;
	Student s1("Babar", "Azam", 22, 3.9);
	s1.PrintInformation();
	cout << endl;
	UnderGraduate u("Ted", "Thompson", 22, 3.91, "The Event Locator");
	u.PrintUnderGraduate();
	cout << endl;
	Graduate g("Arnold", "Gates", 25, 3.01, "Distributed Algorithms");
	g.PrintGraduate();
	cout << endl;
	Faculty f1("Richard", "Karp", 45, 2, 420);
	f1.PrintInformation();
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	return 0;
}