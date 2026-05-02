#include "app.h"
#include <SDL2/SDL.h>
#include <iostream>

static SDL_Window* window = nullptr;
static SDL_GameController* controller = nullptr;
static bool running = true;

bool App::init() {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) < 0) {
        return false;
    }

    window = SDL_CreateWindow(
        "Blueinput",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        600, 400,
        SDL_WINDOW_SHOWN
    );

    if (SDL_NumJoysticks() > 0) {
        controller = SDL_GameControllerOpen(0);
        std::cout << "Controle conectado\n";
    }

    return window != nullptr;
}

void App::run() {
    SDL_Event e;

    while (running) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT)
                running = false;

            if (e.type == SDL_CONTROLLERBUTTONDOWN) {
                switch (e.cbutton.button) {
                    case SDL_CONTROLLER_BUTTON_A:
                        std::cout << "A\n";
                        break;
                    case SDL_CONTROLLER_BUTTON_B:
                        std::cout << "B\n";
                        break;
                    case SDL_CONTROLLER_BUTTON_DPAD_UP:
                        std::cout << "UP\n";
                        break;
                }
            }
        }

        SDL_Delay(10);
    }
}

void App::quit() {
    if (controller)
        SDL_GameControllerClose(controller);

    SDL_DestroyWindow(window);
    SDL_Quit();
}
