int minCostClimbingStairs(int* cost, int costSize) {

    int* ans = malloc(sizeof(int) * costSize);
    ans[0] = cost[0];
    ans[1] = cost[1];

    for (int i = 2; i < costSize; i++) {
        int ch = (ans[i - 1] > ans[i - 2]) ? ans[i - 2] : ans[i - 1];
        ans[i] = cost[i] + ch;
    }

    int amt = (ans[costSize - 1] > ans[costSize - 2]) ? ans[costSize - 2] : ans[costSize - 1];
    free(ans);
    
    return amt;
}
