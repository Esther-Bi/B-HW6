#include "Schedule.hpp"

namespace esther{

    Schedule::Schedule(std::vector<Team*> game_set){
        this->all = game_set;
    }

    std::vector<Game*> Schedule::all_games(){
        std::vector<Game*> all_victories;
        // each team with each team
        for (int i = 0 ; i < this->all.size() ; i++) {
            for (int j = 0 ; j < this->all.size() ; j++) {
                if(i != j){
                    all_victories.push_back(new Game(this->all.at(i), this->all.at(j)));
                }
            }
        }
        return all_victories;
    }

    Schedule::~Schedule(){
    }

}