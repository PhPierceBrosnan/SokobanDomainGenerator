#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#define __STDC_FORMAT_MACROS
#define __STDC_LIMIT_MACROS
#include <inttypes.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>


#define psvn2c_PSVN_API



/* number of variables in a state */
#define NUMVARS 49


typedef int8_t var_t;
#define PRI_VAR PRId8
#define SCN_VAR SCNd8

#define NUMDOMAINS 1
static var_t domain_sizes[ NUMDOMAINS ] = { 4 };
static int var_domains[ NUMVARS ] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char *domain_0[ 4 ] = {"P", "R", "W", "N" };
static const char **var_domain_names[ NUMVARS ] = { domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0, domain_0 };

typedef struct {
 var_t vars[ NUMVARS ];
} state_t;

typedef int (*funcptr)( const state_t *, void * );
typedef void (*actfuncptr)( const state_t *, state_t * );

typedef struct {
 const state_t *my_state;
 funcptr my_funcptr;
} ruleid_iterator_t;

#define num_fwd_rules 14
static const char *fwd_rule_name[ 14 ] = { "ROCKRIGHT", "ROCKRIGHT", "ROCKRIGHT", "ROCKLEFT", "ROCKLEFT", "ROCKLEFT", "MOVERIGHT", "MOVERIGHT", "MOVERIGHT", "MOVERIGHT", "MOVELEFT", "MOVELEFT", "MOVELEFT", "MOVELEFT" };
#define get_fwd_rule_label( ruleid ) (fwd_rule_name[(ruleid)]) 
#define cost_of_cheapest_fwd_rule 0
#define cost_of_costliest_fwd_rule 1
static const int fwd_rule_cost[ 14 ] = { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 };
#define get_fwd_rule_cost( ruleid ) (fwd_rule_cost[(ruleid)]) 

static void fwdrule1( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = 3;
  child_state->vars[ 9 ] = 0;
  child_state->vars[ 10 ] = 1;
  child_state->vars[ 11 ] = state->vars[ 11 ];
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule2( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = 3;
  child_state->vars[ 10 ] = 0;
  child_state->vars[ 11 ] = 1;
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule3( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = state->vars[ 9 ];
  child_state->vars[ 10 ] = 3;
  child_state->vars[ 11 ] = 0;
  child_state->vars[ 12 ] = 1;
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule4( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = 1;
  child_state->vars[ 9 ] = 0;
  child_state->vars[ 10 ] = 3;
  child_state->vars[ 11 ] = state->vars[ 11 ];
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule5( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = 1;
  child_state->vars[ 10 ] = 0;
  child_state->vars[ 11 ] = 3;
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule6( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = state->vars[ 9 ];
  child_state->vars[ 10 ] = 1;
  child_state->vars[ 11 ] = 0;
  child_state->vars[ 12 ] = 3;
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule7( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = 3;
  child_state->vars[ 9 ] = 0;
  child_state->vars[ 10 ] = state->vars[ 10 ];
  child_state->vars[ 11 ] = state->vars[ 11 ];
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule8( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = 3;
  child_state->vars[ 10 ] = 0;
  child_state->vars[ 11 ] = state->vars[ 11 ];
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule9( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = state->vars[ 9 ];
  child_state->vars[ 10 ] = 3;
  child_state->vars[ 11 ] = 0;
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule10( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = state->vars[ 9 ];
  child_state->vars[ 10 ] = state->vars[ 10 ];
  child_state->vars[ 11 ] = 3;
  child_state->vars[ 12 ] = 0;
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule11( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = 0;
  child_state->vars[ 9 ] = 3;
  child_state->vars[ 10 ] = state->vars[ 10 ];
  child_state->vars[ 11 ] = state->vars[ 11 ];
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule12( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = 0;
  child_state->vars[ 10 ] = 3;
  child_state->vars[ 11 ] = state->vars[ 11 ];
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule13( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = state->vars[ 9 ];
  child_state->vars[ 10 ] = 0;
  child_state->vars[ 11 ] = 3;
  child_state->vars[ 12 ] = state->vars[ 12 ];
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static void fwdrule14( const state_t *state, state_t *child_state )
{
  child_state->vars[ 0 ] = state->vars[ 0 ];
  child_state->vars[ 1 ] = state->vars[ 1 ];
  child_state->vars[ 2 ] = state->vars[ 2 ];
  child_state->vars[ 3 ] = state->vars[ 3 ];
  child_state->vars[ 4 ] = state->vars[ 4 ];
  child_state->vars[ 5 ] = state->vars[ 5 ];
  child_state->vars[ 6 ] = state->vars[ 6 ];
  child_state->vars[ 7 ] = state->vars[ 7 ];
  child_state->vars[ 8 ] = state->vars[ 8 ];
  child_state->vars[ 9 ] = state->vars[ 9 ];
  child_state->vars[ 10 ] = state->vars[ 10 ];
  child_state->vars[ 11 ] = 0;
  child_state->vars[ 12 ] = 3;
  child_state->vars[ 13 ] = state->vars[ 13 ];
  child_state->vars[ 14 ] = state->vars[ 14 ];
  child_state->vars[ 15 ] = state->vars[ 15 ];
  child_state->vars[ 16 ] = state->vars[ 16 ];
  child_state->vars[ 17 ] = state->vars[ 17 ];
  child_state->vars[ 18 ] = state->vars[ 18 ];
  child_state->vars[ 19 ] = state->vars[ 19 ];
  child_state->vars[ 20 ] = state->vars[ 20 ];
  child_state->vars[ 21 ] = state->vars[ 21 ];
  child_state->vars[ 22 ] = state->vars[ 22 ];
  child_state->vars[ 23 ] = state->vars[ 23 ];
  child_state->vars[ 24 ] = state->vars[ 24 ];
  child_state->vars[ 25 ] = state->vars[ 25 ];
  child_state->vars[ 26 ] = state->vars[ 26 ];
  child_state->vars[ 27 ] = state->vars[ 27 ];
  child_state->vars[ 28 ] = state->vars[ 28 ];
  child_state->vars[ 29 ] = state->vars[ 29 ];
  child_state->vars[ 30 ] = state->vars[ 30 ];
  child_state->vars[ 31 ] = state->vars[ 31 ];
  child_state->vars[ 32 ] = state->vars[ 32 ];
  child_state->vars[ 33 ] = state->vars[ 33 ];
  child_state->vars[ 34 ] = state->vars[ 34 ];
  child_state->vars[ 35 ] = state->vars[ 35 ];
  child_state->vars[ 36 ] = state->vars[ 36 ];
  child_state->vars[ 37 ] = state->vars[ 37 ];
  child_state->vars[ 38 ] = state->vars[ 38 ];
  child_state->vars[ 39 ] = state->vars[ 39 ];
  child_state->vars[ 40 ] = state->vars[ 40 ];
  child_state->vars[ 41 ] = state->vars[ 41 ];
  child_state->vars[ 42 ] = state->vars[ 42 ];
  child_state->vars[ 43 ] = state->vars[ 43 ];
  child_state->vars[ 44 ] = state->vars[ 44 ];
  child_state->vars[ 45 ] = state->vars[ 45 ];
  child_state->vars[ 46 ] = state->vars[ 46 ];
  child_state->vars[ 47 ] = state->vars[ 47 ];
  child_state->vars[ 48 ] = state->vars[ 48 ];
}

static actfuncptr fwd_rules[ 14 ] = { fwdrule1, fwdrule2, fwdrule3, fwdrule4, fwdrule5, fwdrule6, fwdrule7, fwdrule8, fwdrule9, fwdrule10, fwdrule11, fwdrule12, fwdrule13, fwdrule14 };

static int fwdfn4( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 3 ) {
    *((funcptr *)next_func) = 0;
    return 10;
  } else {
    return -1;
  }
}

static int fwdfn5( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 3 ) {
    *((funcptr *)next_func) = 0;
    return 3;
  } else {
    return -1;
  }
}

static int fwdfn6( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 0 ) {
    *((funcptr *)next_func) = 0;
    return 6;
  } else {
    return -1;
  }
}

static int fwdfn3( const state_t *state, void *next_func )
{
  switch( state->vars[ 9 ] ) {
  case 0:
    return fwdfn4( state, next_func );
  case 1:
    return fwdfn5( state, next_func );
  case 2:
    return -1;
  default:
    *((funcptr *)next_func) = fwdfn6;
    return 11;
  }
}

static int fwdfn2( const state_t *state, void *next_func )
{
  if( state->vars[ 12 ] == 3 ) {
    *((funcptr *)next_func) = fwdfn3;
    return 9;
  } else {
    return fwdfn3( state, next_func );
  }
}

static int fwdfn7( const state_t *state, void *next_func )
{
  if( state->vars[ 12 ] == 3 ) {
    *((funcptr *)next_func) = fwdfn3;
    return 2;
  } else {
    return fwdfn3( state, next_func );
  }
}

static int fwdfn8( const state_t *state, void *next_func )
{
  if( state->vars[ 12 ] == 0 ) {
    *((funcptr *)next_func) = fwdfn3;
    return 13;
  } else {
    return fwdfn3( state, next_func );
  }
}

static int fwdfn1( const state_t *state, void *next_func )
{
  switch( state->vars[ 11 ] ) {
  case 0:
    return fwdfn2( state, next_func );
  case 1:
    return fwdfn7( state, next_func );
  case 2:
    return fwdfn3( state, next_func );
  default:
    *((funcptr *)next_func) = fwdfn8;
    return 8;
  }
}

static int fwdfn12( const state_t *state, void *next_func )
{
  if( state->vars[ 12 ] == 3 ) {
    *((funcptr *)next_func) = 0;
    return 9;
  } else {
    return -1;
  }
}

static int fwdfn13( const state_t *state, void *next_func )
{
  if( state->vars[ 12 ] == 0 ) {
    *((funcptr *)next_func) = 0;
    return 13;
  } else {
    return -1;
  }
}

static int fwdfn11( const state_t *state, void *next_func )
{
  switch( state->vars[ 11 ] ) {
  case 0:
    return fwdfn12( state, next_func );
  case 1:
    return -1;
  case 2:
    return -1;
  default:
    *((funcptr *)next_func) = fwdfn13;
    return 1;
  }
}

static int fwdfn10( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 3 ) {
    *((funcptr *)next_func) = fwdfn11;
    return 10;
  } else {
    return fwdfn11( state, next_func );
  }
}

static int fwdfn14( const state_t *state, void *next_func )
{
  switch( state->vars[ 11 ] ) {
  case 0:
    return fwdfn12( state, next_func );
  case 1:
    return -1;
  case 2:
    return -1;
  default:
    return fwdfn13( state, next_func );
  }
}

static int fwdfn16( const state_t *state, void *next_func )
{
  switch( state->vars[ 11 ] ) {
  case 0:
    *((funcptr *)next_func) = fwdfn12;
    return 4;
  case 1:
    return -1;
  case 2:
    return -1;
  default:
    return fwdfn13( state, next_func );
  }
}

static int fwdfn15( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 0 ) {
    *((funcptr *)next_func) = fwdfn16;
    return 6;
  } else {
    return fwdfn16( state, next_func );
  }
}

static int fwdfn9( const state_t *state, void *next_func )
{
  switch( state->vars[ 9 ] ) {
  case 0:
    return fwdfn10( state, next_func );
  case 1:
    return fwdfn14( state, next_func );
  case 2:
    return fwdfn14( state, next_func );
  default:
    return fwdfn15( state, next_func );
  }
}

static int fwdfn18( const state_t *state, void *next_func )
{
  if( state->vars[ 9 ] == 3 ) {
    *((funcptr *)next_func) = fwdfn14;
    return 6;
  } else {
    return fwdfn14( state, next_func );
  }
}

static int fwdfn19( const state_t *state, void *next_func )
{
  if( state->vars[ 9 ] == 0 ) {
    *((funcptr *)next_func) = fwdfn14;
    return 10;
  } else {
    return fwdfn14( state, next_func );
  }
}

static int fwdfn17( const state_t *state, void *next_func )
{
  switch( state->vars[ 8 ] ) {
  case 0:
    return fwdfn18( state, next_func );
  case 1:
    return fwdfn14( state, next_func );
  case 2:
    return fwdfn14( state, next_func );
  default:
    return fwdfn19( state, next_func );
  }
}

static int fwdfn23( const state_t *state, void *next_func )
{
  if( state->vars[ 12 ] == 0 ) {
    *((funcptr *)next_func) = 0;
    return 5;
  } else {
    return -1;
  }
}

static int fwdfn22( const state_t *state, void *next_func )
{
  switch( state->vars[ 11 ] ) {
  case 0:
    *((funcptr *)next_func) = fwdfn12;
    return 12;
  case 1:
    return fwdfn23( state, next_func );
  case 2:
    return -1;
  default:
    return fwdfn13( state, next_func );
  }
}

static int fwdfn21( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 3 ) {
    *((funcptr *)next_func) = fwdfn22;
    return 10;
  } else {
    return fwdfn22( state, next_func );
  }
}

static int fwdfn24( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 0 ) {
    *((funcptr *)next_func) = fwdfn22;
    return 0;
  } else {
    return fwdfn22( state, next_func );
  }
}

static int fwdfn25( const state_t *state, void *next_func )
{
  if( state->vars[ 8 ] == 0 ) {
    *((funcptr *)next_func) = fwdfn22;
    return 6;
  } else {
    return fwdfn22( state, next_func );
  }
}

static int fwdfn20( const state_t *state, void *next_func )
{
  switch( state->vars[ 9 ] ) {
  case 0:
    *((funcptr *)next_func) = fwdfn21;
    return 7;
  case 1:
    return fwdfn24( state, next_func );
  case 2:
    return fwdfn22( state, next_func );
  default:
    return fwdfn25( state, next_func );
  }
}

static int fwdfn0( const state_t *state, void *next_func )
{
  switch( state->vars[ 10 ] ) {
  case 0:
    return fwdfn1( state, next_func );
  case 1:
    return fwdfn9( state, next_func );
  case 2:
    return fwdfn17( state, next_func );
  default:
    return fwdfn20( state, next_func );
  }
}


#define init_history 0

#define max_fwd_children 4

/* NOTE: FOR ALL OF THE MOVE ITERATOR DEFINITIONS funcptr
   MUST BE A VARIABLE. */

/* initialise a forward move iterator */
#define init_fwd_iter( ruleid_iter, state ) { \
  (*ruleid_iter).my_funcptr = fwdfn0 ; \
  (*ruleid_iter).my_state = state; \
}

/* use iterator to generate next applicable rule to apply 
   returns rule to use, -1 if there are no more rules to apply */
#define next_ruleid( ruleid_iter ) (((*ruleid_iter).my_funcptr)?((*ruleid_iter).my_funcptr)((*ruleid_iter).my_state,&((*ruleid_iter).my_funcptr)):-1)

/* apply a rule to a state */
#define apply_fwd_rule( rule, state, result ) fwd_rules[(rule)](state,result)
/* returns 0 if the rule is pruned, non-zero otherwise */
#define fwd_rule_valid_for_history( history, rule_used ) 1 
/* generate the next history from the current history and a rule */
#define next_fwd_history( history, rule_used ) 0 


/* returns 1 if state is a goal state, 0 otherwise */
static int is_goal( const state_t *state )
{
  if( state->vars[ 12 ] == 1 ) {
    return 1;
  }
  return 0;
}


/*
Copyright (C) 2011, 2014 by the PSVN Research Group, University of Alberta
*/

#include <string.h>

/* copy a state */
#define copy_state(dest_ptr,src_ptr) memcpy(dest_ptr,src_ptr,sizeof(var_t)*NUMVARS)

/* compare two state pointers
   returns 0 if equal, non-zero otherwise */
#define compare_states(a,b) memcmp(a,b,sizeof(var_t)*NUMVARS)


/* print a state to a file
   returns number of characters on success, -1 on failure */
static ssize_t print_state( FILE *file, const state_t *state )
{
  size_t len, t; int i;
  for( len = 0, i = 0; i < NUMVARS; ++i ) {
    t = fprintf( file, "%s ", var_domain_names[ i ][ state->vars[ i ] ] );
    if( t < 0 ) { return -1; }
    len += t;
  }
  return len;
}

/* print a state to a string
   returns number of characters on success, -1 on failure */
static ssize_t sprint_state( char *string,const size_t max_len,const state_t *state )
{
  size_t len, t; int i;
  for( len = 0, i = 0; i < NUMVARS; ++i ) {
    t = snprintf( &string[ len ], max_len - len, "%s ",
		  var_domain_names[ i ][ state->vars[ i ] ] );
    if( t < 0 ) { return -1; }
    len += t;
  }
  if( len >= max_len ) { return -1; } else { string[ len ] = 0; }
  return len;
}

/* read a state from a string
   returns number of characters consumed on success, -1 on failure
   NOTE: the part of the string representing the state must be
   followed either by whitespace (which will all be consumed) or
   the end of string marker */
static ssize_t read_state( const char *string, state_t *state )
{
  size_t len, t; int i; var_t j;
  len = 0;
  while( (string[len] !=0) && isspace(string[len]) ) { len++; } // skip leading white space
  for( i = 0; i < NUMVARS; ++i ) {
    for( j = 0; j < domain_sizes[ var_domains[ i ] ]; ++j ) {
      t = strlen( var_domain_names[ i ][ j ] );
      if( !strncasecmp( var_domain_names[ i ][ j ], &string[ len ], t ) ) {
          if( (string[len+t] ==0) || isspace(string[len+t]) ) { // require a terminator after the match
	      state->vars[ i ] = j;
	      len += t;
              while( (string[len] !=0) && isspace(string[len]) ) { len++; } // skip the following white space
              break;
          }
      }
    }
    if( j >= domain_sizes[ var_domains[ i ] ] ) { return -1; }
  }
  return len;
}

/* dump a raw state to a file
   returns 1 on success, 0 on failure */
#define dump_state( file, state_ptr ) fwrite(state_ptr,sizeof(var_t)*NUMVARS,1,file)

/* load a raw state from a file
   returns 1 on success, 0 on failure */
#define load_state( file, state_ptr ) fread(state_ptr,sizeof(var_t)*NUMVARS,1,file)




/*
-------------------------------------------------------------------------------
lookup3.c, by Bob Jenkins, May 2006, Public Domain.

These are functions for producing 32-bit hashes for hash table lookup.
hashword(), hashlittle(), hashlittle2(), hashbig(), mix(), and final() 
are externally useful functions.  Routines to test the hash are included 
if SELF_TEST is defined.  You can use this free for any purpose.  It's in
the public domain.  It has no warranty.

You probably want to use hashlittle().  hashlittle() and hashbig()
hash byte arrays.  hashlittle() is is faster than hashbig() on
little-endian machines.  Intel and AMD are little-endian machines.
On second thought, you probably want hashlittle2(), which is identical to
hashlittle() except it returns two 32-bit hashes for the price of one.  
You could implement hashbig2() if you wanted but I haven't bothered here.

If you want to find a hash of, say, exactly 7 integers, do
  a = i1;  b = i2;  c = i3;
  mix(a,b,c);
  a += i4; b += i5; c += i6;
  mix(a,b,c);
  a += i7;
  final(a,b,c);
then use c as the hash value.  If you have a variable length array of
4-byte integers to hash, use hashword().  If you have a byte array (like
a character string), use hashlittle().  If you have several byte arrays, or
a mix of things, see the comments above hashlittle().  

Why is this so big?  I read 12 bytes at a time into 3 4-byte integers, 
then mix those integers.  This is fast (you can do a lot more thorough
mixing with 12*3 instructions on 3 integers than you can with 3 instructions
on 1 byte), but shoehorning those bytes into integers efficiently is messy.
-------------------------------------------------------------------------------
*/
#include <sys/param.h>  /* attempt to define endianness */
#ifdef linux
# include <endian.h>    /* attempt to define endianness */
#endif

/*
 * My best guess at if you are big-endian or little-endian.  This may
 * need adjustment.
 */
#if (defined(__BYTE_ORDER) && defined(__LITTLE_ENDIAN) && \
     __BYTE_ORDER == __LITTLE_ENDIAN) || \
    (defined(i386) || defined(__i386__) || defined(__i486__) || \
     defined(__i586__) || defined(__i686__) || defined(vax) || defined(MIPSEL))
# define HASH_LITTLE_ENDIAN 1
# define HASH_BIG_ENDIAN 0
#elif (defined(__BYTE_ORDER) && defined(__BIG_ENDIAN) && \
       __BYTE_ORDER == __BIG_ENDIAN) || \
      (defined(sparc) || defined(POWERPC) || defined(mc68000) || defined(sel))
# define HASH_LITTLE_ENDIAN 0
# define HASH_BIG_ENDIAN 1
#else
# define HASH_LITTLE_ENDIAN 0
# define HASH_BIG_ENDIAN 0
#endif

#define rot(x,k) (((x)<<(k)) ^ ((x)>>(32-(k))))

/*
-------------------------------------------------------------------------------
mix -- mix 3 32-bit values reversibly.

This is reversible, so any information in (a,b,c) before mix() is
still in (a,b,c) after mix().

If four pairs of (a,b,c) inputs are run through mix(), or through
mix() in reverse, there are at least 32 bits of the output that
are sometimes the same for one pair and different for another pair.
This was tested for:
* pairs that differed by one bit, by two bits, in any combination
  of top bits of (a,b,c), or in any combination of bottom bits of
  (a,b,c).
* "differ" is defined as +, -, ^, or ~^.  For + and -, I transformed
  the output delta to a Gray code (a^(a>>1)) so a string of 1's (as
  is commonly produced by subtraction) look like a single 1-bit
  difference.
* the base values were pseudorandom, all zero but one bit set, or 
  all zero plus a counter that starts at zero.

Some k values for my "a-=c; a^=rot(c,k); c+=b;" arrangement that
satisfy this are
    4  6  8 16 19  4
    9 15  3 18 27 15
   14  9  3  7 17  3
Well, "9 15 3 18 27 15" didn't quite get 32 bits diffing
for "differ" defined as + with a one-bit base and a two-bit delta.  I
used http://burtleburtle.net/bob/hash/avalanche.html to choose 
the operations, constants, and arrangements of the variables.

This does not achieve avalanche.  There are input bits of (a,b,c)
that fail to affect some output bits of (a,b,c), especially of a.  The
most thoroughly mixed value is c, but it doesn't really even achieve
avalanche in c.

This allows some parallelism.  Read-after-writes are good at doubling
the number of bits affected, so the goal of mixing pulls in the opposite
direction as the goal of parallelism.  I did what I could.  Rotates
seem to cost as much as shifts on every machine I could lay my hands
on, and rotates are much kinder to the top and bottom bits, so I used
rotates.
-------------------------------------------------------------------------------
*/
#define mix(a,b,c) \
{ \
  a -= c;  a ^= rot(c, 4);  c += b; \
  b -= a;  b ^= rot(a, 6);  a += c; \
  c -= b;  c ^= rot(b, 8);  b += a; \
  a -= c;  a ^= rot(c,16);  c += b; \
  b -= a;  b ^= rot(a,19);  a += c; \
  c -= b;  c ^= rot(b, 4);  b += a; \
}

/*
-------------------------------------------------------------------------------
final -- final mixing of 3 32-bit values (a,b,c) into c

Pairs of (a,b,c) values differing in only a few bits will usually
produce values of c that look totally different.  This was tested for
* pairs that differed by one bit, by two bits, in any combination
  of top bits of (a,b,c), or in any combination of bottom bits of
  (a,b,c).
* "differ" is defined as +, -, ^, or ~^.  For + and -, I transformed
  the output delta to a Gray code (a^(a>>1)) so a string of 1's (as
  is commonly produced by subtraction) look like a single 1-bit
  difference.
* the base values were pseudorandom, all zero but one bit set, or 
  all zero plus a counter that starts at zero.

These constants passed:
 14 11 25 16 4 14 24
 12 14 25 16 4 14 24
and these came close:
  4  8 15 26 3 22 24
 10  8 15 26 3 22 24
 11  8 15 26 3 22 24
-------------------------------------------------------------------------------
*/
#define final(a,b,c) \
{ \
  c ^= b; c -= rot(b,14); \
  a ^= c; a -= rot(c,11); \
  b ^= a; b -= rot(a,25); \
  c ^= b; c -= rot(b,16); \
  a ^= c; a -= rot(c,4);  \
  b ^= a; b -= rot(a,14); \
  c ^= b; c -= rot(b,24); \
}

/*
 * hashlittle2: return 2 32-bit hash values
 *
 * This is identical to hashlittle(), except it returns two 32-bit hash
 * values instead of just one.  This is good enough for hash table
 * lookup with 2^^64 buckets, or if you want a second hash if you're not
 * happy with the first, or if you want a probably-unique 64-bit ID for
 * the key.  *pc is better mixed than *pb, so use *pc first.  If you want
 * a 64-bit value do something like "*pc + (((uint64_t)*pb)<<32)".
 */
static void hashlittle2( 
  const void *key,       /* the key to hash */
  size_t      length,    /* length of the key */
  uint32_t   *pc,        /* IN: primary initval, OUT: primary hash */
  uint32_t   *pb)        /* IN: secondary initval, OUT: secondary hash */
{
  uint32_t a,b,c;                                          /* internal state */
  union { const void *ptr; size_t i; } u;     /* needed for Mac Powerbook G4 */

  /* Set up the internal state */
  a = b = c = 0xdeadbeef + ((uint32_t)length) + *pc;
  c += *pb;

  u.ptr = key;
  if (HASH_LITTLE_ENDIAN && ((u.i & 0x3) == 0)) {
    const uint32_t *k = (const uint32_t *)key;         /* read 32-bit chunks */
#ifdef VALGRIND
    const uint8_t  *k8;
#endif

    /*------ all but last block: aligned reads and affect 32 bits of (a,b,c) */
    while (length > 12)
    {
      a += k[0];
      b += k[1];
      c += k[2];
      mix(a,b,c);
      length -= 12;
      k += 3;
    }

    /*----------------------------- handle the last (probably partial) block */
    /* 
     * "k[2]&0xffffff" actually reads beyond the end of the string, but
     * then masks off the part it's not allowed to read.  Because the
     * string is aligned, the masked-off tail is in the same word as the
     * rest of the string.  Every machine with memory protection I've seen
     * does it on word boundaries, so is OK with this.  But VALGRIND will
     * still catch it and complain.  The masking trick does make the hash
     * noticably faster for short strings (like English words).
     */
#ifndef VALGRIND

    switch(length)
    {
    case 12: c+=k[2]; b+=k[1]; a+=k[0]; break;
    case 11: c+=k[2]&0xffffff; b+=k[1]; a+=k[0]; break;
    case 10: c+=k[2]&0xffff; b+=k[1]; a+=k[0]; break;
    case 9 : c+=k[2]&0xff; b+=k[1]; a+=k[0]; break;
    case 8 : b+=k[1]; a+=k[0]; break;
    case 7 : b+=k[1]&0xffffff; a+=k[0]; break;
    case 6 : b+=k[1]&0xffff; a+=k[0]; break;
    case 5 : b+=k[1]&0xff; a+=k[0]; break;
    case 4 : a+=k[0]; break;
    case 3 : a+=k[0]&0xffffff; break;
    case 2 : a+=k[0]&0xffff; break;
    case 1 : a+=k[0]&0xff; break;
    case 0 : *pc=c; *pb=b; return;  /* zero length strings require no mixing */
    }

#else /* make valgrind happy */

    k8 = (const uint8_t *)k;
    switch(length)
    {
    case 12: c+=k[2]; b+=k[1]; a+=k[0]; break;
    case 11: c+=((uint32_t)k8[10])<<16;  /* fall through */
    case 10: c+=((uint32_t)k8[9])<<8;    /* fall through */
    case 9 : c+=k8[8];                   /* fall through */
    case 8 : b+=k[1]; a+=k[0]; break;
    case 7 : b+=((uint32_t)k8[6])<<16;   /* fall through */
    case 6 : b+=((uint32_t)k8[5])<<8;    /* fall through */
    case 5 : b+=k8[4];                   /* fall through */
    case 4 : a+=k[0]; break;
    case 3 : a+=((uint32_t)k8[2])<<16;   /* fall through */
    case 2 : a+=((uint32_t)k8[1])<<8;    /* fall through */
    case 1 : a+=k8[0]; break;
    case 0 : *pc=c; *pb=b; return;  /* zero length strings require no mixing */
    }

#endif /* !valgrind */

  } else if (HASH_LITTLE_ENDIAN && ((u.i & 0x1) == 0)) {
    const uint16_t *k = (const uint16_t *)key;         /* read 16-bit chunks */
    const uint8_t  *k8;

    /*--------------- all but last block: aligned reads and different mixing */
    while (length > 12)
    {
      a += k[0] + (((uint32_t)k[1])<<16);
      b += k[2] + (((uint32_t)k[3])<<16);
      c += k[4] + (((uint32_t)k[5])<<16);
      mix(a,b,c);
      length -= 12;
      k += 6;
    }

    /*----------------------------- handle the last (probably partial) block */
    k8 = (const uint8_t *)k;
    switch(length)
    {
    case 12: c+=k[4]+(((uint32_t)k[5])<<16);
             b+=k[2]+(((uint32_t)k[3])<<16);
             a+=k[0]+(((uint32_t)k[1])<<16);
             break;
    case 11: c+=((uint32_t)k8[10])<<16;     /* fall through */
    case 10: c+=k[4];
             b+=k[2]+(((uint32_t)k[3])<<16);
             a+=k[0]+(((uint32_t)k[1])<<16);
             break;
    case 9 : c+=k8[8];                      /* fall through */
    case 8 : b+=k[2]+(((uint32_t)k[3])<<16);
             a+=k[0]+(((uint32_t)k[1])<<16);
             break;
    case 7 : b+=((uint32_t)k8[6])<<16;      /* fall through */
    case 6 : b+=k[2];
             a+=k[0]+(((uint32_t)k[1])<<16);
             break;
    case 5 : b+=k8[4];                      /* fall through */
    case 4 : a+=k[0]+(((uint32_t)k[1])<<16);
             break;
    case 3 : a+=((uint32_t)k8[2])<<16;      /* fall through */
    case 2 : a+=k[0];
             break;
    case 1 : a+=k8[0];
             break;
    case 0 : *pc=c; *pb=b; return;  /* zero length strings require no mixing */
    }

  } else {                        /* need to read the key one byte at a time */
    const uint8_t *k = (const uint8_t *)key;

    /*--------------- all but the last block: affect some 32 bits of (a,b,c) */
    while (length > 12)
    {
      a += k[0];
      a += ((uint32_t)k[1])<<8;
      a += ((uint32_t)k[2])<<16;
      a += ((uint32_t)k[3])<<24;
      b += k[4];
      b += ((uint32_t)k[5])<<8;
      b += ((uint32_t)k[6])<<16;
      b += ((uint32_t)k[7])<<24;
      c += k[8];
      c += ((uint32_t)k[9])<<8;
      c += ((uint32_t)k[10])<<16;
      c += ((uint32_t)k[11])<<24;
      mix(a,b,c);
      length -= 12;
      k += 12;
    }

    /*-------------------------------- last block: affect all 32 bits of (c) */
    switch(length)                   /* all the case statements fall through */
    {
    case 12: c+=((uint32_t)k[11])<<24;
    case 11: c+=((uint32_t)k[10])<<16;
    case 10: c+=((uint32_t)k[9])<<8;
    case 9 : c+=k[8];
    case 8 : b+=((uint32_t)k[7])<<24;
    case 7 : b+=((uint32_t)k[6])<<16;
    case 6 : b+=((uint32_t)k[5])<<8;
    case 5 : b+=k[4];
    case 4 : a+=((uint32_t)k[3])<<24;
    case 3 : a+=((uint32_t)k[2])<<16;
    case 2 : a+=((uint32_t)k[1])<<8;
    case 1 : a+=k[0];
             break;
    case 0 : *pc=c; *pb=b; return;  /* zero length strings require no mixing */
    }
  }

  final(a,b,c);
  *pc=c; *pb=b; return;             /* zero length strings require no mixing */
}
/* ----------------------------------------------------------------------
   end lookup3
   ---------------------------------------------------------------------- */





static uint64_t hash_state( const state_t *state )
{
  uint32_t a, b;

  a = 0; b = 0; hashlittle2( state, sizeof( var_t ) * NUMVARS, &a, &b );
  return ( (uint64_t)a << 32 ) | b;
}




