# RSA Factoring Challenge

## Background Context

We have sniffed an unsecured network and found numbers that are used to encrypt very important documents. It seems that those numbers are not always generated using large enough prime numbers. Your mission should you choose to accept it, is to factorize these numbers as fast as possible before the target fixes this bug on their server - so that we can decode the encrypted documents.

## Requirements

### General

- You can choose the language of your choice.
- OS needs to be Standard Ubuntu 20.04 LTS.

## Tasks

### 0. Factorize all the things! #advanced

Factorize as many numbers as possible into a product of two smaller numbers.

Usage: `factors <file>`
where `<file>` is a file containing natural numbers to factor.
- One number per line.
- You can assume that all lines will be valid natural numbers greater than 1.
- You can assume that there will be no empty line, and no space before and after the valid number.
- The file will always end with a new line.
- Output format: `n=p*q` (one factorization per line).
- `p` and `q` don’t have to be prime numbers.
