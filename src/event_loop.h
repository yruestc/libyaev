#ifndef _EVENT_LOOP_H
#define _EVENT_LOOP_H

#include <unistd.h>
#include <sys/epoll.h>

#define EVENT_SUC 0
typedef int EVENT_TYPE;
typedef void* (*func_cb_t)(int fd, EVENT_TYPE events);

typedef struct { 
    int active;
    EVENT_TYPE events;
    func_cb_t read_cb;
    func_cb_t write_cb;
} fd_data_t;

typedef struct {
    int epollfd;
    int maxevent;
    int tmode;
    fd_data_t *fd_records;
    struct epoll_event *events;
} event_loop_t;

int create_event_loop(event_loop_t *loop, int maxevent, int tmode);
int event_begin_loop(event_loop_t *loop);
int event_register(event_loop_t *loop, int fd, EVENT_TYPE event, func_cb_t cb);
int event_unregister(event_loop_t *loop, int fd);
int event_stop_event(event_loop_t *loop, int fd, EVENT_TYPE event);

#endif
