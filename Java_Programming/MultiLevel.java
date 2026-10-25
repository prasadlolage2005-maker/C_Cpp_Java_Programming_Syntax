class Base
{
    public int i,j;  

    public Base()
    {
        System.out.println("Inside Base constructor");
    }

    public void fun()
    {
        System.out.println("Inside fun");

    }
}

class Derived extends Base
{
    public int x,y;

    public Derived()
    {
        System.out.println("inside Derived Constructor");
    }

    public void gun()
    {
        System.out.println("inside gun");
    }
}

class DerivedX extends Derived
{
    public int a;

    public DerivedX()
    {
        System.out.println("inside DerivedX constructoor");
    }

    public void sun()
    {
        System.out.println("Inside sun");
    }
}

class SingleLevel
{
    public static void main(String A[])
    {

        DerivedX dobj=new DerivedX();
    }
}

