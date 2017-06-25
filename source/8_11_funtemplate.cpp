//
// Created by 莫绪旻 on 17/2/28.
//

void funtemplate() {

}

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}