#include "event_loop.h"
#include "dbg.h"

int create_event_loop(event_loop_t *loop, int maxevent, int tmode) {
    return EVENT_SUC;
}

int event_begin_loop(event_loop_t *loop) {

    return EVENT_SUC;
}

int event_register(event_loop_t *loop, int fd, EVENT_TYPE event, func_cb_t cb){
    return EVENT_SUC;
}

int event_unregister(event_loop_t *loop, int fd) {
    return EVENT_SUC;
}

int event_stop_event(event_loop_t *loop, int fd, EVENT_TYPE event){
    return EVENT_SUC;
}
