class Marvellous
{
    public int i,j;

    public Marvellous(int a, int b)
    {
        this.i = a;
        this.j = b;
    }

    protected void finalize()
    {
        System.out.println("Inside finalize");
    }
}

class DemoFinalize
{
    public static void main(String A[])
    {
        Marvellous mobj1 = new Marvellous(11,21);
        Marvellous mobj2 = new Marvellous(11,21);

        mobj1 = null;
        mobj2 = null;

        System.gc();

    try
        {
            Thread.sleep(1000);
        }
    catch(InterruptedException e)
        {
            Thread.currentThread().interrupt();
        }

        System.out.println("End of Main");
    }
}