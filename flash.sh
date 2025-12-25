cd keyboards/crkbd/keymaps/custom
qmk compile -kb crkbd/rev4_1/standard -km custom
cd ../../../..
sudo cp crkbd_rev4_1_standard_custom.uf2 /mnt
rm crkbd_rev4_1_standard_custom.uf2
