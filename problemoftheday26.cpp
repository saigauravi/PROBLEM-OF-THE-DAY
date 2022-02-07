int Solution::solve(int A, int B, int C) {
    int p=A+C-1;
    if(p<=B)
    return p;
    else
    return p%B;
}
