# 0x1C-makefiles - Task
<h2>
Defination :
</h2>
<p>This file documents the GNU make utility, which determines automatically which pieces of a large program need to be recompiled, and issues the commands to recompile them</p>
<p>In a short term if you know the way bashfiles works then makefile also works that way.</p>
<h2>
How to create a Makefile
</h2>
<li>makefiles typically have an extension of .mk, .mak, or no extension at all. However, the most common convention is to name the makefile Makefile or makefile (with no extension), which allows the make command to find and use the makefile by default without specifying the filename.

If you have multiple makefiles in your project, you can specify the filename using the -f option when running the make command, like this:
<code>
make -f Mymakefile.mk
</code>
</li>
