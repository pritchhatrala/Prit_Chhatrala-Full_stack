#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class definition 
class Lecture {
private:

    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize values of inputs 
    Lecture(string name = "", string subject = "", string course = "", int lectures = 0) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numberOfLectures = lectures;
    }

    // Function for set lecture details
    void setDetails(const string& name, const string& subject, const string& course, int lectures) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numberOfLectures = lectures;
    }

    // Function for display the lecture details
    void displayDetails() const {
        cout << "Lecturer Name    : " << lecturerName << endl;
        cout << "Subject Name     : " << subjectName << endl;
        cout << "Course Name      : " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl;
        cout << "--------------------------------------------" << endl;
    }
};

// Function for display the menu
void displayMenu() {
    cout << "\n========== Lecture Management System ==========" << endl;
    cout << "1. Add Lecture Details" << endl;
    cout << "2. Display All Lectures" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<Lecture> lectures; //vector is used for store lecture object
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            // Adding a lectures detail
            string name, subject, course;
            int numberOfLectures;

            cout << "Enter Lecturer Name: ";
            cin.ignore(); // To clear the input buffer 
            getline(cin, name);
            cout << "Enter Subject Name: ";
            getline(cin, subject);
            cout << "Enter Course Name: ";
            getline(cin, course);
            cout << "Enter Number of Lectures: ";
            cin >> numberOfLectures;

            // Create a new Lecture object and add it in the vector.
            Lecture lecture;
            lecture.setDetails(name, subject, course, numberOfLectures);
            lectures.push_back(lecture);

            cout << "Lecture details added successfully!" << endl;
            break;
        }
        case 2: {
            // Displaying all lectures
            if (lectures.empty()) {
                cout << "No lecture details available!" << endl;
            } else {
                cout << "\n========== Lecture Details ==========\n";
                for (size_t i = 0; i < lectures.size(); ++i) {
                    cout << "Lecture " << i + 1 << ":" << endl;
                    lectures[i].displayDetails();
                }
            }
            break;
        }
        case 3:
            // Exit 
            cout << "Thank You for the joining us and give your time. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter currect number. " << endl;
        }
    } while (choice != 3);

    return 0;
}
