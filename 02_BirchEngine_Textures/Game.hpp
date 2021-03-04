#ifndef GAME_HPP
#define GAME_HPP

#include "SDL2/SDL.h"
#include <iostream>

class Game {
  public: 
    Game();
    ~Game();

    void init(
      const char* title,
      int xPos,
      int yPos, 
      int width,
      int height,
      bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() { return isRunning; }

  private: 
    int count;
    // is the game running
    bool isRunning;

    SDL_Window *window;
    SDL_Renderer * renderer;
};

#endif /* GAME_HPP */