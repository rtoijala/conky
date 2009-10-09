/* -*- mode: c; c-basic-offset: 4; tab-width: 4; indent-tabs-mode: t -*- */

#ifndef OPENBSD_H_
#define OPENBSD_H_

#include "common.h"
#include <sys/param.h>
#include <sys/sysctl.h>
#include <sys/sensors.h>
#include <machine/apmvar.h>

void parse_obsd_sensor(struct text_object *, const char *);
void print_obsd_sensors_temp(struct text_object *, char *, int);
void print_obsd_sensors_fan(struct text_object *, char *, int);
void print_obsd_sensors_volt(struct text_object *, char *, int);
void get_obsd_vendor(char *buf, size_t client_buffer_size);
void get_obsd_product(char *buf, size_t client_buffer_size);

#if defined(i386) || defined(__i386__)
typedef struct apm_power_info *apm_info_t;
#endif

#endif /*OPENBSD_H_*/
