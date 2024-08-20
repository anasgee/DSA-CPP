#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int minMoves (vector <int> &seats, vector <int> &students){
	sort(seats.begin(),seats.end());
	sort(students.begin(),students.end());
	
	int count =0;
	
	for(int i=0; i<seats.size();i++){
		count = count+ abs(seats[i]-students[i]);
	}
	return count;

}

int main(){
	int seatsArr [ ]= {3,1,5,8};
	int studentsArr[]={2,7,4,6};
	
	vector<int>seats(seatsArr,seatsArr+sizeof(seatsArr)/sizeof(seatsArr[0]));
	vector <int>students(studentsArr,studentsArr+sizeof(studentsArr)/sizeof(studentsArr[0]));
		
//	for lates cpp we can do without constructor like below
//	vector <int> seats= {3,1,5};
//	vector <int> students = {2,7,4};
	
	int result = minMoves(seats,students);
	cout<<result;
	
	return 0;
}
