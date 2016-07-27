#ifndef LBRY_H
#define LBRY_H

#ifdef __cplusplus
extern "C" {
#endif

void lbry_regenhash(struct work *work);
void lbryhash(const char* input, char* output);

#ifdef __cplusplus
}
#endif

#endif