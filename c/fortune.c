//Purpose: Generate a pseudo-randomm fortune using C

#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(){
        //Seeds the random time concurrently with time()
        srand(time(NULL));

        //Declare the arrays max size, will also be used for generating the random number
        int max_size = 11;

        int random = rand() % (max_size + 1 - 0) + 0;

        //printf("%d",random);

        char* fortunes[11] = {"Jolly", "Fantastic", "Possibly", "Definetly","Good Luck!", "What a joke...","Your future is bright.","Hold on tight","Just a few more days...","Keep moving","Not a chance"};

        printf("Your fortune: %s\n", fortunes[random]);

}
