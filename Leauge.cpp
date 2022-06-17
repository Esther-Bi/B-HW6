#include <iostream>
#include "Leauge.hpp"
int const MAX_TEAMS = 20;
using namespace std;

namespace esther{

    Leauge::Leauge(){
        for (int i = 0 ; i < MAX_TEAMS ; i++) {
            if (i%2 == 0){
                this->allTeams.push_back(new Team(to_string(i),0.3));
            }
            else{
                this->allTeams.push_back(new Team(to_string(i),0.7));
            }
        }
    }

    void Leauge::start_leauge(){
        Schedule* schedule = new Schedule(this->allTeams);
        vector<Game*> leauge_games = schedule->all_games();
        for (unsigned int i = 0 ; i < leauge_games.size() ; i++) {
            leauge_games.at(i)->start();
        }
        sort(*this->allTeams.begin(), *this->allTeams.end());
    }

    void Leauge::print_leauge(int num){
        std::cout << "Leauge Leaders:" << std::endl;
        for (unsigned int i = 0 ; i < num ; i++) {
            std::cout << this->allTeams.at(i) << std::endl;
        }
        int max_wins = 0;
        Team* winner;
        for (unsigned int i = 0; i < MAX_TEAMS; i++){
            if(this->allTeams.at(i)->_winRowsMax > max_wins){
                max_wins = this->allTeams.at(i)->_winRowsMax;
                winner = this->allTeams.at(i);
            }
        }
        std::cout << "Most wins in a row: "<<std::endl;
        std::cout << winner->get_name() << " made " << max_wins << " wins in a row" << std::endl;
    }

    Leauge::~Leauge() {
        for (int i = (int)this->allTeams.size() - 1 ; i >= 0 ; i--) {
            delete this->allTeams.at((unsigned int)i);
        }
    }

}