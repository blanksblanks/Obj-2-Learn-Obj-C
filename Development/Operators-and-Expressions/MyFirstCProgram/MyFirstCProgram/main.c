//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int main()
{
    
    int a = 9;
    printf("a %d\n", a);
    
    int c = a++; // auto incrementing after assignment
    printf("c %d a %d\n", c, a); // results in c 9 a 10
    
    int d = --a; // auto decrementing before, same as int d = a-1
    // --a results in d 9 c 9 because it decrements BEFORE assignment
    printf("d %d c %d a %d\n", d, c, a);
    
    int b = a % 4;
    printf("b %d a %d\n", b, a);
    
    float fa = 5.0 / .5;
    printf("fa %f\n", fa);
    
    fa *= 10;
    
    return 0;
}

