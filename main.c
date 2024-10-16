#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>

#define PERMS 0644
#define INPUT_SIZE 128
#define STATE_SIZE 3
#define ALPHABET_SIZE 2
#define MAX_TRANSITIONS 10

char input[INPUT_SIZE];
int nfa[STATE_SIZE][ALPHABET_SIZE][MAX_TRANSITIONS];
int final_states[STATE_SIZE];

void build_nfa(){
    
}

void read_input(){
    printf("Enter the input string: ");
    scanf("%s",input);
}

int main(int argc,char** argv){
    read_input();
}