
#ifndef VEGAS_MODE_GLOBAL_H
#define VEGAS_MODE_GLOBAL_H

#include "ctlra.h"

#include <stdio.h>
#include <stdint.h>

#define VEGAS_BTN_COUNT 512

struct soffa_t;
struct mikro_t;
struct maschine3_t;

struct dummy_data {
	uint8_t print_events;
	uint64_t revision;
	float volume;
	float progress;
	int playing[2];
	int buttons[VEGAS_BTN_COUNT];
	struct soffa_t *soffa;
	struct mikro_t *mikro;
	struct maschine3_t *maschine3;
};

/* "useful" parts of the program */
int audio_init();
void audio_exit();

/* SF2 sound generation */
void soffa_set_patch(struct soffa_t *s, uint8_t chan,
		     uint8_t bank, uint8_t patch, const char **name);
void soffa_note_on(struct soffa_t *s, uint8_t chan, uint8_t note, float vel);
void soffa_note_off(struct soffa_t *s, uint8_t chan, uint8_t note);

/* Functions to poll / push state to the devs */
void kontrol_x1_update_state(struct ctlra_dev_t *dev, void *d);
void kontrol_x1_func(struct ctlra_dev_t* dev, uint32_t num_events,
		     struct ctlra_event_t** events, void *userdata);

void kontrol_z1_update_state(struct ctlra_dev_t *dev, void *d);
void kontrol_z1_func(struct ctlra_dev_t* dev, uint32_t num_events,
		     struct ctlra_event_t** events, void *userdata);

void kontrol_d2_update_state(struct ctlra_dev_t *dev, void *d);
void kontrol_d2_func(struct ctlra_dev_t* dev, uint32_t num_events,
		     struct ctlra_event_t** events, void *userdata);

void kontrol_f1_update_state(struct ctlra_dev_t *dev, void *d);
void kontrol_f1_func(struct ctlra_dev_t* dev, uint32_t num_events,
		     struct ctlra_event_t** events, void *userdata);

void mm_update_state(struct ctlra_dev_t *dev, void *d);
void mm_func(struct ctlra_dev_t* dev, uint32_t num_events,
	     struct ctlra_event_t** events, void *userdata);

void maschine3_update_state(struct ctlra_dev_t *dev, void *d);
void maschine3_func(struct ctlra_dev_t* dev, uint32_t num_events,
	     struct ctlra_event_t** events, void *userdata);

void jam_update_state(struct ctlra_dev_t *dev, void *d);
void jam_func(struct ctlra_dev_t* dev, uint32_t num_events,
	     struct ctlra_event_t** events, void *userdata);

#endif /* VEGAS_MODE_GLOBAL_H */
