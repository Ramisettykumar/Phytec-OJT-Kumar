require recipes-core/images/core-image-minimal.bb
#IMAGE_INSTALL append "usbutils"
#IMAGE_FEATURES = "ssh-server-dropbear debug-tweaks read-tweaksread-only-rootfs"
#IMAGE_INSTALL += "auto-hello"
#IMAGE_FEATURES = "splash"
IMAGE_INSTALL += "hello"

