class Solution {
    public static void main(String args[]){
      String a="11";
      String b="1";
      System.out.println(addBinary);
    }
    public String addBinary(String a, String b) {
        if(a==null || b==null || a.length()==0 || b.length()==0)
        {
            return "";
        }
        int carry=0,i=0;
        String res="";
        int alen=a.length(),blen=b.length();
        while(i<alen || i<blen || carry!=0)
        {
            int x=0;
            if(i<alen && a.charAt(alen-1-i)=='1')
            {
                x=1;
            }
            int y=0;
            if(i<blen && b.charAt(blen-1-i)=='1')
            {
                y=1;
            }
            res=(x+y+carry)%2+res;
            carry=(x+y+carry)/2;
            i++;
        }
        return res;
    }
}
