#include <devision.h>
float devision(float a, float b) {
    if (b==0) {
        cout << "Devision by zero";
        return inf;
    }
    return a/b;
}
