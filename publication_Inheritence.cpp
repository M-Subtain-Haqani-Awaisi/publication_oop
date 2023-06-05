
#include <iostream>
#include <string>
using namespace std;

class Publication {
    private:
        string title;
        float price;
    public:
        void getdata() {
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter price: ";
            cin >> price;
            cin.ignore(); // Ignore the newline character left in the input stream
        }
        void putdata() {
            cout << "Title: " << title << endl;
            cout << "Price: $" << price << endl;
        }
};

class Book : public Publication {
    private:
        int page_count;
    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter page count: ";
            cin >> page_count;
            cin.ignore(); // Ignore the newline character left in the input stream
        }
        void putdata() {
            Publication::putdata();
            cout << "Page count: " << page_count << endl;
        }
};

class Tape : public Publication {
    private:
        float playing_time;
    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter playing time (in minutes): ";
            cin >> playing_time;
            cin.ignore(); // Ignore the newline character left in the input stream
        }
        void putdata() {
            Publication::putdata();
            cout << "Playing time: " << playing_time << " minutes" << endl;
        }
};

class Publication2 : public Publication {
    private:
        int month, day, year;
    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter publication date (mm dd yyyy): ";
            cin >> month >> day >> year;
            cin.ignore(); // Ignore the newline character left in the input stream
        }
        void putdata() {
            Publication::putdata();
            cout << "Publication date: " << month << "/" << day << "/" << year << endl;
        }
};

class Date {
    private:
        int month, day, year;
    public:
        Date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }
        void display() {
            cout << month << "/" << day << "/" << year << endl;
        }
};

int main() {
    Publication2 pub;
    pub.getdata();
    pub.putdata();

    Book book;
    book.getdata();
    book.putdata();

    Tape tape;
    tape.getdata();
    tape.putdata();

    return 0;
}

