`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
1. Modulo Arithmatic
   
   a % c = b % c 
   a = b mod c (triple -)

   1) (a + b) % c = ((a % c) + (b % c)) % c
   2) (a - b) % c = ((a % c) - (b % c)) % c
   3) (a * b) % c = ((a % c) * (b % c)) % c
   4) (a ^ b) % c = ((a % c) ^ b) % c

   Ex. 
      1) 7 % 3 = 1 
        
      2) (7 ^ 2) % 3
         ((7 % 3) ^ 2) % 3
         1 % 3 = 2.  
    
      3) -3 % 2
         ( -1 * 3) % 3
         -1 * (3 % 2)
         -1 * 1
         = 1

         -1 + 2 = 1%3 = 1
        
      4) (-4) % 7
         7 - 4 = 3 % 7 = 3

      
   
   (a / b) % c  
     
      step 1 : (a / b) --> a * b ^(-1).
      step 2 : (a * b ^(-1)) % c.


````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````


1. Modulo Arithmatic
   
   A. Understanding Modular Congruences.
      --> a and b are said to be congruent(≡) to each other under modulo N, if they leave same remainder when divided by N.

      a ≡ b (mod N)
      Ex. 13 ≡ 41 (mod 7)
          
          13 mod 7 = 6.
          41 mod 7 = 6.

      (13 + 35 + 5) % 7 = (53) % 7 = 4.
      (41 + 35 + 5) % 7 = (81) % 7 = 4.

      (13 * 4) % 7 = (52) % 7 = 3.
      (41 * 4) % 7 = (164) % 7 = 3.

      why this happen,
      (13 + 35 + 5) % 7 = (53) % 7 = 4.
      ((13 % 7) + (35 % 7) + (5 % 7)) % 7 = (11) % 7 = 4.
      (6 + 0 + 5) % 7 = (11) % 7 = 4.

      if 
        a ≡ b (mod N)
      then 
        a - b ≡ 0 (mod N)
        a - b is divisible by N.

      Proof :
       a = (N * k1) + R.
       b = (N * k2) + R.

       a - b = (N * k1) + R - (N * k2) - R..
       a - b = N * (k1 - k2).

       13 ≡ 41 (mod N)

       13 - 41 = (-28) / 7 = 4
       41 - 13 = ( 28) / 7 = 4


       Now,
       a - b = N * k. when, (k = k1 - k2).
       or
       a = (N * k) + b.

       Ex. 13 = (7 * -4) + 41.
           41 = (7 *  4) + 13.

      
      B. Multiplication Under modulo.
       
         --> if (a * b) = c
         then 
            a (mod N) * b (mod N) ≡ c (mod N)
            (a % N) * (b % N) ≡ c % N.

         res = a * b,
         res = ((a % N) * (b % N)) % N.

         
         13 ≡ 3 (mod 5) and 9 ≡ 4 (mod 5)
         13 * 9 = 117
         (13 % 5) * (9 % 5) ≡ (117 % 5)
         3 * 4 ≡ 2 (mod 5)
         12 ≡ 2 (mod 5).


         C. Modulo equstion
         1) (a + b) % c = ((a % c) + (b % c)) % c
         2) (a - b) % c = ((a % c) - (b % c)) % c
         3) (a * b) % c = ((a % c) * (b % c)) % c 
         4) (a ^ b) % c = ((a % c) ^ b) % c)


         Find last digit of 2573 * 34268 ?
         To find last digit

         = (2573 * 34268) % 10
         = ((2573 % 10) * (34268 % 10)) % 10 
         = (3 * 8) % 10 
         = 24 % 10 = 4.

         D. Modulo Multiplicative Inverse
            
            --> (a / b) % p = ((a % p)/(b % p)) % p

            (6 / 2) % 5 = ((6 % 5)/(2 % 5)) % 5
                        = (1 / 2) % 5
                        = (0) % 5
                        =  0 (It's not true)

            
            --> Multiplicative inverse 
            Ex. 10 / 5 = 10 * (multiplicative inverse of 5)
                       = 10 * (1/5)
                       = 10 * (0.2)
               
            Question : Can We find modulo inverse of B (let's call it X) and replace '/' with '*' ?
         
            Now,
            
            (a / b) % p = (a * x) % p = ((a % p) * (x % p)) % p

            --> How to find modulo inverse ?

            Ex. To answer this question think about    
                multiplicative inverse

                5 * (1 / 5) = 1

                (5 * (1/5)) % P = (1 % P).

                (N * X ) % P= (1 % P).

            =>  Modulo multiplicative inverse of a number N,  
                under modulo p is defined to be a number x such that,

                N * X ≡ 1 (mod P)

            => Modulo multiplicative inverse of 5, under  
               modulo 7 is 3 since,

               5 * 3 ≡ 1 (mod 7)

               15 % 7 = 1 % 7.

            Ex. 
              (6 / 2) % 5 = ((6 % 5) * (3 % 5)) % 5
                          = (1 * 3) % 5
                          = 3
                  
              --> Do all numbers have modulo inverse ?
                  The answer to this question in NO!
               
              => 12 has no modulo inverse inverse under
                 modulo 6.

              => Modulo inverse of N, under modulo P exist if 
                 gcd (n,p) = 1.

               
         E. Finding Modulo inverse

            => There are 2 diffrent ways to calculate modulo  
               inverse efficiently.

               1)  Fermat's little theorem (O(logn))
               2)  Extended Euclidean Algorithm 

            1. Fermat's little theorem
            
            a ^ m-1 ≡ 1 mod m 
            a ^ m-2 ≡ a ^ -1 mod m (devide both side by a) 

            This say, To calculte (a^-1) you have to calcute (a^m-2).

   ≡  
  

`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````
