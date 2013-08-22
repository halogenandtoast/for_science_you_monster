#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>

using namespace std;

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Surface* surface = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_OPENGL);
  SDL_WM_SetCaption("For Science, You Monster", 0);
  SDL_Event windowEvent;
  while( true ) {
    if ( SDL_PollEvent( &windowEvent ) ) {
      if ( windowEvent.type == SDL_QUIT ) break;
      if ( windowEvent.type == SDL_KEYUP && windowEvent.key.keysym.sym == SDLK_ESCAPE ) break;
    }
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    SDL_GL_SwapBuffers();
  }
  SDL_Quit();
  cout << "Hello space time continuum" << endl;
  return 0;
}
