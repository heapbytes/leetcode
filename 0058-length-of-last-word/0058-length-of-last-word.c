int lengthOfLastWord(char * s){


    int n = strlen(s) -1;
    int ans = 0;

    while(s[n] == ' '){
        n--;
    }

    while(n>=0 && s[n] != ' '){
        ans += 1;
        n--;
    }

    return ans;
}