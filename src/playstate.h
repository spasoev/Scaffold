/* #include <SDL2/SDL2_gfxPrimitives.h> */
#include <stdio.h>
#include "gamestate.h"
#ifndef TEXTURE_H
#endif
#include "text.h"
#ifndef GEOMETRY_H
#include "geometry.h"
#endif
#include "sprite.h"
#include "ledge.h"
#include "player.h"
#include "enemy.h"

#define PROXIMITY 300
#define COLLISION 2

struct GameWorld {
  struct Sprite *player;
  struct Sprite *enemy;
  int level_w;
  int level_h;
  int window_w;
  int window_h;
}
