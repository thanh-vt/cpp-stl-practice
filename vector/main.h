#ifndef STL_MAIN_H
#define STL_MAIN_H
#include <iostream>
#include <vector>
#include <random>

typedef std::vector<char> char_array;

namespace vector_exercises {
    using namespace std;

    vector<int> initializeVector(int n);

    vector<int> randomIntVector(int n);

    vector<string> randomStringVector(int n);

    template <typename T>
    void printVector(vector<T> &v) {
        cout << "Vector: [";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    void ex1();

    void ex2();

    void ex3();

    void ex4();

    void ex5();

    void ex6();

    void ex7();

    void ex8();

    void ex9();

    void ex10();
}

#endif //STL_MAIN_H
