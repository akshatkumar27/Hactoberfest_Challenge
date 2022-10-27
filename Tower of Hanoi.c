void TH(int n, char rod1, char rod2, char rod3)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", rod1, rod2);
        return;
    }
    TH(n-1, rod1, rod3, rod2);
    printf("\n Move disk %d from rod %c to rod %c", n, rod1, rod2);
    TH(n-1, rod3, rod2, rod1);
}
 
int main()
{
    int n = 4; 
    printf("No. of disks is 4, and the rods are called A,B and C");
    TH(n, \'A\', \'C\', \'B\');  
    return 0;
}
