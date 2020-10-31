DST in C
========

01 FIND_MAX
-----------

``unsigned int ft_find_max(int *arr, int n)``

- DESC::

   When number of n-counts of integer values in 1-dimensions provided,
   write code that finds most biggest one.

- PARAMS::

   arr
      n-count of integer storing array

   n
      number of integer elements in ``arr``

- RETURNS::

   an unsigned integer, maximum value in ``arr``

02 EVENODD
----------

``unsigned int **ft_evenodd(int *arr, int len)``

- DESC::

   When number of n-counts of positive integer values in 1-dimensions provided,
   write code that summation by evens and odds, and return each.

- PARAMS::

   arr
      n-count of positive integer storing array

   n
      number of integer elements in ``arr``

- RETURNS::

   double pointer, storing ``unsigned int *`` summation of evens, odds and NULL.
   NULL, malloc erorr or range error.

- ERROR::

   - malloc error
   - summation range overflow

03 FIND_MAX_MATRIX
------------------

``unsigned int ft_find_max_matrix(unsigned int **arr, int n)``

- DESC::

   When number of n-counts of integer values in 2-dimensions provided,
   write code that finds most biggest one by n-size of arr.

- PARAMS::

   arr
      n-count of unsigned integer pointer storing array

   n
      number of integer elements in ``arr``

- RETURNS::

   an unsigend integer, maximum value in ``arr``
