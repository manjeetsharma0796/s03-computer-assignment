#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> pattern) {
    for(int i = 0; i < pattern.size(); i++) {
        cout << pattern[i]<<" ";
    }
    cout<<endl;
}
vector<int> createPattern(int row) {
    vector<int> pattern = {1};
    display(pattern);

    for(int i = 0; i < row; i++) {
        vector<int> temp;
        
        for(int current = 0; current < pattern.size() - 1; current++) {
            temp.push_back(pattern[current] + pattern[current + 1]);
        }
        temp.insert(temp.begin(), 1);
        temp.push_back(1);
        pattern = temp;
        display(pattern);
    }

    return pattern;
}

int main() {
    int row;
    vector<int> result;
    cout<<"Enter number of rows: ";
    cin>>row;

    result = createPattern(row);

    return 0;
}