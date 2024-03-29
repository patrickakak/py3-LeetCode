// maths
// T=O(lgn)
// S=O(1)

// class Solution {
// public:
//   int sumNums(int n) {
//     int ans = 0, A = n, B = n + 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     (B & 1) && (ans += A);
//     A <<= 1;
//     B >>= 1;

//     return ans >> 1;
//   }
// };


// recursion
// T=O(n)
// S=O(n)

class Solution {
public:
  int sumNums(int n) {
    n && (n += sumNums(n-1));
    return n;
  }
};

