int sumOfCube(int n, int a){
    if (n <= 1)
    {
        return (1+a);
    }
    return sumOfCube((n-1), ((n*n*n) +a));
    
}