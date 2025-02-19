#include <iostream>
#include "worker.h"
using namespace std;

int main() {
    Worker staff[5] = {{"Kovalenko", 2009, "game coder", 100000.5, "IT specialist"},
        {"Ofii", 2008, "doctor", 111111, "neurologist"},
        {"Sevatianov", 2009, "amputee", 1.00001, "leg loser"},
        {"Boleyko", 2008, "speaker", 75000.75, "politician"},
        {"Zadorozhna", 209, "chef", 100, "compote maker"}};
    
    int counter = 0;
    for (int i=0; i<5; i++) {
        if (2025 - staff[i].birthYear >= 60) {
            counter++;
            staff[i].printInfo();
        }
    }
    cout<<"There are "<<counter<<" workers oldar than 60 years in total.\n";
    
    return 0;
}
