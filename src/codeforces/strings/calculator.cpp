#include<iostream>
#include<string>
#include<utility>

using namespace std;

int calc(pair<int, int> p, string op) {
    if (!op.compare("+")) {
        return p.first + p.second;
    }
    if (!op.compare("-")) {
        return p.first-p.second;
    }
    if (!op.compare("*")) {
        return p.first*p.second;
    }
    return p.first/p.second;
}

pair<int, int> parse(string in, int opIdx) {
    return pair<int, int>(stoi(in.substr(0, opIdx)), stoi(in.substr(opIdx+1, in.size())));
}

bool solve(string s, string op) {
    if (s.find(op) != string::npos) {
        cout << calc(parse(s, s.find(op)), op);
        return true;
    }
    return false;
}


int main() {
    string s;
    getline(cin, s);
    if (solve(s, "+")) {
        return 0;
    } 
    if (solve(s, "-")) {
        return 0;
    } 
    if (solve(s, "*")) {
        return 0;
    } 
    if (solve(s, "/")) {
        return 0;
    }     
    return 0;        
}
