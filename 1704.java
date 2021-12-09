import java.util.Arrays;
import java.util.Scanner;

public class Main {

    static class Entry implements Comparable<Entry> {
        private final int v, t;

        Entry(int v, int t) {
            this.v = v;
            this.t = t;
        }

        public int getV() {
            return v;
        }

        public int getT() {
            return t;
        }
        @Override
        public int compareTo(Entry oth) {
            if(this.v == oth.v){
                Integer.signum(this.t - oth.t);
            }
            return Integer.signum(oth.v - this.v);
        }
    }

    public static void main(String[] args) throws java.lang.Exception {
        final Scanner in = new Scanner(System.in);

        while (in.hasNext()) {
            int N = in.nextInt();
            int H = in.nextInt();
            Entry[] arr = new Entry[N];

            for(int i=0;i<N;i++) {
                int v = in.nextInt();
                int t = in.nextInt();
                arr[i] = new Entry(v, t);
            }
            Arrays.sort(arr);
            Entry[] entryByHour = new Entry[H+1];
            int loss = 0;
            for(int i=0;i<arr.length;i++){
                int j=arr[i].t-1;
                while(j>=0 && entryByHour[j] != null){
                    j--;
                }
                if(j < 0){
                    loss += arr[i].v;
                }else{
                    entryByHour[j] = arr[i];
                }
            }           
            System.out.printf("%d\n", loss);
        }
        in.close();
    }
}