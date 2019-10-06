#include <stdio.h>
#include <string.h>
typedef struct sample{
    char name[100];
    char source[100];
    char gender[100];
    char location[100];
    int age;
    int rank;
}record;
int main(void){
    int i,choice;
    FILE *fp1,*fp2;
    char oname[100];
    record det;
    int recsize;
    char c;
    fp1=fopen("records.dat","r+");
    if(fp1==NULL){
        fp1=fopen("records.dat","w+");
        if(fp1==NULL){
            printf("file is missing, corrupted, or does not like you.\n");
            return(-1);
        }
    }recsize=sizeof(det);
    fseek(fp1,0,SEEK_END);
    printf("Waifu Name: ");
    scanf("%[^\n]",det.name);
    printf("Where's your waifu from? (Anime/Manga): ");
    scanf("%c",&det.source);
    printf("What gender is your waifu?: ");
    scanf("%d",&det.gender);
    scanf("%c",&c);
    printf("From what land does your waifu hail?: ");
    scanf("%[^\n]",det.location);
    printf("How old is your waifu?: ");
    scanf("%d",&det.age);
    printf("On a scale from 1-10, with 10 being the best, how does your waifu rank?: ");
    scanf("%d",&det.rank);
    fwrite(&det,recsize,1,fp1);
}
