/**
 * More on sorting algorithm
 *      O(NlogN) runtime
 * 
 *  1. Mergesort (Divde and Conquer)
 *      - Break array into subarrays where size = 1
 *      - Merge each subarray together to form a sorted larger array
 *      - apply this to the entire array
 *  
 *  - Divide and Conquer
 *      - Subdivide a larger problem into smaller parts
 *      - solve each smaller part
 *      - combine solutions back to the original problem
 * -----------------------------------------------EXAMPLE-----------------------------------------------------
 *          Divide:
 *                              5  4  3  6  7
 *                            |5  4|       |3  6  7|
 *                          |5|   |4|    |3|        |6 7|
 *                                                |6|   |7|
 *          Merge: (Put subarray in order)
 *                            |4 5|         |3 6 7|
 *                                |3 4 5 6 7|
 *                                 3 4 5 6 7
 * ----------------------------------------------END EXAMPLE--------------------------------------------------
 * -----------------------------------------------EXAMPLE-----------------------------------------------------
 *          Divide:
 *                              9  0  8  1  7
 *                            |9  0|       |8  1  7|
 *                          |9|   |0|    |8|        |1 7|
 *                                                |1|   |7|
 *          Merge: (Put subarray in order)
 *                              |9| |0| |8| |1| |7|
 *                              |0 9|       |1 7 8|
 *                                  | 0 1 7 8 9 |
 *                                    0 1 7 8 9
 * ----------------------------------------------END EXAMPLE--------------------------------------------------
 *            [(sorted)|(sorted)]
 *              / |  \  /  | | | \ 
 *             |  |   X    | |  \ \
 *             |  |  / \   | |  |  \
 *      temp: [] [] [] [] [] [] [] [] 
 * Run Time Analysis:
 *                                9  0  8  1  7                 }
 *                            |9  0|       |8  1  7|            }
 *                O(N}  {    |9|   |0|    |8|        |1 7|      }   log(N)
 *                      {                         |1|   |7|     }
 *      - Every Case is O(NlogN)
 *      - Uses O(N) additional space
 * 
 *                          
 *  2. Quciksort
 *      - subdivide array based on a "pivot" value
 *      - elements < pivot go to the left 
 *      - elements > pivot go to the right
 *      - recurse for each left/right portion of the array
 * 
 *  - Partition
 *      - Choose pivot
 *      - Put elements < pivot to left
 *                     > pivot to right
 *  - Repeat for left/right subarrays
 *      Psuedocode:
 *      while(leftIndex <= rightIndex){
 *          L: Left Index;
 *          R: Right Index;
 *          P: Pivot Value;
 *          L = find element > pivot
 *          R = find element < pivot
 *          swap(L, R);
 *      }
 *      swap(Pivot, R);
 *  ------------------------------------------------- EXAMPLE--------------------------------------------------
 *                                                  P L     R
 *                                                  7 9 0 1 8
 *                                                  ^
 *                                                  |
 *                                                Pivot
 *                                              
 *                                                  P L   R            
 *                                                  7 9 0 1 8
 *                                                    ^   ^
 *                                                  P R   L 
 *                                                  7 1 0 9 8
 *                                                      
 *                                                  P L     R
 *                                                  0 1 7 9 8
 *                                                           
 *                                                  R L     
 *                                                  0 1 7 9 8  
 * ----------------------------------------------END EXAMPLE--------------------------------------------------
 *      What about 1 2 3 4 5?
 *                           P L     R
 *                           1 2 3 4 5
 *                             P L   R
 *                           1 2 3 4 5
 *                               P L R
 *                           1 2 3 4 5
 *                                 ... O(N^2)
 *      Optimization:
 *          trade off additonal space
 */ 