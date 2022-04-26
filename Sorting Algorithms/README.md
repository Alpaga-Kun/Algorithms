<p align="center">
  <img 
    width="300"
    height="300"
    src="https://user-images.githubusercontent.com/102417356/165273721-01bca157-c51f-4bb3-8f91-f2459ea91740.gif"
  >
</p>

Un **algorithme de tri** est utilisé pour **réorganiser un tableau donné ou des éléments de liste** en fonction d'un opérateur de comparaison sur les éléments. L'opérateur de comparaison est utilisé pour décider du nouvel ordre des éléments dans la structure de données respective.</br>
Vous trouverez une petite liste ci-dessous dans lequel je m'entraine à en créer.

# Table of Contents
<br/>[Bubble Sort](#bubble-sort)
<br/>[Bucket Sort](#bucket-sort)
<br/>[Counting Sort](#counting-sort)
<br/>[Heap Sort](#heap-sort)
<br/>[Insertion Sort](#insertion-sort)
<br/>[Merge Sort](#merge-sort)
<br/>[Quick Sort](#quick-sort)
<br/>[Radix Sort](#radix-sort)
<br/>[Selection Sort](#selection-sort)

## Bubble Sort
Bubble Sort est l'algorithme de tri le plus simple qui fonctionne en échangeant à plusieurs reprises les éléments adjacents s'ils sont dans le mauvais ordre.
<br/>Exemple :  
<br/>**Premier passage :** 
<br/>( **5 1** 4 2 8 ) ➜ ( **1 5** 4 2 8 ), Ici, l'algorithme compare les deux premiers éléments, et permute depuis 5 > 1. 
<br/>( 1 **5 4** 2 8 ) ➜ ( 1 **4 5** 2 8 ), Échange depuis 5 > 4 
<br/>( 1 4 **5 2** 8 ) ➜ ( 1 4 **2 5** 8 ), Échange depuis 5 > 2 
<br/>( 1 4 2 **5 8** ) ➜ ( 1 4 2 **5 8** ), Maintenant, puisque ces éléments sont déjà dans l'ordre (8 > 5), l'algorithme ne les permute pas.
<br/>**Deuxième passe :** 
<br/>( **1 4** 2 5 8 ) ➜ ( **1 4** 2 5 8 ) 
<br/>( 1 **4 2** 5 8 ) ➜ ( 1 **2 4** 5 8 ), Échange depuis 4 > 2 
<br/>( 1 2 **4 5** 8 ) ➜ ( 1 2 **4 5** 8 ) 
<br/>( 1 2 4 **5 8** ) ➜ ( 1 2 4 **5 8** ) 
<br/>Maintenant, le tableau est déjà trié, mais notre algorithme ne sait pas s'il est complet. L'algorithme a besoin d'une passe entière sans aucun échange pour savoir qu'il est trié.
<br/>**Troisième passe :** 
<br/>( **1 2** 4 5 8 ) ➜ ( **1 2** 4 5 8 ) 
<br/>( 1 **2 4** 5 8 ) ➜ ( 1 **2 4** 5 8 ) 
<br/>( 1 2 **4 5** 8 ) ➜ ( 1 2 **4 5** 8 )
<br/>( 1 2 4 **5 8** ) ➜ ( 1 2 4 **5 8** )
<br/>
<br/>**Complexité temporelle du cas le plus défavorable et moyenne :** O(n*n). Le pire des cas se produit lorsqu'un tableau est trié en sens inverse.
<br/>**Complexité temporelle dans le meilleur des cas :** O(n). Le meilleur des cas se produit lorsqu'un tableau est déjà trié.
<br/>**Espace auxiliaire :** O(1)
<br/>**Cas limites :** le tri à bulles prend un temps minimum (ordre de n) lorsque les éléments sont déjà triés.
<br/>**Tri sur place :** Oui
<br/>**Stable :** Oui
<br/><br/>En raison de sa simplicité, le tri à bulles est souvent utilisé pour introduire le concept d'algorithme de tri. 
En infographie, il est populaire pour sa capacité à détecter une très petite erreur (comme l'échange de seulement deux éléments) dans des tableaux presque triés et à la corriger avec une complexité linéaire (2n). Par exemple, il est utilisé dans un algorithme de remplissage de polygones, où les lignes de délimitation sont triées par leur coordonnée x à une ligne de balayage spécifique (une ligne parallèle à l'axe des x) et avec l'incrémentation de y, leur ordre change (deux éléments sont permutés) uniquement à intersections de deux lignes.

## Bucket Sort
some text.
## Counting Sort
some text.
## Heap Sort
some text.
## Insertion Sort
some text.
## Merge Sort
some text.
## Quick Sort
some text.
## Radix Sort
some text.
## Selection Sort
some text.
