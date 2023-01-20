A tree-walk interpreter is simple, portable and slow. On the other hand, native code is complex and platform specific but fast hence Bytecode sits in the middl .

Imagine you’re writing a native compiler from some source language and you’re given carte blanche to define the easiest possible architecture to target. Bytecode is kind of like that. It’s an idealized fantasy instruction set that makes your life as the compiler writer easier.

The problem with a fantasy architecture, of course, is that it doesn’t exist. We solve that by writing an emulator—a simulated chip written in software that interprets the bytecode one instruction at a time. A virtual machine (VM), if you will.

That emulation layer adds overhead, which is a key reason bytecode is slower than native code. But in return, it gives us portability. Write our VM in a language like C that is already supported on all the machines we care about and we can run our emulator on top of any hardware we like.
