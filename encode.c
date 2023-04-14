/* encode.c */
#include "encode.h"        
#include <stdio.h>
#include <string.h> // just for strlen  - 44 and 116 line 

void encode_alg(char str_e[1024], char pass_e[1024], char filename_e[1024]) {     

 			char pass_long[1024];
 			
 			int i;
            
            printf("\nstring: %s", str_e);
            
            size_t length = strlen(pass_long);
            
            int pass_step = 1;
            
            while (length < 1024) {
                
                if ( pass_e[ pass_step ]== '\0') pass_step = 1; 
                
                pass_long[length] = pass_e[ pass_step ];

                length++;
                
                pass_step++;
                
            }    

            pass_long[1024] = '\0';
            
            
            
            
            pass_step = 1;

            for (i = 0; (i < 1024 && str_e[i] != '\0'); i++) {
                
                str_e[i] = 110 + (str_e[i] - pass_long[pass_step]); 

                pass_step++;
                
            };
                
            printf("\nEncrypted string: \"%s", str_e);    
            
            printf("\", by a code %s", pass_e);   
            
            
        
        FILE *fp;

        fp = fopen(filename_e, "w+");
        
        fputs(str_e, fp);
        
        fclose(fp);
        
            
            pass_step = 1;
            
            for (i = 0; (i < 1024 && str_e[i] != '\0'); i++) {
                
                str_e[i] = (str_e[i] + pass_long[pass_step]) -110; 

                pass_step++;
                
            };
                
            printf("\nDecrypted string: %s\n", str_e);
        
        
    } 
    
    
    
    
void decode_alg(char str_d[1024], char pass_d[1024], char filename_d[1024]) {     
    

        
        char pass_long[1024];
        
        
        int i;
        
        char* main_menu_text = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ DECODING ░░░░░░░░░░░░░░░░░░\n\n░░░░░░░ Please enter a password string, \n\n░░░░░░░ THEN SPACE, \n\n░░░░░░░ and only then enter\n\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***"; 
   
        puts (main_menu_text);
    

        scanf("%1023[^ ]", pass_d); 
        
        size_t length = strlen(pass_long);
        
        int pass_step = 1;
        
        while (length < 1024) {
            
            if ( pass_d[ pass_step ]== '\0') pass_step = 1;
            
            pass_long[length] = pass_d[ pass_step ];

            length++;
            
            pass_step++;
            
        }    

        pass_long[1024] = '\0';
        
        
        FILE *fp;

        fp = fopen(filename_d, "r+");

        fgets(str_d, 1024, (FILE*)fp);
        
        fclose(fp);
            

    
    
        
        pass_step = 1;

        for (i = 0; (i < 1024 && str_d[i] != '\0'); i++) {
            
            str_d[i] = -110 + (str_d[i] + pass_long[pass_step]); 

            pass_step++;
            
        };
            
        printf("\nDecrypted string: %s", str_d);
        printf(", by a code %s", pass_d);    
        printf("\n");

        
        
    } 
