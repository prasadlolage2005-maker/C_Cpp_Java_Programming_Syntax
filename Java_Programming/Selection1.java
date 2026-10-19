import java.util.Scanner;

class Selection1
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int No=0;

        System.out.println("Enter number to check wheteher is even or odd");
        No=sobj.nextInt();

        if((No % 2) == 0)
        {
            System.out.println("Number is Even");

        }
        else
        {
            System.out.println("Number is Odd");

        }

    }
}
