#ifndef WORLD_H
#define WORLD_H

#include "heap.h"
#include "character.h"
#include "consts.h"

class World
{
    map_t *world[WORLD_SIZE][WORLD_SIZE];
    pair_t cur_idx;
    map_t *cur_map;
    /* Please distance maps in world, not map, since *
     * we only need one pair at any given time.      */
    int hiker_dist[MAP_Y][MAP_X];
    int rival_dist[MAP_Y][MAP_X];
    character_t pc;
    int quit;

    World();
};

#endif