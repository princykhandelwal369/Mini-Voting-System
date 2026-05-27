#include <stdio.h>

int main() {

    int votes[3] = {0, 0, 0};
    int choice;
    int totalVotes = 0;

    while(1) {

        printf("\n===== MINI VOTING SYSTEM =====\n");
        printf("1. Vote for Alice\n");
        printf("2. Vote for Bob\n");
        printf("3. Vote for Charlie\n");
        printf("4. Show Results\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                votes[0]++;
                totalVotes++;
                printf("Vote recorded for Alice!\n");
                break;

            case 2:
                votes[1]++;
                totalVotes++;
                printf("Vote recorded for Bob!\n");
                break;

            case 3:
                votes[2]++;
                totalVotes++;
                printf("Vote recorded for Charlie!\n");
                break;

            case 4:

                printf("\n===== RESULTS =====\n");

                printf("Alice   : %d votes\n", votes[0]);
                printf("Bob     : %d votes\n", votes[1]);
                printf("Charlie : %d votes\n", votes[2]);

                if(totalVotes > 0) {

                    printf("\nVote Percentages:\n");

                    printf("Alice   : %.2f%%\n",
                           (votes[0] * 100.0) / totalVotes);

                    printf("Bob     : %.2f%%\n",
                           (votes[1] * 100.0) / totalVotes);

                    printf("Charlie : %.2f%%\n",
                           (votes[2] * 100.0) / totalVotes);
                }

                // Winner Logic
                if(votes[0] > votes[1] && votes[0] > votes[2])
                    printf("\nWinner: Alice\n");

                else if(votes[1] > votes[0] && votes[1] > votes[2])
                    printf("\nWinner: Bob\n");

                else if(votes[2] > votes[0] && votes[2] > votes[1])
                    printf("\nWinner: Charlie\n");

                else
                    printf("\nIt's a tie!\n");

                break;

            case 5:
                printf("Exiting Voting System...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}