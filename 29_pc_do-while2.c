#include <stdio.h>

int main()
{
    char letter;
    int athletics = 0, swimming = 0, football = 0, badminton = 0;
    
    do
    {
        printf("Type in the letter chosen or Q to finish:\n");
        printf("A: Athletics\n");
        printf("S: Swimming\n");
        printf("F: Football\n");
        printf("B: Badminton\n");
        printf("Enter choice: ");
        //fflush(stdin);
        scanf(" %c", &letter);
        
        if(letter == 'A')
            athletics = athletics + 1;
        if(letter == 'S')
            swimming = swimming + 1;
        if(letter == 'F')
            football = football + 1;
        if(letter == 'B')
            badminton = badminton + 1;
        
    } while(letter != 'Q');
    
    printf("Athletics scored %d votes.\n", athletics);
    printf("Swimming scored %d votes.\n", swimming);
    printf("Football scored %d votes.\n", football);
    printf("Badminton scored %d votes.\n", badminton);
    
    return 0;
}
