#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() { cout << "Document\n"; }
};

class PDF : public Document {
public:
    void exportFile() override { cout << "PDF .pdf\n"; }
};

class Text : public Document {
public:
    void exportFile() override { cout << "Text .txt\n"; }
};

class CSV : public Document {
public:
    void exportFile() override { cout << "CSV .csv\n"; }
};

int main() {
    PDF a; Text b; CSV c;
    Document *p;
    p=&a; p->exportFile();
    p=&b; p->exportFile();
    p=&c; p->exportFile();
}