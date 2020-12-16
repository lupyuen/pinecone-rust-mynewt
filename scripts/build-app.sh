#!/usr/bin/env bash
#  macOS and Linux Bash script to build Mynewt Firmware

set -e  #  Exit when any command fails
set -x  #  Echo commands

#  Terminate any OpenOCD processes from the debug session
set +e  #  Ignore errors
pkill openocd
set -e  #  Stop on errors

#  Add GCC to the PATH
set +x  #  Stop echo
export PATH="$PWD/xpack-riscv-none-embed-gcc/bin:$PATH"
set -x  #  Echo commands

#  Build the Mynewt Firmware
newt build pinecone_app

#  Display the firmware size
newt size -v pinecone_app
