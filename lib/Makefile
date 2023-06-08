# Folders
SUBDIRS = idp-udev

# Rules.
.PHONY: all
all:	$(SUBDIRS) 

.PHONY: $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ BIN_DIR=$(BIN_DIR) BUILD_DIR=$(BUILD_DIR)
	
.PHONY: clean
clean: