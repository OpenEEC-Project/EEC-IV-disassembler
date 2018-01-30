# EEC-IV-disassembler
semi automatic disassembler for Ford EEC-IV and V binaries

I have posted the basic source files here which should compile with pretty much any of the standard C or c++ compilers out there
I admit some of the code is a bit messy and I use lots of pointers ...

SAD is used to disassemble Ford's Intel based ECM code into a human readable format. This disassembly
is then used to create a tuning strategy, compatible with the TunerPro RT or Binary Editor softwares.  

***
3.02

Fixed 3 bugs in data struct printout.
Fixed bug in parse_command which can cause crash.
