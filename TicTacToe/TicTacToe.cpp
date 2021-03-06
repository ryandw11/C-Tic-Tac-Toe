// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <random>
#include <Windows.h>
using namespace std;

string board[9] = {" ", " ", " ", /*Line 2*/ " ", " ", " ", /*Line 3*/ " ", " ", " "};

void printBoard();
bool checkPlayerWin();
bool checkComputerWin();
bool checkTie();
void botPlayHard();
void botPlayMedium();
void botPlayEasy();

bool checkTie() {
	if (!checkComputerWin() && !checkPlayerWin()) {
		if (board[0] != " " && board[1] != " " && board[2] != " " && board[3] != " " && board[4] != " " && board[5] != " " && board[6] != " " && board[7] != " " && board[8] != " ") {
			return true;
		}
	}
	return false;
}

void printBoard() {
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "       " << board[0] << "  |  " << board[1] << "  |  " << board[2] << endl;
	cout << "     -----------------" << endl;
	cout << "       " << board[3] << "  |  " << board[4] << "  |  " << board[5] << endl;
	cout << "     -----------------" << endl;
	cout << "       " << board[6] << "  |  " << board[7] << "  |  " << board[8] << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
}

bool checkPlayerWin() {
	if (board[0] == "X" && board[1] == "X" && board[2] == "X") {
		return true;
	}
	else if (board[3] == "X" && board[4] == "X" && board[5] == "X") {
		return true;
	}
	else if (board[6] == "X" && board[7] == "X" && board[8] == "X") {
		return true;
	}
	else if (board[0] == "X" && board[3] == "X" && board[6] == "X") {
		return true;
	}
	else if (board[1] == "X" && board[4] == "X" && board[7] == "X") {
		return true;
	}
	else if (board[2] == "X" && board[5] == "X" && board[8] == "X") {
		return true;
	}
	else if (board[0] == "X" && board[4] == "X" && board[8] == "X") {
		return true;
	}
	else if (board[2] == "X" && board[4] == "X" && board[6] == "X") {
		return true;
	}
	return false;
}

bool checkComputerWin() {
	if (board[0] == "O" && board[1] == "O" && board[2] == "O") {
		return true;
	}
	if (board[3] == "O" && board[4] == "O" && board[5] == "O") {
		return true;
	}
	if (board[6] == "O" && board[7] == "O" && board[8] == "O") {
		return true;
	}
	if (board[0] == "O" && board[3] == "O" && board[6] == "O") {
		return true;
	}
	if (board[1] == "O" && board[4] == "O" && board[7] == "O") {
		return true;
	}
	if (board[2] == "O" && board[5] == "O" && board[8] == "O") {
		return true;
	}
	if (board[0] == "O" && board[4] == "O" && board[8] == "O") {
		return true;
	}
	if (board[2] == "O" && board[4] == "O" && board[6] == "O") {
		return true;
	}
	return false;
}

void botPlayEasy() {
	random_device rand;
	bool found = false;
	int saftey = 0; //Used so the game doesn't crash if one can't be found.
	while (!found) {
		int num = rand() % 9;
		if (board[num] == " ") {
			board[num] = "O";
			found = true;
			return;
		}
	}
}

void botPlayMedium() {
	random_device rand;
	/* First check if the bot is going to win.   */
	//Row 1
	if (board[0] == "O" && board[1] == "O" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	else if (board[0] == "O" && board[2] == "O" && board[1] == " ") {
		board[1] = "O";
		return;
	}
	else if (board[1] == "O" && board[2] == "O" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Row 2 
	if (board[3] == "O" && board[4] == "O" && board[5] == " ") {
		board[5] = "O";
		return;
	}
	else if (board[3] == "O" && board[5] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[5] == "O" && board[3] == " ") {
		board[3] = "O";
		return;
	}
	//Row 3
	if (board[6] == "O" && board[7] == "O" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[6] == "O" && board[8] == "O" && board[7] == " ") {
		board[7] = "O";
		return;
	}
	else if (board[7] == "O" && board[8] == "O" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	//Down 1
	if (board[0] == "O" && board[3] == "O" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	else if (board[0] == "O" && board[6] == "O" && board[3] == " ") {
		board[3] = "O";
		return;
	}
	else if (board[3] == "O" && board[6] == "O" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Down 2
	if (board[1] == "O" && board[4] == "O" && board[7] == " ") {
		board[7] = "O";
		return;
	}
	else if (board[1] == "O" && board[7] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[7] == "O" && board[1] == " ") {
		board[1] = "O";
		return;
	}
	//Down 3
	if (board[2] == "O" && board[5] == "O" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[2] == "O" && board[8] == "O" && board[5] == " ") {
		board[5] = "O";
		return;
	}
	else if (board[5] == "O" && board[8] == "O" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	//Diagnal 1
	if (board[0] == "O" && board[4] == "O" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[0] == "O" && board[8] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[8] == "O" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Diagnal 2
	if (board[2] == "O" && board[4] == "O" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	else if (board[2] == "O" && board[6] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[6] == "O" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	//Random
	bool found = false;
	int saftey = 0; //Used so the game doesn't crash if one can't be found.
	while (!found) {
		int num = rand() % 9;
		if (board[num] == " ") {
			board[num] = "O";
			found = true;
			return;
		}
	}
}

void botPlayHard() {
	random_device rand;
	/* First check if the bot is going to win.   */
	//Row 1
	if (board[0] == "O" && board[1] == "O" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	else if (board[0] == "O" && board[2] == "O" && board[1] == " ") {
		board[1] = "O";
		return;
	}
	else if (board[1] == "O" && board[2] == "O" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Row 2 
	if (board[3] == "O" && board[4] == "O" && board[5] == " ") {
		board[5] = "O";
		return;
	}
	else if (board[3] == "O" && board[5] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[5] == "O" && board[3] == " ") {
		board[3] = "O";
		return;
	}
	//Row 3
	if (board[6] == "O" && board[7] == "O" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[6] == "O" && board[8] == "O" && board[7] == " ") {
		board[7] = "O";
		return;
	}
	else if (board[7] == "O" && board[8] == "O" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	//Down 1
	if (board[0] == "O" && board[3] == "O" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	else if (board[0] == "O" && board[6] == "O" && board[3] == " ") {
		board[3] = "O";
		return;
	}
	else if (board[3] == "O" && board[6] == "O" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Down 2
	if (board[1] == "O" && board[4] == "O" && board[7] == " ") {
		board[7] = "O";
		return;
	}
	else if (board[1] == "O" && board[7] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[7] == "O" && board[1] == " ") {
		board[1] = "O";
		return;
	}
	//Down 3
	if (board[2] == "O" && board[5] == "O" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[2] == "O" && board[8] == "O" && board[5] == " ") {
		board[5] = "O";
		return;
	}
	else if (board[5] == "O" && board[8] == "O" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	//Diagnal 1
	if (board[0] == "O" && board[4] == "O" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[0] == "O" && board[8] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[8] == "O" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Diagnal 2
	if (board[2] == "O" && board[4] == "O" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	else if (board[2] == "O" && board[6] == "O" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "O" && board[6] == "O" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	/*
	  If the player can win. Will it win?
	*/
	if (board[0] == "X" && board[1] == "X" && board[2] == " ") { //Problematic
		board[2] = "O";
		return;
	}
	else if (board[0] == "X" && board[2] == "X" && board[1] == " ") {
		board[1] = "O";
		return;
	}
	else if (board[1] == "X" && board[2] == "X" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Row 2 
	if (board[3] == "X" && board[4] == "X" && board[5] == " ") {
		board[5] = "O";
		return;
	}
	else if (board[3] == "X" && board[5] == "X" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "X" && board[5] == "X" && board[3] == " ") {
		board[3] = "O";
		return;
	}
	//Row 3
	if (board[6] == "X" && board[7] == "X" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[6] == "X" and board[8] == "X" && board[7] == " ") {
		board[7] = "O";
		return;
	}
	else if (board[7] == "X" && board[8] == "X" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	//Down 1
	if (board[0] == "X" && board[3] == "X" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	else if (board[0] == "X" && board[6] == "X" && board[3] == " ") {
		board[3] = "O";
		return;
	}
	else if (board[3] == "X" && board[6] == "X" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Down 2
	if (board[1] == "X" && board[4] == "X" && board[7] == " ") {
		board[7] = "O";
		return;
	}
	else if (board[1] == "X" && board[7] == "X" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "X" && board[7] == "X" && board[1] == " ") {
		board[1] = "O";
		return;
	}
	//Down 3
	if (board[2] == "X" && board[5] == "X" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[2] == "X" && board[8] == "X" && board[5] == " ") {
		board[5] = "O";
		return;
	}
	else if (board[5] == "X" && board[8] == "X" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	//Diagnal 1
	if (board[0] == "X" && board[4] == "X" && board[8] == " ") {
		board[8] = "O";
		return;
	}
	else if (board[0] == "X" && board[8] == "X" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "X" && board[8] == "X" && board[0] == " ") {
		board[0] = "O";
		return;
	}
	//Diagnal 2
	if (board[2] == "X" && board[4] == "X" && board[6] == " ") {
		board[6] = "O";
		return;
	}
	else if (board[2] == "X" && board[6] == "X" && board[4] == " ") {
		board[4] = "O";
		return;
	}
	else if (board[4] == "X" && board[6] == "X" && board[2] == " ") {
		board[2] = "O";
		return;
	}
	/*
	  None found then it will search for a random one.
	*/
	bool found = false;
	int saftey = 0; //Used so the game doesn't crash if one can't be found.
	while (!found) {
		int num = rand() % 9;
		if(board[num] == " "){
			board[num] = "O";
			found = true;
			return;
		}
	}

}

int main()
{
	string input;
	cout << "Tic - Tac - Toe" << endl;
	cout << "By: Ryan" << endl;
	while (true) {
		cout << "Do you want to play singleplayer or multiplayer?" << endl;
		cin >> input;
		if (input == "singleplayer" || input == "single" || input == "Singleplayer") {
			cout << "Select your cpu mode: (Easy, Medium, Hard)" << endl;
			cin >> input;
			if (input == "hard" || input == "Hard") {
				int i;
				bool active = true;
				printBoard();
				while (active) {
					cout << "Your turn: Enter in a number to put your 'x' in" << endl;
					bool foundNum = false;
					int catchError = 0;
					while (!foundNum) {
						cin >> i;
						Sleep(10);
						if (cin.fail()) {
							cout << "That's not an integer! Play again!" << endl;
							return 100;
						}
						else {
							if (i <= 9 && i >= 1) {
								if (board[(i - 1)] == " ") {
									board[(i - 1)] = "X";
									foundNum = true;
								}
								else {
									cout << "That space is not empty!" << endl;
								}
							}
							else {
								cout << "That is not a vaild board space." << endl;
								//catchError++;
								//if (catchError >= 20) {
								//	cout << "Error: An unexpected error has occured!" << endl;
								//	return 0;
								//}
							}
						}
					}//end while
					printBoard();
					if (checkPlayerWin()) {
						active = false;
						cout << "You win!" << endl;
						break;
					}
					if (checkTie()) {
						active = false;
						cout << "It's a tie!" << endl;
						break;
					}
					Sleep(400);
					cout << "It's the cpu's turn." << endl;
					Sleep(400);
					botPlayHard();
					printBoard();
					if (checkComputerWin()) {
						active = false;
						cout << "The computer wins!" << endl;
						break;
					}
					if (checkTie()) {
						active = false;
						cout << "It's a tie!" << endl;
						break;
					}
				}
			} // end of hard
			else if (input == "medium" || input == "Medium") {
				int i;
				bool active = true;
				printBoard();
				while (active) {
					cout << "Your turn: Enter in a number to put your 'x' in" << endl;
					bool foundNum = false;
					int catchError = 0;
					while (!foundNum) {
						cin >> i;
						if (cin.fail()) {
							cout << "That's not an integer! Play again!" << endl;
							return 100;
						}
						if (i <= 9 && i >= 1) {
							if (board[(i - 1)] == " ") {
								board[(i - 1)] = "X";
								foundNum = true;
							}
							else {
								cout << "That space is not empty!" << endl;
							}
						}
						else {
							cout << "That is not a vaild board space." << endl;
						}
					}//end while
					printBoard();
					if (checkPlayerWin()) {
						active = false;
						cout << "You win!" << endl;
						break;
					}
					if (checkTie()) {
						active = false;
						cout << "It's a tie!" << endl;
						break;
					}
					Sleep(400);
					cout << "It's the cpu's turn." << endl;
					Sleep(400);
					botPlayMedium();
					printBoard();
					if (checkComputerWin()) {
						active = false;
						cout << "The computer wins!" << endl;
						break;
					}
					if (checkTie()) {
						active = false;
						cout << "It's a tie!" << endl;
						break;
					}
				}
			}
			else if (input == "easy" || input == "Easy") {
				int i;
				bool active = true;
				printBoard();
				while (active) {
					cout << "Your turn: Enter in a number to put your 'x' in" << endl;
					bool foundNum = false;
					int catchError = 0;
					while (!foundNum) {
						cin >> i;
						if (cin.fail()) {
							cout << "That's not an integer! Play again!" << endl;
							return 100;
						}
						if (i <= 9 && i >= 1) {
							if (board[(i - 1)] == " ") {
								board[(i - 1)] = "X";
								foundNum = true;
							}
							else {
								cout << "That space is not empty!" << endl;
							}
						}
						else {
							cout << "That is not a vaild board space." << endl;
						}
					}//end while
					printBoard();
					if (checkPlayerWin()) {
						active = false;
						cout << "You win!" << endl;
						break;
					}
					if (checkTie()) {
						active = false;
						cout << "It's a tie!" << endl;
						break;
					}
					Sleep(400);
					cout << "It's the cpu's turn." << endl;
					Sleep(400);
					botPlayEasy();
					printBoard();
					if (checkComputerWin()) {
						active = false;
						cout << "The computer wins!" << endl;
						break;
					}
					if (checkTie()) {
						active = false;
						cout << "It's a tie!" << endl;
						break;
					}
				}
			}
			else {
				cout << "That is not a valid option." << endl;
			}
		}
		else if (input == "Multiplayer" || input == "multiplayer" || input == "multi") { //
			int i;
			bool active = true;
			printBoard();
			while (active) {
				cout << "Player 1 turn: Enter in a number to put your 'x' in" << endl;
				bool foundNum = false;
				int catchError = 0;
				while (!foundNum) {
					cin >> i;
					if (cin.fail()) {
						cout << "That's not an integer! Play again!" << endl;
						return 100;
					}
					if (i <= 9 && i >= 1) {
						if (board[(i - 1)] == " ") {
							board[(i - 1)] = "X";
							foundNum = true;
						}
						else {
							cout << "That space is not empty!" << endl;
						}
					}
					else {
						cout << "That is not a vaild board space." << endl;
					}
				}//end while
				printBoard();
				if (checkPlayerWin()) {
					active = false;
					cout << "Player 1 wins!" << endl;
					break;
				}
				if (checkTie()) {
					active = false;
					cout << "It's a tie!" << endl;
					break;
				}
				cout << "Player 2 turn: Enter in a number to put your 'o' in" << endl;
				bool foundNums = false;
				int catchErrors = 0;
				while (!foundNums) {
					cin >> i;
					if (cin.fail()) {
						cout << "That's not an integer! Play again!" << endl;
						return 100;
					}
					if (i <= 9 && i >= 1) {
						if (board[(i - 1)] == " ") {
							board[(i - 1)] = "O";
							foundNums = true;
						}
						else {
							cout << "That space is not empty!" << endl;
						}
					}
					else {
						cout << "That is not a vaild board space." << endl;
					}
				}//end while
				printBoard();
				if (checkComputerWin()) {
					active = false;
					cout << "Player 2 wins!" << endl;
					break;
				}
				if (checkTie()) {
					active = false;
					cout << "It's a tie!" << endl;
					break;
				}
			}

		}
		else {
			cout << "That is not a valid option." << endl;
		}
		cout << "Do you want to quit the game? (yes or no)" << endl;
		cin >> input;
		if (input == "yes") {
			return 0;
		}
		else {
			
			for (int i = 0; i < size(board); i++) {
				board[i] = " ";
			}
		}
	}
    return 0;
}

