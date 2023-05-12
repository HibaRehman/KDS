#include <stdio.h>

int main() {
    //variables
    int choice, choice2;
    char name[20], lead[20];
    //intro
    puts("Welcome to Kpop Dating Simulator! Let's get started ;) (Click enter to continue with the story)");
    puts("Enter your name: ");
    scanf("%s", name);
    getchar();
    puts("Who do you want as YOUR romantic lead?");
    scanf("%s", lead);
    getchar();
    printf("This is a story between %s and %s. Once upon a time...\n", name, lead);
    //dialogue
    while(getchar()!='\n') {}
    puts("[A good-looking stranger approaches you]");
    while(getchar()!='\n') {}
    puts("?: Hey babygworl! I was just wondering...have we met before? ( ͡° ͜ʖ ͡°)");
    while(getchar()!='\n') {}
    puts("[Visible confusion from you]");
    while(getchar()!='\n') {}
    puts("You: Hi? I don't think so but...what's your name? (^///^)");
    while(getchar()!='\n') {}
    printf("%s: My name is %s, what's yours?\n", lead, lead);
    while(getchar()!='\n') {}
    printf("You: I'm %s, nice to meet you!\n", name);
    while(getchar()!='\n') {}
    //choice
    printf("***Choose a pickup line***\n");
    printf("1. Are you a for loop? Cuz I wanna do you over and over again. (° (° ʖ(° ͜ʖ ͡°)ʖ ͡°) ͡°)\n2. I seem to have lost my phone number. Can I have yours? (☞ ͡° ͜ʖ ͡°)☞\n3. Are you from Korea? Cuz you lookin' like my seoul-mate. (*￣3￣)╭\n");
    scanf("%d", &choice);
    getchar();
    switch(choice) {
        case 1:
        puts("You: Are you a for loop? Cuz I wanna do you over and over again. (° (° ʖ(° ͜ʖ ͡°)ʖ ͡°) ͡°)");
        while(getchar()!='\n') {}
        printf("%s: [Blushes]. Daaammmnnnnn gurlll, I'm down to go to the cafe across the street if you are OwO?\n", lead);
        while(getchar()!='\n') {}
        puts("***1-Yes, 2-No***");
        scanf("%d", &choice2);
        getchar();
        if(choice2==1) {
            printf("You: Sure! Let's go :D\n");
            while(getchar()!='\n') {}
            printf("[%s smiles as they cross the road, before a zooming car comes and hits them]\n", lead);
            while(getchar()!='\n') {}
            printf("You: NOOOOOOOOOOO! [cries]\n");
            while(getchar()!='\n') {}
            puts("     _            _   _     ");
            puts("    | |          | | | |    ");
            puts("  __| | ___  __ _| |_| |__  ");
            puts(" / _` |/ _ \\/ _` | __| '_ \\ ");
            puts("| (_| |  __/ (_| | |_| | | |");
            puts(" \\__,_|\\___|\\__,_|\\__|_| |_|");
            printf("\n");
            puts("YOU LOSE! GAME OVER GAME OVER GAME OVER.");
            return 0;
        }
        else {
            printf("You: No, thanks. You're not my type anymore\n");
            while(getchar()!='\n') {}
            printf("%s: [Face darkens] You had your chance [pulls out a knife and stabs you to death]\n", lead);
            while(getchar()!='\n') {}
            puts("     _            _   _     ");
            puts("    | |          | | | |    ");
            puts("  __| | ___  __ _| |_| |__  ");
            puts(" / _` |/ _ \\/ _` | __| '_ \\ ");
            puts("| (_| |  __/ (_| | |_| | | |");
            puts(" \\__,_|\\___|\\__,_|\\__|_| |_|");
            printf("\n");
            puts("YOU LOSE! GAME OVER GAME OVER GAME OVER.");
            return 0;
        }
        break;
        case 2:
        puts("You: I seem to have lost my phone number. Can I have yours? (☞ ͡° ͜ʖ ͡°)☞");
        while(getchar()!='\n') {}
        printf("%s: [Smirks] I see what you're doing. I'll give it to you, but only over a cup of coffee from the cafe across the street ^_^\n", lead);
        while(getchar()!='\n') {}
        puts("***1-Yes, 2-No***");
        scanf("%d", &choice2);
        getchar();
        if(choice2==1) {
            printf("You: Sure! Let's go :D\n");
            while(getchar()!='\n') {}
            printf("[%s smiles as they cross the road, before a zooming car comes and hits them]\n", lead);
            while(getchar()!='\n') {}
            printf("You: NOOOOOOOOOOO! [cries]\n");
            while(getchar()!='\n') {}
            puts("     _            _   _     ");
            puts("    | |          | | | |    ");
            puts("  __| | ___  __ _| |_| |__  ");
            puts(" / _` |/ _ \\/ _` | __| '_ \\ ");
            puts("| (_| |  __/ (_| | |_| | | |");
            puts(" \\__,_|\\___|\\__,_|\\__|_| |_|");
            printf("\n");
            puts("YOU LOSE! GAME OVER GAME OVER GAME OVER.");
            return 0;
        }
        else {
            printf("You: No, thanks. You're not my type anymore\n");
            while(getchar()!='\n') {}
            printf("%s: [Face darkens] You had your chance [pulls out a knife and stabs you to death]\n", lead);
            while(getchar()!='\n') {}
            puts("     _            _   _     ");
            puts("    | |          | | | |    ");
            puts("  __| | ___  __ _| |_| |__  ");
            puts(" / _` |/ _ \\/ _` | __| '_ \\ ");
            puts("| (_| |  __/ (_| | |_| | | |");
            puts(" \\__,_|\\___|\\__,_|\\__|_| |_|");
            printf("\n");
            puts("YOU LOSE! GAME OVER GAME OVER GAME OVER.");
            return 0;
        }
        break;
        case 3:
        puts("You: Are you from Korea? Cuz you lookin' like my seoul-mate. (*￣3￣)╭");
        while(getchar()!='\n') {}
        printf("%s: [Disgusted look]. That's racist, bro >:(\n", lead);
        while(getchar()!='\n') {}
        printf("You: Wait, i-\n");
        while(getchar()!='\n') {}
        printf("%s: We're over [pulls out a knife and stabs you]\n", lead);
        while(getchar()!='\n') {}
        puts("     _            _   _     ");
        puts("    | |          | | | |    ");
        puts("  __| | ___  __ _| |_| |__  ");
        puts(" / _` |/ _ \\/ _` | __| '_ \\ ");
        puts("| (_| |  __/ (_| | |_| | | |");
        puts(" \\__,_|\\___|\\__,_|\\__|_| |_|");
        printf("\n");
        puts("YOU LOSE! GAME OVER GAME OVER GAME OVER.");
        return 0;
        break;
        default:
        printf("\n");
        puts("You stand there in silence, and they walk away. YOU LOSE! GAME OVER GAME OVER GAME OVER. (PS. Next time, actually do something)");
        break;
        return 0;
    }
}
