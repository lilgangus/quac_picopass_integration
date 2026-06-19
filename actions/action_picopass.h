#pragma once

#include <furi.h>

// Playlist-only sentinel: emulate until the user presses a button
#define PICOPASS_TX_MANUAL ((uint32_t)0)

/** Transmit (emulate) a Picopass file using Picopass Duration from Settings. */
void action_picopass_tx(void* context, const FuriString* action_path, FuriString* error);

/** Transmit (emulate) a Picopass file for an explicit duration.
 *
 * @param   duration_ms Milliseconds to emulate, or PICOPASS_TX_MANUAL (playlist only).
*/
void action_picopass_tx_duration(
    void* context,
    const FuriString* action_path,
    uint32_t duration_ms,
    FuriString* error);
