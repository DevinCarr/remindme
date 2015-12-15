# remindme
A simple script to open a video after a time delay to remind me of a small task.

# Building

`gcc remindme.c -o remindme`

# Running

I typically just run it as a backgrounded process: `$ ./remindme in 30 &`
# Help

```
remindme help:
A simple script to open a http link after a designated time limit.

in <minutes>	sets the time limit to wait in minutes(can be a float value).
with <ink>	sets the link to open after the sleep.
```
