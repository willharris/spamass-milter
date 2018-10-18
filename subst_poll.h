#ifndef _SUBST_POLL_H
#define _SUBST_POLL_H

/* $Id: subst_poll.h,v 1.2 2003/03/06 21:40:49 dnelson Exp $ */

struct pollfd {
  int fd;
  short int events;
  short int revents;
};

enum { POLLIN = 1, POLLPRI = 2, POLLOUT = 4,
       POLLERR = 8, POLLHUP = 16, POLLNVAL = 32 };

#ifdef  __cplusplus
extern "C" {
#endif
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
#ifdef  __cplusplus
}
#endif

#endif
