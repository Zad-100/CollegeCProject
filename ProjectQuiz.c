// This is a project that is to be submitted to the classroom.
// Team meta_Coders

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>

struct play {
   char name[ 20 ];
   int score;
};

void highScore( void ); // function prototype
void startGame( void );
void gameHelp( void );

int main( void )
{
   clrscr( );
   
   unsigned int action = 0;

   printf( "%s", "\n\n\t\tACTION MENU\n" );
   printf( "%s", "\t\t-----------\n" );
   printf( "%s", ">> Press \'1\'  to START the game.\n" ); // prompt
   printf( "%s", ">> Press \'2\'  to see HIGH SCORES of the game.\n" );
   printf( "%s", ">> Press \'3\'  to see the game HELP.\n" );

   printf( "%s", "\n\nI STRONGLY RECOMMEND TO GO FOR THE HELP OPTION FIRST SO THAT\n" );
   printf( "%s", "YOU ARE THOROUGH WITH THE GAME RULES AND INSTRUCTIONS.\n" );

   printf( "%s", "\nEnter your choice :  " );
   scanf( "%u", &action ); // read the input from the user

   switch( action )
   {
      case 1 :
         startGame( );
      break;

      case 2 :
         highScore( );
      break;

      case 3 :
         gameHelp( );
      break;

      default :
         exit( 1 );
      break;
   } // end switch

   getch( );
} // end function main

// User - defined function definition
void gameHelp( void )
{
   unsigned int actionChoice;

   printf( "%s", "\n\n********************---GAME HELP---********************" );
   printf( "%s", "\n\n--------------------***************--------------------\n" );
   printf( "%s", "~ There will be a total of 5 questions\n" );
   printf( "%s", "~ There will be a total of 4 options for each of the 5 questions\n" );
   printf( "%s", "and there will be just one and only one correct option for each\nof the 5 questions" );
   printf( "%s", "~ The options will be numbered from \'1\' to \'4\'\n" );
   printf( "%s", "~ You have to enter the corresponding number of the option that\nyou think is correct\n" );
   printf( "%s", "~ Each question carries only 4 points.\nThere is no negative marking.\n" );
   printf( "%s", "~ You will be asked the questions continuously.\n" );
   
   printf( "%s", "\n\n\t\t\t  BEST OF LUCK!!!\n" );

   printf( "%s", "\nTO CONTINUE TO THE QUIZ, PRESS \'1\'\n" );
   printf( "%s", "TO EXIT THE PROGRAM, PRESS \'0\'" );
   printf( "%s", "\n\nSo, GAME ON?\n" );
   scanf( "%u", &actionChoice );

   if( actionChoice == 1 ) {
      printf( "%s", "\nYEAH! I KNEW YOU WOULD BE UP FOR THE CHALLENGE!\nHAPPY QUIZ!\n" );
      startGame( );
   }
   else
   {
      printf( "%s", "\nOkay, bye!\nBut you should have tried this once!\n" );
      exit( 1 );
   }
}

void startGame( void )
{
   unsigned int answer;
   unsigned int count = 0; // initialized to zero

   FILE *fp;

   if( ( fp = fopen( "score.txt", "a" ) ) = NULL ) {
      printf( "%s", "\nError in opening the file.\n" );
   }

   printf( "%s", "\n\nPlease, enter your name ( max 20 charaters including spaces ) :  " );
   scanf( "%s", p.name );

   // Counting the number of correct answers
   printf( "%s", "\n\nThank you so much for playing\n" );
   printf( "Your score is %u points!\n\n", ( count * 5 ) );

   p.score = ( count * 5 );

   // Writting to the file
   fprintf( fp, "%20s --> %4d", p.name, p.score );
   fclose( fp );
}