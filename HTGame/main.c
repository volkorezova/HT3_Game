//
//  main.c
//  HTGame
//
//  Created by Tatyana Volkorezova on 12.10.2017.
//  Copyright © 2017 shpp.com. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    int userNum=0;
    int searchedNum=0;
    int selectorYN=0;
    int ok;
    
    for(;;){
        srand(time(NULL));
        int searchedNum = rand()%10;
        
        for (int i=0; i<3; i++){
            for(;;){
                
                printf("Enter positive number: ");
                ok=scanf("%d", &userNum);
                fpurge(stdin);
                
                if (!ok){
                    printf("It's a string\n");
                    continue;
                }
                
                if (userNum<0){
                    printf("Negative number\n");
                    continue;
                }
                break;
            }
            
            if (userNum==searchedNum){
                printf("YAHOO! RIGHT!\n");
            }
            
            if (userNum<searchedNum){
                printf("Biger!\n");
            }
            
            if (userNum>searchedNum){
                printf("Lower!\n");
            }
        }
        printf("Exit? Y/N\n");
        scanf(" %c",&selectorYN);
        if (selectorYN=='y'){
            return 0;
        }
        
    }
    
    return 0;
    
}

