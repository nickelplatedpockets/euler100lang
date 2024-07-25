#!/bin/bash

echo $(awk 'NR==10001' ./primes.txt)
