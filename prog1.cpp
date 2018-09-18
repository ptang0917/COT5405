#include <map>
#include <set>
#include <list>
#include <cmath>
#include <math.h>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <chrono>


using namespace std;
int get_random() //random number function
{
  int low = 1;
  int high = 1000;  //setting the high and low limit of the random number
  return low + (rand()%(high-low)); // returning the random number value based on the high and ow limi that was being set up
}

void set_up_random()
{
  srand(time(0)); 
}

int main(){
	vector<int> numlist1;
	vector<int> numlist2;
	vector<int> subtractlist;
    set_up_random();
	int num1 = 0;
	int num2 = 0;
	int a = 0;
	int diff = 0 ;
	int numsub = 0;
	int input = 16;
	for(int i = 0; i < input; i++){
		num1 = get_random();
		numlist1.push_back(num1);
		numlist2.push_back(num1);
	}
    
	auto started = std::chrono::high_resolution_clock::now();
	for(int i = 0; i < numlist1.size(); i++){
		for(int j = 0; j < numlist2.size(); j++ ){
			diff = numlist1.at(i) - numlist2.at(j);
			subtractlist.push_back(diff);
		}
		
	}
	auto done = std::chrono::high_resolution_clock::now();
    cout << "With the input size = " << input << " the time the program took to execute is: " << endl;
	cout << chrono::duration_cast<chrono::nanoseconds>(done-started).count() << " nanoseconds" << endl;
	// for(int i = 0; i < subtractlist.size(); i++){
	// 	cout << subtractlist.at(i) << endl;
	// }

    return 0;
}
