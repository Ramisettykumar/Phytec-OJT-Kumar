require recipes-core/images/core-image-minimal.bb
#IMAGE_INSTALL:append = "usbutils"
#IMAGE_FEATURES = "ssh-server-dropbear debug-tweaks read-only-rootfs"
IMAGE_INSTALL += "calculator"
