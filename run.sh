#!/usr/bin/env bash
dosbox &
sleep 2
wid=$(xdotool search --class DOSbox)
xdotool key --window $wid c colon Return
xdotool key --window $wid c d space v g a p r i d e Return
xdotool key --window $wid v g a p r i d e space s l i d e s h o w Return
while xdotool getwindowname $wid | grep -q VGAPRIDE; do sleep 0.5; done
xdotool key --window $wid e x i t Return
