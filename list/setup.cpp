#include <iostream>
#include <list>
#include <random>
#include <vector>

namespace list_exercises {
    using namespace std;

    list<int> initializeList(int n) {
        list<int> a;
        for (int i = 1; i <= n; i++){
            a.push_back(i);
        }
        return a;
    }

    vector<int> initializeVector(int n) {
        vector<int> a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }
        return a;
    }

    vector<int> randomIntVector(int n) {
        vector<int> a;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 10);
        for (int i = 1; i <= n; i++) {
            a.push_back(dis(gen));
        }
        return a;
    }

    void printIntVector(vector<int> &v) {
        cout << "Vector: [";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i];
            if (i != v.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
}
