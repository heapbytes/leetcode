int countDigits(int num){

    if(num == 0){
        return 1;
    }

    int dummy = num;
    int c = 0;

    while(dummy){
        int check = dummy % 10;
        if(num % check == 0){
            c += 1;
        }
        dummy /= 10;
    }

    return c;
}