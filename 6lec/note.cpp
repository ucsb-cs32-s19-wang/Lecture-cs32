/**
 * Hash Table:
 *  -   The ability to store key values in a smaller collection of possible key items
 *  -   Hash Function: Output a position in the underlying structure (array) based on the key value
 *      -      -      -
 *     | |  : | | ,  | | , ....
 *      -      -      -
 *  - Negative:
 *      Collision: When have multiples keys mapping to the same index
 *          - Solve:    1) Open Address Hashing (Linear Probing): Placing an item in the next open spot in the array.
 *                          - For most vectors
 *                          - Costly. However, we can't find the key. Might go through the entire structure. Resize if full.
 *                      2) Double Hashing: jumps around when seeing collisions
 *                          - The size of the array suggested to be a prime number
 *                      3) Chained Hashing: Having multiple element in the same key (like an array)
 *                          - std map uses red black tree; unordered map uses linkedlist
 *                          - Don't need to resize about the array
 *                          - The worst case stores everything in an array (O(N) to search)
 *                          - On Average insertion and look up is O(1)
 *  - Comparison:   
                        Hash Table             |           Balanced Tree
                      Average Worst            |          Average | Worst
        LookUp          O(1) | O(N)            |         O(log(N))|O(log(N))
        Deletion        O(1) | O(N)            |         O(log(N))|O(log(N))
 *        
 */