// Task: Seats (IOI 2018)
// Solves subtask 2
// Author: Tomasz Idziaszek


#include <bits/stdc++.h>
#include "seats.h"
using namespace std;
#define REP(i,n) for(int i=0;i<(n);++i)


int H, W;
vector<int> R, C;


void give_initial_chart(int H, int W, vector<int> R, vector<int> C) {
  ::H = H; ::W = W;
  ::R = R; ::C = C;
}

int swap_seats(int a, int b) {
  swap(R[a], R[b]);
  swap(C[a], C[b]);
  int ans = 0;
  int R_min = R[0], R_max = R[0];
  int C_min = C[0], C_max = C[0];
  REP(i, H*W) {
    R_min = min(R_min, R[i]); R_max = max(R_max, R[i]);
    C_min = min(C_min, C[i]); C_max = max(C_max, C[i]);
    int Size = (R_max + 1 - R_min) * (C_max + 1 - C_min);
    if (i+1 == Size) {
      ans++;
    }
  }
  return ans;
}
