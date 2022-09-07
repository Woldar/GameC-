#include "game.hpp"

//Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

Game *game = nullptr;

int main (int argc, char *argv[])
{
    game = new Game();
    game -> init("Second", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, true);
    while (game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
    }

    game -> clean();
    return 0;
}