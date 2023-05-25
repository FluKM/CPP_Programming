/*
Problem Statement: Imagine a publishing company which does marketing for book and audiocassette versions.
Create a class publication that stores the title (a string) and price (type float) of a publication.
From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time
in minutes (type float). Write a program that instantiates the book and tape classes,
allows users to enter data and displays the data members. Catch an exception and replace all the data member values
with zero values.
*/
#include <iostream>
#include <string>
using namespace std;
class Publication {
protected:
    string title;
    float price;

public:
    Publication(const string& title, float price)
        : title(title), price(price) {}
        
    virtual void display() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int page_count;

public:
    Book(const string& title, float price, int page_count)
        : Publication(title, price), page_count(page_count) {}

    void display() const override {
        Publication::display();
        cout << "Page Count: " << page_count << endl;
    }
};

class Tape : public Publication {
private:
    float playing_time;

public:
    Tape(const string& title, float price, float playing_time)
        : Publication(title, price), playing_time(playing_time) {}

    void display() const override {
        Publication::display();
        cout << "Playing Time: " << playing_time << " minutes" << endl;
    }
};

int main() {
    string title;
    float price;
    int page_count;
    float playing_time;

    try {
        cout << "Enter book details:" << endl;
        cout << "Title: ";
        getline(std::cin, title);
        cout << "Price: ";
        cin >> price;
        cout << "Page Count: ";
        cin >> page_count;

        Book book(title, price, page_count);
        cout << endl << "Book Details:" <<endl;
        book.display();

        cin.ignore(); // Ignore the newline character left in the input buffer

       cout << endl << "Enter tape details:" << endl;
        cout << "Title: ";
        getline(cin, title);
        cout << "Price: ";
        cin >> price;
        cout << "Playing Time (minutes): ";
        cin >> playing_time;

        Tape tape(title, price, playing_time);
        cout << endl << "Tape Details:" <<endl;
        tape.display();
    }
    catch (...) {
        cout << endl << "An exception occurred. Replacing all data members with zero values." << endl;
        price = 0;
        page_count = 0;
        playing_time = 0;
    }

    return 0;
}