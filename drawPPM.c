#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

// This function converts our colours into integers
// The input colors can be: red, green, blue, yellow, orange, cyan, magenta, ocean, violet.
int hashfunction(char* colour) {
  if(strcmp(colour, "red") == 0)
    return 0;
  else if(strcmp(colour, "green") == 0)
    return 1;
  else if(strcmp(colour, "blue") == 0)
    return 2;
  else if(strcmp(colour, "yellow") == 0)
    return 3;
  else if(strcmp(colour, "orange") == 0)
    return 4;
  else if(strcmp(colour, "cyan") == 0)
    return 5;
  else if(strcmp(colour, "magenta") == 0)
    return 6;
  else if(strcmp(colour, "ocean") == 0)
    return 7;
  else if(strcmp(colour, "violet") == 0)
    return 8;
  else
    return -1;
}

void sigHandler0();
void sigHandler1();
void sigHandler2();
void sigHandler3();
void sigHandler4();
void sigHandler5();
void sigHandler6();
void sigHandler7();
void sigHandler8();
void sigHandler9();
void sigHandler10();


int main(int argc, char* argv[]) {
  int bytesPerPixel = 3;
  void *buffer;
  buffer = malloc(sizeof(void) * 255);

  int fd, status;
  fd = open(argv[1], O_RDWR | O_CREAT, 0777);

  buffer = "P6\n1000 1000\n255\n";
  write(fd, buffer, 17);

  static unsigned char color[3] = {0, 0, 0};
  static unsigned char color1[3] = {0, 0, 0};
  static unsigned char color2[3] = {0, 0, 0};
  static unsigned char color3[3] = {0, 0, 0};
  static unsigned char color4[3] = {0, 0, 0};

  switch(hashfunction(argv[2])) {
    case 0:
      color[0] = 255;
      color[1] = 0;
      color[2] = 0;
      break;
    case 1:
      color[0] = 0;
      color[1] = 255;
      color[2] = 0;
      break;
    case 2:
      color[0] = 0;
      color[1] = 0;
      color[2] = 255;
      break;
    case 3:
      color[0] = 255;
      color[1] = 255;
      color[2] = 0;
      break;
    case 4:
      color[0] = 255;
      color[1] = 165;
      color[2] = 0;
      break;
    case 5:
      color[0] = 0;
      color[1] = 255;
      color[2] = 255;
      break;
    case 6:
      color[0] = 255;
      color[1] = 0;
      color[2] = 255;
      break;
    case 7:
      color[0] = 30;
      color[1] = 144;
      color[2] = 255;
      break;
    case 8:
      color[0] = 238;
      color[1] = 130;
      color[2] = 238;
      break;
  }

  switch(hashfunction(argv[3])) {
    case 0:
      color1[0] = 255;
      color1[1] = 0;
      color1[2] = 0;
      break;
    case 1:
      color1[0] = 0;
      color1[1] = 255;
      color1[2] = 0;
      break;
    case 2:
      color1[0] = 0;
      color1[1] = 0;
      color1[2] = 255;
      break;
    case 3:
      color1[0] = 255;
      color1[1] = 255;
      color1[2] = 0;
      break;
    case 4:
      color1[0] = 255;
      color1[1] = 165;
      color1[2] = 0;
      break;
    case 5:
      color1[0] = 0;
      color1[1] = 255;
      color1[2] = 255;
      break;
    case 6:
      color1[0] = 255;
      color1[1] = 0;
      color1[2] = 255;
      break;
    case 7:
      color1[0] = 30;
      color1[1] = 144;
      color1[2] = 255;
      break;
    case 8:
      color1[0] = 238;
      color1[1] = 130;
      color1[2] = 238;
      break;
  }

  switch(hashfunction(argv[4])) {
    case 0:
      color2[0] = 255;
      color2[1] = 0;
      color2[2] = 0;
      break;
    case 1:
      color2[0] = 0;
      color2[1] = 255;
      color2[2] = 0;
      break;
    case 2:
      color2[0] = 0;
      color2[1] = 0;
      color2[2] = 255;
      break;
    case 3:
      color2[0] = 255;
      color2[1] = 255;
      color2[2] = 0;
      break;
    case 4:
      color2[0] = 255;
      color2[1] = 165;
      color2[2] = 0;
      break;
    case 5:
      color2[0] = 0;
      color2[1] = 255;
      color2[2] = 255;
      break;
    case 6:
      color2[0] = 255;
      color2[1] = 0;
      color2[2] = 255;
      break;
    case 7:
      color2[0] = 30;
      color2[1] = 144;
      color2[2] = 255;
      break;
    case 8:
      color2[0] = 238;
      color2[1] = 130;
      color2[2] = 238;
      break;
  }

  switch(hashfunction(argv[5])) {
    case 0:
      color3[0] = 255;
      color3[1] = 0;
      color3[2] = 0;
      break;
    case 1:
      color3[0] = 0;
      color3[1] = 255;
      color3[2] = 0;
      break;
    case 2:
      color3[0] = 0;
      color3[1] = 0;
      color3[2] = 255;
      break;
    case 3:
      color3[0] = 255;
      color3[1] = 255;
      color3[2] = 0;
      break;
    case 4:
      color3[0] = 255;
      color3[1] = 165;
      color3[2] = 0;
      break;
    case 5:
      color3[0] = 0;
      color3[1] = 255;
      color3[2] = 255;
      break;
    case 6:
      color3[0] = 255;
      color3[1] = 0;
      color3[2] = 255;
      break;
    case 7:
      color3[0] = 30;
      color3[1] = 144;
      color3[2] = 255;
      break;
    case 8:
      color3[0] = 238;
      color3[1] = 130;
      color3[2] = 238;
      break;
  }

  switch(hashfunction(argv[6])) {
    case 0:
      color4[0] = 255;
      color4[1] = 0;
      color4[2] = 0;
      break;
    case 1:
      color4[0] = 0;
      color4[1] = 255;
      color4[2] = 0;
      break;
    case 2:
      color4[0] = 0;
      color4[1] = 0;
      color4[2] = 255;
      break;
    case 3:
      color4[0] = 255;
      color4[1] = 255;
      color4[2] = 0;
      break;
    case 4:
      color4[0] = 255;
      color4[1] = 165;
      color4[2] = 0;
      break;
    case 5:
      color4[0] = 0;
      color4[1] = 255;
      color4[2] = 255;
      break;
    case 6:
      color4[0] = 255;
      color4[1] = 0;
      color4[2] = 255;
      break;
    case 7:
      color4[0] = 30;
      color4[1] = 144;
      color4[2] = 255;
      break;
    case 8:
      color4[0] = 238;
      color4[1] = 130;
      color4[2] = 238;
      break;
  }

  // This creates a tree with a depth of 2 and a bredth of 10
  //  1 Parent and 10 children. No "grandchildren"
  // Each child writes 100 rows of 1000 pixes each

  int LHS;
  int RHS;

  // Arrays for each section of output image
  char buffer1[3][100][1000];
  char buffer2[3][100][1000];
  char buffer3[3][100][1000];
  char buffer4[3][100][1000];
  char buffer5[3][100][1000];
  char buffer6[3][100][1000];
  char buffer7[3][100][1000];
  char buffer8[3][100][1000];
  char buffer9[3][100][1000];
  char buffer10[3][100][1000];

  if(fork() == 0) {
    // Child #1
    for(int i = 0; i < 100; i++) {
      for(int j = 0; j < 1000; j++) {
        if ( j < 500 ) {
          buffer1[j][i][0] = color1[0];
          buffer1[j][i][1] = color1[1];
          buffer1[j][i][2] = color1[2];
        } else {
          buffer1[j][i][0] = color2[0];
          buffer1[j][i][1] = color2[1];
          buffer1[j][i][2] = color2[2];
        }
      }
    }
    write(fd, buffer1, sizeof(buffer1));
    exit(1);
  } else {
    // Parent
    wait(&status);
    if(fork() == 0) {
      // Child #2
      for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 1000; j++) {
          if ( j < 500 ) {
            buffer2[j][i][0] = color1[0];
            buffer2[j][i][1] = color1[1];
            buffer2[j][i][2] = color1[2];
          } else {
            buffer2[j][i][0] = color2[0];
            buffer2[j][i][1] = color2[1];
            buffer2[j][i][2] = color2[2];
          }
        }
      }
      write(fd, buffer2, sizeof(buffer2));
      exit(1);
    } else {
      // Parent
      wait(&status);
      if(fork() == 0) {
        // Child #3
        LHS = 499;
        RHS = 500;
        for(int i = 0; i < 100; i++) {
          for(int j = 0; j < 1000; j++) {
            if( i >= 50 && (j >= LHS && j <= RHS)) {
              buffer3[j][i][0] = color[0];
              buffer3[j][i][1] = color[1];
              buffer3[j][i][2] = color[2];
            } else if ( j < 500 ) {
              buffer3[j][i][0] = color1[0];
              buffer3[j][i][1] = color1[1];
              buffer3[j][i][2] = color1[2];
            } else {
              buffer3[j][i][0] = color2[0];
              buffer3[j][i][1] = color2[1];
              buffer3[j][i][2] = color2[2];
            }
          }
          if (i >= 50) {
            RHS++;
            LHS--;
          }
        }
        write(fd, buffer3, sizeof(buffer3));
        exit(1);
      } else {
        // Parent
        wait(&status);
        if(fork() == 0) {
          // Child #4
          LHS = 449;
          RHS = 550;
          for(int i = 0; i < 100; i++) {
            for(int j = 0; j < 1000; j++) {
              if (j >= LHS && j <= RHS) {
                buffer4[j][i][0] = color[0];
                buffer4[j][i][1] = color[1];
                buffer4[j][i][2] = color[2];
              } else if ( j < 500 ) {
                buffer4[j][i][0] = color1[0];
                buffer4[j][i][1] = color1[1];
                buffer4[j][i][2] = color1[2];
              } else {
                buffer4[j][i][0] = color2[0];
                buffer4[j][i][1] = color2[1];
                buffer4[j][i][2] = color2[2];
              }
            }
            RHS++;
            LHS--;
          }
          write(fd, buffer4, sizeof(buffer4));
          exit(1);
        } else {
          // Parent
          wait(&status);
          if(fork() == 0) {
            // Child #5
            LHS = 349;
            RHS = 650;
            for(int i = 0; i < 100; i++) {
              for(int j = 0; j < 1000; j++) {
                if (j >= LHS && j <= RHS) {
                  buffer5[j][i][0] = color[0];
                  buffer5[j][i][1] = color[1];
                  buffer5[j][i][2] = color[2];
                } else if ( j < 500 ) {
                  buffer5[j][i][0] = color1[0];
                  buffer5[j][i][1] = color1[1];
                  buffer5[j][i][2] = color1[2];
                } else {
                  buffer5[j][i][0] = color2[0];
                  buffer5[j][i][1] = color2[1];
                  buffer5[j][i][2] = color2[2];
                }
              }
              RHS++;
              LHS--;
            }
            write(fd, buffer5, sizeof(buffer5));
            exit(1);
          } else {
            // Parent
            wait(&status);
            if(fork() == 0) {
              // Child #6
              LHS = 249;
              RHS = 750;
              for(int i = 0; i < 100; i++) {
                for(int j = 0; j < 1000; j++) {
                  if (j >= LHS && j <= RHS) {
                    buffer6[j][i][0] = color[0];
                    buffer6[j][i][1] = color[1];
                    buffer6[j][i][2] = color[2];
                  } else if ( j < 500 ) {
                    buffer6[j][i][0] = color1[0];
                    buffer6[j][i][1] = color1[1];
                    buffer6[j][i][2] = color1[2];
                  } else {
                    buffer6[j][i][0] = color2[0];
                    buffer6[j][i][1] = color2[1];
                    buffer6[j][i][2] = color2[2];
                  }
                }
                RHS++;
                LHS--;
              }
              write(fd, buffer6, sizeof(buffer6));
              exit(1);
            } else {
              // Parent
              wait(&status);
              if(fork() == 0) {
                // Child #7
                LHS = 349;
                RHS = 650;
                for(int i = 0; i < 100; i++) {
                  for(int j = 0; j < 1000; j++) {
                    if (j >= LHS && j <= RHS) {
                      buffer7[j][i][0] = color[0];
                      buffer7[j][i][1] = color[1];
                      buffer7[j][i][2] = color[2];
                    } else if ( j < 500 ) {
                      buffer7[j][i][0] = color1[0];
                      buffer7[j][i][1] = color1[1];
                      buffer7[j][i][2] = color1[2];
                    } else {
                      buffer7[j][i][0] = color2[0];
                      buffer7[j][i][1] = color2[1];
                      buffer7[j][i][2] = color2[2];
                    }
                  }
                  RHS++;
                  LHS--;
                }
                write(fd, buffer7, sizeof(buffer7));
                exit(1);
              } else {
                // Parent
                wait(&status);
                if(fork() == 0) {
                  // Child #8
                  LHS = 449;
                  RHS = 550;
                  for(int i = 0; i < 100; i++) {
                    for(int j = 0; j < 1000; j++) {
                      if (j >= LHS && j <= RHS) {
                        buffer8[j][i][0] = color[0];
                        buffer8[j][i][1] = color[1];
                        buffer8[j][i][2] = color[2];
                      } else if ( j < 500 ) {
                        buffer8[j][i][0] = color1[0];
                        buffer8[j][i][1] = color1[1];
                        buffer8[j][i][2] = color1[2];
                      } else {
                        buffer8[j][i][0] = color2[0];
                        buffer8[j][i][1] = color2[1];
                        buffer8[j][i][2] = color2[2];
                      }
                    }
                    RHS++;
                    LHS--;
                  }
                  write(fd, buffer8, sizeof(buffer8));
                  exit(1);
                } else {
                  // Parent
                  wait(&status);
                  if(fork() == 0) {
                    // Child #9
                    for(int i = 0; i < 100; i++) {
                      for(int j = 0; j < 1000; j++) {
                        if ( j < 500 ) {
                          buffer9[j][i][0] = color1[0];
                          buffer9[j][i][1] = color1[1];
                          buffer9[j][i][2] = color1[2];
                        } else {
                          buffer9[j][i][0] = color2[0];
                          buffer9[j][i][1] = color2[1];
                          buffer9[j][i][2] = color2[2];
                        }
                      }
                    }
                    write(fd, buffer9, sizeof(buffer9));
                    exit(1);
                  } else {
                    // Parent
                    wait(&status);
                    if(fork() == 0) {
                      // Child #10
                      for(int i = 0; i < 100; i++) {
                        for(int j = 0; j < 1000; j++) {
                          if ( j < 500 ) {
                            buffer10[j][i][0] = color1[0];
                            buffer10[j][i][1] = color1[1];
                            buffer10[j][i][2] = color1[2];
                          } else {
                            buffer10[j][i][0] = color2[0];
                            buffer10[j][i][1] = color2[1];
                            buffer10[j][i][2] = color2[2];
                          }
                        }
                      }
                      write(fd, buffer10, sizeof(buffer10));
                      exit(1);
                    } else {
                      // Parent
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
