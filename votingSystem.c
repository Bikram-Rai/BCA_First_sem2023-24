#include <stdio.h>

// function to display election results
void voteResult(int c, int cpp, int java, int python) {
    printf("|------Vote Result--------------|\n");
    printf("| C Program       |  : %d Votes |\n",c);
    printf("| C++ Program     |  : %d Votes |\n", cpp);
    printf("| Java Program    |  : %d Votes |\n", java);
    printf("| Python Program  |  : %d Votes |\n", python);
    printf("|-------------------------------|\n");

    // Determine the winner
    if (c > cpp && c > java && c > python) {
        printf("\n\n");
        printf("|--------------------|\n");
        printf("|  C Program wins.   |\n");
        printf("|--------------------|\n\n");
    } else if (cpp > c && cpp > java && cpp > python) {
        printf("\n\n");
        printf("|--------------------|\n");
        printf("| C++ program wins.  |\n");
        printf("|--------------------|\n\n");
    } else if (java > c && java > cpp && java > python) {
        printf("\n\n");
        printf("|--------------------|\n");
        printf("| Java program wins. |\n");
        printf("|--------------------|\n\n");
    } else if (python > c && python > cpp && python > java) {
        printf("\n\n");
        printf("|--------------------|\n");
        printf("|Python program wins.|\n");
        printf("|--------------------|\n\n");
    } else {
        printf("\n\n");
        printf("|--------------------|\n");
        printf("|   Equal Votes.     |\n");
        printf("|--------------------|\n\n");
    }
}

// counting

void countVote(int vote, int *c, int *cpp, int *java, int *python) {
    switch(vote) {
        case 1:
            (*c)++;
            break;
        case 2:
            (*cpp)++;
            break;
        case 3:
            (*java)++;
            break;
        case 4:
            (*python)++;
            break;
        default:
            printf("Invalid Vote !\n");
    }
}

int main() {
    printf("|---------------------------------------|\n");
    printf("|     Welcome to the Voting System      |\n");
    printf("|---------------------------------------|\n");
    int choice;
    int c = 0, cpp = 0, java = 0, python = 0;
    printf("|---------------------------------------|\n");
    printf("|  Press: 1 to vote for C Program.      |\n");
    printf("|  Press: 2 to vote for C++ Program.    |\n");
    printf("|  Press: 3 to vote for Java Program.   |\n");
    printf("|  Press: 4 to vote for Python Program. |\n");
    printf("|  Press: 0 to View Vote result.        |\n");
    printf("|---------------------------------------|\n");

    while(1) {
        printf("\n_________________________________________\n\n");
        printf("Your choice:");
        scanf("%d", &choice);
        if(choice == 0) {
            voteResult(c, cpp, java, python);
            break;
        } else if(choice >=1 && choice <=4) {
            countVote(choice , &c, &cpp, &java, &python);
        } else {
            printf("Invalid Choice!, Please Vote again. \n");
        }
        
    }
    return 0;
}
