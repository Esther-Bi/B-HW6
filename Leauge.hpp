#ifndef LEAUGE_HEADER
#define LEAUGE_HEADER

#include <iostream>
#include <vector>
#include "Schedule.hpp"
#include "Team.hpp"
#include "Game.hpp"

namespace esther {

    class Leauge {

    public:
        std::vector<Team*> allTeams;
        
        Leauge();
        void start_leauge();
        void print_leauge(int num);
        ~Leauge();
    };
}

#endif