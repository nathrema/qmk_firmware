qmk json2c import.json > keymap_generated.c
cat keymap_append.c keymap_generated.c > keymap.c
qmk flash -kb skyloong/gk61/pro_48 -km custom

