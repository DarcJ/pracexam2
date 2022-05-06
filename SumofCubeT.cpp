int SumofCubeT(int n, int a){
    if (n <= 1)
    {
        return (1+a);
    }
    return SumofCubeT((n-1), ((n*n*n) +a));
    
}