int sumOfCube(int n){
    if (n <= 1)
    {
        return 1;
    }
    return (n*n*n + sumOfCube(n-1));
    
}