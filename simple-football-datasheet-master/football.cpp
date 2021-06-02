#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// declarer football player structer
struct footBall_Player{
    string playerName;
    string player_Position;
    int num_Touchdowns;
    int num_Catches;
    double num_Passing_Yards;
    double num_Recieving_Yards;
    double num_Rushing_yards;
};

// delcare lenght of the array
const int LENGHT = 10;

// declayr new varible as a array of 10 components
footBall_Player newPlayer[LENGHT];

// declare function
void menu();
void input_Player(struct footBall_Player *NP);
void output_Player(struct footBall_Player *NP);
void save_Data(struct footBall_Player *NP);
void read_saved_data(struct footBall_Player *NP);
void search_Data(struct footBall_Player *NP);

// main function
int main(){
    
    menu();
    return 0;
}

// menu function
void menu(){
    
    // declare menu input
    int menu_Press;
    cout << "\n" << "enter 2 to input new player data" << "\n"
    << "enter 3 to output player data" << "\n"
    << "enter 4 to save data to a file" << "\n"
    <<"enter 5 to read saved data" << "\n"
    <<"enter 6 to search" << "\n"
    <<"enter 7 to quite" << "\n";
    // takes in menu press
    cin >> menu_Press;
    if(menu_Press == 2){
        input_Player(newPlayer);
    }
    else if(menu_Press == 3){
        output_Player(newPlayer);
    }
    else if(menu_Press == 4){
        save_Data(newPlayer);
    }
    else if(menu_Press == 5){
        read_saved_data(newPlayer);
    }
    else if(menu_Press == 6){
        search_Data(newPlayer);
    }
    else if(menu_Press == 7){
        cout << "Goodbye";

    }
    // user has entered the wrong menu press
    else{
        cout << "Error, please choose from the list." << "\n";
        menu();
    }
  
}

// input player data function
void input_Player(struct footBall_Player *NP){

    // takes input into the struct
    for(int i = 0; i < 2; i++){
        cout << "enter the player name: ";
        cin >> NP[i].playerName;
        cout << "enter the player position: ";
        cin >> NP[i].player_Position;
        cout << "enter the number of touchdowns: ";
        cin >> NP[i].num_Touchdowns;
        cout << "enter the number of catches: ";
        cin >> NP[i].num_Catches;
        cout << "enter the number of passing yards: ";
        cin >> NP[i].num_Passing_Yards;
        cout << "enter the number of recieving yards: ";
        cin >> NP[i].num_Recieving_Yards;
        cout << "enter the number of rushing yards: ";
        cin >> NP[i].num_Rushing_yards;
        cout << "\n";
    }
    // calls menu function agian
    menu();
}

// the ouput player data function
void output_Player(struct footBall_Player *NP){
    for(int i = 0; i < 2; i++){
        cout << "Player: " << NP[i].playerName << "\n";
        cout <<"Positon: " <<  NP[i].player_Position << "\n";
        cout <<"Touchdown Amount: " << NP[i].num_Touchdowns << "\n";
        cout <<"Number of Catches: " << NP[i].num_Catches << "\n";
        cout <<"Number of passing yards: " << NP[i].num_Passing_Yards << "\n";
        cout <<"Number of recieving yards: " << NP[i].num_Recieving_Yards << "\n";
        cout <<"Number of rushing yards: " << NP[i].num_Rushing_yards << "\n";
        cout <<"\n";
    }
    // calls menu function again
    menu();
}
// save data function
void save_Data(struct footBall_Player *NP){
    // create new file
    ofstream outfile;
    outfile.open("saved_footBall_Data.txt");
    // save array to file
    if (outfile.is_open()){
        for(int i = 0; i < LENGHT; i++){
            outfile << NP[i].playerName << " ";
            outfile << NP[i].player_Position << " ";
            outfile << NP[i].num_Touchdowns  << " ";
            outfile << NP[i].num_Catches << " ";
            outfile << NP[i].num_Passing_Yards << " ";
            outfile << NP[i].num_Recieving_Yards << " ";
            outfile << NP[i].num_Rushing_yards << " ";
            }
    }
   outfile.close();
   menu();
}

//read saved data
void read_saved_data(struct footBall_Player *NP){
     ifstream infile("saved_footBall_Data.txt");
    string line;

    if (infile.is_open()) {
        cout << "Reading file... " << endl;
        //while still reading data from file
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    }
    else {
        cout << "Unable to open file!";

    }
    menu();
}

// search data function
void search_Data(struct footBall_Player *NP){
    
    int index;
    index = index - 1;
    string playerInput;
    
    cout << " type name, to change player name"<<"\n"
          <<"type postion to change the postion" <<"\n"
          <<"type touchdowns to change touchdowns"<<"\n"
          <<"type catches to change catches"<<"\n"
          <<"type passing to change passing yards"<<"\n"
          <<"type recieving to change recieving yards"<<"\n"
          <<"type rushing to change recieving yards"<<"\n";
    cin >> playerInput;
    cout << "enter the index";
    cin >> index;
    if(playerInput == "name"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].playerName;
    }
    else if (playerInput == "position"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].player_Position;

    }
    else if (playerInput == "touchdowns"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].num_Touchdowns;
    }
    else if(playerInput == "catches"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].num_Catches;
    }
    else if (playerInput == "passing"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].num_Passing_Yards;
    }
    else if (playerInput == "recieving"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].num_Recieving_Yards;
    }
    else if(playerInput == "recieving"){
        cout <<"change the " << index +1 <<"index: ";
        cin >> NP[index].num_Rushing_yards ;
    };
    
}