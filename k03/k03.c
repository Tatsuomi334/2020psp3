#include <stdio.h>
#include<string.h>
#define DEBUG

#define ALPHABET_LEN    255

char StrOriginal[] = "On a dark deseart highway, cool wind in my hair.";
char StrKey[] = "wind";

char* ForceSearch(char text[], char key[])
{
    //  ここを実装する
int start;
int pos;
int text_len;
int key_len;
text_len=strlen(text);
key_len=strlen(key);
int i=0;int j=0;
for(start=0; start<text_len-key_len;start++){
   for(pos=0;pos<key_len-1;pos++){   
    if(text[start+pos]=key[pos]){
      if(pos=key_len-1){
      i=1;
      break;
      }
    else{
      
    }
    }
  
    else{
      break;
    }
    
}
}
    if(i==1){
        return &text[start];
        
    }
     else{
         return NULL ;  }

}



char* BMSearch(char text[], char key[])
{
    //  ここを実装する
  int index;
  int key_index;
  int text_len;
  int key_len;
  text_len=strlen(text);
  key_len=strlen(key);
  int i=0;
  int pos;
  int table[256];
  int x=0;
  int index_a;
  

  while(i<=256){
    table[i]=key_len;
    i++;
  }
  i=0;
  while(i<=key_len){ 
    table[key_len]=(key_len-1)-i;
    i++;
  }
   index=key_len-1;
  while(index<=text_len){
    index_a=index;
    for(key_index=key_len-1;0<=key_index;key_index--){
     if (text[index] == key[key_index]){
       index=index-1;
     
       if(key_len==0){
         x=1;
         break;
       }
       else{
         index=index+table[text[index]];
         if(index<=index_a){
           index=index_a+1;
         }  
        
       }
    }
    else{
      break;
    }
    
  
  }
    if(x=1){
     return &text[index];
    }   
   else
  {
    return NULL;
  }
  }
   
  
  






    

  

}

int main(void)
{
    char*   str;
    str = ForceSearch(StrOriginal, StrKey);
    printf("Force Search. Find keyword at:%s\n", str);

    str = BMSearch(StrOriginal, StrKey);
    printf("BM Search. Find keyword at:%s\n", str);

    return 0;
}