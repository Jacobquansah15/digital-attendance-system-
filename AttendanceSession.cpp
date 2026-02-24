#include "AttendanceSession.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void AttendanceSession::createSession() {
    cout << "Enter Course Code: ";
    getline(cin, courseCode);

    cout << "Enter Date (YYYY_MM_DD): ";
    getline(cin, date);

    cout << "Enter Duration: ";
    getline(cin, duration);

    // create filename
    string filename = "session_" + courseCode + "_" + date + ".txt";
    ofstream file(filename);
    file << "Course: " << courseCode << endl;
    file << "Date: " << date << endl;
    file << "Duration: " << duration << endl;
    file.close();

    cout << "session created successfully!\n";
}    

