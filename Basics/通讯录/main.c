//
// Created by panchao on 18-12-20.
//
#include <stdlib.h>
#include "AddressBook.h"

int main(int argc, char *argv[]) {
    while (1) {
        Option option = menuList();
        switch (option) {
            case ADDALL:
                addAddressBook();
                break;
            case DELETE:
                deletePersonByName();
                break;
            case SELECT:
                showByName();
                break;
            case INSERT:
                addPerson();
                break;
            case SAVEFILE:
                saveFile();
                break;
            case LOADFILE:
                loadFile();
                break;
            case SELECTALL:
                showAll();
                break;
            case QUIT:
                exit(0);
                break;
            default:
                break;
        }
    }
    return 0;
}

