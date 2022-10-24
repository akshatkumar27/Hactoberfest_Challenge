package SelectionSort;

public class Main {

    public static void main(String[] args) {
	int[] a= {44,77,55,22,99,88,33,66};
        System.out.println(a);

        for (int i=0; i<a.length-1;i++)
            for (int j=i+1; j<a.length; j++)
                if(a[i]>a[j]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
        System.out.println(a);
    }
}
