#include "main.h"

namespace set_exercises {

    using namespace std;

    set<int> initializeSet(int n) {
        set<int> s;
        for (int i = 1; i <= n; i++) {
            s.insert(i);
        }
        return s;
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

}

