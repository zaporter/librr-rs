#include "librr.hpp"

using namespace std;


Zags createZags() {
    Zags toRet = {10,15.6};
    return toRet;
}
void printZags(Zags zags) {
    cout << "date: " << zags.date << endl;
}

int32_t testCPPFunction() {
    cout << "Hello from Cpp" << endl;
    return 0;

}


