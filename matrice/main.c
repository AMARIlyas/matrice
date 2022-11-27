# include <stdio.h>
#define MAX 50

int main ()
{

   // >>>>>>>>>>>>>>> L = ligne || C = colonne <<<<<<<<<<<<<<<<<


   // declaration
   int l, c, i ,j, a, b, somme;
   int M[MAX][MAX];
   printf("Veuillez remplir la matrice: \n");
   printf("Nombre des lignes : ");
   scanf("%d",&l);

   printf("Nombre de colonnes : ");
   scanf("%d",&c);


   // remplissage

   for(i = 0 ; i < l ;i++)
   {
       for ( j = 0 ; j < c ; j++)
       {
           printf("Veuillez saisir M[%d][%d] : ",i,j);
           scanf("%d",&M[i][j]);
       }
   }

   // affichage

      for(i = 0 ; i < l ;i++)
   {
       for ( j = 0 ; j < c ; j++)
       {
           printf("%d ,",M[i][j]);
       }
       printf("\n");
   }

   //


    // Somme des lignes :
      for(i = 0 ; i < l ;i++ )
   {
       somme = 0;
      for ( j = 0 ; j < c ; j++)
      {
       somme += M[i][j];

      }
      printf("La somme de la ligne %d est %d . \n",i+1,somme);
   }


   // Somme des colonnes

   for(i = 0 ; i < l ; i++){
    somme = 0;
    for(j = 0 ; j < c ; j++){
        somme += M[j][i];

    }
    printf("La somme de la colonne %d est %d . \n",i+1,somme);

   }
}
