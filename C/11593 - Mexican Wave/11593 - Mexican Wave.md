## 11593 - Mexican Wave

### Description

James, a pro photographer, recently went to a baseball game. He was very interested in Mexican wave, so he decided to take some photos of it.

Image that there are **n** spectators in the stadium, labelled from **1 to n**. The maximum length of the wave is **m**. The spectators start the Mexican wave at time 0.

 

- At time 1, the first spectator stands.
- At time 2, the second spectator stands.
- ...
- At time m, the m-th spectator stands.
- At time m + 1, the (m + 1)-th spectator stands and the first spectator sits.
- At time m + 2, the (m + 2)-th spectator stands and the second spectator sits.
- ...
- At time n, the n-th spectator stands and the (n - m)-th spectator sits.
- At time n + 1, the (n + 1 - m)-th spectator sits.
- ...
- At time n + m, the n-th spectator sits.

 

Now, James prints out **T** pictures he took and wants to play a game with you. For each picture, James will give you **n**, **m**, and the time **t** he took the picture. Can you predict how will picture looks like?

If you win the game, maybe James will teach you some tips about shooting an astonishing picture.

### Input


The first line contains one integer number **T**, representing the numbers of photos.

The next T lines contain three integers **n**, **m**, **t**, representing the number of spectators, the maximum length of the wave, and the time James took the picture.

**1 <= T <= 1001 <= m <= n <= 1001 <= t <= 100**

### Output

For each picture please output a line contains **n** characters, representing the states of the n spectators. If a spectator is sitting, please print **'-'**, otherwise please print **'^'**. You can find out more information in sample output.