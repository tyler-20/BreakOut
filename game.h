#ifndef GAME_H
#define GAME_H

struct GameState {
	GAME_ACTIVE;
	GAME_MENU;
	GAME_WIN;
};

class Game {
public:
	GameState State;
	bool Keys[1024];
	unsigned int Width, Height;

	Game(unsigned int width, unsigned int height);
	~Game();
	//initialize game state (load shaders/levels/textures)
	void Init();
	//game loop
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();
};

#endif // !GAME_H
