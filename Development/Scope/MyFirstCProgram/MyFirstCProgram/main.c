//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

void scope_it_out();
int main()
{
    char bravo [] = "bravo"; // same var name, diff scope rules
    printf("%s\n", bravo);
    
    scope_it_out();
    
    int threshold = 5;
    if (threshold > 3) {
        int alpha = 23;
        int beta = 32;
        printf("%d %d\n", alpha, beta);
    }
    

    
    return 0;
}

void scope_it_out() {
    
    char bravo[] = "gamma"; // invisible outside the scope of scope_it_out
    printf("%s\n", bravo);
}