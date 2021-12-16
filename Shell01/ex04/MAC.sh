#!/bin/sh
ifconfig | grep "ether" | sed 's/\(.*\)ether //g' | cut -b 1-17
