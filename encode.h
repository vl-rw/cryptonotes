           

void encode_alg(char str[1024], pass[1024], filename[1024]) {     

 			pass_long[1024];
            
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
                
            printf("\nEncrypted string: \"%s", str);    
            
            printf("\", by a code %s", pass);   
            
            
        
        FILE *fp;

        fp = fopen(filename, "w+");
        
        fputs(str, fp);
        
        fclose(fp);
        
            
            pass_step = 1;
            
            for (i = 0; (i < 1024 && str[i] != '\0'); i++) {
                
                str[i] = (str[i] + pass_long[pass_step]) -110; 

                pass_step++;
                
            };
                
            printf("\nDecrypted string: %s\n", str);
        
        
    } 
    
    
    
    
void decode_alg(char str[1024], pass[1024], filename[1024]) {     
    

        
        pass_long[1024];
        
        
        int i;
        
        char str[1024], pass[1024], pass_long[1024];
        
        char* main_menu_text = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n*** https://github.com/vl-rw/cryptonotes ***\n░░░░░░░░░░░░ DECODING ░░░░░░░░░░░░░░░░░░\n\n░░░░░░░ Please enter a password string, \n\n░░░░░░░ THEN SPACE, \n\n░░░░░░░ and only then enter\n\n░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n*** Type it here: ***"; 
   
        puts (main_menu_text);
    

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

        fp = fopen(filename, "r+");

        fgets(str, 1024, (FILE*)fp);
        
        fclose(fp);
            

    
    
        
        pass_step = 1;

        for (i = 0; (i < 1024 && str[i] != '\0'); i++) {
            
            str[i] = -110 + (str[i] + pass_long[pass_step]); 

            pass_step++;
            
        };
            
        printf("\nDecrypted string: %s", str);
        printf(", by a code %s", pass);    
        printf("\n");

        
        
    } 
