#include<iostream>

int main(){
    char tree[] = "	           *\n                *  *  *\n                 * * *\n                *  ^  *\n                  ^#^\n\                 ^ ^ ^\n                ^&^%^8^\n               ^0^ ^#^ ^\n              ^ ^ ^ ^ ^ ^\n             ^ ^ ^0^$^ ^ ^\n            ^ ^&^ ^ ^ ^ ^ ^\n           ^ ^ ^ ^ ^0^%^ ^ ^\n          ^ ^ ^%^ ^ ^ ^ ^z^$^\n         ^!^#^ ^ ^$^$^ ^ ^ ^ ^\n        ^^^^^^^^^^^^^^^^^^^^^^^\n          ___     | |      +++\n         | % |    | |   #########\n         |%%%|   _| |_  #   $   #\n         |_%_|  |_____| #########\n\0";

    size_t i = 0;

    do{
        std :: cout << tree[i];
        ++i;
    }while(tree[i] != '\0');

    return 0;
}