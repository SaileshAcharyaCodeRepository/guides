// print binary representation (bits on the register) of the value
void printing (int val) {
    int n = val;
    int k =0;
    printf("\n%d in binary number system is:\n", n);
    for (int c = 31; c >= 0; c--)   {
        k = n >> c;
        if (k & 1)
          printf("1");
        else
          printf("0");
    }
    printf("\n");
}