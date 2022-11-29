#include <stdio.h>
main(){
  system("chmod 640 /ect/sudoers");
  system("vi /ect/sudoers");
  system("chmod 440 /ect/sudoers");
}
