#include<iostream>
#include<string>
using namespace std;
class GUI{
public:
    void getGUI(int pokemon1, int pokemon2);
};//make GUI class that make gui.
class Pokemon{
public:
    int pokemon_num1, pokemon_num2;
    string last_skill,last_skill2,eff,eff1,eff2;
    string name1, name2, type1, type2;
    string skill1_0, skill1_1, skill1_2, skill1_3, skill2_0, skill2_1, skill2_2, skill2_3;
    string type1_0, type1_1, type1_2, type1_3, type2_0, type2_1, type2_2, type2_3;
    int damage1_0=0, damage1_1=0, damage1_2=0, damage1_3=0, damage2_0=0, damage2_1=0, damage2_2=0, damage2_3=0;
    int HP1=0, HP2=0;
    int count1_0=0, count1_1=0, count1_2=0, count1_3=0, count2_0=0, count2_1=0, count2_2=0, count2_3=0;
    int skill_count1[4];
    int skill_count2[4];
    Pokemon(int num1, int num2);//set pokemon's inpormation
    void use_skill();//according turn, use skill and print. if using skills is faild, also print words
    int effect(string skill_type, string type);//print skill's effect and return skill's damage of change
    void end_game();//if game is end, print who is win
    void line1();//print first line in gui
    void line2();//print second line in gui
    void ID();//print line that include my student id
    void name_line();//print pokemon's name line
    void type_line();//print pokemon's type line
    void HP_line();//print pokemon's hp line

    void latest_line();//print latest skill

    void skill_line();//print pokemon's skill name, type, count
    void turn_check() {
        if (turn == 1) {
            eff1 = eff;
           
        }
        else if (turn == -1) {
            eff2 = eff;
           
        }
    }
    static int turn;
};//set pokemon, skill, type, count ..etc
int Pokemon::turn = 1;//set first pokemon turn
int main() {
    int num_1, num_2;
    int stop = 0;
    GUI battle;  //make pokemon num1, num2 and battle GUI
    cout << "Choose a Pokemon(0~4): ";
    cin >> num_1;
    cout << "Choose a Pokemon(0~4): ";
    cin >> num_2;  //get pokemon num
    if (num_1 == num_2)
    {
        cout << "You have to choose Pokemons different from each other." << endl;
        stop = 1;
    }//if num1 = num2, print words and end program
    if (stop == 0) {
        battle.getGUI(num_1, num_2);
    }
    //if num1 is not same num2, do getGUI
    return 0;
}
void GUI::getGUI(int pokemon1, int pokemon2) {
    Pokemon game1(pokemon1, pokemon2);//implement pokemon constructor
    game1.last_skill = "-";
    game1.last_skill2 = "-";
    game1.eff1 = "";
    game1.eff2 = "";
    while (game1.HP1 > 0 && game1.HP2 >0){//while all pokemon survive, print GUI
       
        game1.line1();
        game1.ID();
        game1.line2();
        game1.name_line();
        game1.type_line();
        game1.HP_line();
        game1.latest_line();
        game1.line2();
        game1.skill_line();
        game1.line2();
        game1.use_skill();
        cout << " "<<endl;
        
        
    }
    game1.end_game();//if any pokemon die, game is end
}
void Pokemon::line1() {//print first line in gui
    cout << "+-------------------------------------------------------------+" << endl;
}
void Pokemon::line2() {//print second line in gui
    cout << "+------------------------------+------------------------------+" << endl;
}
void Pokemon::ID() {//print line that include my student id
    cout << "| 2024-02 Object-Oriented Programming Pokemon Master          |" << endl;
}
Pokemon::Pokemon(int num1, int num2) {//set pokemon's inpormation
    pokemon_num1 = num1;
    pokemon_num2 = num2;
    switch (num1) {
        case 0: {
            name1 = "Pikachu";
            type1 = "Electric";
            HP1 = 35;
            type1_0 = "Normal";
            type1_1 = "Grass";
            type1_2 = "Electric";
            type1_3 = "Electric";
            damage1_0 = 4;
            damage1_1 = 8;
            damage1_2 = 10;
            damage1_3 = 15;
            count1_0 = 5;
            count1_1 = 5;
            count1_2 = 5;
            count1_3 = 3;
            skill1_0 = "Tackle";
            skill1_1 = "Grass Knot";
            skill1_2 = "Thunderbolt";
            skill1_3 = "Megabolt";
            break;
        }
        case 1: {
            name1 = "Dratini";
            type1 = "Water";
            HP1 = 41;
            type1_0 = "Normal";
            type1_1 = "Water";
            type1_2 = "Water";
            type1_3 = "Normal";
            damage1_0 = 4;
            damage1_1 = 3;
            damage1_2 = 13;
            damage1_3 = 20;
            count1_0 = 10;
            count1_1 = 5;
            count1_2 = 2;
            count1_3 = 1;
            skill1_0 = "Wrap";
            skill1_1 = "Aqua Tail";
            skill1_2 = "Water Pulse";
            skill1_3 = "Hyper Beam";
            break;
        }
        case 2: {
            name1 = "Eevee";
            type1 = "Normal";
            HP1 = 55;
            type1_0 = "Normal";
            type1_1 = "Ground";
            type1_2 = "Normal";
            type1_3 = "Water";
            damage1_0 = 4;
            damage1_1 = 8;
            damage1_2 = 12;
            damage1_3 = 15;
            count1_0 = 5;
            count1_1 = 3;
            count1_2 = 3;
            count1_3 = 1;
            skill1_0 = "Tackle";
            skill1_1 = "Sand Attack";
            skill1_2 = "Bite";
            skill1_3 = "Rain Dance";
            break;
        }
        case 3: {
            name1 = "Charmander";
            type1 = "Fire";
            HP1 = 39;
            type1_0 = "Normal";
            type1_1 = "Fire";
            type1_2 = "Ground";
            type1_3 = "Fire";
            damage1_0 = 4;
            damage1_1 = 11;
            damage1_2 = 7;
            damage1_3 = 14;
            count1_0 = 5;
            count1_1 = 5;
            count1_2 = 5;
            count1_3 = 5;
            skill1_0 = "Tackle";
            skill1_1 = "Flamethrower";
            skill1_2 = "Dig";
            skill1_3 = "Heat Wave";
            break;
        }
        case 4: {
            name1 = "Palkia";
            type1 = "Water";
            HP1 = 90;
            type1_0 = "Water";
            type1_1 = "Ground";
            type1_2 = "Water";
            type1_3 = "Normal";
            damage1_0 = 12;
            damage1_1 = 15;
            damage1_2 = 13;
            damage1_3 = 30;
            count1_0 = 10;
            count1_1 = 10;
            count1_2 = 10;
            count1_3 = 10;
            skill1_0 = "Hydro Pump";
            skill1_1 = "Earth Power";
            skill1_2 = "Surf";
            skill1_3 = "Spatial Rend";
            break;
        }
    }
    switch (num2) {
        case 0: {
            name2 = "Pikachu";
            type2 = "Electric";
            HP2 = 35;
            type2_0 = "Normal";
            type2_1 = "Grass";
            type2_2 = "Electric";
            type2_3 = "Electric";
            damage2_0 = 4;
            damage2_1 = 8;
            damage2_2 = 10;
            damage2_3 = 15;
            count2_0 = 5;
            count2_1 = 5;
            count2_2 = 5;
            count2_3 = 3;
            skill2_0 = "Tackle";
            skill2_1 = "Grass Knot";
            skill2_2 = "Thunderbolt";
            skill2_3 = "Megabolt";
            break;
        }
        case 1: {
            name2 = "Dratini";
            type2 = "Water";
            HP2 = 41;
            type2_0 = "Normal";
            type2_1 = "Water";
            type2_2 = "Water";
            type2_3 = "Normal";
            damage2_0 = 4;
            damage2_1 = 3;
            damage2_2 = 13;
            damage2_3 = 20;
            count2_0 = 10;
            count2_1 = 5;
            count2_2 = 2;
            count2_3 = 1;
            skill2_0 = "Wrap";
            skill2_1 = "Aqua Tail";
            skill2_2 = "Water Pulse";
            skill2_3 = "Hyper Beam";
            break;
        }
        case 2: {
            name2 = "Eevee";
            type2 = "Normal";
            HP2 = 55;
            type2_0 = "Normal";
            type2_1 = "Ground";
            type2_2 = "Normal";
            type2_3 = "Water";
            damage2_0 = 4;
            damage2_1 = 8;
            damage2_2 = 12;
            damage2_3 = 15;
            count2_0 = 5;
            count2_1 = 3;
            count2_2 = 3;
            count2_3 = 1;
            skill2_0 = "Tackle";
            skill2_1 = "Sand Attack";
            skill2_2 = "Bite";
            skill2_3 = "Rain Dance";
            break;
        }
        case 3: {
            name2 = "Charmander";
            type2 = "Fire";
            HP2 = 39;
            type2_0 = "Normal";
            type2_1 = "Fire";
            type2_2 = "Ground";
            type2_3 = "Fire";
            damage2_0 = 4;
            damage2_1 = 11;
            damage2_2 = 7;
            damage2_3 = 14;
            count2_0 = 5;
            count2_1 = 5;
            count2_2 = 5;
            count2_3 = 5;
            skill2_0 = "Tackle";
            skill2_1 = "Flamethrower";
            skill2_2 = "Dig";
            skill2_3 = "Heat Wave";
            break;
        }
        case 4: {
            name2 = "Palkia";
            type2 = "Water";
            HP2 = 90;
            type2_0 = "Water";
            type2_1 = "Ground";
            type2_2 = "Water";
            type2_3 = "Normal";
            damage2_0 = 12;
            damage2_1 = 15;
            damage2_2 = 13;
            damage2_3 = 30;
            count2_0 = 10;
            count2_1 = 10;
            count2_2 = 10;
            count2_3 = 10;
            skill2_0 = "Hydro Pump";
            skill2_1 = "Earth Power";
            skill2_2 = "Surf";
            skill2_3 = "Spatial Rend";
            break;
        }
    }
    skill_count1[0] = count1_0;
    skill_count1[1] = count1_1;
    skill_count1[2] = count1_2;
    skill_count1[3] = count1_3;
    skill_count2[0] = count2_0;
    skill_count2[1] = count2_1;
    skill_count2[2] = count2_2;
    skill_count2[3] = count2_3;
};
void Pokemon::use_skill() {//according turn, use skill and print. if using skills is faild, also print words
    int skill;
    cout << "Choose a skill (0~3): ";
    cin >> skill; //get skill num from player
    if (turn == 1)
    {
        switch (skill)
        {
            case 0:
                if (count1_0 == 0){//if pokemon don't have count, fail to use skill
                    cout << name1 << " failed to perform " << skill1_0 << "." << endl;
                 
                    break;
                }
                else { //if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name1 << " used " << skill1_0 << "." << endl;
                    HP2 = HP2 - (effect(type1_0, type2) + damage1_0);
                    count1_0 -= 1;
                    last_skill = skill1_0;
                    break;
                }
            case 1:
                if (count1_1 == 0){//if pokemon don't have count, fail to use skill
                    cout << name1 << " failed to perform " << skill1_1 << "." << endl;
                 
                    break;
                }
                else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name1 << " used " << skill1_1 << "." << endl;
                    HP2 = HP2 - (effect(type1_1, type2) + damage1_1);
                    count1_1 -= 1;
                    last_skill = skill1_1;
                    break;
                }
            case 2:
                if (count1_2 == 0){//if pokemon don't have count, fail to use skill
                    cout << name1 << " failed to perform " << skill1_2 << "." << endl;
                   
                    break;
                }
                else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name1 << " used " << skill1_2 << "." << endl;
                    HP2 = HP2 -(effect(type1_2, type2) + damage1_2);
                    count1_2 -= 1;
                    last_skill = skill1_2;
                    break;
                }
            case 3:
                if (count1_3 == 0){//if pokemon don't have count, fail to use skill
                    cout << name1 << " failed to perform " << skill1_3 << "." << endl;
                  
                    break;
                }
                else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name1 << " used " << skill1_3 << "." << endl;
                    HP2 = HP2 - (effect(type1_3, type2) + damage1_3);
                    count1_3 -= 1;
                    last_skill = skill1_3;
                    break;
                }
        }
    }
    else if (turn == -1)
    {
        switch (skill) {
            case 0:
                if (count2_0 == 0) {//if pokemon don't have count, fail to use skill
                    cout << name2 << " failed to perform " << skill2_0 << "." << endl;
                    
                    break;
                } else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name2 << " used " << skill2_0 << "." << endl;
                    HP1 = HP1 - (effect(type2_0, type1) + damage2_0);
                    count2_0 -= 1;
                    last_skill2 = skill2_0;
                    break;
                }
            case 1:
                if (count2_1 == 0) {//if pokemon don't have count, fail to use skill
                    cout << name2 << " failed to perform " << skill2_1 << "." << endl;
                    
                    break;
                } else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name2 << " used " << skill2_1 << "." << endl;
                    HP1 = HP1 - (effect(type2_1, type1) + damage2_1);
                    count2_1 -= 1;
                    last_skill2 = skill2_1;
                    break;
                }
            case 2:
                if (count2_2 == 0) {//if pokemon don't have count, fail to use skill
                    cout << name2 << " failed to perform " << skill2_2 << "." << endl;
                    
                    break;
                } else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name2 << " used " << skill2_2 << "." << endl;
                    HP1 = HP1 - (effect(type2_2, type1) + damage2_2);
                    count2_2 -= 1;
                    last_skill2 = skill2_2;
                    break;
                }
            case 3:
                if (count2_3 == 0) {//if pokemon don't have count, fail to use skill
                    cout << name2 << " failed to perform " << skill2_3 << "." << endl;
                    
                    break;
                } else {//if using skill is success, print words and effect and decrease another pokemon's hp
                    cout << name2 << " used " << skill2_3 << "." << endl;
                    HP1 = HP1 - (effect(type2_3, type1) + damage2_3);
                    count2_3 -=1;
                    last_skill2 = skill2_3;
                    break;
                }
        }
    }
    turn *= -1;
}
int Pokemon::effect(string skill_type, string type) {//print skill's effect and return skill's damage of change
    
    if (skill_type=="Normal"){
        cout << "It was effective." << endl;
        eff = "It was effective.";
        turn_check();
        return 0;
    }
    else if (skill_type == "Ground"){
        if (type == "Electric" || type == "Fire"){
            cout << "It was super effective." << endl;
            eff = "It was super effective.";
            turn_check();
            return 5;
        }
        else if (type == "Grass"){
            cout << "It was not very effective." << endl;
            eff = "It was not very effective.";
            turn_check();
            return -3;
        }
        else{
            cout << "It was effective." << endl;
            eff = "It was effective.";
            turn_check();
            return 0;
        }
    }
    else if (skill_type == "Electric"){
        if (type == "Ground" || type == "Eletric" || type == "Grass") {
            cout << "It was not very effective." << endl;
            eff = "It was not very effective.";
            turn_check();
            return -3;
        } else if (type == "Water") {
            cout << "It was super effective." << endl;
            eff = "It was super effective.";
            turn_check();
            return 5;
        } else {
            cout << "It was effective." << endl;
            eff = "It was effective.";
            turn_check();
            return 0;
        }
    }
    else if (skill_type == "Water"){
        if (type == "Ground" || type == "Fire"){
            cout << "It was super effective." << endl;
            eff = "It was super effective.";
            turn_check();
            return 5;
        }
        else if (type == "Water" || type == "Grass"){
            cout << "It was not very effective." << endl;
            eff = "It was not very effective.";
            turn_check();
            return -3;
        }
        else {
            cout << "It was effective." << endl;
            eff = "It was effective.";
            turn_check();
            return 0;
        }
    }
    else if (skill_type == "Grass") {
        if (type == "Water") {
            cout << "It was super effective." << endl;
            eff = "It was super effective.";
            turn_check();
            return 5;
        } else if (type == "Ground" || type == "Grass" || type == "Fire") {
            cout << "It was not very effective." << endl;
            eff = "It was not very effective.";
            turn_check();
            return -3;
        } else{
            cout << "It was effective." << endl;
            eff = "It was effective.";
            turn_check();
            return 0;
        }
    }
    else if (skill_type == "Fire") {
        if (type == "Water" || type == "Fire") {
            cout << "It was not very effective." << endl;
            eff = "It was not very effective.";
            turn_check();
            return -3;
        } else if (type == "Grass") {
            cout << "It was super effective." << endl;
            eff = "It was super effective.";
            turn_check();
            return 5;
        } else {
            cout << "It was effective." << endl;
            eff = "It was effective.";
            turn_check();
            return 0;
        }
    }

    return 0;
}
void Pokemon::end_game() {//if game is end, print who is win
    if (HP1 <= 0){//if right pokemon is win, print
        cout << "===============================================================" << endl;
        cout << "Match Result: " << name2 << " defeats " << name1 << endl;
    }
    else if (HP2 <= 0){//if left pokemon is win, print
        cout << "===============================================================" << endl;
        cout << "Match Result: " << name1 << " defeats " << name2 << endl;
    }
}
void Pokemon::name_line(){//print pokemon's name line
    string bar = "| ";
    if (turn == 1){
        bar.append(name1);
        bar.append(" (*)");
        bar.resize(31, ' ');
        bar.append("| ");
        bar.append(name2);
        bar.resize(62, ' ');
        bar.append("|");
    }
    else if (turn == -1){
        bar.append(name1);
        bar.resize(31, ' ');
        bar.append("| ");
        bar.append(name2);
        bar.append(" (*)");
        bar.resize(62, ' ');
        bar.append("|");
    }
    cout << bar << endl;
}
void Pokemon::type_line() {//print pokemon's type line
    string type_ = "| Type: ";
    type_.append(type1);
    type_.resize(31, ' ');
    type_.append("| Type: ");
    type_.append(type2);
    type_.resize(62, ' ');
    type_.append("|");
    cout << type_ << endl;
}
void Pokemon::HP_line() {//print pokemon's hp line
    string K;
    string hp = "| HP: ";
    K = to_string(HP1);
    hp.append(K);
    hp.resize(31, ' ');
    hp.append("| HP: ");
    K = to_string(HP2);
    hp.append(K);
    hp.resize(62, ' ');
    hp.append("|");
    cout << hp << endl;
}
void Pokemon::latest_line() {
    // 기본 틀
    string leftSkillLine = "| Latest Skill: ";
    string leftEffLine = "| ";
    string rightSkillLine = "| Latest Skill: ";
    string rightEffLine = "| ";
    string separator = "+------------------------------+------------------------------+";

  
    leftSkillLine.append(last_skill).resize(31, ' ');
    rightSkillLine.append(last_skill2).resize(31, ' ');
    leftEffLine.append(eff1).resize(31, ' ');
    rightEffLine.append(eff2).resize(31, ' ');

 
    // 출력
    cout << separator << endl;
    cout << leftSkillLine << rightSkillLine << "|" << endl;
    cout << leftEffLine << rightEffLine << "|" << endl;
    
}


void Pokemon::skill_line() {//print pokemon's skill line
    string sl, tl, dl, cl;
    string K;
    string skill1, skill2 ,type1, type2;
    int damage1, damage2, count1, count2;
    for (int i = 0; i<4; i++){
        switch (i) {
            case 0:{
                skill1 = skill1_0;
                skill2 = skill2_0;
                type1 = type1_0;
                type2 = type2_0;
                damage1 = damage1_0;
                damage2 = damage2_0;
                count1 = count1_0;
                count2 = count2_0;
                break;
            }
            case 1:{
                skill1 = skill1_1;
                skill2 = skill2_1;
                type1 = type1_1;
                type2 = type2_1;
                damage1 = damage1_1;
                damage2 = damage2_1;
                count1 = count1_1;
                count2 = count2_1;
                break;
            }
            case 2:{
                skill1 = skill1_2;
                skill2 = skill2_2;
                type1 = type1_2;
                type2 = type2_2;
                damage1 = damage1_2;
                damage2 = damage2_2;
                count1 = count1_2;
                count2 = count2_2;
                break;
            }
            case 3:{
                skill1 = skill1_3;
                skill2 = skill2_3;
                type1 = type1_3;
                type2 = type2_3;
                damage1 = damage1_3;
                damage2 = damage2_3;
                count1 = count1_3;
                count2 = count2_3;
                break;
            }
        }
        K = to_string(i);
        sl = "| (";
        sl.append(K);
        sl.append(") ");
        sl.append(skill1);
        sl.resize(31, ' ');
        sl.append("| (");
        sl.append(K);
        sl.append(") ");
        sl.append(skill2);
        sl.resize(62, ' ');
        sl.append("|");
        tl = "|     - Type: ";
        tl.append(type1);
        tl.resize(31, ' ');
        tl.append("|     - Type: ");
        tl.append(type2);
        tl.resize(62, ' ');
        tl.append("|");
        dl = "|     - Damage: ";
        K = to_string(damage1);
        dl.append(K);
        dl.resize(31, ' ');
        dl.append("|     - Damage: ");
        K = to_string(damage2);
        dl.append(K);
        dl.resize(62, ' ');
        dl.append("|");
        cl = "|     - Count: ";
        K = to_string(count1);
        cl.append(K);
        cl.append("(");
        K = to_string(skill_count1[i]);
        cl.append(K);
        cl.append(")");
        cl.resize(31, ' ');
        cl.append("|     - Count: ");
        K = to_string(count2);
        cl.append(K);
        cl.append("(");
        K = to_string(skill_count2[i]);
        cl.append(K);
        cl.append(")");
        cl.resize(62, ' ');
        cl.append("|");
        cout << sl << endl;
        cout << tl << endl;
        cout << dl << endl;
        cout << cl << endl;
    }
}


