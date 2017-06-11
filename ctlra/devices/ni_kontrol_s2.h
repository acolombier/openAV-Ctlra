/*
 * Copyright (c) 2016, OpenAV Productions,
 * Harry van Haaren <harryhaaren@gmail.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef OPENAV_CTLRA_NI_KONTROL_S2_H
#define OPENAV_CTLRA_NI_KONTROL_S2_H

enum NI_KONTROL_S2_LEDS {
	/* Left vol LEDs, first 5 blue, last 2 orange */
	NI_KONTROL_S2_LED_LEVEL_L1,
	NI_KONTROL_S2_LED_LEVEL_L2,
	NI_KONTROL_S2_LED_LEVEL_L3,
	NI_KONTROL_S2_LED_LEVEL_L4,
	NI_KONTROL_S2_LED_LEVEL_L5,
	NI_KONTROL_S2_LED_LEVEL_L6,
	NI_KONTROL_S2_LED_LEVEL_L7,

	/* Right vol LEDs, first 5 blue, last 2 orange */
	NI_KONTROL_S2_LED_LEVEL_R1,
	NI_KONTROL_S2_LED_LEVEL_R2,
	NI_KONTROL_S2_LED_LEVEL_R3,
	NI_KONTROL_S2_LED_LEVEL_R4,
	NI_KONTROL_S2_LED_LEVEL_R5,
	NI_KONTROL_S2_LED_LEVEL_R6,
	NI_KONTROL_S2_LED_LEVEL_R7,

	NI_KONTROL_S2_LED_CUE_A,
	NI_KONTROL_S2_LED_CUE_B,

	/* FX ON supports Orange and Blue colours */
	NI_KONTROL_S2_LED_FX_ON_LEFT,	/* orange */
	NI_KONTROL_S2_LED_UNUSED_1,	/* blue */

	NI_KONTROL_S2_LED_MODE,

	/* FX ON supports Orange and Blue colours */
	NI_KONTROL_S2_LED_FX_ON_RIGHT,	/* orange */
	NI_KONTROL_S2_LED_UNUSED_2,	/* blue */

	//NI_KONTROL_S2_LED_COUNT,
};

enum NI_KONTROL_S2_SLIDERS {
	NI_KONTROL_S2_SLIDER_LEFT_GAIN = 0,
	NI_KONTROL_S2_SLIDER_LEFT_EQ_HIGH,
	NI_KONTROL_S2_SLIDER_LEFT_EQ_MID,
	NI_KONTROL_S2_SLIDER_LEFT_EQ_LOW,
	NI_KONTROL_S2_SLIDER_LEFT_FILTER,
	NI_KONTROL_S2_SLIDER_RIGHT_GAIN,
	NI_KONTROL_S2_SLIDER_RIGHT_EQ_HIGH,
	NI_KONTROL_S2_SLIDER_RIGHT_EQ_MID,
	NI_KONTROL_S2_SLIDER_RIGHT_EQ_LOW,
	NI_KONTROL_S2_SLIDER_RIGHT_FILTER,
	NI_KONTROL_S2_SLIDER_CUE_MIX,
	NI_KONTROL_S2_SLIDER_LEFT_FADER,
	NI_KONTROL_S2_SLIDER_RIGHT_FADER,
	NI_KONTROL_S2_SLIDER_CROSS_FADER,
};

enum NI_KONTROL_S2_BUTTONS {
	NI_KONTROL_S2_BTN_CUE_A = 0,
	NI_KONTROL_S2_BTN_CUE_B,
	NI_KONTROL_S2_BTN_MODE,
	NI_KONTROL_S2_BTN_FX_ON_L,
	NI_KONTROL_S2_BTN_FX_ON_R,
};

#if 0

51 descriptor
4 dA enc left
4 dA enc right
4 Browse enc
4 dB enc left
4 dB enc right
4 dA gain/filter
4 dB gain/filter
4 == waste? ==

16 crossfader
16 dA pitch
16 dB pitch
16 cue mix (front panel popout)
16 Remix dial
16 (Main level + Analog volume)
16 Level (back panel)

16 waste?
16 waste?

16 dA fx1234
16 dB fx1234
16 dA mixer eq 123
16 dB mixer eq 123


#endif

#endif /* OPENAV_CTLRA_NI_KONTROL_S2_H */
