

int countOdds(int low, int high){
    
    //return (high - low) /2 + ((high % 2 == 0) && (low % 2 == 0) ? 0 : 1);
    return (high + 1) / 2 - (low / 2);
}
