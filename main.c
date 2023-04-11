#include <stdio.h>
#include<string.h> // just for strlen  - 44 and 116 line 


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
            
            printf("\npassword: %s", pass);

            

            
            printf("\nstring: %s", str);
            
            size_t length = strlen(pass_long);
            
            int pass_step = 1;
            
            while (length < 1024) {
                
                if ( pass[ pass_step ]== '\0') pass_step = 1; 
                
                pass_long[length] = pass[ pass_step ];

                length++;pass_step++;
                
            }    

            pass_long[1024] = '\0';
            
            
            
            
            pass_step = 1;

            for (i = 0; (i < 1024 && str[i] != '\0'); i++) {
                
                str[i] = 110 + (str[i] - pass_long[pass_step]); 

                pass_step++;
                
            };
                
            printf("\nEncrypted string: \"%s", str);    printf("\", by a code %s", pass);    /*printf("\"");*/
            
            
        
        FILE *fp;

        fp = fopen("cipher", "w+");
        
        fputs(str, fp);
        
        fclose(fp);
        
            
            pass_step = 1;
            
            for (i = 0; (i < 1024 && str[i] != '\0'); i++) {
                
                str[i] = (str[i] + pass_long[pass_step]) -110; 

                pass_step++;
                
            };
                
            printf("\nDecrypted string: %s\n", str);
        
        
    } else if ( mode[0] == 'd' ) { 
        
        
        
        
        int i;
        
        char str[1024], pass[1024], pass_long[1024];
        
        char* main_menu_text = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ DECODING ░░░░░░░░░░░░░░░░░░\n\n░░░░░░░ Please enter a password string, \n\n░░░░░░░ THEN SPACE, \n\n░░░░░░░ and only then enter\n\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***"; 
   
        puts (main_menu_text);
    
//         printf("\nPlease enter a password string, THEN SPACE, and then enter\t");

        scanf("%1023[^ ]", pass); 
        
        size_t length = strlen(pass_long);
        
        int pass_step = 1;
        
        while (length < 1024) {
            
            if ( pass[ pass_step ]== '\0') pass_step = 1;
            
            pass_long[length] = pass[ pass_step ];

            length++;pass_step++;
            
        }    

        pass_long[1024] = '\0';
        
        
        FILE *fp;

        fp = fopen("cipher", "r+");

        fgets(str, 1024, (FILE*)fp);
        
        fclose(fp);
            

    
    
        
        pass_step = 1;

        for (i = 0; (i < 1024 && str[i] != '\0'); i++) {
            
            str[i] = -110 + (str[i] + pass_long[pass_step]); 

            pass_step++;
            
        };
            
        printf("\nDecrypted string: %s", str);    printf(", by a code %s", pass);    printf("\n");
        
        
        
        
        
        
    } else {return 0;};
    
    

    

    return 0;
    
}
