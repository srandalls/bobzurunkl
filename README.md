bobzurunkl
==========
Extensible parser library


Purpose
=======

The purpose of this library is to provide a minimal toolkit for building
parsers.


Name
====

The name "bobzurunkl" is a phonetic spelling of the phrase "Bob's your uncle".
Within the context of this library, the phrase has a dual meaning:

  1)  From <https://en.wikipedia.org/wiki/Bob's_your_uncle>, 2020-09-24:

      "Bob's your uncle" is a phrase commonly used in Ireland, United Kingdom
      and Commonwealth countries that means "and there it is" or "and there
      you have it". Typically, someone says it to conclude a set of simple
      instructions or when a result is reached. The meaning is similar to that
      of the French expression "et voilà!" or the American "easy as pie" or
      "piece of cake".

      This sentiment is at the heart of what I intend to produce.

  2)  I viewed a presentation by Robert C. Martin - aka "Uncle Bob" - on
      "Clean Code". In a sincere effort to follow his wisdom, the code in this
      library will be entirely test-driven. Thus, whose uncle is this project?
      Why, Uncle Bob of course!

      Bob Martin's talk was part of an event hosted by Rabobank called
      "Coding a Better World Together". Here is a link to the playlist:
      https://www.youtube.com/playlist?list=PLUxszVpqZTNShoypLQW9a4dEcffsoZT4k


Contents
========

The bobzurunkl library - written in C - consists of opaque objects and
functions which operate on them. The objects are as follows.

  1)  BuuIterator

      This object scans sequential data in a string, file, or input stream
      in units of either 8, 16 or 32 bits (1, 2 or 4 bytes). It maintains a
      current position and provides access to the unit value at that position.

  2)  BuuStack

      This is a LIFO object which holds a dynamically allocated array of data
      with element size determined by the user. The stack is meant to be used
      to store state and/or iterator position, depending upon an application's
      needs.

  3)  BuuQueue

      This is similar to the BuuStack, except that it is a FIFO object.
      Typically, the queue is used for tokenization.

  4)  BuuTrie

      A trie is an object for containing a lexicon broken down into common
      substrings. Each leaf - a node with a key which is the ending of a
      defined string - has a non-null pointer to some user-defined data. While
      a hash table keyed with strings would serve the same purpose, I feel
      that a trie is appropriate for looking up sequential data.

