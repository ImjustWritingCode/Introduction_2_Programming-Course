## 10846 - Game visiting list

### Description

Consider a game that has N NPCs (non-player characters), numbered from 1 to N. Each NPC will give the player a list of some other NPCs for the player to visit in order. If the list of the 1st NPC is 2 3 0, then the player needs to visit the 2nd NPC and goes on checking the list of the 2nd NPC. Now, if the list of the 2nd NPC is 4 5 0, then the player needs to visit the 4th NPC and goes on checking the list of the 4th NPC, … Each list is ended by a number 0, indicating that there is no more NPCs to visit, and only by then the player can go back to the previous NPC to continue checking the unfinished list.

Given the visiting lists of all NPCs, print the NPCs visited by the player one by one according to the order described by their visiting lists. Note that the player always starts by visiting the first NPC.

### Input

The first line of the input is an integer N indicating the total number of NPCs.

For the next N lines, the ith line contains the visiting list of the ith NPC (i = 1~N). The visiting list of each NPC is ended by 0.

### Output

Display all the visited NPCs in order. Note that you need to print a newline character ‘\n’ after each number, that is, just one number will be shown in each line of the output.