--------------------------------------------------------------------------------------------------------------------------------------------------------------------
myHeaderFile.h
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
#ifndef MY_HEADER_FILE
#define MY_HEADER_FILE

/*
	THIS IS THE COMMON HEADER FILE STRUCTURE.
	
	HEADER FILES CONTAIN ONLY DECLARATIONS AND NOT DEFINITIONS.
    (ONLY EXCEPTION IS FOR SMALL INLINE FUNCTIONS)
	
	HEADER FILES MAY CONTAIN CLASSES, GLOBAL VARIABLES, STRUCTS AND ALL SORTS OF STUFF.
	(THESE ARE SOMEWHAT SIMILAR TO INTERFACES AND ABSTRACT CLASSES)
	
	THESE MEMBERS ARE DEFINED IN PROGRAMS WHICH INCLUDE THIS HEADER FILE.
	 (WRITTEN OR EXPANDED WITH DEFINITIONS)

	HEADER FILES MAY CONTAIN '#include' STATEMENTS FOR 'iostream', 'string' etc.	
	
	BUT IT'S A COMMON CONVENTION, NOT TO USE 'namespaces' AND 'using' 
		EXCEPT FOR string, WE USE STRING AS 'std :: string' BECAUSE STRINGS ARE USEFUL IN MANY WAYS.
	
	THESE HEADER FILES MAY GET INCLUDED BY MANY OTHER PROGRAMS THAT COLLABORATE WITH EACH OTHER,
		HENCE, IT IS IMPORTANT NOT TO EXPAND IT MULTIPLE TIMES (REPEATED), OTHERWISE COMPILER MIGHT GET CONFUSED, AND GIVE OUT ERRORS.
		
		THIS THING IS TAKEN CARE OF BY 3 LINES: (PRE-PROCESSOR COMMANDS)
		
												1'ST: #ifndef MY_HEADER_FILE
												2'ND: #define MY_HEADER_FILE
												LAST: #endif
												
			2'ND LINE '#define MY_HEADER_FILE'	DEFINES A PREPROCESSOR VARIABLE 'MY_HEADER_FILE'.

				THIS WILL GET CREATED, AND WILL ACT AS A FLAG FOR NEXT 'EXPANSION CONFIRMATIONS'.
			
			1'ST LINE '#ifndef MY_HEADER_FILE' THIS IS A PREPROCESSOR IF BLOCK,
			
				THAT ENDS WITH LAST LINE '#endif'
				
				'ifndef' STANDS FOR 'IF NOT DEFINED', WE CAN SAT IT CHECKS FOR PREPROCESSOR VARIABLE 'MY_HEADER_FILE'
				
					'IF NOT DEFINED' IS TRUE, THEN IT WILL FIRST EXECUTE THE 2'ND LINE, AND EXPAND THE HEADER FILE.
					
					IF IT DEFINED, i.e. 'IF NOT DEFINED' IS FALSE, THAT MEANS HEADER FILE HAS ALREADY BEEN EXPANDED,
					
						THEN IT WILL GO TO LAST LINE AND END THE IF-BLOCK.
		
		
		COMPILING & RUNNING:
			
			g++ HeaderFileDefinitions.cpp ProgramRunningMainFunction.cpp -o newExe
			
			./newExe														
*/
#endif
--------------------------------------------------------------------------------------------------------------------------------------------------------------------