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

    int x = 11;
    int y = 9;
    int minimum;
    char min_value;
    
    if (x < y) {
        minimum = x;
        min_value = 'x';
    } else {
        minimum = y;
        min_value = 'y';
    }

    printf("%c %d is the minimum\n", minimum, min_value);
    
    char a = 'a';
    char b = 'b';
    char g = 'g';
    char letter = 'z';
    // if (letter == a) printf("letter %c is %c\n", letter, a);
    // else if (letter == b) printf("letter %c is %c\n", letter, b);
    // else if (letter == g) printf("letter %c is %c\n", letter, g);
    // else printf("letter %c is not found\n", letter);
    
    switch(letter) {
            case 'a':
                printf("letter %c is %c\n", letter, a);
                break;
            case 'b':
                printf("letter %c is %c\n", letter, b);
                break;
            case 'g':
                printf("letter %c is %c\n", letter, g);
                break;
            default:
                printf("letter %c is not found\n", letter);
                break;
    }
    
    return 0;
}

