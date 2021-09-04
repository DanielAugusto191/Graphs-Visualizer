#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <SFML/Graphics.hpp>

using namespace std;

using content=int;
typedef vector<vector<int> > Graph;

const float raio = 50.f;
const pair<int, int> video_Width_Height = {800, 800}; // Width, Height
const pair<int, int> offset = {10, 50}; // Offset X, Offset Y;
const int fontSize = 16; // < 30;

// Font
int main()
{
    sf::RenderWindow window(sf::VideoMode(video_Width_Height.first, video_Width_Height.second), "SFML works!");
	sf::Font font;
	if(!font.loadFromFile("arial.ttf")){cout << "Erro ao carregar a fonte!" << endl; exit(0);}

   	int n, m; cin >> n >> m;
	// Desenhe Vertices do Grafo
	sf::CircleShape vertices[n];
	pair<int, int> VerticePos[n]; // X - Y;
	for(int i=0;i<n;++i){
		sf::CircleShape shape(25.f);
		vertices[i] = shape;
	}
	// sf::CircleShape s[n];
	double k = 360/n; // in degrees;
	cout << k << endl;
	int l = 0;
	for(double i = 0; i < 360 && l < n; i+= k, ++l){
			double rad = i*M_PI/180;
			vertices[l].setPosition(400 + 300 * cos(rad), 400 + 300 * sin(rad));
	}
	// Grafo
	Graph G(n);
	sf::Vertex Arestas[m][2];
	for(int i=0;i<m;++i){
		int x,y;cin >> x >> y;
		G[x].push_back(y);
		G[y].push_back(x);
		Arestas[i][0] = sf::Vertex(sf::Vector2(vertices[x].getPosition().x + raio/2, vertices[x].getPosition().y + raio/2));
		Arestas[i][1] = sf::Vertex(sf::Vector2(vertices[y].getPosition().x + raio/2, vertices[y].getPosition().y + raio/2));
	}

	sf::Text Labels[n];
	for(int i=0;i<n;++i){
		sf::Text tex(to_string(i), font, 16);
		Labels[i] = tex;
		Labels[i].setPosition(vertices[i].getPosition().x + raio/2, vertices[i].getPosition().y + raio/2);
		Labels[i].setFillColor(sf::Color::Red);
	}
	while (window.isOpen())
    {
		sf::Event event;
		while(window.pollEvent(event)) if(event.type == sf::Event::Closed) window.close();


		window.clear();
		for(auto &e: Arestas) window.draw(e, 2, sf::Lines);
        for(int i=0;i<n;++i){
			window.draw(vertices[i]);
			window.draw(Labels[i]);
		}
		window.display();
	}

    return 0;
}
