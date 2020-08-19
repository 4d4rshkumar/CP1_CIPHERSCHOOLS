#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle(numRows, vector<int> (1,1));
        if(numRows == 0){
            return triangle;
        }
        vector<int> prevRow;
        for(int i= 1; i<numRows ;i++)
        {
            prevRow = triangle[i-1]; 
            for(int j=1;j<i;j++)
            {
                triangle[i].push_back(prevRow[j] + prevRow[j-1]);
            }
            triangle[i].push_back(1);
        }        
        return triangle;
    }
int main(){
    vector<vector<int>> v=generate(5);
    for(auto x:v){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}