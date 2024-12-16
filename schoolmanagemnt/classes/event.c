typedef struct {
    char id[10];                
    char nom[50]; 
    char description[200];              
    char professor_ids[5][10];  
    char student_ids[100][10]; 
    char accompanying_ids[100][10];
    char date[10];  /*sous forme dd/mm/yyyy*/            
    char heure_debut[5];   /*sous forme hh;mm*/    
    char heure_fin[5];     /*sous forme hh;mm*/     
    char emplacement[50];       /*can be ecole or another place*/
} Event;
