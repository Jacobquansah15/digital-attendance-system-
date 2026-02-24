#ifndef ATTENDANCESESSION_H
#define ATTENDANCESESSION_H

#include <string>
using namespace std;

class AttendanceSession {
 private:
    string courseCode;
    string date;
    string startTime;
    string duration;

public:
    void createSession();
};

#endif

