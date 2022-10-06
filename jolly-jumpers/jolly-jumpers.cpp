#include<cstdlib>
#include<iostream>
#include<vector>

using namespace std;

bool testJolly(int v[], int size){
	vector<bool> check(size, false);
    for (int i=0; i < size-1; i++){
        int diff = abs(v[i]-v[i+1]);
        if (diff == 0 || diff > size-1 || check[diff] == true)
            return false;
        check[diff] = true;
    }
    return true;
}

int main(){
	int size = 0;
	while(scanf("%d", &size) != EOF){
		int vector[size];
	    for(int i=0; i<size; i++){
	    	cin >> vector[i];
		}
		testJolly(vector, size) ? cout << "Jolly" << std::endl : cout << "Not jolly" << std::endl;
	}
    return 0;
}
