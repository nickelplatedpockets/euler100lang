# Sum Square Difference

To get started please see the [challenge page](https://projecteuler.net/problem=6)

<details>
<summary>Solution</summary>
Pretty simple, iterate over the first 100 natural numbers twice, once to sum them and once to square and sum them, then subtract. 

There is also an interesting fact that the sums of the products of n and the odd inverse of n in the sequence equals the sum of the squares (e.g. 100 * 1 + 99 * 3 + 98 * 5 ... 2 * 197 + 1 * 199 = 339350).
</details>

# Code
Brainfuck code provided in sumsq.bf, run it with the input "dd" (100 100) using [this brainfuck interpreter](https://copy.sh/brainfuck/) using 32-bit cell sizes OR [click here](https://copy.sh/brainfuck/?c=LApbCiAgICA-Pis-Kzw8PC1dPj4-WzxbPCs8Kz4-LV08LVs-KzwtXT4-LV0KICAgIDw8PFs-Pis-Kzw8PC1dPj4-WzxbPCs8Kz4-LV08Wz4rPC1dPgogICAgPi0KXSAoU3F1YXJlIG9mIHN1bXMpCjxbLV08LFs-Pj4-Pis8KzwrPDw8LV0-Pj4-PgpbCiAgICA8WzxbPCs8Kz4-LV08Wz4rPC1dPj4tXSAoQ2FsY3VsYXRlIHNxIG9mIG4pIDw8PFs8Kz4tXQogICAgPj4tWzwrPi1dPFs-Kz4rPDwtXT4-CiAgICA-LQpdIChTdW0gb2Ygc3F1YXJlcykKPDw8PDxbPC0-LV0$)
