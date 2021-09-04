# Graphs-Visualizer
This is a unbalaced(for while?) graph visualizer.

## SFML
It's using SFML library:<br>
If you're using arch:<br>
  ```sudo pacman -S sfml``` or ```sudo yay -S sfml``` <br>depends what packger manager you're using.

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
The first line contains two integers N and M (1 <= N <= 30, 0 <= M <= N-1) — the number of vertices and the number of edges, respectively<br>
Next M lines contains two integers X and Y (0 <= X,Y < N) - If have an edge between X and Y. (The vertices are 0 based) <br>

## Imgs: <br>
- Ex 1: <br>
![Imgur](https://i.imgur.com/2pNzxmS.png)<br>
- K-10 <br>
![Imgur](https://i.imgur.com/pUV76Jm.png)<br>
