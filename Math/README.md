# Math
## primeMine.c
Chances are you're here to use my (amazing) C primeMine program. This program searches for all prime numbers up to the maximum number given. Numbers are written out to primenums.txt by default. However, unlike my Python version, this does not continue, and instead overwrites the file each time.

### Compile
To compile the program, use the following command for `gcc`:

```shell
gcc primeMine.c -o primeMine -lm
```
and run the `primeMine` binary generated.

However, for the best performance, run the following `gcc` command:

```shell
gcc primeMine.c -o primeMine -O3 -static -lm
```
