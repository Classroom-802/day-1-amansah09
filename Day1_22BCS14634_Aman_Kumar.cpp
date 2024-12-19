//1. Sum of Natural Numbers up to N
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  int sum = (n*(n+1))/2;

  cout << "Sum of " << n << " Natural Numbers is " << sum;
  return 0;
}

//2. Check if a Number is Prime
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << n << " is Not Prime" << endl;
            return 0;
        }
    }

    cout << n << " is Prime" << endl;
    return 0;
}

//3. Print Odd Numbers up to N
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  for(int i = 1; i <= n; i += 2) {
    cout << i << " ";
  }

  return 0;
}

//4. Sum of Odd Numbers up to N
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  int sum = 0;

  for(int i = 1; i <= n; i += 2) {
    sum += i;
  }
  
  cout << sum;
  return 0;
}

//5. Print Multiplication Table of a Number
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a Number: ";
  cin >> n;

  for(int i = 1; i <= 10; i++) {
    cout << n << "*" << i << "=" << n*i << endl;
  }
  
  return 0;
}

//6. Count Digits in a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int digitCount = 0;

    while (n > 0) {
        n /= 10;
        digitCount++;
    }

    cout << digitCount << endl;
    return 0;
}

//7. Reverse a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int reversedNumber = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }

    cout << reversedNumber << endl;
    return 0;
}

//8. Find the Largest Digit in a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int largestDigit = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        if (lastDigit > largestDigit) {
            largestDigit = lastDigit;
        }
        n /= 10;
    }

    cout << largestDigit << endl;
    return 0;
}

//9. Check if a Number is a Palindrome
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int originalNumber = n;

    int reversedNumber = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

//10. Find the Sum of Digits of a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    cout << sum << endl;
    return 0;
}

//11. Function Overloading for Calculating Area.
#include <iostream>
using namespace std;

double area(double radius) {
    const double pi = 3.14159;
    return pi * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    cout << "Area of circle: " << area(radius) << endl;
    cout << "Area of rectangle: " << area(length, breadth) << endl;
    cout << "Area of triangle: " << area(base, height, true) << endl;

    return 0;
}

//12. Function Overloading with Hierarchical Structure.
#include <iostream>
using namespace std;

int calculateSalary(int stipend) {
    return stipend;
}

int calculateSalary(int baseSalary, int bonuses) {
    return baseSalary + bonuses;
}

int calculateSalary(int baseSalary, int bonuses, int incentives) {
    return baseSalary + bonuses + incentives;
}

int main() {
    int stipend;
    int baseSalaryEmployee, bonusesEmployee;
    int baseSalaryManager, bonusesManager, incentivesManager;

    cout << "Enter stipend for intern: ";
    cin >> stipend;

    cout << "Enter base salary and bonuses for employee: ";
    cin >> baseSalaryEmployee >> bonusesEmployee;

    cout << "Enter base salary, bonuses, and incentives for manager: ";
    cin >> baseSalaryManager >> bonusesManager >> incentivesManager;

    cout << "Intern Salary: " << calculateSalary(stipend) << endl;
    cout << "Employee Salary: " << calculateSalary(baseSalaryEmployee, bonusesEmployee) << endl;
    cout << "Manager Salary: " << calculateSalary(baseSalaryManager, bonusesManager, incentivesManager) << endl;

    return 0;
}

//13. Encapsulation with Employee Details
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float employeeSalary;
public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    int getEmployeeID() {
        return employeeID;
    }

    void setEmployeeName(string name) {
        employeeName = name;
    }

    string getEmployeeName() {
        return employeeName;
    }

    void setEmployeeSalary(float salary) {
        employeeSalary = salary;
    }

    float getEmployeeSalary() {
        return employeeSalary;
    }

    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
    }
};

int main() {
    Employee emp;

    int id;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee Salary: ";
    cin >> salary;

    emp.setEmployeeID(id);
    emp.setEmployeeName(name);
    emp.setEmployeeSalary(salary);

    emp.displayEmployeeDetails();

    return 0;
}

//14. Inheritance with Student and Result Classes.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;

public:
    void setStudentDetails(int r, string n) {
        rollNumber = r;
        name = n;
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    int marks[3];
    int total;
    float percentage;

public:
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        calculateTotalAndPercentage();
    }

    void calculateTotalAndPercentage() {
        total = marks[0] + marks[1] + marks[2];
        percentage = (static_cast<float>(total) / 300) * 100; // Maximum marks = 300
    }

    void displayResultDetails() {
        displayStudentDetails();
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    }
};

int main() {
    Result student;

    int rollNumber, mark1, mark2, mark3;
    string name;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Marks for 3 Subjects: ";
    cin >> mark1 >> mark2 >> mark3;

    student.setStudentDetails(rollNumber, name);
    student.setMarks(mark1, mark2, mark3);

    cout << "\nStudent Details and Results:" << endl;
    student.displayResultDetails();

    return 0;
}

//15. Polymorphism with Shape Area Calculation.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double calculateArea() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        const double PI = 3.14159;
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double calculateArea() const override {
        return length * breadth;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    double radius, length, breadth, base, height;

    cout << "Enter Radius of Circle: ";
    cin >> radius;

    cout << "Enter Length and Breadth of Rectangle: ";
    cin >> length >> breadth;

    cout << "Enter Base and Height of Triangle: ";
    cin >> base >> height;

    Circle circle(radius);
    Rectangle rectangle(length, breadth);
    Triangle triangle(base, height);

    Shape* shape;

    shape = &circle;
    cout << "Circle Area: " << fixed << setprecision(2) << shape->calculateArea() << endl;

    shape = &rectangle;
    cout << "Rectangle Area: " << fixed << setprecision(2) << shape->calculateArea() << endl;

    shape = &triangle;
    cout << "Triangle Area: " << fixed << setprecision(2) << shape->calculateArea() << endl;

    return 0;
}

//16. Implementing Polymorphism for Shape Hierarchies.
#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual void calculateArea() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() const override {
        const double PI = 3.14159;
        cout << "Area of Circle: " << fixed << setprecision(5) << PI * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    void calculateArea() const override {
        cout << "Area of Rectangle: " << fixed << setprecision(2) << length * breadth << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void calculateArea() const override {
        cout << "Area of Triangle: " << fixed << setprecision(2) << 0.5 * base * height << endl;
    }
};

int main() {
    double radius, length, breadth, base, height;

    cout << "Enter Radius of Circle: ";
    cin >> radius;

    cout << "Enter Length and Breadth of Rectangle: ";
    cin >> length >> breadth;

    cout << "Enter Base and Height of Triangle: ";
    cin >> base >> height;

    Shape* circle = new Circle(radius);
    Shape* rectangle = new Rectangle(length, breadth);
    Shape* triangle = new Triangle(base, height);

    circle->calculateArea();
    rectangle->calculateArea();
    triangle->calculateArea();

    delete circle;
    delete rectangle;
    delete triangle;

    return 0;
}

//17. Matrix Multiplication Using Function Overloading
#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

void operate(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();

    if (rows != B.size() || cols != B[0].size()) {
        cout << "Invalid dimensions for operation." << endl;
        return;
    }

    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    printMatrix(result);
}

void operate(const vector<vector<int>>& A, const vector<vector<int>>& B, int) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int rowsB = B.size();
    int colsB = B[0].size();

    if (colsA != rowsB) {
        cout << "Invalid dimensions for operation." << endl;
        return;
    }

    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printMatrix(result);
}

int main() {
    int operation;
    cout << "Enter operation (1 for addition, 2 for multiplication): ";
    cin >> operation;

    int rowsA, colsA, rowsB, colsB;

    cout << "Enter dimensions of Matrix A (rows and columns): ";
    cin >> rowsA >> colsA;
    vector<vector<int>> A(rowsA, vector<int>(colsA));
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter dimensions of Matrix B (rows and columns): ";
    cin >> rowsB >> colsB;
    vector<vector<int>> B(rowsB, vector<int>(colsB));
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> B[i][j];
        }
    }

    if (operation == 1) {
        operate(A, B);
    } else if (operation == 2) {
        operate(A, B, 0);
    } else {
        cout << "Invalid operation." << endl;
    }

    return 0;
}

//18. Polymorphism in Shape Classes
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double length;
    double breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea() const override {
        return length * breadth;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const override {
        return 3.14159 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    int shapeType;
    cout << "Enter Shape Type (1 for Rectangle, 2 for Circle, 3 for Triangle): ";
    cin >> shapeType;

    Shape* shape = nullptr;

    if (shapeType == 1) {
        double length, breadth;
        cout << "Enter Length and Breadth: ";
        cin >> length >> breadth;
        shape = new Rectangle(length, breadth);
    } else if (shapeType == 2) {
        double radius;
        cout << "Enter Radius: ";
        cin >> radius;
        shape = new Circle(radius);
    } else if (shapeType == 3) {
        double base, height;
        cout << "Enter Base and Height: ";
        cin >> base >> height;
        shape = new Triangle(base, height);
    } else {
        cout << "Invalid Shape Type!" << endl;
        return 1;
    }

    if (shape) {
        cout << "The area of the shape is: " << shape->getArea() << endl;
        delete shape;
    }

    return 0;
}

//19. Implement Multiple Inheritance to Simulate a Library System
#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    string title;
    string author;
    int isbn;
public:
    void setBookDetails(const string& t, const string& a, int i) {
        title = t;
        author = a;
        isbn = i;
    }

    void displayBookDetails() const {
        cout << "\"" << title << "\" by " << author << " (ISBN: " << isbn << ")";
    }
};

class Borrower {
protected:
    string name;
    int id;
public:
    void setBorrowerDetails(const string& n, int i) {
        name = n;
        id = i;
    }

    void displayBorrowerDetails() const {
        cout << "Borrower " << name << " (ID: " << id << ")";
    }
};

class Library : public Book, public Borrower {
public:
    void borrowBook() {
        displayBorrowerDetails();
        cout << " has borrowed ";
        displayBookDetails();
        cout << "." << endl;
    }

    void returnBook() {
        displayBorrowerDetails();
        cout << " has returned ";
        displayBookDetails();
        cout << "." << endl;
    }
};

int main() {
    Library library;
    int action;

    string bookTitle, bookAuthor;
    int bookISBN;
    cout << "Enter Book Details:\n";
    cout << "Title: ";
    getline(cin, bookTitle);
    cout << "Author: ";
    getline(cin, bookAuthor);
    cout << "ISBN: ";
    cin >> bookISBN;

    library.setBookDetails(bookTitle, bookAuthor, bookISBN);

    string borrowerName;
    int borrowerID;
    cout << "Enter Borrower Details:\n";
    cout << "Name: ";
    cin.ignore();
    getline(cin, borrowerName);
    cout << "ID: ";
    cin >> borrowerID;

    library.setBorrowerDetails(borrowerName, borrowerID);

    cout << "Enter Action (1 to Borrow, 2 to Return): ";
    cin >> action;

    if (action == 1) {
        library.borrowBook();
    } else if (action == 2) {
        library.returnBook();
    } else {
        cout << "Invalid action type." << endl;
    }

    return 0;
}

//20. Implement Polymorphism for Banking Transactions
#include <iostream>
using namespace std;

class Account {
protected:
    int balance;
public:
    virtual void calculateInterest() = 0;
    virtual ~Account() {}
};

class SavingsAccount : public Account {
    double rate;
    int time;
public:
    SavingsAccount(int bal, double r, int t) {
        balance = bal;
        rate = r / 100.0;
        time = t;
    }

    void calculateInterest() override {
        double interest = balance * rate * time;
        cout << "Savings Account Interest: " << interest << endl;
    }
};

class CurrentAccount : public Account {
    int maintenanceFee;
public:
    CurrentAccount(int bal, int fee) {
        balance = bal;
        maintenanceFee = fee;
    }

    void calculateInterest() override {
        balance -= maintenanceFee;
        cout << "Balance after fee deduction: " << balance << endl;
    }
};

int main() {
    int accountType;
    cout << "Enter Account Type (1 for Savings, 2 for Current): ";
    cin >> accountType;

    if (accountType == 1) {
        int balance, time;
        double rate;
        cout << "Enter Balance: ";
        cin >> balance;
        cout << "Enter Interest Rate (%): ";
        cin >> rate;
        cout << "Enter Time (in years): ";
        cin >> time;

        SavingsAccount savings(balance, rate, time);
        savings.calculateInterest();

    } else if (accountType == 2) {
        int balance, maintenanceFee;
        cout << "Enter Balance: ";
        cin >> balance;
        cout << "Enter Monthly Maintenance Fee: ";
        cin >> maintenanceFee;

        CurrentAccount current(balance, maintenanceFee);
        current.calculateInterest();

    } else {
        cout << "Invalid account type." << endl;
    }

    return 0;
}