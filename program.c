#include <stdio.h>
#include <string.h> // just for strlen  - 44 and 116 line 

#include "encode.h"



int main()
{
    char mode[10];
    
    char* main_menu_text = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ MAIN MENU ░░░░░░░░░░░░░░░░░\n\n░░░░░░░ - e for encoding \n\n░░░░░░░ - d for decoding \n\n░░░░░░░ - other key to exit\n\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** choose regime: ***"; 
   
    puts (main_menu_text);
            
//     printf("Select regime, \n - a for encoding, \n - d for decoding\n - other key to exit");
    
    scanf("%10[^\n]", mode); 
    
    if ( mode[0] == 'e' ) { 
        
        
        
            int i;
    
            char str[1024], pass[1024], pass_long[1024];
            
            char* main_menu_text = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ ENCODING ░░░░░░░░░░░░░░░░░░\n\n░░░░░░░ enter a password string, then \n        space, then string that is needs \n        to be encoded, THEN ~. \n\n░░░░░░░ For example: \n\n░░░░░░░ \"password SECRET information HERE~\"\n\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***"; 
   
            puts (main_menu_text);
        
//             printf("\nPlease enter a password string, then space, then string that is needs to be encoded, THEN ~.\t");
            
//             printf("\n For example, \"password SECRET information HERE~\" \t");

            scanf("%1023[^ ]", pass); 
            
            scanf("%1023[^~]", str);
            
            
            char filename[1024] = "my-file";
            
            
            

            
	encode_alg(str, pass, filename) ;
        
        
    } else if ( mode[0] == 'd' ) { 
        
        
        
        
        int i;
        
        char str[1024], pass[1024], pass_long[1024];
        
        char* main_menu_text = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ DECODING ░░░░░░░░░░░░░░░░░░\n\n░░░░░░░ Please enter a password string, \n\n░░░░░░░ THEN SPACE, \n\n░░░░░░░ and only then enter\n\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***"; 
   
        puts (main_menu_text);
    
//         printf("\nPlease enter a password string, THEN SPACE, and then enter\t");

        scanf("%1023[^ ]", pass); 
        
        char filename[1024] = "my-file";
        
	    decode_alg(str, pass, filename) ;
        
        
        
        
    } else {return 0;};
    
    

    

    return 0;
    
}
