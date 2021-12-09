# advent-of-code-2021
Solutions to Advent of Code 2021: each day a different programming language.

This is silly, but what the heck: every day, I want to use a different language for solving the puzzles from Advent of Code.

## Day 1: Awk

Awk is well suited to working on text-files that can be handled line-wise. It is a good match for day 1.

## Day 2: Lex

Problem input looks somewhat like a programming language (like Logo, but with a submarine instead of a turtle). Maybe Logo would have been fitting, but I choose to build an interpreter for the problem in Lex. Normally you use Lex in conjunction with yacc, but I want to leave yacc as an option for another day, so I have to do some violence to lex to make it work.

## Day 3: Octave

Problem input looked like a matrix, so I thought, use Octave, it is well suited to matrices. Oh my! The hard part was figuring out how to read in the data. Working with the matrices however is quite easy. However, the second part did not feel as natural a fit to Octave as the first.
