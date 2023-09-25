// Git ith bit
public static int getIthBit(int n, int i){
  int bitMask = 1<<i;
  if((n & bitMask)==0){
    return 0;
  }
  else{
    return 1;
  }
}

// Set ith bit
public static int setIthBit(int n, int i){
  int bitMask=1<<i;
  return n|bitMask;
}

// Clear ith bit
public static int clearIthBit(int n, int i){
  int bitMask = ~(1<<i);
  return n & bitMask;
}

// Update ith bit
public static int updateIthBit(int n, int i, int newBit){
  if(newBit==0){
    return clearIthBit(n,i);
  }
  else{
    return setIthBit(n.i);
  }
}
