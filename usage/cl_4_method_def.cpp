#include <iostream>
using namespace std;

/*
string 转 const char*
*/
int string_to_char_pr() {
    string m = "2342";
    const char* p = m.data();
    int k = 0;
    while (p[k] != NULL) {
        cout << p[k] << ",";
        k++;
    }
}


/*
使用c_str()函数
*/
int usage_c_str() {
    string m = "2342";
    const char* p = m.c_str();
    int k = 0;
    while (p[k] != NULL) {
        cout << p[k] << ",";
        k++;
    }
    // 直接使用cout << p更加简单方便
}
/*
char[]和char *转string
*/
void char_arr_2_char_pr_string(){
    const char *p = "wang";
    const char q[] = "helloworld";
    string a = p;
    string b = q;
    cout << a;
    cout << b;
}

int main() {
    cout << "string_to_char_pr: \n";
    string_to_char_pr();

    cout << "\nusage_c_str: \n";
    usage_c_str();

    cout << "\n char_arr_2_char_pr_string: \n";
    char_arr_2_char_pr_string();
}