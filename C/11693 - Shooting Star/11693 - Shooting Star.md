## 11693 - Shooting Star

### Description

Writer: *arcchang1236*       Description: *arcchang1236*       Difficulty: ★★★★★

> *"This is a classical problem for NTHU CSI2P students three years ago, many people had difficulty in solving it. However, we think the students this year are much better than us at that time, so all of you can solve it!"*

You want to stimulate shooting route in a room. You know the boundery of room, start point of a shooting object, and the direction of shooting. When the object hitting the boundary, it would reflect with 45 degree. Your mission is to show the route of the shooting object.

**You are asked to use 2-D array to solve this problem**

 

### Input

The first line has three numbers, **C**, **F** and **H**, which respectively means the length of the ceiling, the length of the floor, and the height between the ceilings and floors.

The second line has a number **S**, which means the start point of shooting object. It's noted that the location below the ceiling is 1, and the location below that is 2, and so on.

- **1 ≤ C, F ≤ 20**
- **2 ≤ H ≤ 20**
- **1 ≤ S ≤ H**

The third line has a character **'u'** or **'d'**. It  corresponds to the initial direction of shooting.

- **u: upper-right in 45 degree**
- **d: lower-right in 45 degree**

There are only one case for each testcase

### Output

Draw the map and the route of the shooting object.
The route of shooting object is marked as '*****', which appears until the object is out of boundaries.

You need to use a **(H+2)\*(max{C, F, the horizontal length of route of shooting})** array to print out the result

Remember there is **'\n'** in the end.