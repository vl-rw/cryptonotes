#include <stdio.h>
#include <string.h> 
#include "encode.h"



int main() {
    
    
    FILE *fp;
   
    char buff[255];

    fp = fopen("heads.txt", "r+");
   
    fscanf(fp, "%s", buff);
   
    puts ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ MAIN MENU ░░░░░░░░░░░░░░░░░\n");
            
    
    for (int i = 1; i<10; i++) {
        
            fscanf(fp, "%s", buff);   
            printf("░░░░░░░ Key ");
            printf("%d", i);
            printf(" : %s ", buff );
            printf("\n\n");
        
        
    };
    
    printf("░░░░░░░ Key 0 : Quit\n\n" );
    
    fclose(fp);
    
    puts ("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** choose regime: ***");
            
    
    
    char mode[10];
    
    scanf("%10[^\n]", mode); 
    
    char filename[24] = "cipher";
    
    if ( mode[0] == '0' )       return 0;
    
    if ( mode[0] == '1' )       filename[6] = '1';
    
    if ( mode[0] == '2' )       filename[6] = '2';
    
    if ( mode[0] == '3' )       filename[6] = '3';
    
    if ( mode[0] == '4' )       filename[6] = '4';
    
    if ( mode[0] == '5' )       filename[6] = '5';
    
    if ( mode[0] == '6' )       filename[6] = '6';
    
    if ( mode[0] == '7' )       filename[6] = '7';
    
    if ( mode[0] == '8' )       filename[6] = '8';
    
    if ( mode[0] == '9' )       filename[6] = '9';
    
    
//     puts (filename);
    
    puts ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ MAIN MENU ░░░░░░░░░░░░░░░░░\n");

    printf("░░░░░░░ Type \"e=\" for encoding, \"d=\" for decoding. \n\n" );
    
    printf("░░░░░░░ Any another key would be interpreted as Quit. \n\n" );
    
    printf("░░░░░░░ Equals symbol - \"=\" - is madatory. \n\n" );    
    
    for (int i = 1; i<8; i++) printf("░░░░░░░ \n\n");
    
    puts ("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** choose memory slot: ***");

    
    scanf("%10[^=]", mode); 
    
    if ( mode[1] == 'e' ) { 
        
            puts ("encoding");
        
            int i;
    
            char str[1024], pass[1024], pass_long[1024];
            
            puts ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ ENCODING ░░░░░░░░░░░░░░░░░░\n");

            printf("░░░░░░░ enter a password string, then \n        space, then string that is needs \n" );
    
            printf("░░░░░░░ to be encoded, THEN ~. \n\n" );
    
            printf("░░░░░░░ For example: \n\n░░░░░░░ \"password SECRET information HERE~\"\n\n" );    
            
            printf("░░░░░░░ Old data will be replaced. If you don't want it to happen, \n\n" ); 
            
            printf("░░░░░░░ Press Ctrl+C to Exit \n\n" ); 
    
            for (int i = 1; i<5; i++) printf("░░░░░░░ \n\n");
    
            puts ("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***");

            scanf("%1023[^ ]", pass); 
            
            scanf("%1023[^~]", str);
            
            encode_alg(str, pass, filename) ;
        
        
    } else if ( mode[1] == 'd' ) { 
        
            puts ("decoding");
        
            int i;
        
            char str[1024], pass[1024], pass_long[1024];
        
            
            puts ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ DECODING ░░░░░░░░░░░░░░░░░░\n");

            printf("░░░░░░░ Please enter a password string, \n\n" );
    
            printf("░░░░░░░ THEN SPACE, \n\n" );
    
            printf("░░░░░░░ and only then enter\n\n" );    
    
            for (int i = 1; i<8; i++) printf("░░░░░░░ \n\n");
    
            puts ("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***");

            scanf("%1023[^ ]", pass); 
        
            decode_alg(str, pass, filename) ;
        
        
    } else {
        
        
            return 0;
        
        
    };
    
} 
