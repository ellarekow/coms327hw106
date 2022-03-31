#ifndef MAP_H
#define MAP_H

#include "consts.h"
#include "heap.h"

#include <assert.h>
#include <stdint.h>

typedef enum __attribute__((__packed__)) terrain_type
{
    ter_boulder,
    ter_tree,
    ter_path,
    ter_mart,
    ter_center,
    ter_grass,
    ter_clearing,
    ter_mountain,
    ter_forest,
    num_terrain_types
} terrain_type_t;

class Map
{
    terrain_type_t map[MAP_Y][MAP_X];
    uint8_t height[MAP_Y][MAP_X];
    character_t *cmap[MAP_Y][MAP_X];
    heap_t turn;
    int32_t num_trainers;
    int8_t n, s, e, w;

    static int place_pokemart();
    static void find_building_location(pair_t p);
};

#endif