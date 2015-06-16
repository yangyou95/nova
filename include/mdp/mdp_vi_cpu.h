/**
 *  The MIT License (MIT)
 *
 *  Copyright (c) 2015 Kyle Hollins Wray, University of Massachusetts
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of
 *  this software and associated documentation files (the "Software"), to deal in
 *  the Software without restriction, including without limitation the rights to
 *  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 *  the Software, and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 *  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 *  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 *  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 *  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#ifndef MDP_VI_CPU_H
#define MDP_VI_CPU_H


#include "mdp.h"


/**
 *  Execute value iteration for the MDP model specified until convergence. Uses the CPU.
 *  @param  mdp         The MDP object.
 *  @param  V           The final value function, mapping states (n array) to floats.
 *                      This will be modified.
 *  @param  pi          The resultant policy, mapping every state (n array) to an
 *                      action (in 0 to m-1). This will be modified.
 *  @return Returns zero upon success, non-zero otherwise.
 */
extern "C" int mdp_vi_complete_cpu(MDP *mdp, float *V, unsigned int *pi);


#endif // MDP_VI_CPU_H

