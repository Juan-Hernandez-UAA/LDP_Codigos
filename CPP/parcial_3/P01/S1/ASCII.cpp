#include <iostream>
using namespace std;

void printHeader();
void asciiTable();

int main() {
    printHeader();
    printf("\n");
    asciiTable(); // Calling the function
    return 0;
}

void printHeader() {
    system("CLS");
    cout << "Alumno: Juan Pablo Hernandez Ramirez" << endl;
}

void asciiTable() {
    int i, flagCounter = 1, counter = 0;
    bool flag = true;

    cout << "\033[1m\033[32mASCII Table \033[0m" << endl;

    for (i = 0; i < 256; i++) {

        if (flag == true) {
            cout << "\n\033[36mASCII Set No. " << flagCounter << "\033[0m" << endl;
            flag = false;
        }

        printf("ID%d:%c ", i, i);
        counter++;

        if (counter == 25) {
            counter = 0; // Reset counter
            printf("\n");
            system("pause");
            flag = true;
            flagCounter ++;
        }

    }
}
