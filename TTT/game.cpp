/*   IN THE NAME OF GOD
/*                                  /   \                                                                   (Hello)//JSM//*/      
/*                                 /*****\                                                                              */
/*     Jai Shree Mataji           /       \ |\| |_| $ |-| K                                                            */
/*
    $$$$AUTHOR$$$$
                         ON 09/07/2020     
	ANUSHK GAUTAM
    190003012
    MECHANICAL ENGINEERING 
*/
// GAME NAME => TIC-TAC-TOE / ZERO-CROSS
#include<vector>
#include<iostream>
#include<algorithm>                
#include<string.h>                 
#include<bits/stdc++.h>            
#include<cstring>                  
#include<map>                     
#include<cmath>                  
#include<set>
using namespace std;            
#define ll long long int        
#define YY cout<<"YES"
#define NN cout<<"NO"
#define EE cout<<"\n"
#define ee cout<<"\n"
#define ne cout<<"-1"
#define pb push_back 
#define ff first
#define ss second
#define mkp make_pair    
#define mkt make_tuple
#define sall(v ) sort(v.begin(), v.end())      
#define all(v )  v.begin(), v.end()      
#define fo(i , n) for(ll i = 0 ; i < n ; i++)
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
//board.complete.
int i,j,k,l,CHECKOUTWINCONDITION(),player = 1,ultra;
char POP;
//var.declared.
void board();
/*********************************************
    FOR MY CODE.
	RETURN VALUE vs GAME STATUS
    1 =>GAME OVER + RESULT DECLARATION
   -1 =>GAME IS IN PROGRESSION
    O =>GAME OVER + NO RES.
************************************/
int CHECKOUTWINCONDITION()
{
    if (square[1] == square[2] && square[2] == square[3])
    return 1;//ROW
    else if (square[4] == square[5] && square[5] == square[6])
    return 1;//ROW
    else if (square[7] == square[8] && square[8] == square[9])
    return 1;//ROW
    else if (square[1] == square[4] && square[4] == square[7])
    return 1;//COL.
    else if (square[2] == square[5] && square[5] == square[8])
    return 1;//COL.
    else if (square[3] == square[6] && square[6] == square[9])
    return 1;//COL.
    else if (square[1] == square[5] && square[5] == square[9])
    return 1;//DIAG.
    else if (square[3] == square[5] && square[5] == square[7])
    return 1;//DIAG.
    //no prob. till here.
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;//game will over here.

    else
        return -1;//when nobody win.
        
}
//checking comp.till here.
void board()
{
    system("cls");
    cout << "\n\n\t TIC-TAC-TOE \n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    
	
	cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    /*infrastr.
     _____|_____|_____ good.
     or
         |     |      
    ***** ***** *****    
     */
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;   //checking done

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int main()
{   
//    cout<<"Player 1 please start the game by enter a number b/w 1-9 \n.";
    do
    {
        board();
        //p1 max 5
        //p2 max 4
        //ex.1 2 1 2 1 2 1 2 1 
        // p1---p2
		player=(player%2)?1:2;

        cout << "Player " << player;
		cout << ", enter a number:  ";   //checking done.
        
		// p1/p2 have to enter no.
		cin >> ultra;
        POP=(player == 1) ? 'X' : 'O';

/*
we have 3+3+2 possibilities of winning.
R+R+R
C+C+C
D+D
*/

        if (ultra == 1 && square[1] == '1')
//CHOICE : ultra--- sq[]...
            square[1] = POP;
        else if (ultra == 2 && square[2] == '2')

            square[2] = POP;
        else if (ultra == 3 && square[3] == '3')

            square[3] = POP;
        else if (ultra == 4 && square[4] == '4')

            square[4] = POP;
        else if (ultra == 5 && square[5] == '5')

            square[5] = POP;
        else if (ultra == 6 && square[6] == '6')

            square[6] = POP;
        else if (ultra == 7 && square[7] == '7')

            square[7] = POP;
        else if (ultra == 8 && square[8] == '8')

            square[8] = POP;
        else if (ultra == 9 && square[9] == '9')

            square[9] = POP;        //alright no probl.
        //otherwise it's invaild move...
		else
        {
            cout<<"SORRY IT IS AN INVALID MOVE\nPLEASE TRY ANOTHER CHANCE";

            player--;
            cin.ignore();
            cin.get();
        }
        i=CHECKOUTWINCONDITION();
//checking done.
        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";
        EE;
        

    cin.ignore();
    cin.get();
    return 0;
}
//done.
