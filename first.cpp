#include <pybind11/pybind11.h>
#include <iostream>
using namespace std;

void noparam();
int add(int i, int j) {
    cout << "ini nilai dari i = "<< i << " ini nilai dari j = "<<j << endl;
    return i + j;
}

void name(string name, int u){
    cout << "hello " << name << endl;
    cout << "umur kamu " << u << endl;
    noparam();
}
void noparam(){
    char nama[10];
    cout << "masukin nama = ";
    cin >> nama;
    cout << "Nama kamu adalah = " << nama << endl;
}

PYBIND11_MODULE(testing_cpp, m) {
    m.doc() = "tesing first pybind11 code"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
    m.def("name", &name, "A function to know name and age");
    m.def("noparam", &noparam, "A function to know name and age");
}