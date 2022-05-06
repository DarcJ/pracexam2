int SumofCube(int n){
    if (n <= 1)
    {
        return 1;
    }
    return (n*n*n + SumofCube(n-1));
    
}