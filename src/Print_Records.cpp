#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

void Print_Records() {
	file = fopen("Records.txt", "rb");
    while(fread(& Player1, sizeof(Player1) , 1, file)){
        printf("\n Name: %12s Score: %6.2f Time: %6.2f", Player1.name, Player1.data, Player1.time_man);
    }
    fclose(file);
}
