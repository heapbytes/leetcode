int lengthOfLastWord(char * s){

    int count = 0;
    int flag = 0;

    for(int i=0; i<strlen(s); i++){

        if(s[i] == ' '){
            flag = 1;
        }
        else{
            if(flag == 1){
                count = 1;
                flag = 0;
            }else{
                count++;
            }
        }
    }

    return count;

}