bool judgeCircle(char * moves){
  
  int u = 0;
  int d = 0;
  int r = 0;
  int l = 0;
  
  for(int i=0; i<strlen(moves); i++){
    
    if (moves[i] == 'U'){
      u += 1;
    }
    
    else if (moves[i] == 'D'){
      d += 1;
    }    
    
    else if (moves[i] == 'L'){
      l += 1;
    }    
    
    else if (moves[i] == 'R'){
      r += 1;
    }
  }
  
  return l == r && u == d;

}