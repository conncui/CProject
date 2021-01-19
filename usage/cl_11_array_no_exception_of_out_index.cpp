
# include <iostream>
using namespace std;

void test_1();
void test_2();

int main() {
    // test_1();
    test_2();
}


void test_1(){

    int a[2];
    a[0] = 1;
    a[1] = 2;

    int i = 2;
    a[i] = 10;
    for (int i = 0; i <=2; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i <=2; i++){
        cout << &a[i] << " ";
    }
}
void test_2() {
    double d[3] = {0, 1, 2};
    double dd = 9;

    int index  = 3;
    d[index] = 0;

    std::cout << dd << std::endl;
}