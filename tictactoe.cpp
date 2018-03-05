#include <bits/stdc++.h>
using namespace std;
char array[3][3]={'1','2','3','4','5','6','7','8','9'};
static bool outOfLoop=false;
static bool flagToCheckChance=true;
bool checkDiagonals(){
	if((array[0][0]=='X'&& array[1][1]=='X'&& array[2][2]=='X')
		||(array[0][2]=='X'&& array[1][1]=='X'&& array[2][0]=='X')
		||(array[0][0]=='O'&& array[1][1]=='O'&& array[2][2]=='O')
		||(array[0][2]=='O'&& array[1][1]=='O'&& array[2][0]=='O'))
   return true;
	else
		return false;
}
bool checkRows(){
	if((array[0][0]=='X'&& array[0][1]=='X'&& array[0][2]=='X')
		||(array[1][0]=='X'&&array[1][1]=='X'&&array[1][2]=='X')
		||(array[2][0]=='X'&&array[2][1]=='X'&&array[2][2]=='X')
		||(array[0][0]=='O'&&array[0][1]=='O'&&array[0][2]=='O')
		||(array[1][0]=='O'&&array[1][1]=='O'&&array[1][2]=='O')
		||(array[2][0]=='O'&&array[2][1]=='O'&&array[2][2]=='O'))
			return true;
	else
		return false;
}
bool checkColumns(){
	if((array[0][0]=='X'&&array[1][0]=='X'&&array[2][0]=='X')
		||(array[0][1]=='X'&&array[1][1]=='X'&&array[2][1]=='X')
		||(array[0][2]=='X'&&array[1][2]=='X'&&array[2][2]=='X')
		||(array[0][0]=='O'&&array[1][0]=='O'&&array[2][0]=='O')
		||(array[0][1]=='O'&&array[1][1]=='O'&&array[2][1]=='O')
		||(array[0][2]=='O'&&array[1][2]=='O'&&array[2][2]=='O'))
			return true;
	else
		return false;
}
bool checkTerminatingCondition(){
	bool result1,result2,result3;
	result1=checkDiagonals();
	result2=checkRows();
	result3=checkColumns();
	if(result1||result2||result3)
		return true;
	else
		return false;
}
bool checkEntry(int x){
	switch(x){
		case 1:
			if(array[0][0]=='X'||array[0][0]=='O'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
				break;
			}
			else
			  break;
		case 2:
			if(array[0][1]=='X'||array[0][1]=='O'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
					return true;
				break;
			}
				else
			  break;
		case 3:
			if(array[0][2]=='X'||array[0][2]=='O'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
				break;
			}
				else
			  break;
		case 4:
			if(array[1][0]=='X'||array[1][0]=='O'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
			break;
		}
			else
			  break;
		case 5:
			if(array[1][1]=='X'||array[1][1]=='X'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
			break;}
				else
			  break;
		case 6:
			if(array[1][2]=='X'||array[1][2]=='X'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
			break;
		}
			else
			  break;
		case 7:
			if(array[2][0]=='X'||array[2][0]=='X'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
			break;
		}
			else
			  break;
		case 8:
			if(array[2][1]=='X'||array[2][1]=='X'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
			break;
		}
			else
			  break;
		case 9:
			if(array[2][2]=='X'||array[2][2]=='X'){
				cout<<"\t\t\t"<<"Invalid Entry"<<endl;
				return true;
			break;
		}
			else
			  break;
		default:{
			cout<<"\t\t\t"<<"Please enter Valid output"<<endl;
			return true;
			break;
		}
	}
	return false;
	cout<<"OutsideFunction"<<endl;
}
void processingUserInput(){
	int choicePlayer1,choicePlayer2;
	if(flagToCheckChance){
		flagToCheckChance=false;
		cout<<endl<<"Player-1";
		cout<<endl<<"---------";
		cout<<endl<<"Please Enter I/p b/w 1-9 to make your choice"<<"\t";
		cin>>choicePlayer1;
		//cout<<choicePlayer1;
		bool resultOfEntry;
		resultOfEntry=checkEntry(choicePlayer1);
		 if(resultOfEntry){
				flagToCheckChance=true;
				return ;
			}
		switch(choicePlayer1){
		case 1:
			array[0][0]='X';
			break;
		case 2:
			array[0][1]='X';
			break;
		case 3:
			array[0][2]='X';
			break;
		case 4:
			array[1][0]='X';
			break;
		case 5:
			array[1][1]='X';
			break;
		case 6:
			array[1][2]='X';
			break;
		case 7:
			array[2][0]='X';
			break;
		case 8:
			array[2][1]='X';
			break;
		case 9:
			array[2][2]='X';
			break;
		default:
			cout<<"Please enter Valid output"<<endl;
			break;
		}
	}
	else{
		flagToCheckChance=true;
		cout<<endl<<"Player-2";
		cout<<endl<<"---------";
		cout<<endl<<"Please Enter I/p b/w 1-9 to make your choice"<<"\t";
		cin>>choicePlayer2;
			bool resultOfEntry;
		resultOfEntry=checkEntry(choicePlayer2);
		  if(resultOfEntry){
				flagToCheckChance=false;
				return ;
			}
		switch(choicePlayer2){
		case 1:
			array[0][0]='O';
			break;
		case 2:
			array[0][1]='O';
			break;
		case 3:
			array[0][2]='O';
			break;
		case 4:
			array[1][0]='O';
			break;
		case 5:
			array[1][1]='O';
			break;
		case 6:
			array[1][2]='O';
			break;
		case 7:
			array[2][0]='O';
			break;
		case 8:
			array[2][1]='O';
			break;
		case 9:
			array[2][2]='O';
			break;
		default:
			cout<<"Please enter Valid output";
			break;
		}
	}
}
void showOrderedPuzzle(){
	cout<<endl;
	for(int i=0;i<3;++i){
		cout<<"\t\t\t";
		for(int j=0;j<3;++j){
			if(j==2)
				cout<<array[i][j];
			else
				cout<<array[i][j]<<"|";

		}
		cout<<endl<<"\t\t\t"<<"-----"<<endl;
	}
}
int main(){

	//////////////////////////////////////
	cout<<"\t\t"<<"++++++++++++++++++++"<<endl;
	cout<<"\t\t"<<"Welcome to TICTACTOE"<<endl;
	cout<<"\t\t"<<"++++++++++++++++++++"<<endl;
	cout<<endl<<endl<<endl;
	///////////////////////////////////////
	
	bool checkResult;
	while(true){
  	showOrderedPuzzle();
		processingUserInput();
		checkResult=checkTerminatingCondition();
		if(checkResult){
			break;
		}
	}
 cout<<endl<<endl<<"\t\t\t"<<"WINS"<<endl;
 showOrderedPuzzle();
 system("pause");
 return 0;
	}
