#include "pointerWrapper.h"
#include <iostream>

using namespace std;

pointerWrapper::pointerWrapper(int value) {
    cout << "Allocating memory for the int pointer!" << endl;
    p = new int(value);
}

pointerWrapper::~pointerWrapper() {
    cout << "Releasing memory for the int pointer!" << endl;
    delete p;
}

void pointerWrapper::print(void) {
    cout << "Hi, I am a wrapped pointer with value: " << *p << endl;
}
