

// This is library for a the game "The Great War".

void minnoe()
{
          int esc;
          int escn;
          
          int continuo;

          int control = 0; // эта переменная для проверки уровней.

          int minnoe[7][7]; // само минное поле.

          int i; // переменная для первого for. 
          int f; // переменная для второго for.

          for(i = 0; i < 7; ++i)
          {
              for(f = 0; f < 7; ++f)
              {
                  minnoe[i][f] = 0;
              }
          }

          for (i = 0; i < 7; i++)
	      {
		for (f = 0; f < 7; f++)
		{
			minnoe[i][f] = rand()%2;
		}
	      }

          while(1)
          {
         printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");

              printf("Введите кардинаты : ");
              scanf("%d %d", &esc, &escn);
              printf("\n");

              if (minnoe[esc][escn] == 0)
			 {
		       if (esc == 0 && escn == 0)
		       {
	     printf ("  0123456\n");
	     printf ("0|0======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
			   }
			   if (esc == 1 && escn == 0)
			   {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|0======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	     if (esc == 2 && escn == 0)
	     {
			 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|0======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
			   }
			   if (esc == 3 && escn == 0)
			   {
				   printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|0======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	     if (esc == 4 && escn == 0)
	     {
			 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|0======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
       //  break;
	 }
	     if (esc == 5 && escn == 0)
	     {
			 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|0======\n");
         printf ("6|=======\n");
        // break;
	 }
			if (esc == 6 && escn == 0)
			{
				printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|0======\n");
       //  break;
					   }
			if (esc == 0 && escn == 1)
			{
		 printf ("  0123456\n");
	     printf ("0|=0=====\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	     if (esc == 1 && escn == 1)
	     {
			 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=0=====\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
			   }
			   if (esc == 2 && escn == 1)
			   {
				   printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=0=====\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
			if 	(esc == 3 && escn == 1)
			{
				printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=0=====\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
       //  break;
	 }
	      if (esc == 4 && escn == 1)
	      {
			  printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=0=====\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
       //  break;
	 }
	     if (esc == 5 && escn == 1)
	     {
			 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=0=====\n");
         printf ("6|=======\n");
        // break;
			   }
		if (esc == 6 && escn == 1)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=0=====\n");
        // break;
					   }
		if (esc == 0 && escn == 2)
		{
		 printf ("  0123456\n");
	     printf ("0|==0====\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
					}     
		if (esc == 1 && escn == 2)
		{
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|==0====\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
						   }
		if (esc == 2 && escn == 2)
		{
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|==0====\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
		}
		if (esc == 3 && escn == 2)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|==0====\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
		}
		if (esc == 4 && escn == 2)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|==0====\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
		}
		if (esc == 5 && escn == 2)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|==0====\n");
         printf ("6|=======\n");
         //break;
		}		      
		if (esc == 6 && escn == 2)
		{
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|==0====\n");
       //  break;
					   }
		if (esc == 0 && escn == 3)
		{
		 printf ("  0123456\n");
	     printf ("0|===0===\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
		}
		if (esc == 1 && escn == 3)		   			   
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|===0===\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
		}
		if (esc == 2 && escn == 3)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|===0===\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
		}
		if (esc == 3 && escn == 3)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|===0===\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
       //  break;
		}
		if (esc == 4 && escn == 3)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|===0===\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
		}
		if (esc == 5 && escn == 3)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|===0===\n");
         printf ("6|=======\n");
        // break;
		}
		if (esc == 6 && escn == 3)
		{
			printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|===0===\n");
        // break;
		}
		if (esc == 0 && escn == 4)
		{
		 printf ("  0123456\n");
	     printf ("0|====0==\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n"); 
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
	 }
	 if (esc == 1 && escn == 4)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|====0==\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 2 && escn == 4)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|====0==\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 3 && escn == 4)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|====0==\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 4 && escn == 4)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|====0==\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 5 && escn == 4)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|====0==\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 6 && escn == 4)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|====0==\n");
        // break;
	 }
	 if (esc == 0 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=====0=\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
       //  break;
	 }
	 if (esc == 1 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=====0=\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 2 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=====0=\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 3 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=====0=\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 4 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=====0=\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 5 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=====0=\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 6 && escn == 5)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=====0=\n");
         //break;
	 }
	 if (esc == 0 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|======0\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
	 }
	 if (esc == 1 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|======0\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 2 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|======0\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 3 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|======0\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 4 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|======0\n");
         printf ("5|=======\n");
         printf ("6|=======\n");
        // break;
	 }
	 if (esc == 5 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|======0\n");
         printf ("6|=======\n");
         //break;
	 }
	 if (esc == 6 && escn == 6)
	 {
		 printf ("  0123456\n");
	     printf ("0|=======\n");
         printf ("1|=======\n");
         printf ("2|=======\n");
         printf ("3|=======\n");
         printf ("4|=======\n");
         printf ("5|=======\n");
         printf ("6|======0\n");
         //break;
	 }

	 control = control + 1;

	} // это нужно убрать.
	else 
	{
		printf ("Танк уничтожен!\n");
		printf ("Game over\n");
        //exit(0);
		//break;
		
		printf("Введите 4,чтобы загрузиться заново : ");
		scanf("%d", &continuo);
		printf("\n");
	}
    
	if (control == 3)
	{
		control = 0;
		break;
	}
    
     }
}
