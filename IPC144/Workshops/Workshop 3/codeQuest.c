// Name: Natalia Monsalve
// codeQuest.c

#include <stdio.h>

int main(void)
{
  printf("+-----------------------+\n");
  printf("|                       |\n");
  printf("|      CODE QUEST       |\n");
  printf("|                       |\n");
  printf("+-----------------------+\n");
    
  float playerStrength, playerSpeed, playerDefense, playerIntelligence = 0;
  float strengthRatio, speedRatio, defenseRatio, intelligenceRatio = 0;
  int sum, luck, move = 0;
  float playerHP = 10;
  float enemyStrength = 30;
  float enemyDefense = 40;
  float enemyIntelligence = 25;
  float enemyHP = 10;
  float attackPower, magicPower = 0;
  
  printf("Character Creation\n");
  printf("Please enter your desired stats for your character:\n\n");
  
  printf("Enter strength: ");
  scanf("%f", &playerStrength);
  
  printf("Enter speed: ");
  scanf("%f", &playerSpeed);
  
  printf("Enter defense: ");
  scanf("%f", &playerDefense);
  
  printf("Enter intelligence: ");
  scanf("%f", &playerIntelligence);
  
  printf("\n");
  
  sum = playerStrength + playerSpeed + playerDefense + playerIntelligence;
  
  strengthRatio = playerStrength / sum * 100;
  speedRatio = playerSpeed / sum * 100;
  defenseRatio = playerDefense / sum * 100;
  intelligenceRatio = playerIntelligence / sum * 100;
  
  luck = sum % 30;
  
  printf("Your player's final states are:\n\n");
  
  printf("Strength: %d\n", (int)strengthRatio);
  printf("Speed: %d\n", (int)speedRatio);
  printf("Defense: %d\n", (int)defenseRatio);
  printf("Intelligence: %d\n", (int)intelligenceRatio);  
  printf("Luck: %d\n\n", luck);
  
  
  
  printf("Battle Start!\n");
  printf("Your HP: %.0f Enemy HP: %.0f\n", playerHP, enemyHP);
  
  while (playerHP > 0 && enemyHP > 0) {
    printf("1 - Attack\n");
    printf("2 - Magic\n");
    printf("Select your move: ");
    scanf("%d", &move);
    
    if (move == 1) {
      printf("You attacked the enemy!\n");
      
      attackPower = (playerStrength / enemyDefense) * 5;
      enemyHP -= attackPower;
      
      if (enemyHP <= 0) {
        printf("You won!\n");
      }
      else if (enemyHP > 0) {
        printf("The enemy attacked you!\n");
        
        attackPower = (enemyStrength / playerDefense) * 5;
        playerHP -= attackPower;
        
        if (playerHP <= 0) {
          printf("You died!\n");
        }
        else {
          printf("\nYour HP: %d Enemy HP: %d\n", (int)playerHP, (int)enemyHP);
        }
      }
    }
    else if (move == 2) {
      printf("You shocked the enemy!\n");
      
      magicPower = (playerIntelligence / enemyIntelligence) * 5;
      enemyHP -= magicPower;
      
      if (enemyHP <= 0) {
        printf("You won!\n");
      }
      else if (enemyHP > 0) {
        printf("The enemy attacked you!\n");
        
        attackPower = (enemyStrength / playerDefense) * 5;
        playerHP -= attackPower;
        
        if (playerHP <= 0) {
          printf("You died!\n");
        }
        else {
          printf("\nYour HP: %d Enemy HP: %d\n", (int)playerHP, (int)enemyHP);
        }
      }
    }
  }
  return 0;
}
