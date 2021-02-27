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
void start( void );
void help( void );

int main( void )
{
   clrscr( );
   
   unsigned int action = 0;

   printf( "%s", "\n\n\t\tACTION MENU\n" );
   printf( "%s", "\t\t-----------\n" );
   printf( "%s", ">> Press \'1\'  to START the game." ); // prompt
   printf( "%s", ">> Press \'2\'  to see HIGH SCORES of the game." );
   printf( "%s", ">> Press \'3\'  to see the game HELP." );

   scanf( "%u", &action ); // read the input from the user

   switch( action )
   {
      case 1 :
         start( );
      break;

      case 2 :
         highScore( );
      break;

      case 3 :
         help( );
      break;

      default :
         exit( 1 );
      break;
   } // end switch

   getch( );
} // end function main

// User - defined function definition
void help( void )
{
   int actionChoice;

   printf( "%s", "\n\n********************---GAME HELP---********************" );
   printf( "%s", "\n\n--------------------***************--------------------\n" );
   printf( "%s", "~ There will be a total of 5 questions\n" );
   printf( "%s", "~ There will be a total of 4 options for each of the 5 questions\n" );
   printf( "%s", "and there will be just one and only one correct option for each\nof the 5 questions" );
   printf( "%s", "~ The options will be numbered from \'1\' to \'4\'\n" );
   printf( "%s", "~ You have to enter the corresponding number of the option that\nyou think is correct\n" );
}