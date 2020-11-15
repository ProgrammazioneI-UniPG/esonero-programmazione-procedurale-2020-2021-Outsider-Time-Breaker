 #include <stdio.h>
 #include <stdlib.h>                  // Inclusione delle librerie
 #include <time.h>
 #include <string.h>

#define MAX 128 //Dimensione massima della stringa

int main (){
  char inizio [MAX];
  char chiave [MAX];
  char criptata [MAX];
  char decriptata [MAX];
  char scelta, ch;
  int i, lunghezza_chiave;
time_t
srand((unsigned) time(&t)); //Inizializzo la generazione casuale di caratteri

printf("Benvenuto.\n Per proseguire con il programma può scegliere di:\n Premere 1 per scrivere la chiave manualmente.\n Premere 2 per generare una chiave in maniera automatica.\n Premere 0 per terminare il programma" );
/*Richiedo all'utenza di effettuare una scelta a modo che possa continuare con il programma*/
fgets (inizio, 128, stdin)
while((ch = getchar()) != '\n' && ch != EOF);
scanf("%s\n",&scelta); //Possibilità di scelta
getchar()

switch (scelta) {
  case 1:  //nel caso l'utente voglia inserire manualmente la chiave, ecco il processo di inserimetno di k in maniera manuale
  printf("Per favore, inserisca una chiave\n ATTENZIONE: la chiave non può superare i 128 caratteri");
  fgest(chiave, 128, stdin);
  fflush(stdin);
  
  while (strlen(chiave) < strlen(inizio)){  //nel caso l'utente inserisca una chiave troppo corta, verrà richiesto l'inserimento di una nuova chiave
    printf("La chiave inserita è troppo corta.\n Per favore, inserire una nuova chiave:");
    fgets (chiave, 128, stdin);
    fflush(stdin);
   }
  while (strlen(chiave) > 128) {  //Se l'utente inserisce una schiave troppo lunga, verrà richisto di inserire una nuova chiave
    printf("La lunghezza della chiave supera i 128 caratteri\n Per favore, inserire una nuova chiave:" );
    fgets (chiave, 128, stdin);
    fflush(stdin);
   }

   lunghezza_chiave = strlen(chiave);
    for (i = 0; i < lunghezza_chiave; i++) {
      criptata[i] = inizio[i] ^ chiave[i];
   }

   printf("Il messaggio cifrato:" "%s", criptata);
      for (i = 0; i < 128; i++) {                   
          decriptata[i] = criptata[i] ^ chiave[i];
}

printf("Il tuo codice decriptato: %s\n", decriptata);
break;

   case 2: //Nel caso l'utente volesse una chiave generata automaticamente, avverranno le seguenti scritture

   printf("Ecco a te la chiave scelta in maniera casuale dal sistema:");
    for (i= 0; i <strlen(inizio)-1; i++)
   {
     chiave[i] (rand()%96)+32; //Siccome i primi 32 caratteri della tabella ASCII sono invisibili e tendono a creare problemi, verranno eliminati a priori
   }
   
   printf("%s\n", chiave);
       lunghezza_K = strlen(K);
     for (i = 0; i < 128; i++) {                     
       criptata[i] = inizio[i] ^ chiave[i];
     }

     printf("Ecco il messaggio cifrato ottenuto grazie alla chiave randomica a te assegnata: %s", chiave);
  for (i = 0; i < lunghezza_chiave; i++) {
      decriptata[i] = criptata[i] ^ chiave[i];
  }
  
 printf("Ecco il tuo messaggio decriptato: %s", decriptata);
 break;

   case 0:
     break;
}
return 0;
}
