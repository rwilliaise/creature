
#ifndef CREATURE_NET_H
#define CREATURE_NET_H

typedef struct net_feedforward net_feedforward_t;

net_feedforward_t *net_feedforward_create();
float net_feedforward_train();

#endif // CREATURE_NET_H
