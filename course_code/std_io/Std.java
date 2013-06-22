import java.io.*;

public class Std {   // save as Main.java
   public static void main(String[] args) throws IOException{
      String         s;
      BufferedReader stdin;      
      String test_cases;
      int t, arg1, arg2, result;
      String[] in;
      stdin = new BufferedReader(new InputStreamReader(System.in));
      test_cases = stdin.readLine();
      t = Integer.parseInt(test_cases);
      while (t > 0){
         s = stdin.readLine();
         in = s.split(" ");
         arg1 = Integer.parseInt(in[0]);
         arg2 = Integer.parseInt(in[1]);
         result = arg1 + arg2;
         System.out.println(result);
         t = t - 1;
      }
   }
}