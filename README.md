# ensimag-os-Deulignes
Few lines of code to look at the operating systems through the wrong end of the telescope.

## FiboPrintf: Printf in recursive fibonnacci suite computation
Computing the fibonnacci suite is a classical example of recursive computation.
Doing a printf at every step of the recursion add a very significant slowdown: around few hundreds times slower.
### Question: Is it really the printf fault ?
Hint 1: redirect the output to /dev/null
Hint 2: use another terminal application (xterm, sakura, terminator, terminix, terminology)

