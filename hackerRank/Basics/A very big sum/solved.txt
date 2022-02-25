package com.company;
import java.math.BigInteger;
import java.util.Scanner;
class summation{
    BigInteger a;
    BigInteger sum= BigInteger.valueOf(0);
    void work(BigInteger a)
    {
        this.sum = a.add(sum);
    }
    void print()
    {
        System.out.println(this.sum);
    }
}
class Main {
    BigInteger sum;
    public static void main(String[] args)
    {
        BigInteger a;
        summation su = new summation();
        Scanner in = new Scanner(System.in);
        int lim,i;
        lim = in.nextInt();
        String nums;
        for(i=0;i<lim;i++) {
            nums = in.next();
            a = new BigInteger(nums);
            su.work(a);
        }
        su.print();
    }
}