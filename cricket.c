#include <stdio.h>
struct Team {
    char name[50];
    int runs;
    int wickets;
    float overs;
};

void enterScore(struct Team *team) {
    printf("Enter team name: ");
    scanf(" %[^\n]s", team->name);

    printf("Enter runs scored: ");
    scanf("%d", &team->runs);

    printf("Enter wickets lost: ");
    scanf("%d", &team->wickets);

    printf("Enter overs played: ");
    scanf("%f", &team->overs);
}

void displayScore(struct Team team1, struct Team team2) {
    printf("\n\n------------ Cricket Scoreboard ------------\n");
    printf("%-20s vs %-20s\n", team1.name, team2.name);
    printf("--------------------------------------------\n");
    printf("%-20s | %3d/%d in %.1f overs\n", team1.name, team1.runs, team1.wickets, team1.overs);
    printf("%-20s | %3d/%d in %.1f overs\n", team2.name, team2.runs, team2.wickets, team2.overs);
    printf("--------------------------------------------\n");

    // Optional: Match result logic
    if (team1.runs > team2.runs)
        printf("Result: %s won the match.\n", team1.name);
    else if (team2.runs > team1.runs)
        printf("Result: %s won the match.\n", team2.name);
    else
        printf("Result: Match Drawn.\n");
}

int main() {
    struct Team team1, team2;

    printf("Enter details for Team 1:\n");
    enterScore(&team1);

    printf("\nEnter details for Team 2:\n");
    enterScore(&team2);

    displayScore(team1, team2);

    return 0;
}
