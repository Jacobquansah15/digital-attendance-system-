#include <iostream>
#include <fstream>
using namespace std;

Class Student {
private:
     string name;
     string indexNumber;
 public:
      void registerstudent () {
          cout << "Enter Student Name: ";
          getline(clin, name);

      }
      string getData(){
         return name + "," + indexNumber;
      }
    };
void saveStudent(string data) {
    ofstream file("students.txt", ios::app);
    file <<data << endl;
    file.close();
}
void viewStudents() {
    ifstream file("students.txt");
    string line;

    cout << "\nRegistered Students:\n";

    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int main() {
    int choice;

    do{
        cout << "\n--- Digital Attendance System ---\n";
        cout << "1. Regiister Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "choose option:";
        cin >> choice;
        cin.ignore();

        if(choice == 1) {
            student s;
            s.registerstudent();
            saveStudent(s.getData());
            cout << "Student saved successfully!\n"
        }
        else if(choice == 2) {
            viewStudents();
        }
    } while(choice != 3);
    
    return 0;

}
    


            