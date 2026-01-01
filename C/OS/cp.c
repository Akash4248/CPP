#include<stdio.h>
int main(int args,char *argv[]){
    char ch;
    if(args!=3){
        printf("Usage:%s<source_file><destination_file>",argv[0]);
        return 1;
    }
    FILE *src,*des;
    src=fopen(argv[1],"r");
    if(src==NULL){
        printf("Error: Cannot Open Source file %s \n",argv[1]);
        return 1;
    }
    des=fopen(argv[2],"w");
    if(des==NULL){
        printf("Error: Cannot Open Destination file %s",argv[2]);
        return 1;
    }
    while((ch=fgetc(src))!=EOF)
    {
        fputc(ch,des);
    }
    fclose(src);
    fclose(des);
    printf("File Closed Successfully ");
    return 0;
}