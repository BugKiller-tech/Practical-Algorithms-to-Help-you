#include <iostream>
#include <algorithm>

using namespace std;

class Student {
  public:
    string name;
    int score;

    Student(string name, int score) {
      this->name = name;
      this->score = score;
    }
    bool operator <(Student &student) {
      return this->score < student.score;
    }
};


int main(void) {

  Student students[] = {
    Student("hkg", 90),
    Student("sang", 93),
    Student("a", 82),
    Student("zz", 92),
    Student("d", 98)
  };


  sort(students, students + 5);

  for (int i = 0; i < 5; i++) {
    cout<< students[i].name<<" ";
  }

}