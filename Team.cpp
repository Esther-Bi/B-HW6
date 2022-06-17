#include "Team.hpp"

namespace esther{

    Team::Team(std::string name,double talent){
        this->talent = talent;
        this->_loss = 0;
        this->_victory = 0;
        this->_points = 0;
        this->_inRow = 0;
        this->name = name;
        this->_winRowsMax = 0;
    }

    std::string Team::get_name(){
        return this->name;
    }

    void Team::set_name(std::string name){
        this->name = name;
    }

    double Team::get_talent(){
        return this->talent;
    }

    std::ostream &operator<<(std::ostream &os,Team &team){
        os << team.get_name() << "  Win: "<<team._victory << "  ,  Loss: " << team._loss << "  ,  Points: " << team._points << std::endl;
        return os;    
    }

    bool Team::operator<(const Team & team){
        if (this->_victory>team._victory){
            return true;
        }
        else if (this->_victory == team._victory){
            if(this->_points>team._points)
                return true;
        }
        return false;
    }

    bool operator<(const Team & team1,const Team & team2){
        if (team1._victory>team2._victory){
            return true;
        }
        else if (team1._victory == team2._victory){
            if(team1._points>team2._points)
                return true;
        }
        return false;
    }

    void Team::win(bool in_a_row){
        if(in_a_row){
            _inRow++;
        }
        else{
            if(_inRow>_winRowsMax){
                _winRowsMax = _inRow;
                _inRow = 0;
            }
            else{
                _inRow = 0;
            }
        }
    }

    Team::~Team(){
    }

}