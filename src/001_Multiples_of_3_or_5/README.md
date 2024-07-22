# Multiples of 3 or 5

To get started please see the [challenge page](https://projecteuler.net/problem=1)

<details>
<summary>Solution</summary>
In fully-fledged languages, we could approach this iteratively, looping over every number from 1-1000 and using a double-modulus check to see if it is a multiple of 3 or 5. This is slow but on modern machines it's not <i>that</i> slow. However, it doesn't take much thinkery-doo to figure out the closed-form solution. 

The sum of all numbers from 0 to n is ((n/2) * (n+1), or ((n+1)/2) * n, or recursively as f(n) = f(n-1) + n
To find the number of multiples of k between 1 and some value n, you multiply k by the sum of all numbers between 1 and (n / k) = l
e.g. all multiples of 3 from 1 to 10: 3(1+2+3) => 3((3/2) * (3+1)) => 3 * 6 = 18
e.g. all mutliples of 5 from 1 to 50: 5(1+2+...+9+10) => 5((10/2) * (10+1)) => 5 * 55 => 275
There is some cross-over numbers that will be double counted if we were to just calculate for 5 and 3, so we must discount them, The cross-overs are multiples of 15 (3*5) so 15((66/2) * (66 + 1)) = 33500 needs to be subtracted from the final sum of f(5, 1000) and f(3, 1000). This gives a value of (100500 + 166833 - 33500) = 233833, which isn't <i>quite</i> right. We need to subtract from 1000 to get to the nearest multiple of each number...

3 => 999 => 3((333+1)/2 * 333) = 166833
5 => 995 = 5((199+1)/2 * 199) = 99500
15 => 990 = 15((66+1) / 2 * 66) = 33165

Subtracting the result of the 15s gives a final value of 233168.

</details>

# Code

1+ program in `program.1p`, intepreter is in-progress, use [tio.run](https://tio.run/##jVVbb5tIFH73rzgZPwABg3Gyahfih6ZSq64iK8q2DytMEIZxjZbbzgy5aNvf7p4BY8COvevYZObMd75zH8pXsSny2XY7ho0QJXcsqwxZlL6K8IWmpqiyVcrMqMissuDCev9u@v63d/b1lf27leSCspJRfE7WBZvYkySflDXfaDS@sCrOrFWSWzR/gp14DLYOPT1cw317dF/bha/SMFjwB2U0k9vcgNnUvkbEXRLRPKKQcPj4EW7/mvz5Aa7NKYI/fbgD27zC1efFN/h8f/d0NVqzIoMgWFeiYjQIIMnKggkoGTqA0jwSCdrdSfkrbxSiIk1pfcRbjZj@U9HRiBvAY5g3W1Uz4N@fo1FM11DktEwrrnLEzmGBW80ZAX6SNeQFcjPR7HeylOYq2jND9v1Jg4s5zLpj@ak9VMk3Hn6nDhDQoUV7Ux93BLx1klIQBawo0BcaVYLGPtEGLFKHviRCtTt5kpfoYVH2HPBs3wCFKR2Ihc8IQqjJaBirA20zSgtOdzKacvSvgWOMtax@bDIDHgxYcWHArQELPPd8mS@jS94UvzUYWwci2QhINEhTBPM5KKoyTM4t6HOwByK0Y4YlBhWrC@2YQTtimBwyPHiSoyxKVfNlCQeHSHQLNzAdsvQK9SVbhWmIjRnDioXR31Twi4NiDAoye8PJsQJhHqMh3EwdzOAbES260GufLuZ9p/6fM4dO1I@FAVEmexeL8inEqtbS541ssgWGLhsWq6N1xgrZRyjyFn4/FtntyOQc5k/CMUhbcYC3gdnDDNG0w@l9HG/qIqegWZ3Wu3xL7/K/9chAz5vY/mmsVWNZIUJBz8WwXPaBkzPIxxpIX4S07u2cNVqvz7hy03d7KvPcxnyzX8kZhTPGx8gh53OTtZb9k1izby9ccVU2HDZBgBdDJVQlx5cFZQ5OnHYm2UafpWBxnyHahNizoiHBy@4MjYM0dcuDuk8ZMmIohJzWcqVxHAEu4qIS5jNLsDhVnkQb1tKcsemhdjMoX1lFT8IOr6z6UhV5OzHYybbzgJPjm/iqFYl816jKD@X4xkBK1MMbGp2OPbmc@vJ@kquZfwTfv4f22GNKWeuH/tQeOh8rsEusyjv1@qo/MdX@Pivd3dG7rhAYBHmYyVcwwkkQZGGSBwFp@Fqnte3WtnVC8Is/6/LRIst66y7x/yWxddeSZ66r/rB1@acR13okxFY1oquajgji6o@uuySuqrmW66LK1qw7y8Qc/wI) for now.
