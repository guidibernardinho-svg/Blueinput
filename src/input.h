#pragma once
#include <SDL2/SDL.h>

class Input {
public:
    bool init();
    void update();
    void shutdown();

    // botões
    bool isPressed(SDL_GameControllerButton button);

    // analógicos
    int getAxis(SDL_GameControllerAxis axis);

private:
    SDL_GameController* controller = nullptr;
};#pragma once
#include <SDL2/SDL.h>

class Input {
public:
    bool init();
    void update();
    void shutdown();

    // botões
    bool isPressed(SDL_GameControllerButton button);

    // analógicos
    int getAxis(SDL_GameControllerAxis axis);

private:
    SDL_GameController* controller = nullptr;
};
