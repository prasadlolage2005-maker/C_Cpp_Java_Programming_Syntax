import java.util.Scanner;

class Selection2
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        int No=0;

        System.out.println("Enter your Age");
        No=sobj.nextInt();

        if((No>=18))
        {
            System.out.println("Allowed ");

        }

        else
        {
            System.out.println("Not Allowed");

        }

    }
}
