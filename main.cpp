/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien
* Date: 02.02.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "study_in_pink1.h"

using namespace std;

void sa_tc_01() {
    cout << "----- Sample Testcase 01 -----" << endl;
    string input_file("sa_tc_01_input");
    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;
    if (!readFile(input_file, HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3)) {
        return;
    }

    cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", HP1: " << HP1 << ", HP2: " << HP2 << ", E1: " << E1 << endl;
    int result = firstMeet(EXP1, EXP2, E1);
    cout << "EXP1: " << EXP1 << ", EXP2: " << EXP2 << ", result: " << result << endl;
    int resultFunc2 = traceLuggage(HP1, EXP1, M1, E2);
    cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << ", E2: " << E2 << ", result: " << resultFunc2 << endl;
    int resultFunc3 = chaseTaxi(HP1,EXP1,HP2,EXP2,E3);
    //int resultFunc4 = checkPassword("012345pink#pink", "pink@gmail.com");
    //const char *arr_pwds[] = { "pink123", "xxxx@xxxx", "123xyz", "pink#pink", "pink#pink",
    //                           "pink123"};
    //int resultFunc5 = findCorrectPassword(arr_pwds,6);
    cout << "HP1: " << HP1 << ", EXP1: " << EXP1 << ", HP2: " << HP2 << ", EXP2: " << EXP2 << ", result: " << resultFunc3 << endl;
}

int main(int argc, const char * argv[]) {
    sa_tc_01();
    return 0;
}