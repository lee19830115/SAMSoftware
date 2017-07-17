TARGET_EXEC ?= ss_communications

BUILD_DIR ?= ./build
SRC_DIRS ?=  ./source
INC_DIRS ?=  ./ ./include 

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_FLAGS := $(addprefix -I,$(INC_DIRS))

DEFINES := -DARM_UC_MODE -D__ADSPSC5xx__ -DLINUX -D_LANGUAGE_C

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP $(DEFINES)

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

# c source
$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	$(RM) -r $(BUILD_DIR)

-include $(DEPS)

MKDIR_P ?= mkdir -p
