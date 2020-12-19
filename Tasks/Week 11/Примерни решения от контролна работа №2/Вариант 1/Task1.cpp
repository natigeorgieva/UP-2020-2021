/*
Дадени са елементите на главния диагонал на квадратна матрица с размер n
(4<n<10) в масив със същата големина. Да се напише програма, която по подаден този
масив въвежда елементите в матрицата по нейния главен диагонал. Да се пресметнат
елементите под главния диагонал, като всеки такъв елемент е равен на сумата на индекса
на неговия ред и стойността на елемента над него. За стойността на всеки елемент над
главния диагонал се получава от средното аритметично на елемента вляво от него и елемента под него.

*/


double arr[N] = { 1,2,3,4,5 };
	 double M[N][N] = {};

	 for (int i = 0; i < N; i++)
		 M[i][i] = arr[i];


	 for (int j = 0; j < N - 1; j++)
	 {
		 for (int i = j + 1; i < N; i++)//Имайки предвид ограничението от условието (n>=4), съвсвем директно си пресмятаме стойностите в клетките, без да са ни нужни проверки
			 M[i][j] = (i + M[i - 1][j]);
	 }

	 for (int i = N - 2; i >= 0; i--)
	 {
		 int copyi = i;
     //В условеито на фор цикъла е също ок да поставим ограничение за j (j>=N-(N-1-i))
		 for (int j = N - 1; copyi>=0; j--, copyi--)//Тъй като е по диагонал отдясно на ляво, и реда, и стълбовете намаляват
     //Може по няколко неща да се променят в последната част на фор цикъла. Трябва да обходим диагонално, за да може всяка клетка да я запълним със съответните числа.
     //В противен случай, ако обхождането е по друг начин, можем да достъпим клетка, която не сме запълнили (тоест да работим с някаква случайна стойност).
			 M[copyi][j] = (M[copyi][j - 1] + M[copyi + 1][j]) / 2; //Отново ограничението ни спестява проверки
	 }

	 for (int i = 0; i < N; i++)
	 {
		 for (int j = 0; j < N; j++)
			 cout << M[i][j] << " ";
		 cout << endl;
	 }
