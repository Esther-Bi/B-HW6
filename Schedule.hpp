#ifndef Schedule_HEADER
#define Schedule_HEADER

#include <iostream>
#include <vector>
#include "Game.hpp"
#include "Team.hpp"

namespace esther{

    class Schedule{

        public:
            std::vector<Team*> all;

            Schedule(std::vector<Team*> game_set);
            std::vector<Game*> all_games();
            ~Schedule();
            
    };
}

#endif