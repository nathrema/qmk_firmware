qmk json2c import.json > keymap_generated.c
cat keymap_prepend.c keymap_generated.c > keymap.c
rm keymap_generated.c
qmk flash -kb skyloong/gk61/pro_48 -km custom

