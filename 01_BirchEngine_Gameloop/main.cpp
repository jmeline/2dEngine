#include <iostream>
#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char const *argv[])
{
  game = new Game();

  game->init(
      "2DEngine",
      SDL_WINDOWPOS_CENTERED,
      SDL_WINDOWPOS_CENTERED,
      800,
      600,
      false);

  // Game loop
  while (game->running())
  {
    game->handleEvents();
    game->update();
    game->render();
  }
  game->clean();
  return 0;
}