#include "game.h"
#include "types.h"



#ifndef _H_UI
#define _H_UI


void ui_draw_frame     ();
void ui_update_msg     (worm_t *worm, food_t food[], exitmsg_t exitmsg);
void ui_draw_food      (food_t food[]);
void ui_draw_obstacles (pos_t obstacles[]);


#endif

