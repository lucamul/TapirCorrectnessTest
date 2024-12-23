d := $(dir $(lastword $(MAKEFILE_LIST)))

SRCS += $(addprefix $(d), loadClient.cc benchClient.cc retwisClient.cc terminalClient.cc)

OBJS-all-clients := $(OBJS-strong-client) $(OBJS-weak-client) $(OBJS-tapir-client)

$(d)benchClient: $(OBJS-all-clients) $(o)benchClient.o

$(d)retwisClient: $(OBJS-all-clients) $(o)retwisClient.o

$(d)terminalClient: $(OBJS-all-clients) $(o)terminalClient.o

$(d)loadClient: $(OBJS-all-clients) $(o)loadClient.o

BINS += $(d)benchClient $(d)retwisClient $(d)terminalClient  $(d)loadClient
