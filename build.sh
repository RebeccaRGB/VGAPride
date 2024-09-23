#!/usr/bin/env bash
cd py
python2 sort_flags.py
cd ..
rm -f CRABS.OBJ DISPLAY.OBJ FLAGBRZL.OBJ FLAGDEFS.OBJ FLAGDEFX.OBJ
rm -f FLAGS.OBJ GRAPHICS.OBJ LZ4_8088.OBJ VGAPRIDE.OBJ VGAPRIDE.EXE
dosbox &
sleep 2
wid=$(xdotool search --class DOSbox)
xdotool key --window $wid c colon Return
xdotool key --window $wid c d space v g a p r i d e Return
xdotool key --window $wid t c space v g a p r i d e period p r j Return
xdotool key --window $wid Alt_L+c b
sleep 7
xdotool key --window $wid Return Alt_L+x
xdotool key --window $wid e x i t Return
