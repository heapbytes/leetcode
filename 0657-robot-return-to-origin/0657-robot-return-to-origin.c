bool judgeCircle(char * moves){
  
  int side = 0;
  int vert = 0;
  
  for(int i=0; i<strlen(moves); i++){
    
    if (moves[i] == 'U'){
      vert += 1;
    }
    
    else if (moves[i] == 'D'){
      vert -= 1;
    }    
    
    else if (moves[i] == 'L'){
      side -= 1;
    }    
    
    else if (moves[i] == 'R'){
      side += 1;
    }
  }
  
  
  if(side || vert){
    return false;
  }
  
  return true;
}