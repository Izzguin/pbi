## 1. 
Kantipa has a calculator with only 44 buttons and a screen. The screen displays a number that's initially 00. The 44 buttons are +1+1, +2+2, +3+3, and +4+4. Each time Kantipa presses one of those buttons, the displayed number will increase by 11, 22, 33, or 44 respectively. Kantipa played with the calculator a bit. She pressed the buttons one by one in the sequence +1+1, +2+2, +3+3, +4+4, +1+1, +2+2, +3+3, +4+4, and so on until she decided to stop. However, after shaking the calculator on the floor, Kantipa doesn't remember how many times she pressed the buttons. She only remembers that the last button pressed was +X+X. Given XX, can you predict the last digit of the displayed number? Come on, everybody!

### Input

The input is given in the following format:

X

### Output

An integer representing the last digit of the displayed number. It can be proven that the last digit of the displayed number can be uniquely determined from the value of XX.

## 2.
Kantipa is standing in a captivating world, with NN people inside the wheel of life. These people are numbered from 11 to NN. Person ii has a strength of ii.

Kantipa controls the wheel of life. It's known that the strong survives, but the weak falls apart. In one move, Kantipa can command one of the weakest people to get out of the wheel of life and donate his/her strength to the other remaining people in the wheel of life. More formally, in one move, Kantipa does the following steps:

1. Choose a person pp such that his/her strength is less than or equal to every other person in the wheel of life.
2. Get person pp out of the wheel of life.
3. Let's say person pp has a strength of ss. Do this exactly ss times: increase the strength of a person in the wheel of life by 11.

Kantipa can do zero or more moves. Kantipa values respect, so she wants it such that there are no differences in the wheel of life. More formally, she wants to make the strengths of all people in the wheel of life to be the same. In particular, if there is only one person remaining, it also counts as valid. What is the minimum number of moves required to achieve that?

### Constraints

- 1≤N≤1091≤N≤109

### Input

The input is given in the following format:

N

### Output

A single integer representing the minimum number of moves required to make the strengths of all people in the wheel of life to be the same.

## 3. 
Kantipa has an NN by NN chessboard. The rows are numbered from 11 to NN from top to bottom, while the columns are numbered from 11 to NN from left to right. The square in row rr and column cc is denoted as (r,c)(r,c).

While enthusiastically jumping, your good pal Kantipa challenges you to play a game she invented, named "Stay on the Line". Kantipa places a chess king onto the chessboard on tile (X,Y)(X,Y). Throughout the game, you are able to move the king any number of times, as long as each move is a valid king move in chess. The amount of time you need to perform a move is negligible. Recall that in one move, a chess king can move to one of the following eight tiles.

![](https://cdn.vjudge.net.cn/88a67f919ff102ab3b7b8f58d6cc563a)

The game consists of MM minutes. Kantipa has two integers arrays of length MM, which are arrays TT and KK (1≤Ti≤21≤Ti​≤2; 1≤Ki≤N1≤Ki​≤N). At the end of the ii-th minute, there are two possibilities:

- If Ti=1Ti​=1, then the king must be in row KiKi​.
- If Ti=2Ti​=2, then the king must be in column KiKi​.

What is the minimum number of moves you must do to complete the game?

### Constraints

- 1≤N,M≤1000001≤N,M≤100000
- 1≤X,Y≤N1≤X,Y≤N
- 1≤Ti≤21≤Ti​≤2
- 1≤Ki≤N1≤Ki​≤N

### Input

The input is given in the following format:

N M X Y
T1 K1
T2 K2
⋮
TM KM

### Output

A single integer representing the minimum number of moves you must do to complete the game.
## 4.
Takahashi can combine a head part and a body part to create a robot. A robot falls over if the weight of the head part is greater than the weight of the body part.

Currently, he has one head part and one body part. The weight of the head part is HH grams, and the weight of the body part is BB grams.

He wants to make the body part heavier so that the robot does not fall over. Find how many more grams the body part needs to be made heavier so that his robot does not fall over.

### Constraints

- 1≤H≤1001≤H≤100
- 1≤B≤1001≤B≤100
- All input values are integers.

### Input

The input is given from Standard Input in the following format:

HH BB

### Output

Print the answer.

## 5.
There is a robot, and initially the weight of the robot is XX. This robot has NN types of parts that can be attached simultaneously: type 1,1, type 2,…,2,…, type NN. The weight of the type i (1≤i≤N)i (1≤i≤N) part is WiWi​. Initially, none of the NN types of parts are attached to the robot.

Process the following QQ queries in order. The ii-th query (1≤i≤Q)(1≤i≤Q) is represented by an integer PiPi​ and is as follows:

- If the type PiPi​ part is not currently attached to the robot, attach it; if it is attached, remove it. Then, print the current weight of the robot.

### Constraints

- 1≤X≤1001≤X≤100
- 1≤N≤1001≤N≤100
- 1≤Wi≤100 (1≤i≤N)1≤Wi​≤100 (1≤i≤N)
- 1≤Q≤1001≤Q≤100
- 1≤Pi≤N (1≤i≤Q)1≤Pi​≤N (1≤i≤Q)
- All input values are integers.

### Input

The input is given from Standard Input in the following format:

XX
NN
W1W1​ W2W2​ …… WNWN​
QQ
P1P1​
P2P2​
⋮⋮
PQPQ​

### Output

Output QQ lines. The ii-th line (1≤i≤Q)(1≤i≤Q) should contain the result of processing the ii-th query.

## 6.
Sayed has a rectangular paper with dimension L×WL×W which represents the length and the width respectively. Both LL and WW are positive integers. He wants to fold the paper multiple times to achieve a final area of exactly AA. In one fold, Sayed can do one of the following:

- Fold the paper exactly in half making a horizontal crease that's parallel to the width direction.
- Fold the paper exactly in half making a vertical crease that's parallel to the length direction.

Determine whether Sayed can fold the paper such that, after a certain number of folds, the resulting area is exactly a positive integer AA. Note that it's possible for the end result to have a non-integer length or width.

### Constraints

- 1≤L,W≤1001≤L,W≤100
- 1≤A≤L×W1≤A≤L×W

### Input

The input is given in the following format:

L W A

### Output

A single line containing `YA` (Indonesian for yes) if it's possible, or `TIDAK` (Indonesian for no) if it's impossible.

### Sample

|Inputcopy|Outputcopy|
|---|---|
|12 10 15|YA|

### Explanation of Sample 1

Sayed can do the following sequence of moves:

1. Fold with a horizontal crease.
2. Fold with a vertical crease.
3. Fold with a vertical crease.

![](https://cdn.vjudge.net.cn/9afe1705e8070efc6ce7a19f36be49ed)

The end result has a length of 66 and a width of 2.52.5. The final area is 6×2.5=156×2.5=15.

## 7.
There was a sequence of **integers** AA with a length of NN whose values have been lost over time. However, archaeological records indicate that the sum of values in the sequence AA is MM, and −1018≤Ai≤1018−1018≤Ai​≤1018 holds for all ii. Is it possible for the integer sequence AA to be an arithmetic sequence? If so, output any possible arithmetic integer sequence AA of length NN with a sum of MM, and −1018≤Ai≤1018−1018≤Ai​≤1018 holds for all ii.

Recall that a sequence AA is an arithmetic sequence if and only if the signed difference between each pair of adjacent elements is the same. More formally, A1−A2=A2−A3=…=AN−1−ANA1​−A2​=A2​−A3​=…=AN−1​−AN​ must hold. For example, [1,2,3][1,2,3], [8,4,0,−4][8,4,0,−4], and [3,3,3][3,3,3] are arithmetic sequences, while [1,2,4][1,2,4] and [8,4,8,4][8,4,8,4] are not.

### Constraints

- 3≤N≤1000003≤N≤100000
- −109≤M≤109−109≤M≤109

### Input

The input is given in the following format:

N M

### Output

If it's possible for AA to be an arithmetic sequence, print a single line containing `YA` (Indonesian for yes) followed by another line containing NN integers representing one possible arithmetic integer sequence of NN integer elements with a sum of MM, and −1018≤Ai≤1018−1018≤Ai​≤1018 holds for all ii. If there are multiple valid solutions, print any of them.

If it's impossible, just print `TIDAK` (Indonesian for no) instead.

## 8.
In AtCoder Country where Takahashi lives, there is a strange law that "a person who possesses AA or more candies must possess BB or more cookies."

Takahashi possesses CC candies and DD cookies. Determine whether Takahashi is violating this law.

### Constraints

- 1≤A,B,C,D≤1001≤A,B,C,D≤100
- All input values are integers.

### Input

The input is given from Standard Input in the following format:

AA BB CC DD

### Output

Print `Yes` if Takahashi is violating the law, and `No` otherwise.

## 9.
There is a grid with NN rows and NN columns. The cell at the ii-th row from the top and jj-th column from the left is painted black if Si,jSi,j​ is `#`, and white if it is `.`.

How many distinct patterns of painted cells can be obtained by extracting a region of MM rows and MM columns from this grid?

### Constraints

- 1≤M≤N≤101≤M≤N≤10
- NN and MM are integers.
- Si,jSi,j​ is `.` or `#`.

### Input

The input is given from Standard Input in the following format:

NN MM
S1,1…S1,NS1,1​…S1,N​
⋮⋮
SN,1…SN,NSN,1​…SN,N​

### Output

Print the answer.

## 10.
You are given a string SS of length NN consisting of `a` and `b`, and positive integers AA and BB. Find the number of integer pairs (l,r)(l,r) that satisfy all of the following conditions.

- 1≤l≤r≤N1≤l≤r≤N
- The number of `a` in the substring from the ll-th character through the rr-th character of SS is greater than or equal to AA.
- The number of `b` in the substring from the ll-th character through the rr-th character of SS is less than BB.

### Constraints

- 1≤N≤3×1051≤N≤3×105
- 1≤A,B≤N1≤A,B≤N
- SS is a string of length NN consisting of `a` and `b`.
- All input numbers are integers.

### Input

The input is given from Standard Input in the following format:

NN AA BB
SS

### Output

Print the answer.