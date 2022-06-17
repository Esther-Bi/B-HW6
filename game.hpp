#ifndef GAME_HEADER
#define GAME_HEADER

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "Team.hpp"

namespace esther{

    class Game{

        public:
            Team* _home;
            Team* _away;

            Game(Team* home,Team* away);
            int rand_num(int range_from, int range_to);
            Team* start();
            ~Game();
    };
}

#endif