#include "frame.h"

/* Global frames array */
// TODO

/* Global scan_lock to protect frames traversal */
// TODO

/* Global frame_ct, the number of physical frames represented */
// TODO

/* Global hand, in a reference to clock hand, for the page eviction algo. */
// TODO

/* Frame Mangament function definitions */
// TODO

void frame_table_init() {
    lock_init(&scan_lock);
    list_init(&frame_table);
}