#include "main.h"
#include <iostream>

namespace list_exercises {

    int sumOfAllElements(const list<int>& linkedList);

    void ex6() {
        function<int(vector<int>)> verifyFunction = [](vector<int> v) {
            list<int> l(v.begin(), v.end());
            return sumOfAllElements(l);
        };
        vector<int> v = initializeVector(7);
        printIntVector(v);
        cout << "Sum of all element in list: " << verifyFunction(v) << endl;
    }

    int sumOfAllElements(const list<int>& linkedList) {
        int sum = 0;
        for (int i : linkedList){
            sum += i;
        }
        return sum;
    }


}