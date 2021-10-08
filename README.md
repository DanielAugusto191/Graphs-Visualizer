# Graphs-Visualizer
This is a unweighted(for while?) graph visualizer.

## SFML
It's using SFML library:<br>
If you're using arch:<br>
  ```sudo pacman -S sfml``` or ```sudo yay -S sfml``` <br>depends what packager manager you're using.

Debian, ubuntu: <br>
```sudo apt-get install libsfml-dev```

If you have another dist or wanna get it manually, you can use [this](https://www.sfml-dev.org/tutorials/2.5/start-linux.php).

## Exec
Compiling:
```make``` or ```make c``` <br>
If you wanna compile manually, use: ```-lsfml-graphics -lsfml-window -lsfml-system```<br>
Executing:<br>
```make e```<br>

## Input:<br>
The first line input two integers N and M (1 <= N <= 30, 0 <= M <= N-1) — the number of vertices and the number of edges, respectively<br>
Next M lines input two integers X and Y (0 <= X,Y < N) - If have an edge between vertice X and vertice Y. (The vertices are 0 based) <br>

## Examples: <br>
- Ex 1: <br>
6 6<br>
0 1<br>
1 2<br>
2 3<br>
3 4<br>
4 5<br>
5 0<br>
Gives:<br>
![Imgur](https://i.imgur.com/2pNzxmS.png)<br>
- Ex 2. K-10 <br>
![Imgur](https://i.imgur.com/pUV76Jm.png)<br>
