int countingGraphs(int N)
{
    // Write your code here.
    int edges=(N*(N-1))/2;
    return pow(2,edges);
}
