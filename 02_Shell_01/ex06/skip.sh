#!/bin/sh
ls -l | awk 'FNR % 2 == 1'