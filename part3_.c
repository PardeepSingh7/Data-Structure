#include<stdio.h>
#include<string.h>
int next_field(FILE *csvfile, char *buffer, int max_len)
{
while (fgets(buffer,max_len,csvfile))
            {
                char *pieces,*quote;
                pieces = strtok(buffer,",");
                while (pieces != NULL)
                if (pieces[0] == '\"')
                {
                    quote = strtok(pieces,"\"");
                    while (pieces != NULL)
                    {
                    printf("%s\n",quote);
                    quote = strtok(NULL, "\"");
                    break;
                    } 
                break;
                }
                else
                {
                printf("%s\n",pieces);
                pieces = strtok(NULL, ",");
                }
                printf("\n");
                }
                return 0;  
}
int main()
{
    FILE *csvfile = fopen("sample.csv","r");
    if (csvfile ==  NULL)
        printf("error :Unable to open the file");
        else;
        {
           char line[200];
           next_field(csvfile,line,200);
        }
    return 0;
}
