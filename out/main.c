#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <float.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include <carp_stdbool.h>
#include <core.h>
#include <carp_memory.h>
#include <carp_bool.h>
#include <carp_byte.h>
#include <carp_int.h>
#include <carp_long.h>
#include <carp_double.h>
#include <carp_float.h>
#include <carp_stdint.h>
#include <carp_char.h>
#include <carp_string.h>
#include <carp_system.h>
#include <errno.h>
#include <carp_io.h>
#include <carp_pattern.h>
#include <carp_debug.h>
#include <carp_binary.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include "/Users/veitheller/Documents/Code/Github/carp/archive/time/datetime.h"



//Types:
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty;
typedef struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty;
typedef struct Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty;
typedef struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty;
typedef struct Bucket__ColorId_String Bucket__ColorId_String;
typedef struct Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty;
typedef struct ByteOrder ByteOrder;
typedef struct ColorId ColorId;
typedef struct Datetime Datetime;
typedef struct Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty;
typedef struct Datetime__Lambda_for_MINUS_year_31_env_ty Datetime__Lambda_for_MINUS_year_31_env_ty;
typedef struct Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty;
typedef struct Datetime__Lambda_strftime__Datetime_MUL__105_env_ty Datetime__Lambda_strftime__Datetime_MUL__105_env_ty;
typedef struct Map__ColorId_String Map__ColorId_String;
typedef struct Maybe__Long Maybe__Long;
typedef struct Maybe__String Maybe__String;
typedef struct Maybe__Timezone Maybe__Timezone;
typedef struct Maybe__Uint16 Maybe__Uint16;
typedef struct Maybe__Uint32 Maybe__Uint32;
typedef struct Maybe__Uint64 Maybe__Uint64;
typedef struct Maybe__double Maybe__double;
typedef struct Maybe__float Maybe__float;
typedef struct Maybe__int Maybe__int;
typedef struct Maybe__uint8_t Maybe__uint8_t;
typedef struct Opaque Opaque;
typedef struct Pair__Array__Uint16_int Pair__Array__Uint16_int;
typedef struct Pair__Array__Uint32_int Pair__Array__Uint32_int;
typedef struct Pair__Array__Uint64_int Pair__Array__Uint64_int;
typedef struct Pair__ColorId_String Pair__ColorId_String;
typedef struct Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty;
typedef struct Result__Array__Uint16_int Result__Array__Uint16_int;
typedef struct Result__Array__Uint32_int Result__Array__Uint32_int;
typedef struct Result__Array__Uint64_int Result__Array__Uint64_int;
typedef struct Result__Array__int_String Result__Array__int_String;
typedef struct Result__Char_String Result__Char_String;
typedef struct Result__Datetime_String Result__Datetime_String;
typedef struct Result__FILE_MUL__String Result__FILE_MUL__String;
typedef struct Result__String_String Result__String_String;
typedef struct Result__Uint16_Array__uint8_t Result__Uint16_Array__uint8_t;
typedef struct Result__Uint32_Array__uint8_t Result__Uint32_Array__uint8_t;
typedef struct Result__Uint64_Array__uint8_t Result__Uint64_Array__uint8_t;
typedef struct Result__bool_String Result__bool_String;
typedef struct TestState TestState;
typedef struct Timedelta Timedelta;
typedef struct Timezone Timezone;


// Depth 3
struct Maybe__Long {
    union {
    struct {
        Long member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Long_Just_tag 0
#define Maybe__Long_Nothing_tag 1

// Depth 3
struct Maybe__String {
    union {
    struct {
        String member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__String_Just_tag 0
#define Maybe__String_Nothing_tag 1

// Depth 3
struct Maybe__double {
    union {
    struct {
        double member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__double_Just_tag 0
#define Maybe__double_Nothing_tag 1

// Depth 3
struct Maybe__float {
    union {
    struct {
        float member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__float_Just_tag 0
#define Maybe__float_Nothing_tag 1

// Depth 3
struct Maybe__int {
    union {
    struct {
        int member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__int_Just_tag 0
#define Maybe__int_Nothing_tag 1

// Depth 3
struct Maybe__uint8_t {
    union {
    struct {
        uint8_t member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__uint8_t_Just_tag 0
#define Maybe__uint8_t_Nothing_tag 1

// Depth 3
struct Result__Char_String {
    union {
    struct {
        Char member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Char_String_Success_tag 0
#define Result__Char_String_Error_tag 1

// Depth 3
struct Result__String_String {
    union {
    struct {
        String member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__String_String_Success_tag 0
#define Result__String_String_Error_tag 1

// Depth 3
struct Result__bool_String {
    union {
    struct {
        bool member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__bool_String_Success_tag 0
#define Result__bool_String_Error_tag 1

// Depth 3
struct Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty {
    int n;
};

// Depth 3
struct Datetime__Lambda_for_MINUS_year_31_env_ty {
    int a;
    int b;
};

// Depth 3
struct Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty {
    int n;
};

// Depth 3
struct Timedelta {
    int seconds_MINUS_;
};

// Depth 3
struct Timezone {
    String name;
    Long delta;
    bool dst_QMARK_;
};

// Depth 3
struct TestState {
    int passed;
    int failed;
};

// Depth 4
typedef Array Array__Array__uint8_t;

// Depth 4
typedef Array Array__Bucket__ColorId_String;

// Depth 4
typedef Array Array__Char;

// Depth 4
typedef Array Array__Pair__ColorId_String;

// Depth 4
typedef Array Array__PatternMatchResult;

// Depth 4
typedef Array Array__Result__Uint16_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint32_Array__uint8_t;

// Depth 4
typedef Array Array__Result__Uint64_Array__uint8_t;

// Depth 4
typedef Array Array__String;

// Depth 4
typedef Array Array__Uint16;

// Depth 4
typedef Array Array__Uint32;

// Depth 4
typedef Array Array__Uint64;

// Depth 4
typedef Array Array__int;

// Depth 4
typedef Array Array__uint8_t;

// Depth 4
typedef bool(*Fn__Char_Char_bool)(Char, Char);

// Depth 4
typedef Char(*Fn__Char_MUL__Char)(Char*);

// Depth 4
typedef String(*Fn__Char_String)(Char);

// Depth 4
typedef bool(*Fn__Char_bool)(Char);

// Depth 4
typedef int(*Fn__Char_int)(Char);

// Depth 4
typedef Long(*Fn__Long_Long)(Long);

// Depth 4
typedef Long(*Fn__Long_Long_Long)(Long, Long);

// Depth 4
typedef bool(*Fn__Long_Long_bool)(Long, Long);

// Depth 4
typedef Long(*Fn__Long_MUL__Long)(Long*);

// Depth 4
typedef bool(*Fn__Long_MUL__Long_MUL__bool)(Long*, Long*);

// Depth 4
typedef String(*Fn__Long_String)(Long);

// Depth 4
typedef bool(*Fn__Long_bool)(Long);

// Depth 4
typedef double(*Fn__Long_double)(Long);

// Depth 4
typedef int(*Fn__Long_int)(Long);

// Depth 4
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 4
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 4
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 4
typedef int(*Fn__String_MUL__Char_int)(String*, Char);

// Depth 4
typedef bool(*Fn__String_MUL__Long_MUL__bool)(String*, Long*);

// Depth 4
typedef String(*Fn__String_MUL__Long_String)(String*, Long);

// Depth 4
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String)(String*);

// Depth 4
typedef String(*Fn__String_MUL__String_MUL__String)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 4
typedef int(*Fn__String_MUL__String_MUL__int)(String*, String*);

// Depth 4
typedef bool(*Fn__String_MUL__bool)(String*);

// Depth 4
typedef String(*Fn__String_MUL__bool_String)(String*, bool);

// Depth 4
typedef bool(*Fn__String_MUL__double_MUL__bool)(String*, double*);

// Depth 4
typedef String(*Fn__String_MUL__double_String)(String*, double);

// Depth 4
typedef bool(*Fn__String_MUL__float_MUL__bool)(String*, float*);

// Depth 4
typedef String(*Fn__String_MUL__float_String)(String*, float);

// Depth 4
typedef int(*Fn__String_MUL__int)(String*);

// Depth 4
typedef Char(*Fn__String_MUL__int_Char)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_Char_void)(String*, int, Char);

// Depth 4
typedef String(*Fn__String_MUL__int_MUL__String)(String*, int*);

// Depth 4
typedef bool(*Fn__String_MUL__int_MUL__bool)(String*, int*);

// Depth 4
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 4
typedef void(*Fn__String_MUL__int_String_MUL__void)(String*, int, String*);

// Depth 4
typedef String(*Fn__String_MUL__int_int_String)(String*, int, int);

// Depth 4
typedef bool(*Fn__String_MUL__uint8_t_MUL__bool)(String*, uint8_t*);

// Depth 4
typedef String(*Fn__String_MUL__uint8_t_String)(String*, uint8_t);

// Depth 4
typedef void(*Fn__String_MUL__void)(String*);

// Depth 4
typedef String(*Fn__String_String)(String);

// Depth 4
typedef Char(*Fn___Char)();

// Depth 4
typedef Long(*Fn___Long)();

// Depth 4
typedef String(*Fn___String)();

// Depth 4
typedef bool(*Fn___bool)();

// Depth 4
typedef double(*Fn___double)();

// Depth 4
typedef int(*Fn___int)();

// Depth 4
typedef void(*Fn___void)();

// Depth 4
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 4
typedef bool(*Fn__bool_MUL__bool_MUL__bool)(bool*, bool*);

// Depth 4
typedef String(*Fn__bool_String)(bool);

// Depth 4
typedef bool(*Fn__bool_bool)(bool);

// Depth 4
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 4
typedef Long(*Fn__double_Long)(double);

// Depth 4
typedef double(*Fn__double_MUL__double)(double*);

// Depth 4
typedef String(*Fn__double_String)(double);

// Depth 4
typedef double(*Fn__double_double)(double);

// Depth 4
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 4
typedef double(*Fn__double_double_double)(double, double);

// Depth 4
typedef float(*Fn__double_float)(double);

// Depth 4
typedef int(*Fn__double_int)(double);

// Depth 4
typedef float(*Fn__float_MUL__float)(float*);

// Depth 4
typedef String(*Fn__float_String)(float);

// Depth 4
typedef double(*Fn__float_double)(float);

// Depth 4
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 4
typedef float(*Fn__float_float_float)(float, float);

// Depth 4
typedef int(*Fn__float_int)(float);

// Depth 4
typedef Char(*Fn__int_Char)(int);

// Depth 4
typedef String(*Fn__int_Char_String)(int, Char);

// Depth 4
typedef Long(*Fn__int_Long)(int);

// Depth 4
typedef int(*Fn__int_MUL__int)(int*);

// Depth 4
typedef int*(*Fn__int_MUL__int_MUL_)(int*);

// Depth 4
typedef bool(*Fn__int_MUL__int_MUL__bool)(int*, int*);

// Depth 4
typedef String(*Fn__int_String)(int);

// Depth 4
typedef bool(*Fn__int_bool)(int);

// Depth 4
typedef double(*Fn__int_double)(int);

// Depth 4
typedef float(*Fn__int_float)(int);

// Depth 4
typedef int(*Fn__int_int)(int);

// Depth 4
typedef int(*Fn__int_int_MUL__int)(int, int*);

// Depth 4
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 4
typedef int(*Fn__int_int_int)(int, int);

// Depth 4
typedef int(*Fn__int_int_int_int)(int, int, int);

// Depth 4
typedef int(*Fn__int_int_int_int_int_int_Long_int)(int, int, int, int, int, int, Long);

// Depth 4
typedef uint8_t(*Fn__int_uint8_t)(int);

// Depth 4
typedef void(*Fn__int_void)(int);

// Depth 4
typedef String(*Fn__uint8_t_MUL__String)(uint8_t*);

// Depth 4
typedef uint8_t(*Fn__uint8_t_MUL__uint8_t)(uint8_t*);

// Depth 4
typedef String(*Fn__uint8_t_String)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_bool)(uint8_t);

// Depth 4
typedef int(*Fn__uint8_t_int)(uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t)(uint8_t);

// Depth 4
typedef bool(*Fn__uint8_t_uint8_t_bool)(uint8_t, uint8_t);

// Depth 4
typedef uint8_t(*Fn__uint8_t_uint8_t_uint8_t)(uint8_t, uint8_t);

// Depth 5
struct Maybe__Timezone {
    union {
    struct {
        Timezone member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Timezone_Just_tag 0
#define Maybe__Timezone_Nothing_tag 1

// Depth 5
typedef int(*Fn__Fn___void_int)(Lambda);

// Depth 5
typedef void(*Fn__int_Fn__int_void_void)(int, Lambda);

// Depth 6
struct Result__Array__int_String {
    union {
    struct {
        Array__int member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__int_String_Success_tag 0
#define Result__Array__int_String_Error_tag 1

// Depth 6
typedef Result__Char_String(*Fn__Char_Result__Char_String)(Char);

// Depth 6
typedef Maybe__Long(*Fn__Long_Maybe__Long)(Long);

// Depth 6
typedef String(*Fn__Maybe__String_String)(Maybe__String);

// Depth 6
typedef String(*Fn__Maybe__String_String_String)(Maybe__String, String);

// Depth 6
typedef Maybe__int(*Fn__Maybe__int_MUL__Maybe__int)(Maybe__int*);

// Depth 6
typedef bool(*Fn__Maybe__int_MUL__Maybe__int_MUL__bool)(Maybe__int*, Maybe__int*);

// Depth 6
typedef String(*Fn__Maybe__int_MUL__String)(Maybe__int*);

// Depth 6
typedef bool(*Fn__Maybe__int_MUL__bool)(Maybe__int*);

// Depth 6
typedef Maybe__int(*Fn__Maybe__int_Maybe__int)(Maybe__int);

// Depth 6
typedef int(*Fn__Maybe__int_int)(Maybe__int);

// Depth 6
typedef int(*Fn__Maybe__int_int_int)(Maybe__int, int);

// Depth 6
typedef Timezone(*Fn__String_Long_bool_Timezone)(String, Long, bool);

// Depth 6
typedef Maybe__int(*Fn__String_MUL__Maybe__int)(String*);

// Depth 6
typedef Maybe__int(*Fn__String_MUL__int_int_Maybe__int)(String*, int, int);

// Depth 6
typedef Maybe__String(*Fn__String_Maybe__String)(String);

// Depth 6
typedef Result__Char_String(*Fn__String_Result__Char_String)(String);

// Depth 6
typedef Result__String_String(*Fn__String_Result__String_String)(String);

// Depth 6
typedef Result__bool_String(*Fn__String_Result__bool_String)(String);

// Depth 6
typedef String(*Fn__Timedelta_MUL__String)(Timedelta*);

// Depth 6
typedef int*(*Fn__Timedelta_MUL__int_MUL_)(Timedelta*);

// Depth 6
typedef Long*(*Fn__Timezone_MUL__Long_MUL_)(Timezone*);

// Depth 6
typedef String(*Fn__Timezone_MUL__String)(Timezone*);

// Depth 6
typedef String*(*Fn__Timezone_MUL__String_MUL_)(Timezone*);

// Depth 6
typedef Timezone(*Fn__Timezone_MUL__Timezone)(Timezone*);

// Depth 6
typedef bool(*Fn__Timezone_MUL__Timezone_MUL__bool)(Timezone*, Timezone*);

// Depth 6
typedef bool*(*Fn__Timezone_MUL__bool_MUL_)(Timezone*);

// Depth 6
typedef Maybe__Long(*Fn___Maybe__Long)();

// Depth 6
typedef Maybe__String(*Fn___Maybe__String)();

// Depth 6
typedef Maybe__double(*Fn___Maybe__double)();

// Depth 6
typedef Maybe__float(*Fn___Maybe__float)();

// Depth 6
typedef Maybe__int(*Fn___Maybe__int)();

// Depth 6
typedef Maybe__uint8_t(*Fn___Maybe__uint8_t)();

// Depth 6
typedef Timezone(*Fn___Timezone)();

// Depth 6
typedef Result__bool_String(*Fn__bool_Result__bool_String)(bool);

// Depth 6
typedef Maybe__double(*Fn__double_Maybe__double)(double);

// Depth 6
typedef Maybe__float(*Fn__float_Maybe__float)(float);

// Depth 6
typedef Maybe__int(*Fn__int_Maybe__int)(int);

// Depth 6
typedef Timedelta(*Fn__int_Timedelta)(int);

// Depth 6
typedef Maybe__uint8_t(*Fn__uint8_t_Maybe__uint8_t)(uint8_t);

// Depth 7
struct Datetime {
    int year;
    int month;
    int day;
    Maybe__int hours;
    Maybe__int minutes;
    Maybe__int seconds;
    Maybe__int nanoseconds;
    Maybe__Timezone tz;
};

// Depth 7
typedef Array__Char(*Fn__Array__Char_Array__Char)(Array__Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_Char_Array__Char)(Array__Char, Char);

// Depth 7
typedef String(*Fn__Array__Char_MUL__String)(Array__Char*);

// Depth 7
typedef int(*Fn__Array__Char_MUL__int)(Array__Char*);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_Array__Char)(Array__Char*, int);

// Depth 7
typedef Char*(*Fn__Array__Char_MUL__int_Char_MUL_)(Array__Char*, int);

// Depth 7
typedef void(*Fn__Array__Char_MUL__int_Char_void)(Array__Char*, int, Char);

// Depth 7
typedef Array__Char(*Fn__Array__Char_MUL__int_int_Array__Char)(Array__Char*, int, int);

// Depth 7
typedef String(*Fn__Array__String_MUL__String)(Array__String*);

// Depth 7
typedef int(*Fn__Array__String_MUL__String_MUL__int_int)(Array__String*, String*, int);

// Depth 7
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 7
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 7
typedef void(*Fn__Array__String_MUL__int_String_void)(Array__String*, int, String);

// Depth 7
typedef Array__String(*Fn__Array__String_String_Array__String)(Array__String, String);

// Depth 7
typedef int(*Fn__Array__int_MUL__int)(Array__int*);

// Depth 7
typedef Maybe__int(*Fn__Array__int_MUL__int_MUL__Maybe__int)(Array__int*, int*);

// Depth 7
typedef int*(*Fn__Array__int_MUL__int_int_MUL_)(Array__int*, int);

// Depth 7
typedef int(*Fn__Array__int_MUL__int_int_int)(Array__int*, int, int);

// Depth 7
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__Array__uint8_t)(Array__uint8_t*);

// Depth 7
typedef String(*Fn__Array__uint8_t_MUL__String)(Array__uint8_t*);

// Depth 7
typedef int(*Fn__Array__uint8_t_MUL__int)(Array__uint8_t*);

// Depth 7
typedef Maybe__uint8_t(*Fn__Array__uint8_t_MUL__int_Maybe__uint8_t)(Array__uint8_t*, int);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_MUL__int_int_Array__uint8_t)(Array__uint8_t*, int, int);

// Depth 7
typedef uint8_t*(*Fn__Array__uint8_t_MUL__int_uint8_t_MUL_)(Array__uint8_t*, int);

// Depth 7
typedef void(*Fn__Array__uint8_t_MUL__int_uint8_t_void)(Array__uint8_t*, int, uint8_t);

// Depth 7
typedef Array__uint8_t(*Fn__Array__uint8_t_uint8_t_Array__uint8_t)(Array__uint8_t, uint8_t);

// Depth 7
typedef Array__String(*Fn__Fn__String_MUL__bool_MUL__Array__String_Array__String)(Lambda*, Array__String);

// Depth 7
typedef Array__String(*Fn__Fn__String_MUL__int_MUL__String_MUL__Array__String_MUL__Array__int_MUL__Array__String)(Lambda*, Array__String*, Array__int*);

// Depth 7
typedef int(*Fn__Fn__int_int_MUL__int_MUL__int_Array__int_MUL__int)(Lambda*, int, Array__int*);

// Depth 7
typedef Array__String(*Fn__Fn__uint8_t_MUL__String_MUL__Array__uint8_t_MUL__Array__String)(Lambda*, Array__uint8_t*);

// Depth 7
typedef Array__uint8_t(*Fn__Fn__uint8_t_uint8_t_MUL__Array__uint8_t_Array__uint8_t)(Lambda*, Array__uint8_t);

// Depth 7
typedef Array__String(*Fn__Pattern_MUL__String_MUL__Array__String)(Pattern*, String*);

// Depth 7
typedef Array__int(*Fn__Pattern_MUL__String_MUL__Array__int)(Pattern*, String*);

// Depth 7
typedef Array__Char(*Fn__String_MUL__Array__Char)(String*);

// Depth 7
typedef Array__String(*Fn__String_MUL__Array__Char_MUL__Array__String)(String*, Array__Char*);

// Depth 7
typedef int(*Fn__String_MUL__Array__Char_MUL__int_int)(String*, Array__Char*, int);

// Depth 7
typedef String(*Fn__String_MUL__Array__String_MUL__String)(String*, Array__String*);

// Depth 7
typedef Array__uint8_t(*Fn__String_MUL__Array__uint8_t)(String*);

// Depth 7
typedef Array__uint8_t(*Fn___Array__uint8_t)();

// Depth 7
typedef Array__Char(*Fn__int_Array__Char)(int);

// Depth 7
typedef Array__String(*Fn__int_Array__String)(int);

// Depth 7
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 7
typedef Array__uint8_t(*Fn__int_Array__uint8_t)(int);

// Depth 7
typedef Array__Char(*Fn__int_Char_MUL__Array__Char)(int, Char*);

// Depth 7
typedef Array__Char(*Fn__int_Fn___Char_MUL__Array__Char)(int, Lambda*);

// Depth 8
typedef Maybe__Timezone(*Fn__Maybe__Timezone_MUL__Maybe__Timezone)(Maybe__Timezone*);

// Depth 8
typedef String(*Fn__Maybe__Timezone_MUL__String)(Maybe__Timezone*);

// Depth 8
typedef bool(*Fn__Maybe__Timezone_MUL__bool)(Maybe__Timezone*);

// Depth 8
typedef Maybe__Timezone(*Fn__Maybe__Timezone_Maybe__Timezone)(Maybe__Timezone);

// Depth 8
typedef Timezone(*Fn__Maybe__Timezone_Timezone_Timezone)(Maybe__Timezone, Timezone);

// Depth 8
typedef Maybe__Timezone(*Fn__Timezone_Maybe__Timezone)(Timezone);

// Depth 8
typedef Maybe__Timezone(*Fn___Maybe__Timezone)();

// Depth 9
struct Result__Datetime_String {
    union {
    struct {
        Datetime member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Datetime_String_Success_tag 0
#define Result__Datetime_String_Error_tag 1

// Depth 9
typedef Result__Array__int_String(*Fn__Array__int_Result__Array__int_String)(Array__int);

// Depth 9
typedef Array__int(*Fn__Result__Array__int_String_Array__int)(Result__Array__int_String);

// Depth 9
typedef Result__Array__int_String(*Fn__String_Result__Array__int_String)(String);

// Depth 9
typedef Result__Array__int_String(*Fn__int_int_int_Result__Array__int_String)(int, int, int);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__Array__uint8_t_Array__uint8_t_Array__Array__uint8_t)(Array__Array__uint8_t, Array__uint8_t);

// Depth 10
typedef int(*Fn__Array__Array__uint8_t_MUL__int)(Array__Array__uint8_t*);

// Depth 10
typedef Array__uint8_t*(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_MUL_)(Array__Array__uint8_t*, int);

// Depth 10
typedef void(*Fn__Array__Array__uint8_t_MUL__int_Array__uint8_t_void)(Array__Array__uint8_t*, int, Array__uint8_t);

// Depth 10
typedef Array__Array__uint8_t(*Fn__Array__uint8_t_MUL__int_Array__Array__uint8_t)(Array__uint8_t*, int);

// Depth 10
typedef String(*Fn__Char_Datetime_MUL__String)(Char, Datetime*);

// Depth 10
typedef Datetime(*Fn__Datetime_MUL__Datetime)(Datetime*);

// Depth 10
typedef bool(*Fn__Datetime_MUL__Datetime_MUL__bool)(Datetime*, Datetime*);

// Depth 10
typedef Maybe__Timezone*(*Fn__Datetime_MUL__Maybe__Timezone_MUL_)(Datetime*);

// Depth 10
typedef Maybe__int*(*Fn__Datetime_MUL__Maybe__int_MUL_)(Datetime*);

// Depth 10
typedef void(*Fn__Datetime_MUL__Maybe__int_void)(Datetime*, Maybe__int);

// Depth 10
typedef String(*Fn__Datetime_MUL__String)(Datetime*);

// Depth 10
typedef String(*Fn__Datetime_MUL__String_MUL__String)(Datetime*, String*);

// Depth 10
typedef Datetime(*Fn__Datetime_MUL__Timedelta_MUL__Datetime)(Datetime*, Timedelta*);

// Depth 10
typedef bool(*Fn__Datetime_MUL__bool)(Datetime*);

// Depth 10
typedef int(*Fn__Datetime_MUL__int)(Datetime*);

// Depth 10
typedef Datetime(*Fn__Datetime_MUL__int_Datetime)(Datetime*, int);

// Depth 10
typedef int*(*Fn__Datetime_MUL__int_MUL_)(Datetime*);

// Depth 10
typedef void(*Fn__Datetime_MUL__int_void)(Datetime*, int);

// Depth 10
typedef Array__int(*Fn__Fn__Array__uint8_t_MUL__int_MUL__Array__Array__uint8_t_MUL__Array__int)(Lambda*, Array__Array__uint8_t*);

// Depth 10
typedef String(*Fn__String_MUL__Datetime_MUL__String)(String*, Datetime*);

// Depth 10
typedef Array__Array__uint8_t(*Fn__int_Array__Array__uint8_t)(int);

// Depth 10
typedef Datetime(*Fn__int_Datetime)(int);

// Depth 10
typedef Datetime(*Fn__int_int_int_Datetime)(int, int, int);

// Depth 10
typedef Datetime(*Fn__int_int_int_Maybe__int_Maybe__int_Maybe__int_Maybe__int_Maybe__Timezone_Datetime)(int, int, int, Maybe__int, Maybe__int, Maybe__int, Maybe__int, Maybe__Timezone);

// Depth 12
typedef Result__Datetime_String(*Fn__Datetime_Result__Datetime_String)(Datetime);

// Depth 12
typedef Datetime(*Fn__Result__Datetime_String_Datetime)(Result__Datetime_String);

// Depth 12
typedef bool(*Fn__Result__Datetime_String_MUL__Result__Datetime_String_MUL__bool)(Result__Datetime_String*, Result__Datetime_String*);

// Depth 12
typedef String(*Fn__Result__Datetime_String_MUL__String)(Result__Datetime_String*);

// Depth 12
typedef bool(*Fn__Result__Datetime_String_MUL__bool)(Result__Datetime_String*);

// Depth 12
typedef Result__Datetime_String(*Fn__String_MUL__String_MUL__Result__Datetime_String)(String*, String*);

// Depth 12
typedef Result__Datetime_String(*Fn__String_Result__Datetime_String)(String);

// Depth 101
struct ByteOrder {
    union {
    // LittleEndian
    // BigEndian
    char __dummy;
    } u;
    char _tag;
};
#define ByteOrder_LittleEndian_tag 0
#define ByteOrder_BigEndian_tag 1

// Depth 101
struct Opaque {
    union {
    char __dummy;
    } u;
    char _tag;
};

// Depth 101
struct ColorId {
    union {
    // Black
    // Red
    // Green
    // Yellow
    // Blue
    // Magenta
    // Cyan
    // White
    // Reset
    // None
    // Bold
    // Italic
    // Underline
    // BlinkSlow
    // BlinkRapid
    // BgBlack
    // BgRed
    // BgGreen
    // BgYellow
    // BgBlue
    // BgMagenta
    // BgCyan
    // BgWhite
    char __dummy;
    } u;
    char _tag;
};
#define ColorId_Black_tag 0
#define ColorId_Red_tag 1
#define ColorId_Green_tag 2
#define ColorId_Yellow_tag 3
#define ColorId_Blue_tag 4
#define ColorId_Magenta_tag 5
#define ColorId_Cyan_tag 6
#define ColorId_White_tag 7
#define ColorId_Reset_tag 8
#define ColorId_None_tag 9
#define ColorId_Bold_tag 10
#define ColorId_Italic_tag 11
#define ColorId_Underline_tag 12
#define ColorId_BlinkSlow_tag 13
#define ColorId_BlinkRapid_tag 14
#define ColorId_BgBlack_tag 15
#define ColorId_BgRed_tag 16
#define ColorId_BgGreen_tag 17
#define ColorId_BgYellow_tag 18
#define ColorId_BgBlue_tag 19
#define ColorId_BgMagenta_tag 20
#define ColorId_BgCyan_tag 21
#define ColorId_BgWhite_tag 22

// Depth 103
struct Maybe__Uint16 {
    union {
    struct {
        Uint16 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint16_Just_tag 0
#define Maybe__Uint16_Nothing_tag 1

// Depth 103
struct Maybe__Uint32 {
    union {
    struct {
        Uint32 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint32_Just_tag 0
#define Maybe__Uint32_Nothing_tag 1

// Depth 103
struct Maybe__Uint64 {
    union {
    struct {
        Uint64 member0;
    } Just;
    // Nothing
    char __dummy;
    } u;
    char _tag;
};
#define Maybe__Uint64_Just_tag 0
#define Maybe__Uint64_Nothing_tag 1

// Depth 103
struct Result__FILE_MUL__String {
    union {
    struct {
        FILE* member0;
    } Success;
    struct {
        String member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__FILE_MUL__String_Success_tag 0
#define Result__FILE_MUL__String_Error_tag 1

// Depth 103
struct Result__Uint16_Array__uint8_t {
    union {
    struct {
        Uint16 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint16_Array__uint8_t_Success_tag 0
#define Result__Uint16_Array__uint8_t_Error_tag 1

// Depth 103
struct Result__Uint32_Array__uint8_t {
    union {
    struct {
        Uint32 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint32_Array__uint8_t_Success_tag 0
#define Result__Uint32_Array__uint8_t_Error_tag 1

// Depth 103
struct Result__Uint64_Array__uint8_t {
    union {
    struct {
        Uint64 member0;
    } Success;
    struct {
        Array__uint8_t member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Uint64_Array__uint8_t_Success_tag 0
#define Result__Uint64_Array__uint8_t_Error_tag 1

// Depth 103
struct Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty {
    Uint32 i;
};

// Depth 103
struct Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty {
    Uint64 i;
};

// Depth 103
struct Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 103
struct Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty {
    ByteOrder order;
};

// Depth 104
typedef Uint16(*Fn__Array__uint8_t_MUL__Uint16)(Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__Array__uint8_t_MUL__Uint32)(Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__Array__uint8_t_MUL__Uint64)(Array__uint8_t*);

// Depth 104
typedef Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 104
typedef String(*Fn__ByteOrder_MUL__String)(ByteOrder*);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint16_Array__uint8_t)(ByteOrder, Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint32_Array__uint8_t)(ByteOrder, Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__ByteOrder_Uint64_Array__uint8_t)(ByteOrder, Uint64);

// Depth 104
typedef bool(*Fn__FILE_MUL__FILE_MUL__bool)(FILE*, FILE*);

// Depth 104
typedef bool(*Fn__FILE_MUL__bool)(FILE*);

// Depth 104
typedef int(*Fn__FILE_MUL__int)(FILE*);

// Depth 104
typedef void(*Fn__FILE_MUL__int_int_void)(FILE*, int, int);

// Depth 104
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 104
typedef bool(*Fn__Int16_Int16_bool)(Int16, Int16);

// Depth 104
typedef Long(*Fn__Int16_Long)(Int16);

// Depth 104
typedef Int16(*Fn__Int16_MUL__Int16)(Int16*);

// Depth 104
typedef String(*Fn__Int16_String)(Int16);

// Depth 104
typedef bool(*Fn__Int32_Int32_bool)(Int32, Int32);

// Depth 104
typedef Long(*Fn__Int32_Long)(Int32);

// Depth 104
typedef Int32(*Fn__Int32_MUL__Int32)(Int32*);

// Depth 104
typedef String(*Fn__Int32_String)(Int32);

// Depth 104
typedef bool(*Fn__Int64_Int64_bool)(Int64, Int64);

// Depth 104
typedef Long(*Fn__Int64_Long)(Int64);

// Depth 104
typedef Int64(*Fn__Int64_MUL__Int64)(Int64*);

// Depth 104
typedef String(*Fn__Int64_String)(Int64);

// Depth 104
typedef bool(*Fn__Int8_Int8_bool)(Int8, Int8);

// Depth 104
typedef Long(*Fn__Int8_Long)(Int8);

// Depth 104
typedef Int8(*Fn__Int8_MUL__Int8)(Int8*);

// Depth 104
typedef String(*Fn__Int8_String)(Int8);

// Depth 104
typedef Int16(*Fn__Long_Int16)(Long);

// Depth 104
typedef Int32(*Fn__Long_Int32)(Long);

// Depth 104
typedef Int64(*Fn__Long_Int64)(Long);

// Depth 104
typedef Int8(*Fn__Long_Int8)(Long);

// Depth 104
typedef Uint16(*Fn__Long_Uint16)(Long);

// Depth 104
typedef Uint32(*Fn__Long_Uint32)(Long);

// Depth 104
typedef Uint64(*Fn__Long_Uint64)(Long);

// Depth 104
typedef Uint8(*Fn__Long_Uint8)(Long);

// Depth 104
typedef String(*Fn__Opaque_MUL__String)(Opaque*);

// Depth 104
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 104
typedef int(*Fn__String_MUL__int_int_FILE_MUL__int)(String*, int, int, FILE*);

// Depth 104
typedef Long*(*Fn__TM_MUL__Long_MUL_)(TM*);

// Depth 104
typedef String(*Fn__TM_MUL__String)(TM*);

// Depth 104
typedef String*(*Fn__TM_MUL__String_MUL_)(TM*);

// Depth 104
typedef int*(*Fn__TM_MUL__int_MUL_)(TM*);

// Depth 104
typedef Long(*Fn__Uint16_Long)(Uint16);

// Depth 104
typedef Array__uint8_t(*Fn__Uint16_MUL__Array__uint8_t)(Uint16*);

// Depth 104
typedef Uint16(*Fn__Uint16_MUL__Uint16)(Uint16*);

// Depth 104
typedef uint8_t(*Fn__Uint16_MUL__uint8_t)(Uint16*);

// Depth 104
typedef String(*Fn__Uint16_String)(Uint16);

// Depth 104
typedef Uint16(*Fn__Uint16_Uint16_Uint16)(Uint16, Uint16);

// Depth 104
typedef bool(*Fn__Uint16_Uint16_bool)(Uint16, Uint16);

// Depth 104
typedef Long(*Fn__Uint32_Long)(Uint32);

// Depth 104
typedef Array__uint8_t(*Fn__Uint32_MUL__Array__uint8_t)(Uint32*);

// Depth 104
typedef Uint32(*Fn__Uint32_MUL__Uint32)(Uint32*);

// Depth 104
typedef uint8_t(*Fn__Uint32_MUL__uint8_t)(Uint32*);

// Depth 104
typedef String(*Fn__Uint32_String)(Uint32);

// Depth 104
typedef Uint32(*Fn__Uint32_Uint32_Uint32)(Uint32, Uint32);

// Depth 104
typedef bool(*Fn__Uint32_Uint32_bool)(Uint32, Uint32);

// Depth 104
typedef Long(*Fn__Uint64_Long)(Uint64);

// Depth 104
typedef Array__uint8_t(*Fn__Uint64_MUL__Array__uint8_t)(Uint64*);

// Depth 104
typedef Uint64(*Fn__Uint64_MUL__Uint64)(Uint64*);

// Depth 104
typedef uint8_t(*Fn__Uint64_MUL__uint8_t)(Uint64*);

// Depth 104
typedef String(*Fn__Uint64_String)(Uint64);

// Depth 104
typedef Uint64(*Fn__Uint64_Uint64_Uint64)(Uint64, Uint64);

// Depth 104
typedef bool(*Fn__Uint64_Uint64_bool)(Uint64, Uint64);

// Depth 104
typedef double(*Fn__Uint64_double)(Uint64);

// Depth 104
typedef Long(*Fn__Uint8_Long)(Uint8);

// Depth 104
typedef Uint8(*Fn__Uint8_MUL__Uint8)(Uint8*);

// Depth 104
typedef String(*Fn__Uint8_String)(Uint8);

// Depth 104
typedef bool(*Fn__Uint8_Uint8_bool)(Uint8, Uint8);

// Depth 104
typedef ByteOrder(*Fn___ByteOrder)();

// Depth 104
typedef TM*(*Fn___TM_MUL_)();

// Depth 104
typedef Uint16(*Fn___Uint16)();

// Depth 104
typedef Uint32(*Fn___Uint32)();

// Depth 104
typedef Uint64(*Fn___Uint64)();

// Depth 104
typedef Uint16(*Fn__uint8_t_uint8_t_Uint16)(uint8_t, uint8_t);

// Depth 104
typedef Uint32(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_Uint32)(uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 104
typedef Uint64(*Fn__uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_uint8_t_Uint64)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);

// Depth 106
struct Result__Array__Uint16_int {
    union {
    struct {
        Array__Uint16 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint16_int_Success_tag 0
#define Result__Array__Uint16_int_Error_tag 1

// Depth 106
struct Result__Array__Uint32_int {
    union {
    struct {
        Array__Uint32 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint32_int_Success_tag 0
#define Result__Array__Uint32_int_Error_tag 1

// Depth 106
struct Result__Array__Uint64_int {
    union {
    struct {
        Array__Uint64 member0;
    } Success;
    struct {
        int member0;
    } Error;
    char __dummy;
    } u;
    char _tag;
};
#define Result__Array__Uint64_int_Success_tag 0
#define Result__Array__Uint64_int_Error_tag 1

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint16_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint32_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Array__uint8_t_Result__Uint64_Array__uint8_t)(Array__uint8_t);

// Depth 106
typedef Maybe__Uint16(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint32(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Maybe__Uint64(*Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64)(ByteOrder, Array__uint8_t*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__FILE_MUL__Result__FILE_MUL__String)(FILE*);

// Depth 106
typedef FILE*(*Fn__Result__FILE_MUL__String_FILE_MUL_)(Result__FILE_MUL__String);

// Depth 106
typedef bool(*Fn__Result__FILE_MUL__String_MUL__bool)(Result__FILE_MUL__String*);

// Depth 106
typedef String(*Fn__Result__FILE_MUL__String_String)(Result__FILE_MUL__String);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint16_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Result__Uint16_Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_MUL__Uint16)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint16_Array__uint8_t_MUL__bool)(Result__Uint16_Array__uint8_t*);

// Depth 106
typedef Uint16(*Fn__Result__Uint16_Array__uint8_t_Uint16)(Result__Uint16_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint32_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Result__Uint32_Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_MUL__Uint32)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint32_Array__uint8_t_MUL__bool)(Result__Uint32_Array__uint8_t*);

// Depth 106
typedef Uint32(*Fn__Result__Uint32_Array__uint8_t_Uint32)(Result__Uint32_Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_Array__uint8_t_Array__uint8_t)(Result__Uint64_Array__uint8_t, Array__uint8_t);

// Depth 106
typedef Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Result__Uint64_Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_MUL__Uint64)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef bool(*Fn__Result__Uint64_Array__uint8_t_MUL__bool)(Result__Uint64_Array__uint8_t*);

// Depth 106
typedef Uint64(*Fn__Result__Uint64_Array__uint8_t_Uint64)(Result__Uint64_Array__uint8_t);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_MUL__String_MUL__Result__FILE_MUL__String)(String*, String*);

// Depth 106
typedef Result__FILE_MUL__String(*Fn__String_Result__FILE_MUL__String)(String);

// Depth 106
typedef Maybe__Uint16(*Fn__Uint16_Maybe__Uint16)(Uint16);

// Depth 106
typedef Result__Uint16_Array__uint8_t(*Fn__Uint16_Result__Uint16_Array__uint8_t)(Uint16);

// Depth 106
typedef Maybe__Uint32(*Fn__Uint32_Maybe__Uint32)(Uint32);

// Depth 106
typedef Result__Uint32_Array__uint8_t(*Fn__Uint32_Result__Uint32_Array__uint8_t)(Uint32);

// Depth 106
typedef Maybe__Uint64(*Fn__Uint64_Maybe__Uint64)(Uint64);

// Depth 106
typedef Result__Uint64_Array__uint8_t(*Fn__Uint64_Result__Uint64_Array__uint8_t)(Uint64);

// Depth 106
typedef Maybe__Uint16(*Fn___Maybe__Uint16)();

// Depth 106
typedef Maybe__Uint32(*Fn___Maybe__Uint32)();

// Depth 106
typedef Maybe__Uint64(*Fn___Maybe__Uint64)();

// Depth 106
struct Pair__Array__Uint16_int {
    Array__Uint16 a;
    int b;
};

// Depth 106
struct Pair__Array__Uint32_int {
    Array__Uint32 a;
    int b;
};

// Depth 106
struct Pair__Array__Uint64_int {
    Array__Uint64 a;
    int b;
};

// Depth 107
typedef Array__Uint16(*Fn__Array__Uint16_MUL__Array__Uint16)(Array__Uint16*);

// Depth 107
typedef int(*Fn__Array__Uint16_MUL__int)(Array__Uint16*);

// Depth 107
typedef Uint16*(*Fn__Array__Uint16_MUL__int_Uint16_MUL_)(Array__Uint16*, int);

// Depth 107
typedef void(*Fn__Array__Uint16_MUL__int_Uint16_void)(Array__Uint16*, int, Uint16);

// Depth 107
typedef Array__Uint32(*Fn__Array__Uint32_MUL__Array__Uint32)(Array__Uint32*);

// Depth 107
typedef int(*Fn__Array__Uint32_MUL__int)(Array__Uint32*);

// Depth 107
typedef Uint32*(*Fn__Array__Uint32_MUL__int_Uint32_MUL_)(Array__Uint32*, int);

// Depth 107
typedef void(*Fn__Array__Uint32_MUL__int_Uint32_void)(Array__Uint32*, int, Uint32);

// Depth 107
typedef Array__Uint64(*Fn__Array__Uint64_MUL__Array__Uint64)(Array__Uint64*);

// Depth 107
typedef int(*Fn__Array__Uint64_MUL__int)(Array__Uint64*);

// Depth 107
typedef Uint64*(*Fn__Array__Uint64_MUL__int_Uint64_MUL_)(Array__Uint64*, int);

// Depth 107
typedef void(*Fn__Array__Uint64_MUL__int_Uint64_void)(Array__Uint64*, int, Uint64);

// Depth 107
typedef Array__Uint16(*Fn__Fn__Array__uint8_t_MUL__Uint16_MUL__Array__Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint32(*Fn__Fn__Array__uint8_t_MUL__Uint32_MUL__Array__Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Array__Uint64(*Fn__Fn__Array__uint8_t_MUL__Uint64_MUL__Array__Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Array__uint8_t*);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint16_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint32_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Lambda(*Fn__Fn__ByteOrder_Array__uint8_t_MUL__Maybe__Uint64_MUL__ByteOrder_Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t)(Lambda*, ByteOrder);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint16_MUL__Array__uint8_t_MUL__Array__Uint16_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint16_MUL__uint8_t_MUL__Array__Uint16_MUL__Array__uint8_t)(Lambda*, Array__Uint16*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint32_MUL__Array__uint8_t_MUL__Array__Uint32_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint32_MUL__uint8_t_MUL__Array__Uint32_MUL__Array__uint8_t)(Lambda*, Array__Uint32*);

// Depth 107
typedef Array__Array__uint8_t(*Fn__Fn__Uint64_MUL__Array__uint8_t_MUL__Array__Uint64_MUL__Array__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__uint8_t(*Fn__Fn__Uint64_MUL__uint8_t_MUL__Array__Uint64_MUL__Array__uint8_t)(Lambda*, Array__Uint64*);

// Depth 107
typedef Array__Uint16(*Fn__int_Array__Uint16)(int);

// Depth 107
typedef Array__Uint32(*Fn__int_Array__Uint32)(int);

// Depth 107
typedef Array__Uint64(*Fn__int_Array__Uint64)(int);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int)(Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Result__Uint16_Array__uint8_t*(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_MUL_)(Array__Result__Uint16_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint16_Array__uint8_t_MUL__int_Result__Uint16_Array__uint8_t_void)(Array__Result__Uint16_Array__uint8_t*, int, Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int)(Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Result__Uint32_Array__uint8_t*(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_MUL_)(Array__Result__Uint32_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint32_Array__uint8_t_MUL__int_Result__Uint32_Array__uint8_t_void)(Array__Result__Uint32_Array__uint8_t*, int, Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef int(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int)(Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Result__Uint64_Array__uint8_t*(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_MUL_)(Array__Result__Uint64_Array__uint8_t*, int);

// Depth 109
typedef void(*Fn__Array__Result__Uint64_Array__uint8_t_MUL__int_Result__Uint64_Array__uint8_t_void)(Array__Result__Uint64_Array__uint8_t*, int, Result__Uint64_Array__uint8_t);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__Array__Uint16_Result__Array__Uint16_int)(Array__Uint16);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__Array__Uint16_int_Pair__Array__Uint16_int)(Array__Uint16, int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__Array__Uint32_Result__Array__Uint32_int)(Array__Uint32);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__Array__Uint32_int_Pair__Array__Uint32_int)(Array__Uint32, int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__Array__Uint64_Result__Array__Uint64_int)(Array__Uint64);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__Array__Uint64_int_Pair__Array__Uint64_int)(Array__Uint64, int);

// Depth 109
typedef Pair__Array__Uint16_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint16_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint32_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint32_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Pair__Array__Uint64_int(*Fn__ByteOrder_Array__uint8_t_MUL__Pair__Array__Uint64_int)(ByteOrder, Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Uint16(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__Uint16_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Uint16)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__Fn__Result__Uint16_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint16_Array__uint8_t_MUL__Array__Result__Uint16_Array__uint8_t)(Lambda*, Array__Result__Uint16_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Uint32(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__Uint32_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Uint32)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__Fn__Result__Uint32_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint32_Array__uint8_t_MUL__Array__Result__Uint32_Array__uint8_t)(Lambda*, Array__Result__Uint32_Array__uint8_t*);

// Depth 109
typedef Array__Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint64(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__Uint64_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Uint64)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__Fn__Result__Uint64_Array__uint8_t_MUL__bool_MUL__Array__Result__Uint64_Array__uint8_t_MUL__Array__Result__Uint64_Array__uint8_t)(Lambda*, Array__Result__Uint64_Array__uint8_t*);

// Depth 109
typedef Array__Uint16*(*Fn__Pair__Array__Uint16_int_MUL__Array__Uint16_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint16_int_MUL__int_MUL_)(Pair__Array__Uint16_int*);

// Depth 109
typedef Array__Uint32*(*Fn__Pair__Array__Uint32_int_MUL__Array__Uint32_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint32_int_MUL__int_MUL_)(Pair__Array__Uint32_int*);

// Depth 109
typedef Array__Uint64*(*Fn__Pair__Array__Uint64_int_MUL__Array__Uint64_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef int*(*Fn__Pair__Array__Uint64_int_MUL__int_MUL_)(Pair__Array__Uint64_int*);

// Depth 109
typedef Array__Result__Uint16_Array__uint8_t(*Fn__int_Array__Result__Uint16_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint32_Array__uint8_t(*Fn__int_Array__Result__Uint32_Array__uint8_t)(int);

// Depth 109
typedef Array__Result__Uint64_Array__uint8_t(*Fn__int_Array__Result__Uint64_Array__uint8_t)(int);

// Depth 109
typedef Result__Array__Uint16_int(*Fn__int_Result__Array__Uint16_int)(int);

// Depth 109
typedef Result__Array__Uint32_int(*Fn__int_Result__Array__Uint32_int)(int);

// Depth 109
typedef Result__Array__Uint64_int(*Fn__int_Result__Array__Uint64_int)(int);

// Depth 504
struct Bucket__ColorId_String {
    Array__Pair__ColorId_String entries;
};

// Depth 504
struct Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty {
    String* val;
};

// Depth 504
struct Datetime__Lambda_strftime__Datetime_MUL__105_env_ty {
    Datetime* dt;
    int ln;
};

// Depth 504
struct Map__ColorId_String {
    int len;
    int n_MINUS_buckets;
    Array__Bucket__ColorId_String buckets;
};

// Depth 504
struct Pair__ColorId_String {
    ColorId a;
    String b;
};

// Depth 504
struct Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty {
    String* data;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
struct Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty {
    Lambda* f;
    ByteOrder order;
};

// Depth 505
typedef CChar*(*Fn__CChar_MUL__CChar_MUL_)(CChar*);

// Depth 505
typedef FILE*(*Fn__CChar_MUL__CChar_MUL__FILE_MUL_)(CChar*, CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__CChar_MUL__bool)(CChar*, CChar*);

// Depth 505
typedef String(*Fn__CChar_MUL__String)(CChar*);

// Depth 505
typedef bool(*Fn__CChar_MUL__bool)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int)(CChar*);

// Depth 505
typedef int(*Fn__CChar_MUL__int_int_FILE_MUL__int)(CChar*, int, int, FILE*);

// Depth 505
typedef ColorId(*Fn__ColorId_MUL__ColorId)(ColorId*);

// Depth 505
typedef bool(*Fn__ColorId_MUL__ColorId_MUL__bool)(ColorId*, ColorId*);

// Depth 505
typedef String(*Fn__ColorId_MUL__String)(ColorId*);

// Depth 505
typedef int(*Fn__ColorId_MUL__int)(ColorId*);

// Depth 505
typedef String(*Fn__ColorId_String)(ColorId);

// Depth 505
typedef String(*Fn__ColorId_String_MUL__String)(ColorId, String*);

// Depth 505
typedef void(*Fn__ColorId_String_MUL__void)(ColorId, String*);

// Depth 505
typedef void(*Fn__ColorId_void)(ColorId);

// Depth 505
typedef Long(*Fn__LambdaEnv_Long_Long)(LambdaEnv, Long);

// Depth 505
typedef Maybe__Timezone(*Fn__LambdaEnv_Maybe__Timezone_Maybe__Timezone)(LambdaEnv, Maybe__Timezone);

// Depth 505
typedef Maybe__int(*Fn__LambdaEnv_Maybe__int_Maybe__int)(LambdaEnv, Maybe__int);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint16_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint32_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(LambdaEnv, Result__Uint64_Array__uint8_t*);

// Depth 505
typedef bool(*Fn__LambdaEnv_String_MUL__bool)(LambdaEnv, String*);

// Depth 505
typedef String(*Fn__LambdaEnv_String_String)(LambdaEnv, String);

// Depth 505
typedef bool(*Fn__LambdaEnv_bool_bool)(LambdaEnv, bool);

// Depth 505
typedef int(*Fn__LambdaEnv_int_int)(LambdaEnv, int);

// Depth 505
typedef uint8_t(*Fn__LambdaEnv_uint8_t_uint8_t)(LambdaEnv, uint8_t);

// Depth 505
typedef String(*Fn__PatternMatchResult_MUL__String)(PatternMatchResult*);

// Depth 505
typedef Maybe__String(*Fn__PatternMatchResult_MUL__String_MUL__Maybe__String)(PatternMatchResult*, String*);

// Depth 505
typedef bool(*Fn__PatternMatchResult_MUL__bool)(PatternMatchResult*);

// Depth 505
typedef int(*Fn__PatternMatchResult_MUL__int)(PatternMatchResult*);

// Depth 505
typedef int*(*Fn__PatternMatchResult_MUL__int_MUL_)(PatternMatchResult*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__PatternMatchResult)(Pattern*, String*);

// Depth 505
typedef PatternMatchResult(*Fn__Pattern_MUL__String_MUL__int_PatternMatchResult)(Pattern*, String*, int);

// Depth 505
typedef CChar*(*Fn__String_MUL__CChar_MUL_)(String*);

// Depth 505
typedef TestState(*Fn__TestState_Fn__int_int_MUL__TestState)(TestState, Lambda*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__Datetime_MUL__Datetime_MUL__String_MUL__String_MUL__Fn__Datetime_MUL__Datetime_MUL__bool_TestState)(TestState*, Datetime*, Datetime*, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__Datetime_MUL__Datetime_MUL__String_MUL__String_MUL__bool_TestState)(TestState*, Datetime*, Datetime*, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__Datetime_MUL__Datetime_MUL__String_MUL__TestState)(TestState*, Datetime*, Datetime*, String*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_MUL__String_MUL__Fn__Result__Datetime_String_MUL__Result__Datetime_String_MUL__bool_TestState)(TestState*, Result__Datetime_String*, Result__Datetime_String*, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_MUL__String_MUL__bool_TestState)(TestState*, Result__Datetime_String*, Result__Datetime_String*, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_MUL__TestState)(TestState*, Result__Datetime_String*, Result__Datetime_String*, String*);

// Depth 505
typedef String(*Fn__TestState_MUL__String)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__String_MUL__String_MUL__String_MUL__String_MUL__Fn__String_MUL__String_MUL__bool_TestState)(TestState*, String*, String*, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__String_MUL__String_MUL__String_MUL__String_MUL__bool_TestState)(TestState*, String*, String*, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__String_MUL__String_MUL__String_MUL__TestState)(TestState*, String*, String*, String*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__TestState)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_String_MUL__TestState)(TestState*, bool, String*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_bool_String_MUL__String_MUL__Fn__bool_bool_bool_TestState)(TestState*, bool, bool, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_bool_String_MUL__String_MUL__bool_TestState)(TestState*, bool, bool, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__bool_bool_String_MUL__TestState)(TestState*, bool, bool, String*);

// Depth 505
typedef int*(*Fn__TestState_MUL__int_MUL_)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_MUL__int_int_String_MUL__String_MUL__Fn__int_int_bool_TestState)(TestState*, int, int, String*, String*, Lambda);

// Depth 505
typedef TestState(*Fn__TestState_MUL__int_int_String_MUL__String_MUL__bool_TestState)(TestState*, int, int, String*, String*, bool);

// Depth 505
typedef TestState(*Fn__TestState_MUL__int_int_String_MUL__TestState)(TestState*, int, int, String*);

// Depth 505
typedef void(*Fn__TestState_MUL__void)(TestState*);

// Depth 505
typedef TestState(*Fn__TestState_int_TestState)(TestState, int);

// Depth 505
typedef ColorId(*Fn___ColorId)();

// Depth 505
typedef CChar*(*Fn__int_CChar_MUL_)(int);

// Depth 505
typedef TestState(*Fn__int_int_TestState)(int, int);

// Depth 507
typedef Pair__ColorId_String(*Fn__ColorId_MUL__String_MUL__Pair__ColorId_String)(ColorId*, String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__ColorId_String_Pair__ColorId_String)(ColorId, String);

// Depth 507
typedef ColorId*(*Fn__Pair__ColorId_String_MUL__ColorId_MUL_)(Pair__ColorId_String*);

// Depth 507
typedef String*(*Fn__Pair__ColorId_String_MUL__String_MUL_)(Pair__ColorId_String*);

// Depth 507
typedef Pair__ColorId_String(*Fn__Pair__ColorId_String_Pair__ColorId_String)(Pair__ColorId_String);

// Depth 507
typedef Pair__ColorId_String(*Fn__Pair__ColorId_String_String_Pair__ColorId_String)(Pair__ColorId_String, String);

// Depth 508
typedef int(*Fn__Array__PatternMatchResult_MUL__int)(Array__PatternMatchResult*);

// Depth 508
typedef PatternMatchResult*(*Fn__Array__PatternMatchResult_MUL__int_PatternMatchResult_MUL_)(Array__PatternMatchResult*, int);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Array__PatternMatchResult_PatternMatchResult_Array__PatternMatchResult)(Array__PatternMatchResult, PatternMatchResult);

// Depth 508
typedef Array__String(*Fn__Fn__PatternMatchResult_MUL__String_MUL__Array__PatternMatchResult_MUL__Array__String)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__int(*Fn__Fn__PatternMatchResult_MUL__int_MUL__Array__PatternMatchResult_MUL__Array__int)(Lambda*, Array__PatternMatchResult*);

// Depth 508
typedef Array__PatternMatchResult(*Fn__Pattern_MUL__String_MUL__Array__PatternMatchResult)(Pattern*, String*);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__Pair__ColorId_String_void)(Array__Pair__ColorId_String*, Pair__ColorId_String);

// Depth 510
typedef int(*Fn__Array__Pair__ColorId_String_MUL__int)(Array__Pair__ColorId_String*);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__int_Fn__Pair__ColorId_String_Pair__ColorId_String_MUL__void)(Array__Pair__ColorId_String*, int, Lambda*);

// Depth 510
typedef Pair__ColorId_String(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String)(Array__Pair__ColorId_String*, int);

// Depth 510
typedef Pair__ColorId_String*(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String_MUL_)(Array__Pair__ColorId_String*, int);

// Depth 510
typedef void(*Fn__Array__Pair__ColorId_String_MUL__int_Pair__ColorId_String_void)(Array__Pair__ColorId_String*, int, Pair__ColorId_String);

// Depth 512
typedef Bucket__ColorId_String(*Fn__Array__Pair__ColorId_String_Bucket__ColorId_String)(Array__Pair__ColorId_String);

// Depth 512
typedef Array__Pair__ColorId_String*(*Fn__Bucket__ColorId_String_MUL__Array__Pair__ColorId_String_MUL_)(Bucket__ColorId_String*);

// Depth 512
typedef String(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__String_MUL__String)(Bucket__ColorId_String*, ColorId*, String*);

// Depth 512
typedef void(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__String_MUL__void)(Bucket__ColorId_String*, ColorId*, String*);

// Depth 512
typedef int(*Fn__Bucket__ColorId_String_MUL__ColorId_MUL__int)(Bucket__ColorId_String*, ColorId*);

// Depth 512
typedef String(*Fn__Bucket__ColorId_String_MUL__int_String)(Bucket__ColorId_String*, int);

// Depth 512
typedef void(*Fn__Bucket__ColorId_String_MUL__int_String_MUL__void)(Bucket__ColorId_String*, int, String*);

// Depth 512
typedef Bucket__ColorId_String(*Fn___Bucket__ColorId_String)();

// Depth 515
typedef Bucket__ColorId_String*(*Fn__Array__Bucket__ColorId_String_MUL__int_Bucket__ColorId_String_MUL_)(Array__Bucket__ColorId_String*, int);

// Depth 515
typedef void(*Fn__Array__Bucket__ColorId_String_MUL__int_Bucket__ColorId_String_void)(Array__Bucket__ColorId_String*, int, Bucket__ColorId_String);

// Depth 515
typedef Array__Bucket__ColorId_String(*Fn__int_Array__Bucket__ColorId_String)(int);

// Depth 515
typedef Array__Bucket__ColorId_String(*Fn__int_Fn___Bucket__ColorId_String_MUL__Array__Bucket__ColorId_String)(int, Lambda*);

// Depth 517
typedef Map__ColorId_String(*Fn__Array__Pair__ColorId_String_Map__ColorId_String)(Array__Pair__ColorId_String);

// Depth 517
typedef Array__Bucket__ColorId_String*(*Fn__Map__ColorId_String_MUL__Array__Bucket__ColorId_String_MUL_)(Map__ColorId_String*);

// Depth 517
typedef String(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String)(Map__ColorId_String*, ColorId*);

// Depth 517
typedef String(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String_MUL__String)(Map__ColorId_String*, ColorId*, String*);

// Depth 517
typedef void(*Fn__Map__ColorId_String_MUL__ColorId_MUL__String_MUL__void)(Map__ColorId_String*, ColorId*, String*);

// Depth 517
typedef int*(*Fn__Map__ColorId_String_MUL__int_MUL_)(Map__ColorId_String*);

// Depth 517
typedef void(*Fn__Map__ColorId_String_MUL__int_void)(Map__ColorId_String*, int);

// Depth 517
typedef Map__ColorId_String(*Fn___Map__ColorId_String)();

// Depth 517
typedef Map__ColorId_String(*Fn__int_int_Array__Bucket__ColorId_String_Map__ColorId_String)(int, int, Array__Bucket__ColorId_String);


//Declarations:

// Depth 500
bool _DIV__EQ___int(int a, int b);

// Depth 500
bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b);

// Depth 500
bool _LT__EQ___Char(Char a, Char b);

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___Char(Char a, Char b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p);

// Depth 500
Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef);

// Depth 500
void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p);

// Depth 500
Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef);

// Depth 500
void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p);

// Depth 500
Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef);

// Depth 500
void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p);

// Depth 500
Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* pRef);

// Depth 500
void Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* p);

// Depth 500
Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty_copy(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* pRef);

// Depth 500
void Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty_delete(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* p);

// Depth 500
Datetime__Lambda_for_MINUS_year_31_env_ty* Datetime__Lambda_for_MINUS_year_31_env_ty_copy(Datetime__Lambda_for_MINUS_year_31_env_ty* pRef);

// Depth 500
void Datetime__Lambda_for_MINUS_year_31_env_ty_delete(Datetime__Lambda_for_MINUS_year_31_env_ty* p);

// Depth 500
Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty_copy(Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* pRef);

// Depth 500
void Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty_delete(Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* p);

// Depth 500
Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* Datetime__Lambda_strftime__Datetime_MUL__105_env_ty_copy(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* pRef);

// Depth 500
void Datetime__Lambda_strftime__Datetime_MUL__105_env_ty_delete(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* p);

// Depth 500
Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef);

// Depth 500
void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p);

// Depth 500
int id__int(int x);

// Depth 500
int main(int argc, char** argv);

// Depth 500
int max__int(int a, int b);

// Depth 500
int min__int(int a, int b);

// Depth 500
bool neg_QMARK___int(int x);

// Depth 500
bool not(bool a);

// Depth 500
bool null_QMARK___CChar(CChar* p);

// Depth 500
bool null_QMARK___FILE(FILE* p);

// Depth 1000

// Depth 500
Array Array_allocate__Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Bucket__ColorId_String (int n);

// Depth 500
Array Array_allocate__Char (int n);

// Depth 500
Array Array_allocate__Result__Uint16_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint32_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__Result__Uint64_Array__uint8_t (int n);

// Depth 500
Array Array_allocate__String (int n);

// Depth 500
Array Array_allocate__Uint16 (int n);

// Depth 500
Array Array_allocate__Uint32 (int n);

// Depth 500
Array Array_allocate__Uint64 (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
Array Array_allocate__uint8_t (int n);

// Depth 500
void Array_aset_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String (Array *aRef, int n, Bucket__ColorId_String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String (Array *aRef, int n, Pair__ColorId_String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue);

// Depth 500
void Array_aupdate_BANG___Pair__ColorId_String(Array__Pair__ColorId_String* a, int i, Lambda* f);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a);

// Depth 500
Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a);

// Depth 500
Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a);

// Depth 500
Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a);

// Depth 500
Array Array_copy__Result__Uint16_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint32_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Result__Uint64_Array__uint8_t (Array* a);

// Depth 500
Array Array_copy__Uint16 (Array* a);

// Depth 500
Array Array_copy__Uint32 (Array* a);

// Depth 500
Array Array_copy__Uint64 (Array* a);

// Depth 500
Array Array_copy__uint8_t (Array* a);

// Depth 500
void Array_delete__Array__uint8_t (Array a);

// Depth 500
void Array_delete__Bucket__ColorId_String (Array a);

// Depth 500
void Array_delete__Char (Array a);

// Depth 500
void Array_delete__Pair__ColorId_String (Array a);

// Depth 500
void Array_delete__PatternMatchResult (Array a);

// Depth 500
void Array_delete__Result__Uint16_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint32_Array__uint8_t (Array a);

// Depth 500
void Array_delete__Result__Uint64_Array__uint8_t (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__Uint16 (Array a);

// Depth 500
void Array_delete__Uint32 (Array a);

// Depth 500
void Array_delete__Uint64 (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
void Array_delete__uint8_t (Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a);

// Depth 500
Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a);

// Depth 500
Maybe__int Array_index_MINUS_of__int(Array__int* a, int* e);

// Depth 500
int Array_length__Array__uint8_t (Array *a);

// Depth 500
int Array_length__Char (Array *a);

// Depth 500
int Array_length__Pair__ColorId_String (Array *a);

// Depth 500
int Array_length__PatternMatchResult (Array *a);

// Depth 500
int Array_length__Result__Uint16_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint32_Array__uint8_t (Array *a);

// Depth 500
int Array_length__Result__Uint64_Array__uint8_t (Array *a);

// Depth 500
int Array_length__String (Array *a);

// Depth 500
int Array_length__Uint16 (Array *a);

// Depth 500
int Array_length__Uint32 (Array *a);

// Depth 500
int Array_length__Uint64 (Array *a);

// Depth 500
int Array_length__int (Array *a);

// Depth 500
int Array_length__uint8_t (Array *a);

// Depth 500
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index);

// Depth 500
Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n);

// Depth 500
Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index);

// Depth 500
void Array_push_MINUS_back_BANG___Pair__ColorId_String(Array *aRef, Pair__ColorId_String value);

// Depth 500
Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value);

// Depth 500
Array Array_push_MINUS_back__Char(Array a, Char value);

// Depth 500
Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value);

// Depth 500
Array Array_push_MINUS_back__String(Array a, String value);

// Depth 500
Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value);

// Depth 500
Result__Array__int_String Array_range__int(int start, int end, int step);

// Depth 500
int Array_reduce__int_int(Lambda* f, int x, Array__int* xs);

// Depth 500
Array__Bucket__ColorId_String Array_repeat__Bucket__ColorId_String(int n, Lambda* f);

// Depth 500
Array__Char Array_repeat__Char(int n, Lambda* f);

// Depth 500
Array__Char Array_replicate__Char(int n, Char* e);

// Depth 500
Array__Char Array_reverse__Char(Array__Char a);

// Depth 500
Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index);

// Depth 500
Pair__ColorId_String Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(Array *a, int i);

// Depth 500
Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n);

// Depth 500
Bucket__ColorId_String* Array_unsafe_MINUS_nth__Bucket__ColorId_String (Array *aRef, int n);

// Depth 500
Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n);

// Depth 500
Pair__ColorId_String* Array_unsafe_MINUS_nth__Pair__ColorId_String (Array *aRef, int n);

// Depth 500
PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n);

// Depth 500
Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n);

// Depth 500
Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n);

// Depth 500
String* Array_unsafe_MINUS_nth__String (Array *aRef, int n);

// Depth 500
Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n);

// Depth 500
Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n);

// Depth 500
Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n);

// Depth 500
int* Array_unsafe_MINUS_nth__int (Array *aRef, int n);

// Depth 500
uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n);

// Depth 500
Array__uint8_t Array_zero__uint8_t();

// Depth 500
Array__String Array_zip__String_int_String(Lambda* f, Array__String* a, Array__int* b);

// Depth 1000

// Depth 500
Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs);

// Depth 500
String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b);

// Depth 500
Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i);

// Depth 500
Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i);

// Depth 500
Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng);

// Depth 500
Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y);

// Depth 500
int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y);

// Depth 500
Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order);

// Depth 500
Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order);

// Depth 500
String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs);

// Depth 500
Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes);

// Depth 500
Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i);

// Depth 500
Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is);

// Depth 500
Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i);

// Depth 500
Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is);

// Depth 500
Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i);

// Depth 500
Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is);

// Depth 500
Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results);

// Depth 500
int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results);

// Depth 500
ByteOrder Binary_system_MINUS_endianness();

// Depth 500
String Binary_to_MINUS_hex_MINUS_str(uint8_t b);

// Depth 500
Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 500
Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x);

// Depth 500
Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x);

// Depth 500
Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x);

// Depth 1000

// Depth 500
bool Bool_blit(bool x);

// Depth 500
int Bool_hash(bool* k);

// Depth 500
String Bool_prn(bool x);

// Depth 500
bool Bool_zero();

// Depth 1000

// Depth 500
String BoolRef_format(String* s, bool* x);

// Depth 500
String BoolRef_prn(bool* x);

// Depth 500
String BoolRef_str(bool* x);

// Depth 1000

// Depth 500
Pair__ColorId_String Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* _env, Pair__ColorId_String p);

// Depth 500
void Bucket_delete__ColorId_String(Bucket__ColorId_String p);

// Depth 500
Bucket__ColorId_String Bucket_empty__ColorId_String();

// Depth 500
Array__Pair__ColorId_String* Bucket_entries__ColorId_String(Bucket__ColorId_String* p);

// Depth 500
int Bucket_find__ColorId_String(Bucket__ColorId_String* b, ColorId* k);

// Depth 500
String Bucket_get_MINUS_idx__ColorId_String(Bucket__ColorId_String* b, int i);

// Depth 500
String Bucket_get__ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* default_MINUS_value);

// Depth 500
Bucket__ColorId_String Bucket_init__ColorId_String(Array__Pair__ColorId_String entries);

// Depth 500
void Bucket_push_MINUS_back_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v);

// Depth 500
void Bucket_put_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v);

// Depth 500
void Bucket_set_MINUS_idx_BANG___ColorId_String(Bucket__ColorId_String* b, int i, String* val);

// Depth 1000

// Depth 500
uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y);

// Depth 500
uint8_t Byte_blit(uint8_t x);

// Depth 500
bool Byte_even_QMARK_(uint8_t a);

// Depth 500
Maybe__uint8_t Byte_from_MINUS_string(String* s);

// Depth 500
int Byte_hash(uint8_t* k);

// Depth 500
bool Byte_odd_QMARK_(uint8_t a);

// Depth 500
uint8_t Byte_pow(uint8_t x, uint8_t y);

// Depth 500
String Byte_prn(uint8_t x);

// Depth 500
uint8_t Byte_random();

// Depth 500
uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper);

// Depth 500
uint8_t Byte_zero();

// Depth 1000

// Depth 500
ByteOrder ByteOrder_BigEndian();

// Depth 500
ByteOrder ByteOrder_LittleEndian();

// Depth 500
ByteOrder ByteOrder_blit(ByteOrder x);

// Depth 500
ByteOrder ByteOrder_copy(ByteOrder* pRef);

// Depth 500
void ByteOrder_delete(ByteOrder p);

// Depth 500
int ByteOrder_get_MINUS_tag(ByteOrder *p);

// Depth 500
String ByteOrder_prn(ByteOrder *p);

// Depth 500
String ByteOrder_str(ByteOrder *p);

// Depth 1000

// Depth 500
bool ByteRef__LT_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__EQ_(uint8_t* a, uint8_t* b);

// Depth 500
bool ByteRef__GT_(uint8_t* a, uint8_t* b);

// Depth 500
String ByteRef_format(String* s, uint8_t* x);

// Depth 500
String ByteRef_prn(uint8_t* x);

// Depth 500
String ByteRef_str(uint8_t* x);

// Depth 1000

// Depth 500
bool Char_alpha_QMARK_(Char c);

// Depth 500
bool Char_alphanum_QMARK_(Char c);

// Depth 500
Char Char_blit(Char x);

// Depth 500
int Char_hash(Char* k);

// Depth 500
bool Char_lower_MINUS_case_QMARK_(Char c);

// Depth 500
int Char_meaning(Char* char_MINUS_ref);

// Depth 500
bool Char_num_QMARK_(Char c);

// Depth 500
Char Char_random();

// Depth 500
Char Char_random_MINUS_between(Char a, Char b);

// Depth 500
bool Char_upper_MINUS_case_QMARK_(Char c);

// Depth 500
Char Char_zero();

// Depth 1000

// Depth 500
bool CharRef__LT_(Char* a, Char* b);

// Depth 500
bool CharRef__EQ_(Char* a, Char* b);

// Depth 500
bool CharRef__GT_(Char* a, Char* b);

// Depth 1000

// Depth 500
bool Color__EQ___ColorId(ColorId* a, ColorId* b);

// Depth 500
String Color_color(ColorId cid);

// Depth 500
String Color_colorize(ColorId cid, String* s);

// Depth 500
int Color_hash(ColorId* k);

// Depth 500
Map__ColorId_String Color_table;

// Depth 1000

// Depth 500
ColorId Color_Id_BgBlack();

// Depth 500
ColorId Color_Id_BgBlue();

// Depth 500
ColorId Color_Id_BgCyan();

// Depth 500
ColorId Color_Id_BgGreen();

// Depth 500
ColorId Color_Id_BgMagenta();

// Depth 500
ColorId Color_Id_BgRed();

// Depth 500
ColorId Color_Id_BgWhite();

// Depth 500
ColorId Color_Id_BgYellow();

// Depth 500
ColorId Color_Id_Black();

// Depth 500
ColorId Color_Id_BlinkRapid();

// Depth 500
ColorId Color_Id_BlinkSlow();

// Depth 500
ColorId Color_Id_Blue();

// Depth 500
ColorId Color_Id_Bold();

// Depth 500
ColorId Color_Id_Cyan();

// Depth 500
ColorId Color_Id_Green();

// Depth 500
ColorId Color_Id_Italic();

// Depth 500
ColorId Color_Id_Magenta();

// Depth 500
ColorId Color_Id_None();

// Depth 500
ColorId Color_Id_Red();

// Depth 500
ColorId Color_Id_Reset();

// Depth 500
ColorId Color_Id_Underline();

// Depth 500
ColorId Color_Id_White();

// Depth 500
ColorId Color_Id_Yellow();

// Depth 500
ColorId Color_Id_copy(ColorId* pRef);

// Depth 500
void Color_Id_delete(ColorId p);

// Depth 500
int Color_Id_get_MINUS_tag(ColorId *p);

// Depth 500
String Color_Id_prn(ColorId *p);

// Depth 500
String Color_Id_str(ColorId *p);

// Depth 1000

// Depth 500
bool Datetime__LT_(Datetime* a, Datetime* b);

// Depth 500
bool Datetime__EQ_(Datetime* a, Datetime* b);

// Depth 500
bool Datetime__GT_(Datetime* a, Datetime* b);

// Depth 500
int Datetime_DAY;

// Depth 500
Array__int Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH;

// Depth 500
Array__int Datetime_DAYS_MINUS_IN_MINUS_MONTH;

// Depth 500
int Datetime_DI100Y;

// Depth 500
int Datetime_DI400Y;

// Depth 500
int Datetime_DI4Y;

// Depth 500
int Datetime_HOUR;

// Depth 500
int Datetime_MINUTE;

// Depth 500
Array__String Datetime_MONTH_MINUS_STRINGS;

// Depth 500
int Datetime_SECOND;

// Depth 500
Array__String Datetime_WEEKDAY_MINUS_STRINGS;

// Depth 500
int Datetime_YEAR;

// Depth 500
int Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* _env, int acc, int* x);

// Depth 500
int Datetime__Lambda_for_MINUS_year_31_env(Datetime__Lambda_for_MINUS_year_31_env_ty* _env, int acc, int* x);

// Depth 500
int Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env(Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* _env, int acc, int* x);

// Depth 500
int Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_76_env(int n);

// Depth 500
String Datetime__Lambda_strftime__Datetime_MUL__105_env(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* _env, String* x, int* i);

// Depth 500
Datetime Datetime_add_MINUS_seconds(Datetime* d, int n);

// Depth 500
Datetime Datetime_copy(Datetime* pRef);

// Depth 500
Datetime Datetime_date(int y, int m, int d);

// Depth 500
int* Datetime_day(Datetime* p);

// Depth 500
int Datetime_days_MINUS_before_MINUS_month(int year, int month);

// Depth 500
int Datetime_days_MINUS_before_MINUS_year(int year);

// Depth 500
int Datetime_days_MINUS_in_MINUS_month(int year, int month);

// Depth 500
void Datetime_delete(Datetime p);

// Depth 500
String Datetime_expand_MINUS_compound_MINUS_formats(String* fmt);

// Depth 500
int Datetime_for_MINUS_year(Array__int* years, int a, int b);

// Depth 500
String Datetime_format(String* s, Datetime* dt);

// Depth 500
String Datetime_format_MINUS_for(Char c, Datetime* dt);

// Depth 500
Datetime Datetime_from_MINUS_ordinal__int(int ord);

// Depth 500
Datetime Datetime_from_MINUS_unix_MINUS_timestamp(int ts);

// Depth 500
Maybe__int* Datetime_hours(Datetime* p);

// Depth 500
Datetime Datetime_init(int year, int month, int day, Maybe__int hours, Maybe__int minutes, Maybe__int seconds, Maybe__int nanoseconds, Maybe__Timezone tz);

// Depth 500
bool Datetime_is_MINUS_leap(int y);

// Depth 500
String Datetime_isoformat(Datetime* dt);

// Depth 500
String Datetime_isotime(Datetime* dt);

// Depth 500
int Datetime_isoweekday(Datetime* dt);

// Depth 500
bool Datetime_leap_QMARK_(Datetime* dt);

// Depth 500
int Datetime_match_MINUS_in_MINUS_array(Array__String* arr, String* s, int pos);

// Depth 500
int Datetime_match_MINUS_short_MINUS_in_MINUS_array(Array__String* arr, String* s, int pos);

// Depth 500
Maybe__int* Datetime_minutes(Datetime* p);

// Depth 500
int Datetime_mod_MINUS_(int a, int n);

// Depth 500
int* Datetime_month(Datetime* p);

// Depth 500
String Datetime_month_MINUS_short_MINUS_string(Datetime* dt);

// Depth 500
String Datetime_month_MINUS_string(Datetime* dt);

// Depth 500
Maybe__int* Datetime_nanoseconds(Datetime* p);

// Depth 500
Datetime Datetime_now();

// Depth 500
Maybe__int Datetime_parse_MINUS_digits(String* s, int pos, int n);

// Depth 500
String Datetime_prn(Datetime *p);

// Depth 500
Maybe__int* Datetime_seconds(Datetime* p);

// Depth 500
Datetime Datetime_set_MINUS_day(Datetime p, int newValue);

// Depth 500
void Datetime_set_MINUS_day_BANG_(Datetime* pRef, int newValue);

// Depth 500
Datetime Datetime_set_MINUS_hours(Datetime p, Maybe__int newValue);

// Depth 500
void Datetime_set_MINUS_hours_BANG_(Datetime* pRef, Maybe__int newValue);

// Depth 500
Datetime Datetime_set_MINUS_minutes(Datetime p, Maybe__int newValue);

// Depth 500
void Datetime_set_MINUS_minutes_BANG_(Datetime* pRef, Maybe__int newValue);

// Depth 500
Datetime Datetime_set_MINUS_month(Datetime p, int newValue);

// Depth 500
void Datetime_set_MINUS_month_BANG_(Datetime* pRef, int newValue);

// Depth 500
Datetime Datetime_set_MINUS_nanoseconds(Datetime p, Maybe__int newValue);

// Depth 500
void Datetime_set_MINUS_nanoseconds_BANG_(Datetime* pRef, Maybe__int newValue);

// Depth 500
Datetime Datetime_set_MINUS_seconds(Datetime p, Maybe__int newValue);

// Depth 500
void Datetime_set_MINUS_seconds_BANG_(Datetime* pRef, Maybe__int newValue);

// Depth 500
Datetime Datetime_set_MINUS_tz(Datetime p, Maybe__Timezone newValue);

// Depth 500
void Datetime_set_MINUS_tz_BANG_(Datetime* pRef, Maybe__Timezone newValue);

// Depth 500
Datetime Datetime_set_MINUS_year(Datetime p, int newValue);

// Depth 500
void Datetime_set_MINUS_year_BANG_(Datetime* pRef, int newValue);

// Depth 500
String Datetime_str(Datetime *p);

// Depth 500
String Datetime_strftime__Datetime_MUL_(Datetime* dt, String* s);

// Depth 500
Result__Datetime_String Datetime_strptime(String* input, String* fmt);

// Depth 500
int Datetime_to_MINUS_ordinal(Datetime* dt);

// Depth 500
int Datetime_to_MINUS_unix(int y, int m, int d, int hh, int mm, int ss, Long delta);

// Depth 500
int Datetime_to_MINUS_unix_MINUS_timestamp(Datetime* dt);

// Depth 500
Maybe__Timezone* Datetime_tz(Datetime* p);

// Depth 500
Datetime Datetime_update_MINUS_day(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_hours(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_minutes(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_month(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_nanoseconds(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_seconds(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_tz(Datetime p, Lambda *updater);

// Depth 500
Datetime Datetime_update_MINUS_year(Datetime p, Lambda *updater);

// Depth 500
bool Datetime_utc_QMARK_(Datetime* dt);

// Depth 500
int Datetime_weekday(Datetime* dt);

// Depth 500
String Datetime_weekday_MINUS_short_MINUS_string(Datetime* dt);

// Depth 500
String Datetime_weekday_MINUS_string(Datetime* dt);

// Depth 500
int* Datetime_year(Datetime* p);

// Depth 500
int Datetime_yearday(Datetime* dt);

// Depth 500
int Datetime_ymd2ord(int year, int month, int day);

// Depth 1000

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
double Double_blit(double x);

// Depth 500
double Double_dec(double x);

// Depth 500
double Double_e;

// Depth 500
Maybe__double Double_from_MINUS_string(String* s);

// Depth 500
int Double_hash(double* k);

// Depth 500
double Double_inc(double x);

// Depth 500
bool Double_negative_QMARK_(double a);

// Depth 500
double Double_pi;

// Depth 500
bool Double_positive_QMARK_(double a);

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_random();

// Depth 500
double Double_random_MINUS_between(double lower, double upper);

// Depth 500
double Double_sign(double x);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 500
String DoubleRef_format(String* s, double* x);

// Depth 500
String DoubleRef_prn(double* x);

// Depth 500
String DoubleRef_str(double* x);

// Depth 1000

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
float Float_blit(float x);

// Depth 500
float Float_dec(float x);

// Depth 500
Maybe__float Float_from_MINUS_string(String* s);

// Depth 500
int Float_hash(float* k);

// Depth 500
float Float_inc(float x);

// Depth 500
bool Float_negative_QMARK_(float a);

// Depth 500
float Float_pi;

// Depth 500
bool Float_positive_QMARK_(float a);

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_random();

// Depth 500
float Float_random_MINUS_between(float lower, float upper);

// Depth 500
float Float_sign(float x);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 500
String FloatRef_format(String* s, float* x);

// Depth 500
String FloatRef_prn(float* x);

// Depth 500
String FloatRef_str(float* x);

// Depth 1000

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f);

// Depth 500
void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f);

// Depth 500
void Function_delete__Datetime_MUL__Datetime_MUL__bool (Lambda f);

// Depth 500
void Function_delete__Long_Uint32 (Lambda f);

// Depth 500
void Function_delete__Long_Uint64 (Lambda f);

// Depth 500
void Function_delete__Pair__ColorId_String_Pair__ColorId_String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__String (Lambda f);

// Depth 500
void Function_delete__PatternMatchResult_MUL__int (Lambda f);

// Depth 500
void Function_delete__Result__Datetime_String_MUL__Result__Datetime_String_MUL__bool (Lambda f);

// Depth 500
void Function_delete__String_MUL__String_MUL__bool (Lambda f);

// Depth 500
void Function_delete__String_MUL__bool (Lambda f);

// Depth 500
void Function_delete__String_MUL__int_MUL__String (Lambda f);

// Depth 500
void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f);

// Depth 500
void Function_delete__bool_bool_bool (Lambda f);

// Depth 500
void Function_delete__int_int (Lambda f);

// Depth 500
void Function_delete__int_int_MUL__int (Lambda f);

// Depth 500
void Function_delete__int_int_bool (Lambda f);

// Depth 500
void Function_delete__uint8_t_MUL__String (Lambda f);

// Depth 500
void Function_delete__uint8_t_uint8_t (Lambda f);

// Depth 500
void Function_delete__void (Lambda f);

// Depth 1000

// Depth 500
int Heap_lchild(int i);

// Depth 500
int Heap_parent(int i);

// Depth 500
int Heap_rchild(int i);

// Depth 1000

// Depth 500
Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name);

// Depth 500
void IO_color(ColorId cid);

// Depth 500
void IO_colorize(ColorId cid, String* s);

// Depth 500
Result__Char_String IO_fgetc(FILE* file);

// Depth 500
Maybe__String IO_getenv(String* s);

// Depth 500
Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode);

// Depth 500
Result__String_String IO_read_MINUS__GT_EOF(String* filename);

// Depth 500
Result__String_String IO_read_MINUS_file(String* filename);

// Depth 500
Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name);

// Depth 1000

// Depth 500
void IO_Raw_fclose_BANG_(FILE* file);

// Depth 500
void IO_Raw_fflush_BANG_(FILE* file);

// Depth 500
FILE* IO_Raw_fopen(String* pathname, String* mode);

// Depth 500
int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file);

// Depth 500
int IO_Raw_unlink(String* file_MINUS_name);

// Depth 500
void IO_Raw_unlink_BANG_(String* file_MINUS_name);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
int Int_blit(int x);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
int Int_from_MINUS_int(int a);

// Depth 500
Maybe__int Int_from_MINUS_string(String* s);

// Depth 500
int Int_hash(int* k);

// Depth 500
bool Int_negative_QMARK_(int a);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_positive_MINUS_mod(int k, int n);

// Depth 500
bool Int_positive_QMARK_(int a);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_random();

// Depth 500
int Int_random_MINUS_between(int lower, int upper);

// Depth 500
int Int_sign(int n);

// Depth 500
int Int_to_MINUS_int(int a);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
Int16 Int16_blit(Int16 x);

// Depth 500
int Int16_hash(Int16* k);

// Depth 500
String Int16_prn(Int16 a);

// Depth 500
Int16 Int16_zero();

// Depth 1000

// Depth 500
bool Int16Extra__EQ_(Int16* a, Int16* b);

// Depth 500
String Int16Extra_prn(Int16* a);

// Depth 500
String Int16Extra_str(Int16* a);

// Depth 1000

// Depth 500
Int32 Int32_blit(Int32 x);

// Depth 500
int Int32_hash(Int32* k);

// Depth 500
String Int32_prn(Int32 a);

// Depth 500
Int32 Int32_zero();

// Depth 1000

// Depth 500
bool Int32Extra__EQ_(Int32* a, Int32* b);

// Depth 500
String Int32Extra_prn(Int32* a);

// Depth 500
String Int32Extra_str(Int32* a);

// Depth 1000

// Depth 500
Int64 Int64_blit(Int64 x);

// Depth 500
int Int64_hash(Int64* k);

// Depth 500
String Int64_prn(Int64 a);

// Depth 500
Int64 Int64_zero();

// Depth 1000

// Depth 500
bool Int64Extra__EQ_(Int64* a, Int64* b);

// Depth 500
String Int64Extra_prn(Int64* a);

// Depth 500
String Int64Extra_str(Int64* a);

// Depth 1000

// Depth 500
Int8 Int8_blit(Int8 x);

// Depth 500
int Int8_hash(Int8* k);

// Depth 500
String Int8_prn(Int8 a);

// Depth 500
Int8 Int8_zero();

// Depth 1000

// Depth 500
bool Int8Extra__EQ_(Int8* a, Int8* b);

// Depth 500
String Int8Extra_prn(Int8* a);

// Depth 500
String Int8Extra_str(Int8* a);

// Depth 1000

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 500
String IntRef_format(String* s, int* x);

// Depth 500
String IntRef_prn(int* x);

// Depth 500
String IntRef_str(int* x);

// Depth 1000

// Depth 500
Long Long_add_MINUS_ref(Long* x, Long* y);

// Depth 500
Long Long_blit(Long x);

// Depth 500
bool Long_even_QMARK_(Long a);

// Depth 500
Maybe__Long Long_from_MINUS_string(String* s);

// Depth 500
int Long_hash(Long* k);

// Depth 500
bool Long_negative_QMARK_(Long a);

// Depth 500
bool Long_odd_QMARK_(Long a);

// Depth 500
bool Long_positive_QMARK_(Long a);

// Depth 500
String Long_prn(Long x);

// Depth 500
Long Long_random();

// Depth 500
Long Long_random_MINUS_between(Long lower, Long upper);

// Depth 500
Long Long_sign(Long n);

// Depth 500
Long Long_zero();

// Depth 1000

// Depth 500
bool LongRef__LT_(Long* a, Long* b);

// Depth 500
bool LongRef__EQ_(Long* a, Long* b);

// Depth 500
bool LongRef__GT_(Long* a, Long* b);

// Depth 500
String LongRef_format(String* s, Long* x);

// Depth 500
String LongRef_prn(Long* x);

// Depth 500
String LongRef_str(Long* x);

// Depth 1000

// Depth 500
Array__Bucket__ColorId_String* Map_buckets__ColorId_String(Map__ColorId_String* p);

// Depth 500
Map__ColorId_String Map_create__ColorId_String();

// Depth 500
void Map_delete__ColorId_String(Map__ColorId_String p);

// Depth 500
int Map_dflt_MINUS_len;

// Depth 500
Map__ColorId_String Map_from_MINUS_array__ColorId_String(Array__Pair__ColorId_String a);

// Depth 500
String Map_get_MINUS_with_MINUS_default__ColorId_String(Map__ColorId_String* m, ColorId* k, String* default_MINUS_value);

// Depth 500
String Map_get__ColorId_String(Map__ColorId_String* m, ColorId* k);

// Depth 500
Map__ColorId_String Map_init__ColorId_String(int len, int n_MINUS_buckets, Array__Bucket__ColorId_String buckets);

// Depth 500
int* Map_len__ColorId_String(Map__ColorId_String* p);

// Depth 500
int Map_max_MINUS_load;

// Depth 500
int Map_min_MINUS_load;

// Depth 500
int* Map_n_MINUS_buckets__ColorId_String(Map__ColorId_String* p);

// Depth 500
void Map_put_BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v);

// Depth 500
void Map_put_MINUS__BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v);

// Depth 500
void Map_set_MINUS_len_BANG___ColorId_String(Map__ColorId_String* pRef, int newValue);

// Depth 1000

// Depth 500
bool Maybe__EQ___int(Maybe__int* a, Maybe__int* b);

// Depth 500
Maybe__Long Maybe_Just__Long(Long member0);

// Depth 500
Maybe__String Maybe_Just__String(String member0);

// Depth 500
Maybe__Timezone Maybe_Just__Timezone(Timezone member0);

// Depth 500
Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0);

// Depth 500
Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0);

// Depth 500
Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0);

// Depth 500
Maybe__double Maybe_Just__double(double member0);

// Depth 500
Maybe__float Maybe_Just__float(float member0);

// Depth 500
Maybe__int Maybe_Just__int(int member0);

// Depth 500
Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0);

// Depth 500
Maybe__Long Maybe_Nothing__Long();

// Depth 500
Maybe__String Maybe_Nothing__String();

// Depth 500
Maybe__Timezone Maybe_Nothing__Timezone();

// Depth 500
Maybe__Uint16 Maybe_Nothing__Uint16();

// Depth 500
Maybe__Uint32 Maybe_Nothing__Uint32();

// Depth 500
Maybe__Uint64 Maybe_Nothing__Uint64();

// Depth 500
Maybe__double Maybe_Nothing__double();

// Depth 500
Maybe__float Maybe_Nothing__float();

// Depth 500
Maybe__int Maybe_Nothing__int();

// Depth 500
Maybe__uint8_t Maybe_Nothing__uint8_t();

// Depth 500
Maybe__Timezone Maybe_copy__Timezone(Maybe__Timezone* pRef);

// Depth 500
Maybe__int Maybe_copy__int(Maybe__int* pRef);

// Depth 500
void Maybe_delete__Long(Maybe__Long p);

// Depth 500
void Maybe_delete__String(Maybe__String p);

// Depth 500
void Maybe_delete__Timezone(Maybe__Timezone p);

// Depth 500
void Maybe_delete__Uint16(Maybe__Uint16 p);

// Depth 500
void Maybe_delete__Uint32(Maybe__Uint32 p);

// Depth 500
void Maybe_delete__Uint64(Maybe__Uint64 p);

// Depth 500
void Maybe_delete__double(Maybe__double p);

// Depth 500
void Maybe_delete__float(Maybe__float p);

// Depth 500
void Maybe_delete__int(Maybe__int p);

// Depth 500
void Maybe_delete__uint8_t(Maybe__uint8_t p);

// Depth 500
String Maybe_from__String(Maybe__String a, String dflt);

// Depth 500
Timezone Maybe_from__Timezone(Maybe__Timezone a, Timezone dflt);

// Depth 500
int Maybe_from__int(Maybe__int a, int dflt);

// Depth 500
bool Maybe_nothing_QMARK___Timezone(Maybe__Timezone* a);

// Depth 500
bool Maybe_nothing_QMARK___int(Maybe__int* a);

// Depth 500
String Maybe_prn__Timezone(Maybe__Timezone *p);

// Depth 500
String Maybe_prn__int(Maybe__int *p);

// Depth 500
String Maybe_unsafe_MINUS_from__String(Maybe__String a);

// Depth 500
int Maybe_unsafe_MINUS_from__int(Maybe__int a);

// Depth 1000

// Depth 500
Opaque Opaque_copy(Opaque* pRef);

// Depth 500
void Opaque_delete(Opaque p);

// Depth 500
int Opaque_get_MINUS_tag(Opaque *p);

// Depth 500
String Opaque_prn(Opaque *p);

// Depth 500
String Opaque_str(Opaque *p);

// Depth 1000

// Depth 500
Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
ColorId* Pair_a__ColorId_String(Pair__ColorId_String* p);

// Depth 500
int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p);

// Depth 500
int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p);

// Depth 500
int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p);

// Depth 500
String* Pair_b__ColorId_String(Pair__ColorId_String* p);

// Depth 500
void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p);

// Depth 500
void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p);

// Depth 500
void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p);

// Depth 500
void Pair_delete__ColorId_String(Pair__ColorId_String p);

// Depth 500
Pair__ColorId_String Pair_init_MINUS_from_MINUS_refs__ColorId_String(ColorId* a_MINUS_val, String* b_MINUS_val);

// Depth 500
Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b);

// Depth 500
Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b);

// Depth 500
Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b);

// Depth 500
Pair__ColorId_String Pair_init__ColorId_String(ColorId a, String b);

// Depth 500
Pair__ColorId_String Pair_set_MINUS_b__ColorId_String(Pair__ColorId_String p, String newValue);

// Depth 1000

// Depth 500
int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m);

// Depth 500
String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m);

// Depth 500
Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data);

// Depth 500
int Pattern_find(Pattern* pattern, String* data);

// Depth 500
Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data);

// Depth 500
Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data);

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__Char* chars);

// Depth 500
Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
PatternMatchResult Pattern_match(Pattern* pattern, String* data);

// Depth 500
String Pattern_match_MINUS_str(Pattern* pattern, String* data);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 500
bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res);

// Depth 500
Array__String Pattern_split(Pattern* p, String* s);

// Depth 1000

// Depth 500
int* Pattern_MatchResult_end(PatternMatchResult* p);

// Depth 500
PatternMatchResult Pattern_MatchResult_init(int start, int end);

// Depth 500
String Pattern_MatchResult_prn(PatternMatchResult *p);

// Depth 500
String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue);

// Depth 500
void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue);

// Depth 500
int* Pattern_MatchResult_start(PatternMatchResult* p);

// Depth 500
String Pattern_MatchResult_str(PatternMatchResult matchres);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater);

// Depth 500
PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater);

// Depth 1000

// Depth 500
int * Pointer_address__int(int * a);

// Depth 500
bool Pointer_eq__CChar(CChar *p1, CChar *p2);

// Depth 500
bool Pointer_eq__FILE(FILE *p1, FILE *p2);

// Depth 1000

// Depth 500
bool Random__;

// Depth 500
double Random_a;

// Depth 500
double Random_c;

// Depth 500
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_();

// Depth 500
double Random_m;

// Depth 500
double Random_random();

// Depth 500
double Random_s;

// Depth 500
void Random_seed();

// Depth 500
void Random_seed_MINUS_from(double new_MINUS_seed);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
bool Result__EQ___Datetime_String(Result__Datetime_String* a, Result__Datetime_String* b);

// Depth 500
Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0);

// Depth 500
Result__Array__int_String Result_Error__String_Array__int(String member0);

// Depth 500
Result__Char_String Result_Error__String_Char(String member0);

// Depth 500
Result__Datetime_String Result_Error__String_Datetime(String member0);

// Depth 500
Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0);

// Depth 500
Result__String_String Result_Error__String_String(String member0);

// Depth 500
Result__bool_String Result_Error__String_bool(String member0);

// Depth 500
Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0);

// Depth 500
Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0);

// Depth 500
Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0);

// Depth 500
Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0);

// Depth 500
Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0);

// Depth 500
Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0);

// Depth 500
Result__Array__int_String Result_Success__Array__int_String(Array__int member0);

// Depth 500
Result__Char_String Result_Success__Char_String(Char member0);

// Depth 500
Result__Datetime_String Result_Success__Datetime_String(Datetime member0);

// Depth 500
Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0);

// Depth 500
Result__String_String Result_Success__String_String(String member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0);

// Depth 500
Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0);

// Depth 500
Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0);

// Depth 500
Result__bool_String Result_Success__bool_String(bool member0);

// Depth 500
Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef);

// Depth 500
Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef);

// Depth 500
Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef);

// Depth 500
void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p);

// Depth 500
void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p);

// Depth 500
void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p);

// Depth 500
void Result_delete__Array__int_String(Result__Array__int_String p);

// Depth 500
void Result_delete__Char_String(Result__Char_String p);

// Depth 500
void Result_delete__Datetime_String(Result__Datetime_String p);

// Depth 500
void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p);

// Depth 500
void Result_delete__String_String(Result__String_String p);

// Depth 500
void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p);

// Depth 500
void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p);

// Depth 500
void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p);

// Depth 500
void Result_delete__bool_String(Result__bool_String p);

// Depth 500
bool Result_error_QMARK___Datetime_String(Result__Datetime_String* a);

// Depth 500
bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a);

// Depth 500
bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt);

// Depth 500
String Result_str__Datetime_String(Result__Datetime_String *p);

// Depth 500
bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a);

// Depth 500
bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a);

// Depth 500
String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
Array__int Result_unsafe_MINUS_from_MINUS_success__Array__int_String(Result__Array__int_String a);

// Depth 500
Datetime Result_unsafe_MINUS_from_MINUS_success__Datetime_String(Result__Datetime_String a);

// Depth 500
FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a);

// Depth 500
Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a);

// Depth 500
Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a);

// Depth 500
Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a);

// Depth 1000

// Depth 500
int Set_dflt_MINUS_len;

// Depth 500
int Set_max_MINUS_load;

// Depth 500
int Set_min_MINUS_load;

// Depth 1000

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c);

// Depth 500
uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c);

// Depth 500
bool String__Lambda_words_14_env(String* s);

// Depth 500
bool String_allocated_QMARK_(String* s);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_lower(String* s);

// Depth 500
String String_ascii_MINUS_to_MINUS_upper(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
String String_concat(Array__String* strings);

// Depth 500
bool String_contains_MINUS_string_QMARK_(String* s, String* needle);

// Depth 500
bool String_contains_QMARK_(String* s, Char c);

// Depth 500
int String_count_MINUS_char(String* s, Char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
int String_hash(String* k);

// Depth 500
Char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
int String_index_MINUS_of(String* s, Char c);

// Depth 500
int String_index_MINUS_of_MINUS_from(String* s, Char c, int i);

// Depth 500
String String_join(String* sep, Array__String* strings);

// Depth 500
String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, Char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, Char pad, String* s);

// Depth 500
String String_prefix(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
String String_slice(String* s, int a, int b);

// Depth 500
Array__String String_split_MINUS_by(String* s, Array__Char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_suffix(String* s, int b);

// Depth 500
int String_sum_MINUS_length(Array__String* strings);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__LT_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 500
bool StringCopy__GT_(String a, String b);

// Depth 500
String StringCopy_prn(String s);

// Depth 500
String StringCopy_str(String s);

// Depth 1000

// Depth 500
String System_error_MINUS_text();

// Depth 500
void System_exit__void(int code);

// Depth 500
String System_strerror(int error_MINUS_no);

// Depth 1000

// Depth 500
TM TM_init(int tm_sec, int tm_min, int tm_hour, int tm_mday, int tm_mon, int tm_year, int tm_wday, int tm_yday, int tm_isdst, String tm_zone);

// Depth 500
String TM_prn(TM *p);

// Depth 500
TM TM_set_MINUS_tm_hour(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_hour_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_isdst(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_isdst_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_mday(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_mday_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_min(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_min_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_mon(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_mon_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_sec(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_sec_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_wday(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_wday_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_yday(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_yday_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_year(TM p, int newValue);

// Depth 500
void TM_set_MINUS_tm_year_BANG_(TM* pRef, int newValue);

// Depth 500
TM TM_set_MINUS_tm_zone(TM p, String newValue);

// Depth 500
void TM_set_MINUS_tm_zone_BANG_(TM* pRef, String newValue);

// Depth 500
String TM_str(TM *p);

// Depth 500
int* TM_tm_hour(TM* p);

// Depth 500
int* TM_tm_isdst(TM* p);

// Depth 500
int* TM_tm_mday(TM* p);

// Depth 500
int* TM_tm_min(TM* p);

// Depth 500
int* TM_tm_mon(TM* p);

// Depth 500
int* TM_tm_sec(TM* p);

// Depth 500
int* TM_tm_wday(TM* p);

// Depth 500
int* TM_tm_yday(TM* p);

// Depth 500
int* TM_tm_year(TM* p);

// Depth 500
String* TM_tm_zone(TM* p);

// Depth 500
TM TM_update_MINUS_tm_hour(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_isdst(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_mday(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_min(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_mon(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_sec(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_wday(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_yday(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_year(TM p, Lambda *updater);

// Depth 500
TM TM_update_MINUS_tm_zone(TM p, Lambda *updater);

// Depth 1000

// Depth 500
TestState Test_assert_MINUS_equal__Datetime_MUL__String(TestState* state, Datetime* x, Datetime* y, String* descr);

// Depth 500
TestState Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(TestState* state, Result__Datetime_String* x, Result__Datetime_String* y, String* descr);

// Depth 500
TestState Test_assert_MINUS_equal__String_MUL__String(TestState* state, String* x, String* y, String* descr);

// Depth 500
TestState Test_assert_MINUS_equal__bool_String(TestState* state, bool x, bool y, String* descr);

// Depth 500
TestState Test_assert_MINUS_equal__int_String(TestState* state, int x, int y, String* descr);

// Depth 500
TestState Test_assert_MINUS_false__String(TestState* state, bool x, String* descr);

// Depth 500
TestState Test_assert_MINUS_true__String(TestState* state, bool x, String* descr);

// Depth 500
TestState Test_display_MINUS_test__Datetime_MUL__Datetime_MUL__String_String(TestState* state, Datetime* expected, Datetime* actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
TestState Test_display_MINUS_test__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_String(TestState* state, Result__Datetime_String* expected, Result__Datetime_String* actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
TestState Test_display_MINUS_test__String_MUL__String_MUL__String_String(TestState* state, String* expected, String* actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
TestState Test_display_MINUS_test__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
TestState Test_display_MINUS_test__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, bool is_MINUS_success);

// Depth 500
void Test_handle_MINUS_signal__void(int x);

// Depth 500
TestState Test_handler__Datetime_MUL__Datetime_MUL__String_String(TestState* state, Datetime* expected, Datetime* actual, String* descr, String* what, Lambda op);

// Depth 500
TestState Test_handler__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_String(TestState* state, Result__Datetime_String* expected, Result__Datetime_String* actual, String* descr, String* what, Lambda op);

// Depth 500
TestState Test_handler__String_MUL__String_MUL__String_String(TestState* state, String* expected, String* actual, String* descr, String* what, Lambda op);

// Depth 500
TestState Test_handler__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, Lambda op);

// Depth 500
TestState Test_handler__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, Lambda op);

// Depth 500
void Test_print_MINUS_test_MINUS_results(TestState* state);

// Depth 500
TestState Test_reset(TestState state);

// Depth 500
int Test_run_MINUS_child(Lambda x);

// Depth 500
int Test_run_MINUS_child_MINUS_signals(Lambda x);

// Depth 1000

// Depth 500
TestState Test_State_copy(TestState* pRef);

// Depth 500
void Test_State_delete(TestState p);

// Depth 500
int* Test_State_failed(TestState* p);

// Depth 500
TestState Test_State_init(int passed, int failed);

// Depth 500
int* Test_State_passed(TestState* p);

// Depth 500
String Test_State_prn(TestState *p);

// Depth 500
TestState Test_State_set_MINUS_failed(TestState p, int newValue);

// Depth 500
void Test_State_set_MINUS_failed_BANG_(TestState* pRef, int newValue);

// Depth 500
TestState Test_State_set_MINUS_passed(TestState p, int newValue);

// Depth 500
void Test_State_set_MINUS_passed_BANG_(TestState* pRef, int newValue);

// Depth 500
String Test_State_str(TestState *p);

// Depth 500
TestState Test_State_update_MINUS_failed(TestState p, Lambda *updater);

// Depth 500
TestState Test_State_update_MINUS_passed(TestState p, Lambda *updater);

// Depth 1000

// Depth 500
Datetime Timedelta_add(Datetime* dt, Timedelta* delta);

// Depth 500
Timedelta Timedelta_copy(Timedelta* pRef);

// Depth 500
Timedelta Timedelta_days(int n);

// Depth 500
void Timedelta_delete(Timedelta p);

// Depth 500
Timedelta Timedelta_hours(int n);

// Depth 500
Timedelta Timedelta_init(int seconds_MINUS_);

// Depth 500
Timedelta Timedelta_minutes(int n);

// Depth 500
String Timedelta_prn(Timedelta *p);

// Depth 500
Timedelta Timedelta_seconds(int n);

// Depth 500
int* Timedelta_seconds_MINUS_(Timedelta* p);

// Depth 500
Timedelta Timedelta_set_MINUS_seconds_MINUS_(Timedelta p, int newValue);

// Depth 500
void Timedelta_set_MINUS_seconds_MINUS__BANG_(Timedelta* pRef, int newValue);

// Depth 500
String Timedelta_str(Timedelta *p);

// Depth 500
Datetime Timedelta_sub(Datetime* dt, Timedelta* delta);

// Depth 500
Timedelta Timedelta_update_MINUS_seconds_MINUS_(Timedelta p, Lambda *updater);

// Depth 500
Timedelta Timedelta_weeks(int n);

// Depth 1000

// Depth 500
bool Timezone__EQ_(Timezone* o1, Timezone* o2);

// Depth 500
Timezone Timezone_copy(Timezone* pRef);

// Depth 500
void Timezone_delete(Timezone p);

// Depth 500
Long* Timezone_delta(Timezone* p);

// Depth 500
bool* Timezone_dst_QMARK_(Timezone* p);

// Depth 500
Timezone Timezone_init(String name, Long delta, bool dst_QMARK_);

// Depth 500
String* Timezone_name(Timezone* p);

// Depth 500
String Timezone_prn(Timezone *p);

// Depth 500
Timezone Timezone_set_MINUS_delta(Timezone p, Long newValue);

// Depth 500
void Timezone_set_MINUS_delta_BANG_(Timezone* pRef, Long newValue);

// Depth 500
Timezone Timezone_set_MINUS_dst_QMARK_(Timezone p, bool newValue);

// Depth 500
void Timezone_set_MINUS_dst_QMARK__BANG_(Timezone* pRef, bool newValue);

// Depth 500
Timezone Timezone_set_MINUS_name(Timezone p, String newValue);

// Depth 500
void Timezone_set_MINUS_name_BANG_(Timezone* pRef, String newValue);

// Depth 500
String Timezone_str(Timezone *p);

// Depth 500
Timezone Timezone_update_MINUS_delta(Timezone p, Lambda *updater);

// Depth 500
Timezone Timezone_update_MINUS_dst_QMARK_(Timezone p, Lambda *updater);

// Depth 500
Timezone Timezone_update_MINUS_name(Timezone p, Lambda *updater);

// Depth 500
Timezone Timezone_utc;

// Depth 500
Timezone Timezone_zero();

// Depth 1000

// Depth 500
Uint16 Uint16_blit(Uint16 x);

// Depth 500
int Uint16_hash(Uint16* k);

// Depth 500
String Uint16_prn(Uint16 a);

// Depth 500
Uint16 Uint16_zero();

// Depth 1000

// Depth 500
bool Uint16Extra__EQ_(Uint16* a, Uint16* b);

// Depth 500
String Uint16Extra_prn(Uint16* a);

// Depth 500
String Uint16Extra_str(Uint16* a);

// Depth 1000

// Depth 500
Uint32 Uint32_blit(Uint32 x);

// Depth 500
int Uint32_hash(Uint32* k);

// Depth 500
String Uint32_prn(Uint32 a);

// Depth 500
Uint32 Uint32_zero();

// Depth 1000

// Depth 500
bool Uint32Extra__EQ_(Uint32* a, Uint32* b);

// Depth 500
String Uint32Extra_prn(Uint32* a);

// Depth 500
String Uint32Extra_str(Uint32* a);

// Depth 1000

// Depth 500
Uint64 Uint64_blit(Uint64 x);

// Depth 500
int Uint64_hash(Uint64* k);

// Depth 500
String Uint64_prn(Uint64 a);

// Depth 500
Uint64 Uint64_zero();

// Depth 1000

// Depth 500
bool Uint64Extra__EQ_(Uint64* a, Uint64* b);

// Depth 500
String Uint64Extra_prn(Uint64* a);

// Depth 500
String Uint64Extra_str(Uint64* a);

// Depth 1000

// Depth 500
Uint8 Uint8_blit(Uint8 x);

// Depth 500
int Uint8_hash(Uint8* k);

// Depth 500
String Uint8_prn(Uint8 a);

// Depth 500
Uint8 Uint8_zero();

// Depth 1000

// Depth 500
bool Uint8Extra__EQ_(Uint8* a, Uint8* b);

// Depth 500
String Uint8Extra_prn(Uint8* a);

// Depth 500
String Uint8Extra_str(Uint8* a);

// Depth 1000

// Depth 500
bool Unit__EQ_();

// Depth 500
void Unit_copy();

// Depth 500
String Unit_prn();

// Depth 500
void Unit_zero();

// Depth 1000

// Depth 500
bool UnitRef__EQ_();


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;
#if defined _WIN32
  SetConsoleOutputCP(CP_UTF8);
#endif
    // Depth 0
    {
        Datetime_SECOND = 1;
    }

    // Depth 0
    {
        Array _15 = { .len = 13, .capacity = 13, .data = CARP_MALLOC(sizeof(int) * 13) };
        ((int*)_15.data)[0] = 0;
        ((int*)_15.data)[1] = 31;
        ((int*)_15.data)[2] = 28;
        ((int*)_15.data)[3] = 31;
        ((int*)_15.data)[4] = 30;
        ((int*)_15.data)[5] = 31;
        ((int*)_15.data)[6] = 30;
        ((int*)_15.data)[7] = 31;
        ((int*)_15.data)[8] = 31;
        ((int*)_15.data)[9] = 30;
        ((int*)_15.data)[10] = 31;
        ((int*)_15.data)[11] = 30;
        ((int*)_15.data)[12] = 31;
        Datetime_DAYS_MINUS_IN_MINUS_MONTH = _15;
    }

    // Depth 0
    {
        Array _15 = { .len = 13, .capacity = 13, .data = CARP_MALLOC(sizeof(int) * 13) };
        ((int*)_15.data)[0] = 0;
        ((int*)_15.data)[1] = 0;
        ((int*)_15.data)[2] = 31;
        ((int*)_15.data)[3] = 59;
        ((int*)_15.data)[4] = 90;
        ((int*)_15.data)[5] = 120;
        ((int*)_15.data)[6] = 151;
        ((int*)_15.data)[7] = 181;
        ((int*)_15.data)[8] = 212;
        ((int*)_15.data)[9] = 243;
        ((int*)_15.data)[10] = 273;
        ((int*)_15.data)[11] = 304;
        ((int*)_15.data)[12] = 334;
        Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH = _15;
    }

    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }

    // Depth 0
    {
        Map_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Map_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Map_dflt_MINUS_len = 16;
    }

    // Depth 0
    {
        Random_s = 1.938011e7;
    }

    // Depth 0
    {
        Random_m = 4.294967296e9;
    }

    // Depth 0
    {
        Random_c = 1.0;
    }

    // Depth 0
    {
        Random_a = 69069.0;
    }

    // Depth 0
    {
        Set_min_MINUS_load = 20;
    }

    // Depth 0
    {
        Set_max_MINUS_load = 80;
    }

    // Depth 0
    {
        Set_dflt_MINUS_len = 16;
    }

    // Depth 1
    {
        Array _26 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(String) * 8) };
        static String _3 = "";
        String *_3_ref = &_3;
        String _4 = String_copy(_3_ref);
        ((String*)_26.data)[0] = _4;
        static String _6 = "Monday";
        String *_6_ref = &_6;
        String _7 = String_copy(_6_ref);
        ((String*)_26.data)[1] = _7;
        static String _9 = "Tuesday";
        String *_9_ref = &_9;
        String _10 = String_copy(_9_ref);
        ((String*)_26.data)[2] = _10;
        static String _12 = "Wednesday";
        String *_12_ref = &_12;
        String _13 = String_copy(_12_ref);
        ((String*)_26.data)[3] = _13;
        static String _15 = "Thursday";
        String *_15_ref = &_15;
        String _16 = String_copy(_15_ref);
        ((String*)_26.data)[4] = _16;
        static String _18 = "Friday";
        String *_18_ref = &_18;
        String _19 = String_copy(_18_ref);
        ((String*)_26.data)[5] = _19;
        static String _21 = "Saturday";
        String *_21_ref = &_21;
        String _22 = String_copy(_21_ref);
        ((String*)_26.data)[6] = _22;
        static String _24 = "Sunday";
        String *_24_ref = &_24;
        String _25 = String_copy(_24_ref);
        ((String*)_26.data)[7] = _25;
        Datetime_WEEKDAY_MINUS_STRINGS = _26;
    }

    // Depth 1
    {
        Array _41 = { .len = 13, .capacity = 13, .data = CARP_MALLOC(sizeof(String) * 13) };
        static String _3 = "";
        String *_3_ref = &_3;
        String _4 = String_copy(_3_ref);
        ((String*)_41.data)[0] = _4;
        static String _6 = "January";
        String *_6_ref = &_6;
        String _7 = String_copy(_6_ref);
        ((String*)_41.data)[1] = _7;
        static String _9 = "February";
        String *_9_ref = &_9;
        String _10 = String_copy(_9_ref);
        ((String*)_41.data)[2] = _10;
        static String _12 = "March";
        String *_12_ref = &_12;
        String _13 = String_copy(_12_ref);
        ((String*)_41.data)[3] = _13;
        static String _15 = "April";
        String *_15_ref = &_15;
        String _16 = String_copy(_15_ref);
        ((String*)_41.data)[4] = _16;
        static String _18 = "May";
        String *_18_ref = &_18;
        String _19 = String_copy(_18_ref);
        ((String*)_41.data)[5] = _19;
        static String _21 = "June";
        String *_21_ref = &_21;
        String _22 = String_copy(_21_ref);
        ((String*)_41.data)[6] = _22;
        static String _24 = "July";
        String *_24_ref = &_24;
        String _25 = String_copy(_24_ref);
        ((String*)_41.data)[7] = _25;
        static String _27 = "August";
        String *_27_ref = &_27;
        String _28 = String_copy(_27_ref);
        ((String*)_41.data)[8] = _28;
        static String _30 = "September";
        String *_30_ref = &_30;
        String _31 = String_copy(_30_ref);
        ((String*)_41.data)[9] = _31;
        static String _33 = "October";
        String *_33_ref = &_33;
        String _34 = String_copy(_33_ref);
        ((String*)_41.data)[10] = _34;
        static String _36 = "November";
        String *_36_ref = &_36;
        String _37 = String_copy(_36_ref);
        ((String*)_41.data)[11] = _37;
        static String _39 = "December";
        String *_39_ref = &_39;
        String _40 = String_copy(_39_ref);
        ((String*)_41.data)[12] = _40;
        Datetime_MONTH_MINUS_STRINGS = _41;
    }

    // Depth 1
    {
        int _5 = Int__MUL_(60, Datetime_SECOND);
        Datetime_MINUTE = _5;
    }

    // Depth 1
    {
        static String _4 = "UTC";
        String *_4_ref = &_4;
        String _5 = String_copy(_4_ref);
        Timezone _8 = Timezone_init(_5, 0l, false);
        Timezone_utc = _8;
    }

    // Depth 2
    {
        int _5 = Int__MUL_(60, Datetime_MINUTE);
        Datetime_HOUR = _5;
    }

    // Depth 2
    {
        int _4 = Datetime_days_MINUS_before_MINUS_year(5);
        Datetime_DI4Y = _4;
    }

    // Depth 2
    {
        int _4 = Datetime_days_MINUS_before_MINUS_year(401);
        Datetime_DI400Y = _4;
    }

    // Depth 2
    {
        int _4 = Datetime_days_MINUS_before_MINUS_year(101);
        Datetime_DI100Y = _4;
    }

    // Depth 2
    {
        Random_seed();
        bool _6 = true;
        Random__ = _6;
    }

    // Depth 3
    {
        int _5 = Int__MUL_(24, Datetime_HOUR);
        Datetime_DAY = _5;
    }

    // Depth 4
    {
        int _5 = Int__MUL_(365, Datetime_DAY);
        Datetime_YEAR = _5;
    }

    // Depth 8
    {
        Array _164 = { .len = 23, .capacity = 23, .data = CARP_MALLOC(sizeof(Pair__ColorId_String) * 23) };
        ColorId _5 = Color_Id_Black();
        static String _7 = "30";
        String *_7_ref = &_7;
        String _8 = String_copy(_7_ref);
        Pair__ColorId_String _9 = Pair_init__ColorId_String(_5, _8);
        ((Pair__ColorId_String*)_164.data)[0] = _9;
        ColorId _12 = Color_Id_Red();
        static String _14 = "31";
        String *_14_ref = &_14;
        String _15 = String_copy(_14_ref);
        Pair__ColorId_String _16 = Pair_init__ColorId_String(_12, _15);
        ((Pair__ColorId_String*)_164.data)[1] = _16;
        ColorId _19 = Color_Id_Green();
        static String _21 = "32";
        String *_21_ref = &_21;
        String _22 = String_copy(_21_ref);
        Pair__ColorId_String _23 = Pair_init__ColorId_String(_19, _22);
        ((Pair__ColorId_String*)_164.data)[2] = _23;
        ColorId _26 = Color_Id_Yellow();
        static String _28 = "33";
        String *_28_ref = &_28;
        String _29 = String_copy(_28_ref);
        Pair__ColorId_String _30 = Pair_init__ColorId_String(_26, _29);
        ((Pair__ColorId_String*)_164.data)[3] = _30;
        ColorId _33 = Color_Id_Blue();
        static String _35 = "34";
        String *_35_ref = &_35;
        String _36 = String_copy(_35_ref);
        Pair__ColorId_String _37 = Pair_init__ColorId_String(_33, _36);
        ((Pair__ColorId_String*)_164.data)[4] = _37;
        ColorId _40 = Color_Id_Magenta();
        static String _42 = "35";
        String *_42_ref = &_42;
        String _43 = String_copy(_42_ref);
        Pair__ColorId_String _44 = Pair_init__ColorId_String(_40, _43);
        ((Pair__ColorId_String*)_164.data)[5] = _44;
        ColorId _47 = Color_Id_Cyan();
        static String _49 = "36";
        String *_49_ref = &_49;
        String _50 = String_copy(_49_ref);
        Pair__ColorId_String _51 = Pair_init__ColorId_String(_47, _50);
        ((Pair__ColorId_String*)_164.data)[6] = _51;
        ColorId _54 = Color_Id_White();
        static String _56 = "37";
        String *_56_ref = &_56;
        String _57 = String_copy(_56_ref);
        Pair__ColorId_String _58 = Pair_init__ColorId_String(_54, _57);
        ((Pair__ColorId_String*)_164.data)[7] = _58;
        ColorId _61 = Color_Id_Reset();
        static String _63 = "0";
        String *_63_ref = &_63;
        String _64 = String_copy(_63_ref);
        Pair__ColorId_String _65 = Pair_init__ColorId_String(_61, _64);
        ((Pair__ColorId_String*)_164.data)[8] = _65;
        ColorId _68 = Color_Id_None();
        static String _70 = "0";
        String *_70_ref = &_70;
        String _71 = String_copy(_70_ref);
        Pair__ColorId_String _72 = Pair_init__ColorId_String(_68, _71);
        ((Pair__ColorId_String*)_164.data)[9] = _72;
        ColorId _75 = Color_Id_Bold();
        static String _77 = "1";
        String *_77_ref = &_77;
        String _78 = String_copy(_77_ref);
        Pair__ColorId_String _79 = Pair_init__ColorId_String(_75, _78);
        ((Pair__ColorId_String*)_164.data)[10] = _79;
        ColorId _82 = Color_Id_Italic();
        static String _84 = "3";
        String *_84_ref = &_84;
        String _85 = String_copy(_84_ref);
        Pair__ColorId_String _86 = Pair_init__ColorId_String(_82, _85);
        ((Pair__ColorId_String*)_164.data)[11] = _86;
        ColorId _89 = Color_Id_Underline();
        static String _91 = "4";
        String *_91_ref = &_91;
        String _92 = String_copy(_91_ref);
        Pair__ColorId_String _93 = Pair_init__ColorId_String(_89, _92);
        ((Pair__ColorId_String*)_164.data)[12] = _93;
        ColorId _96 = Color_Id_BlinkSlow();
        static String _98 = "5";
        String *_98_ref = &_98;
        String _99 = String_copy(_98_ref);
        Pair__ColorId_String _100 = Pair_init__ColorId_String(_96, _99);
        ((Pair__ColorId_String*)_164.data)[13] = _100;
        ColorId _103 = Color_Id_BlinkRapid();
        static String _105 = "6";
        String *_105_ref = &_105;
        String _106 = String_copy(_105_ref);
        Pair__ColorId_String _107 = Pair_init__ColorId_String(_103, _106);
        ((Pair__ColorId_String*)_164.data)[14] = _107;
        ColorId _110 = Color_Id_BgBlack();
        static String _112 = "40";
        String *_112_ref = &_112;
        String _113 = String_copy(_112_ref);
        Pair__ColorId_String _114 = Pair_init__ColorId_String(_110, _113);
        ((Pair__ColorId_String*)_164.data)[15] = _114;
        ColorId _117 = Color_Id_BgRed();
        static String _119 = "41";
        String *_119_ref = &_119;
        String _120 = String_copy(_119_ref);
        Pair__ColorId_String _121 = Pair_init__ColorId_String(_117, _120);
        ((Pair__ColorId_String*)_164.data)[16] = _121;
        ColorId _124 = Color_Id_BgGreen();
        static String _126 = "42";
        String *_126_ref = &_126;
        String _127 = String_copy(_126_ref);
        Pair__ColorId_String _128 = Pair_init__ColorId_String(_124, _127);
        ((Pair__ColorId_String*)_164.data)[17] = _128;
        ColorId _131 = Color_Id_BgYellow();
        static String _133 = "43";
        String *_133_ref = &_133;
        String _134 = String_copy(_133_ref);
        Pair__ColorId_String _135 = Pair_init__ColorId_String(_131, _134);
        ((Pair__ColorId_String*)_164.data)[18] = _135;
        ColorId _138 = Color_Id_BgBlue();
        static String _140 = "44";
        String *_140_ref = &_140;
        String _141 = String_copy(_140_ref);
        Pair__ColorId_String _142 = Pair_init__ColorId_String(_138, _141);
        ((Pair__ColorId_String*)_164.data)[19] = _142;
        ColorId _145 = Color_Id_BgMagenta();
        static String _147 = "45";
        String *_147_ref = &_147;
        String _148 = String_copy(_147_ref);
        Pair__ColorId_String _149 = Pair_init__ColorId_String(_145, _148);
        ((Pair__ColorId_String*)_164.data)[20] = _149;
        ColorId _152 = Color_Id_BgCyan();
        static String _154 = "46";
        String *_154_ref = &_154;
        String _155 = String_copy(_154_ref);
        Pair__ColorId_String _156 = Pair_init__ColorId_String(_152, _155);
        ((Pair__ColorId_String*)_164.data)[21] = _156;
        ColorId _159 = Color_Id_BgWhite();
        static String _161 = "47";
        String *_161_ref = &_161;
        String _162 = String_copy(_161_ref);
        Pair__ColorId_String _163 = Pair_init__ColorId_String(_159, _162);
        ((Pair__ColorId_String*)_164.data)[22] = _163;
        Map__ColorId_String _165 = Map_from_MINUS_array__ColorId_String(_164);
        Color_table = _165;
    }
}

//Definitions:
bool _DIV__EQ___int(int a, int b) {
    bool _9 = Int__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _DIV__EQ___uint8_t(uint8_t a, uint8_t b) {
    bool _9 = Byte__EQ_(a, b);
    bool _10 = not(_9);
    return _10;
}

bool _LT__EQ___Char(Char a, Char b) {
    bool _19;
    bool _9 = Char__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Char__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _LT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___Char(Char a, Char b) {
    bool _19;
    bool _9 = Char__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Char__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

bool _GT__EQ___int(int a, int b) {
    bool _19;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        bool _12 = true;
        _19 = _12;
    } else {
        bool _17 = Int__EQ_(a, b);
        bool _18 = _17;
        _19 = _18;
    }
    return _19;
}

Array Array_allocate__Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Array__uint8_t));
    return a;
}

Array Array_allocate__Bucket__ColorId_String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Bucket__ColorId_String));
    return a;
}

Array Array_allocate__Char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Char));
    return a;
}

Array Array_allocate__Result__Uint16_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint16_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint32_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint32_Array__uint8_t));
    return a;
}

Array Array_allocate__Result__Uint64_Array__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Result__Uint64_Array__uint8_t));
    return a;
}

Array Array_allocate__String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(String));
    return a;
}

Array Array_allocate__Uint16 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint16));
    return a;
}

Array Array_allocate__Uint32 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint32));
    return a;
}

Array Array_allocate__Uint64 (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Uint64));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

Array Array_allocate__uint8_t (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(uint8_t));
    return a;
}

void Array_aset_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Char' */

    ((Char*)a.data)[n] = newValue;
}

void Array_aset_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    /* Ignore non-managed type inside Array: 'Int' */

    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Array__uint8_t (Array *aRef, int n, Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String (Array *aRef, int n, Bucket__ColorId_String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Bucket__ColorId_String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Char (Array *aRef, int n, Char newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Char*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String (Array *aRef, int n, Pair__ColorId_String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Pair__ColorId_String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t (Array *aRef, int n, Result__Uint16_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint16_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t (Array *aRef, int n, Result__Uint32_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint32_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t (Array *aRef, int n, Result__Uint64_Array__uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Result__Uint64_Array__uint8_t*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint16 (Array *aRef, int n, Uint16 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint16*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint32 (Array *aRef, int n, Uint32 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint32*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Uint64 (Array *aRef, int n, Uint64 newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((Uint64*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___uint8_t (Array *aRef, int n, uint8_t newValue) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    ((uint8_t*)a.data)[n] = newValue;
}

void Array_aupdate_BANG___Pair__ColorId_String(Array__Pair__ColorId_String* a, int i, Lambda* f) {
    Pair__ColorId_String _15 = Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(a, i);
    Pair__ColorId_String _16 = (*f).env ? ((Pair__ColorId_String(*)(LambdaEnv, Pair__ColorId_String))(*f).callback)((*f).env, _15) : ((Pair__ColorId_String(*)(Pair__ColorId_String))(*f).callback)(_15);
    Array_aset_MINUS_uninitialized_BANG___Pair__ColorId_String(a, i, _16);
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _9 = Array_copy__Result__Uint16_Array__uint8_t(a);
    Array__Result__Uint16_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _9 = Array_copy__Result__Uint32_Array__uint8_t(a);
    Array__Result__Uint32_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _9 = Array_copy__Result__Uint64_Array__uint8_t(a);
    Array__Result__Uint64_Array__uint8_t _10 = Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(f, _9);
    return _10;
}

Array__Result__Uint16_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint16_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint16_Array__uint8_t _11 = Array_allocate__Result__Uint16_Array__uint8_t(_10);
        Array__Result__Uint16_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint16_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint16_Array__uint8_t _38 = (*f).env ? ((Result__Uint16_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint16_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint16_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint16_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint32_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint32_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint32_Array__uint8_t _11 = Array_allocate__Result__Uint32_Array__uint8_t(_10);
        Array__Result__Uint32_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint32_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint32_Array__uint8_t _38 = (*f).env ? ((Result__Uint32_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint32_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint32_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint32_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Result__Uint64_Array__uint8_t Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(Lambda* f, Array__Array__uint8_t* a) {
    Array__Result__Uint64_Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Result__Uint64_Array__uint8_t _11 = Array_allocate__Result__Uint64_Array__uint8_t(_10);
        Array__Result__Uint64_Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Result__Uint64_Array__uint8_t* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Result__Uint64_Array__uint8_t _38 = (*f).env ? ((Result__Uint64_Array__uint8_t(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Result__Uint64_Array__uint8_t(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Result__Uint64_Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Result__Uint64_Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Array__uint8_t_Uint16(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint16* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Array__uint8_t_Uint32(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint32* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Array__uint8_t_Uint64(Lambda* f, Array__Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint64* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__Array__uint8_t_int(Lambda* f, Array__Array__uint8_t* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__Array__uint8_t(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__int* _29 = &na; // ref
                Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Array__uint8_t(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, Array__uint8_t*))(*f).callback)((*f).env, _37) : ((int(*)(Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__PatternMatchResult_String(Lambda* f, Array__PatternMatchResult* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((String(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__int Array_copy_MINUS_map__PatternMatchResult_int(Lambda* f, Array__PatternMatchResult* a) {
    Array__int _52;
    /* let */ {
        int _10 = Array_length__PatternMatchResult(a);
        Array__int _11 = Array_allocate__int(_10);
        Array__int na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__PatternMatchResult(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__int* _29 = &na; // ref
                PatternMatchResult* _37 = Array_unsafe_MINUS_nth__PatternMatchResult(a, i);
                int _38 = (*f).env ? ((int(*)(LambdaEnv, PatternMatchResult*))(*f).callback)((*f).env, _37) : ((int(*)(PatternMatchResult*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___int(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__PatternMatchResult(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__int _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint16 Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(Lambda* f, Array__Result__Uint16_Array__uint8_t* a) {
    Array__Uint16 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint16_Array__uint8_t(a);
        Array__Uint16 _11 = Array_allocate__Uint16(_10);
        Array__Uint16 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint16* _29 = &na; // ref
                Result__Uint16_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t(a, i);
                Uint16 _38 = (*f).env ? ((Uint16(*)(LambdaEnv, Result__Uint16_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint16(*)(Result__Uint16_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint16(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint16_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint16 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint32 Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(Lambda* f, Array__Result__Uint32_Array__uint8_t* a) {
    Array__Uint32 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint32_Array__uint8_t(a);
        Array__Uint32 _11 = Array_allocate__Uint32(_10);
        Array__Uint32 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint32* _29 = &na; // ref
                Result__Uint32_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t(a, i);
                Uint32 _38 = (*f).env ? ((Uint32(*)(LambdaEnv, Result__Uint32_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint32(*)(Result__Uint32_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint32(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint32_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint32 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Uint64 Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(Lambda* f, Array__Result__Uint64_Array__uint8_t* a) {
    Array__Uint64 _52;
    /* let */ {
        int _10 = Array_length__Result__Uint64_Array__uint8_t(a);
        Array__Uint64 _11 = Array_allocate__Uint64(_10);
        Array__Uint64 na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Uint64* _29 = &na; // ref
                Result__Uint64_Array__uint8_t* _37 = Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t(a, i);
                Uint64 _38 = (*f).env ? ((Uint64(*)(LambdaEnv, Result__Uint64_Array__uint8_t*))(*f).callback)((*f).env, _37) : ((Uint64(*)(Result__Uint64_Array__uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Uint64(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Result__Uint64_Array__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Uint64 _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint16_Array__uint8_t(Lambda* f, Array__Uint16* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint16_uint8_t(Lambda* f, Array__Uint16* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint16(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint16(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint16* _37 = Array_unsafe_MINUS_nth__Uint16(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint16*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint16*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint16(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint32_Array__uint8_t(Lambda* f, Array__Uint32* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint32_uint8_t(Lambda* f, Array__Uint32* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint32(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint32(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint32* _37 = Array_unsafe_MINUS_nth__Uint32(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint32*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint32*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint32(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__Array__uint8_t Array_copy_MINUS_map__Uint64_Array__uint8_t(Lambda* f, Array__Uint64* a) {
    Array__Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__Array__uint8_t _11 = Array_allocate__Array__uint8_t(_10);
        Array__Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                Array__uint8_t _38 = (*f).env ? ((Array__uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((Array__uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___Array__uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__uint8_t Array_copy_MINUS_map__Uint64_uint8_t(Lambda* f, Array__Uint64* a) {
    Array__uint8_t _52;
    /* let */ {
        int _10 = Array_length__Uint64(a);
        Array__uint8_t _11 = Array_allocate__uint8_t(_10);
        Array__uint8_t na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__Uint64(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__uint8_t* _29 = &na; // ref
                Uint64* _37 = Array_unsafe_MINUS_nth__Uint64(a, i);
                uint8_t _38 = (*f).env ? ((uint8_t(*)(LambdaEnv, Uint64*))(*f).callback)((*f).env, _37) : ((uint8_t(*)(Uint64*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___uint8_t(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__Uint64(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _51 = na;
        _52 = _51;
    }
    return _52;
}

Array__String Array_copy_MINUS_map__uint8_t_String(Lambda* f, Array__uint8_t* a) {
    Array__String _52;
    /* let */ {
        int _10 = Array_length__uint8_t(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_length__uint8_t(a);
            bool _1000008 = Int__LT_(i, _23);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _29 = &na; // ref
                uint8_t* _37 = Array_unsafe_MINUS_nth__uint8_t(a, i);
                String _38 = (*f).env ? ((String(*)(LambdaEnv, uint8_t*))(*f).callback)((*f).env, _37) : ((String(*)(uint8_t*))(*f).callback)(_37);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _38);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                int _23 = Array_length__uint8_t(a);
                bool _1000008 = Int__LT_(i, _23);
                _1000006 = _1000008;
            }
        }
        Array__String _51 = na;
        _52 = _51;
    }
    return _52;
}

Array Array_copy__Result__Uint16_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint16_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint16_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint16_Array__uint8_t(&(((Result__Uint16_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint32_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint32_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint32_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint32_Array__uint8_t(&(((Result__Uint32_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Result__Uint64_Array__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Result__Uint64_Array__uint8_t) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Result__Uint64_Array__uint8_t*)(copy.data))[i] = Result_copy__Uint64_Array__uint8_t(&(((Result__Uint64_Array__uint8_t*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Uint16 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint16) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint16) * a->len);
    return copy;
}

Array Array_copy__Uint32 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint32) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint32) * a->len);
    return copy;
}

Array Array_copy__Uint64 (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Uint64) * a->capacity);
    memcpy(copy.data, a->data, sizeof(Uint64) * a->len);
    return copy;
}

Array Array_copy__uint8_t (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(uint8_t) * a->capacity);
    memcpy(copy.data, a->data, sizeof(uint8_t) * a->len);
    return copy;
}

void Array_delete__Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Array_delete__uint8_t(((Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Bucket__ColorId_String (Array a){
    for(int i = 0; i < a.len; i++) {
        Bucket_delete__ColorId_String(((Bucket__ColorId_String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Pair__ColorId_String (Array a){
    for(int i = 0; i < a.len; i++) {
        Pair_delete__ColorId_String(((Pair__ColorId_String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__PatternMatchResult (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Pattern.MatchResult' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint16_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint32_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Result__Uint64_Array__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint16 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint16' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint32 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint32' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Uint64 (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Uint64' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

void Array_delete__uint8_t (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Byte' */
    }
    CARP_FREE(a.data);
}

Array Array_endo_MINUS_filter__Result__Uint16_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint16_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint16_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint16_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint16_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint16_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint16_Array__uint8_t(((Result__Uint16_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint16_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint32_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint32_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint32_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint32_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint32_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint32_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint32_Array__uint8_t(((Result__Uint32_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint32_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__Result__Uint64_Array__uint8_t(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)((*predicate).env, &(((Result__Uint64_Array__uint8_t*)a.data)[i])) : ((Fn__Result__Uint64_Array__uint8_t_MUL__bool)(*predicate).callback)(&(((Result__Uint64_Array__uint8_t*)a.data)[i]))) {
            (((Result__Uint64_Array__uint8_t*)a.data)[insertIndex++]) = ((Result__Uint64_Array__uint8_t*)a.data)[i];
        } else {
            Result_delete__Uint64_Array__uint8_t(((Result__Uint64_Array__uint8_t*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Result__Uint64_Array__uint8_t) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_filter__String(Lambda *predicate, Array a) { 
    int insertIndex = 0;
    for(int i = 0; i < a.len; ++i) {
        if((*predicate).env ? ((Fn__LambdaEnv_String_MUL__bool)(*predicate).callback)((*predicate).env, &(((String*)a.data)[i])) : ((Fn__String_MUL__bool)(*predicate).callback)(&(((String*)a.data)[i]))) {
            (((String*)a.data)[insertIndex++]) = ((String*)a.data)[i];
        } else {
            String_delete(((String*)a.data)[i]);

        }
    }
    a.len = insertIndex;
    if(a.len < (a.capacity / 4)) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a .capacity);
    }

    return a;
}

Array Array_endo_MINUS_map__uint8_t(Lambda *f, Array a) { 
    for(int i = 0; i < a.len; ++i) {
        ((uint8_t*)a.data)[i] = (*f).env ? ((Fn__LambdaEnv_uint8_t_uint8_t)(*f).callback)((*f).env, (((uint8_t*)a.data)[i])) : ((Fn__uint8_t_uint8_t)(*f).callback)((((uint8_t*)a.data)[i]));
    }
    return a;
}

Maybe__int Array_index_MINUS_of__int(Array__int* a, int* e) {
    Maybe__int _57;
    /* let */ {
        Maybe__int _8 = Maybe_Nothing__int();
        Maybe__int idx = _8;
        /* let */ {
            int i = 0;
            int _20 = Array_length__int(a);
            bool _1000008 = Int__LT_(i, _20);
            bool _1000006 = _1000008;
            while (_1000006) {
                int* _28 = Array_unsafe_MINUS_nth__int(a, i);
                bool _30 = IntRef__EQ_(_28, e);
                if (_30) {
                    Maybe__int _36 = Maybe_Just__int(i);
                    Maybe_delete__int(idx);
                    idx = _36;  // (Maybe Int) = (Maybe Int)
                    break;
                    // Unreachable:
                } else {
                    /* () */
                }
                int _1000018 = Int__PLUS_(i, 1);
                i = _1000018;  // Int = Int
                int _20 = Array_length__int(a);
                bool _1000008 = Int__LT_(i, _20);
                _1000006 = _1000008;
            }
        }
        Maybe__int _56 = idx;
        _57 = _56;
    }
    return _57;
}

int Array_length__Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Char (Array *a) { return (*a).len; }
int Array_length__Pair__ColorId_String (Array *a) { return (*a).len; }
int Array_length__PatternMatchResult (Array *a) { return (*a).len; }
int Array_length__Result__Uint16_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint32_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__Result__Uint64_Array__uint8_t (Array *a) { return (*a).len; }
int Array_length__String (Array *a) { return (*a).len; }
int Array_length__Uint16 (Array *a) { return (*a).len; }
int Array_length__Uint32 (Array *a) { return (*a).len; }
int Array_length__Uint64 (Array *a) { return (*a).len; }
int Array_length__int (Array *a) { return (*a).len; }
int Array_length__uint8_t (Array *a) { return (*a).len; }
Maybe__uint8_t Array_nth__uint8_t(Array__uint8_t* xs, int index) {
    Maybe__uint8_t _37;
    bool _22;
    bool _10 = _GT__EQ___int(index, 0);
    if (_10) {
        int _16 = Array_length__uint8_t(xs);
        bool _17 = Int__LT_(index, _16);
        bool _18 = _17;
        _22 = _18;
    } else {
        bool _21 = false;
        _22 = _21;
    }
    if (_22) {
        uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, index);
        uint8_t _30 = Byte_copy(_29);
        Maybe__uint8_t _31 = Maybe_Just__uint8_t(_30);
        Maybe__uint8_t _32 = _31;
        _37 = _32;
    } else {
        Maybe__uint8_t _35 = Maybe_Nothing__uint8_t();
        Maybe__uint8_t _36 = _35;
        _37 = _36;
    }
    return _37;
}

Array__Array__uint8_t Array_partition__uint8_t(Array__uint8_t* arr, int n) {
    Array__Array__uint8_t _67;
    /* let */ {
        int x = 0;
        int y = 0;
        Array _11 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Array__uint8_t) * 0) };
        Array__Array__uint8_t a = _11;
        int _19 = Array_length__uint8_t(arr);
        bool _20 = Int__LT_(x, _19);
        bool _64 = _20;
        while (_64) {
            int _27 = Int__PLUS_(x, n);
            y = _27;  // Int = Int
            int _34 = Array_length__uint8_t(arr);
            bool _35 = Int__GT_(y, _34);
            if (_35) {
                int _41 = Array_length__uint8_t(arr);
                y = _41;  // Int = Int
            } else {
                /* () */
            }
            Array__uint8_t _56 = Array_slice__uint8_t(arr, x, y);
            Array__Array__uint8_t _57 = Array_push_MINUS_back__Array__uint8_t(a, _56);
            a = _57;  // (Array (Array Byte)) = (Array (Array Byte))
            x = y;  // Int = Int
            int _19 = Array_length__uint8_t(arr);
            bool _20 = Int__LT_(x, _19);
            _64 = _20;
        }
        Array__Array__uint8_t _66 = a;
        _67 = _66;
    }
    return _67;
}

Array__Char Array_prefix__Array__Char(Array__Char* xs, int end_MINUS_index) {
    Array__Char _9 = Array_slice__Char(xs, 0, end_MINUS_index);
    return _9;
}

void Array_push_MINUS_back_BANG___Pair__ColorId_String(Array *aRef, Pair__ColorId_String value) { 
    aRef->len++;
    if(aRef->len > aRef->capacity) {
        aRef->capacity = aRef->len * 2;
        aRef->data = CARP_REALLOC(aRef->data, sizeof(Pair__ColorId_String) * aRef->capacity);
    }
    ((Pair__ColorId_String*)aRef->data)[aRef->len - 1] = value;
}

Array Array_push_MINUS_back__Array__uint8_t(Array a, Array__uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Array__uint8_t) * a.capacity);
    }
    ((Array__uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__Char(Array a, Char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(Char) * a.capacity);
    }
    ((Char*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__PatternMatchResult(Array a, PatternMatchResult value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(PatternMatchResult) * a.capacity);
    }
    ((PatternMatchResult*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__String(Array a, String value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(String) * a.capacity);
    }
    ((String*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__uint8_t(Array a, uint8_t value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = CARP_REALLOC(a.data, sizeof(uint8_t) * a.capacity);
    }
    ((uint8_t*)a.data)[a.len - 1] = value;
    return a;
}

Result__Array__int_String Array_range__int(int start, int end, int step) {
    Result__Array__int_String _144;
    int _10 = Int_zero();
    bool _11 = Int__EQ_(step, _10);
    if (_11) {
        static String _15 = "`Array.range` cannot be called with step size `0`.";
        String *_15_ref = &_15;
        String _16 = String_copy(_15_ref);
        Result__Array__int_String _17 = Result_Error__String_Array__int(_16);
        Result__Array__int_String _18 = _17;
        _144 = _18;
    } else {
        Result__Array__int_String _142;
        bool _36;
        bool _25 = Int__LT_(start, end);
        if (_25) {
            int _30 = Int_zero();
            bool _31 = Int__LT_(step, _30);
            bool _32 = _31;
            _36 = _32;
        } else {
            bool _35 = false;
            _36 = _35;
        }
        if (_36) {
            static String _40 = "`Array.range` cannot be called with a step size `< 0` and `start < end`.";
            String *_40_ref = &_40;
            String _41 = String_copy(_40_ref);
            Result__Array__int_String _42 = Result_Error__String_Array__int(_41);
            Result__Array__int_String _43 = _42;
            _142 = _43;
        } else {
            Result__Array__int_String _140;
            bool _61;
            bool _50 = Int__GT_(start, end);
            if (_50) {
                int _55 = Int_zero();
                bool _56 = Int__GT_(step, _55);
                bool _57 = _56;
                _61 = _57;
            } else {
                bool _60 = false;
                _61 = _60;
            }
            if (_61) {
                static String _65 = "`Array.range` cannot be called with a step size `> 0` and `start > end`.";
                String *_65_ref = &_65;
                String _66 = String_copy(_65_ref);
                Result__Array__int_String _67 = Result_Error__String_Array__int(_66);
                Result__Array__int_String _68 = _67;
                _140 = _68;
            } else {
                Result__Array__int_String _138;
                /* let */ {
                    int _80 = Int__MINUS_(end, start);
                    int _82 = Int__DIV_(_80, step);
                    int _83 = Int_to_MINUS_int(_82);
                    int _84 = Int_abs(_83);
                    int _85 = Int_inc(_84);
                    Array__int _86 = Array_allocate__int(_85);
                    Array__int x = _86;
                    int e = start;
                    int i = 0;
                    Lambda _103;
                    bool _96 = Int__LT_(start, end);
                    if (_96) {
                        Lambda _98 = { .callback = (void*)_LT__EQ___int, .env = NULL, .delete = NULL, .copy = NULL }; //Sym <=__int (LookupGlobal CarpLand AFunction)
                        Lambda _99 = _98;
                        _103 = _99;
                    } else {
                        Lambda _101 = { .callback = (void*)_GT__EQ___int, .env = NULL, .delete = NULL, .copy = NULL }; //Sym >=__int (LookupGlobal CarpLand AFunction)
                        Lambda _102 = _101;
                        _103 = _102;
                    }
                    Lambda op = _103;
                    bool _110 = op.env ? ((bool(*)(LambdaEnv, int, int))op.callback)(op.env, e, end) : ((bool(*)(int, int))op.callback)(e, end);
                    bool _133 = _110;
                    while (_133) {
                        Array__int* _115 = &x; // ref
                        Array_aset_BANG___int(_115, i, e);
                        int _123 = Int_inc(i);
                        i = _123;  // Int = Int
                        int _130 = Int__PLUS_(e, step);
                        e = _130;  // Int = Int
                        bool _110 = op.env ? ((bool(*)(LambdaEnv, int, int))op.callback)(op.env, e, end) : ((bool(*)(int, int))op.callback)(e, end);
                        _133 = _110;
                    }
                    Result__Array__int_String _136 = Result_Success__Array__int_String(x);
                    Result__Array__int_String _137 = _136;
                    _138 = _137;
                    Function_delete__int_int_bool(op);
                }
                Result__Array__int_String _139 = _138;
                _140 = _139;
            }
            Result__Array__int_String _141 = _140;
            _142 = _141;
        }
        Result__Array__int_String _143 = _142;
        _144 = _143;
    }
    return _144;
}

int Array_reduce__int_int(Lambda* f, int x, Array__int* xs) {
    int _47;
    /* let */ {
        int total = x;
        /* let */ {
            int i = 0;
            int _20 = Array_length__int(xs);
            bool _1000008 = Int__LT_(i, _20);
            bool _1000006 = _1000008;
            while (_1000006) {
                int* _32 = Array_unsafe_MINUS_nth__int(xs, i);
                int _33 = (*f).env ? ((int(*)(LambdaEnv, int, int*))(*f).callback)((*f).env, total, _32) : ((int(*)(int, int*))(*f).callback)(total, _32);
                total = _33;  // Int = Int
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                int _20 = Array_length__int(xs);
                bool _1000008 = Int__LT_(i, _20);
                _1000006 = _1000008;
            }
        }
        int _46 = total;
        _47 = _46;
    }
    return _47;
}

Array__Bucket__ColorId_String Array_repeat__Bucket__ColorId_String(int n, Lambda* f) {
    Array__Bucket__ColorId_String _44;
    /* let */ {
        Array__Bucket__ColorId_String _9 = Array_allocate__Bucket__ColorId_String(n);
        Array__Bucket__ColorId_String a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Bucket__ColorId_String* _25 = &a; // ref
                Bucket__ColorId_String _30 = (*f).env ? ((Bucket__ColorId_String(*)(LambdaEnv))(*f).callback)((*f).env) : ((Bucket__ColorId_String(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Bucket__ColorId_String(_25, i, _30);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Bucket__ColorId_String _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_repeat__Char(int n, Lambda* f) {
    Array__Char _44;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Char* _25 = &a; // ref
                Char _30 = (*f).env ? ((Char(*)(LambdaEnv))(*f).callback)((*f).env) : ((Char(*)())(*f).callback)();
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _30);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Char _43 = a;
        _44 = _43;
    }
    return _44;
}

Array__Char Array_replicate__Char(int n, Char* e) {
    Array__Char _43;
    /* let */ {
        Array__Char _9 = Array_allocate__Char(n);
        Array__Char a = _9;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__Char* _25 = &a; // ref
                Char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___Char(_25, i, _29);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        Array__Char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__Char Array_reverse__Char(Array__Char a) {
    Array__Char _72;
    /* let */ {
        int i = 0;
        Array__Char* _12 = &a; // ref
        int _13 = Array_length__Char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__Char* _28 = &a; // ref
                Char* _30 = Array_unsafe_MINUS_nth__Char(_28, i);
                Char _31 = Char_copy(_30);
                Char tmp = _31;
                Array__Char* _37 = &a; // ref
                Array__Char* _43 = &a; // ref
                Char* _45 = Array_unsafe_MINUS_nth__Char(_43, j);
                Char _46 = Char_copy(_45);
                Array_aset_BANG___Char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__Char* _57 = &a; // ref
                Array_aset_BANG___Char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__Char _71 = a;
        _72 = _71;
    }
    return _72;
}

Array__Char Array_slice__Char(Array__Char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__Char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Char) * 0) };
        Array__Char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _1000008 = Int__LT_(i, end_MINUS_index);
            bool _1000006 = _1000008;
            while (_1000006) {
                Char* _29 = Array_unsafe_MINUS_nth__Char(xs, i);
                Char _30 = Char_copy(_29);
                Array__Char _31 = Array_push_MINUS_back__Char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, end_MINUS_index);
                _1000006 = _1000008;
            }
        }
        Array__Char _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__uint8_t Array_slice__uint8_t(Array__uint8_t* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__uint8_t _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
        Array__uint8_t result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _1000008 = Int__LT_(i, end_MINUS_index);
            bool _1000006 = _1000008;
            while (_1000006) {
                uint8_t* _29 = Array_unsafe_MINUS_nth__uint8_t(xs, i);
                uint8_t _30 = Byte_copy(_29);
                Array__uint8_t _31 = Array_push_MINUS_back__uint8_t(result, _30);
                result = _31;  // (Array Byte) = (Array Byte)
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, end_MINUS_index);
                _1000006 = _1000008;
            }
        }
        Array__uint8_t _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__Char Array_suffix__Char(Array__Char* xs, int start_MINUS_index) {
    int _10 = Array_length__Char(xs);
    Array__Char _11 = Array_slice__Char(xs, start_MINUS_index, _10);
    return _11;
}

Pair__ColorId_String Array_unsafe_MINUS_nth_MINUS_value__Pair__ColorId_String(Array *a, int i) { return ((Pair__ColorId_String*)a->data)[i]; }
Array__uint8_t* Array_unsafe_MINUS_nth__Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Array__uint8_t*)a.data)[n]);
}

Bucket__ColorId_String* Array_unsafe_MINUS_nth__Bucket__ColorId_String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Bucket__ColorId_String*)a.data)[n]);
}

Char* Array_unsafe_MINUS_nth__Char (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Char*)a.data)[n]);
}

Pair__ColorId_String* Array_unsafe_MINUS_nth__Pair__ColorId_String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Pair__ColorId_String*)a.data)[n]);
}

PatternMatchResult* Array_unsafe_MINUS_nth__PatternMatchResult (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((PatternMatchResult*)a.data)[n]);
}

Result__Uint16_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint16_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint16_Array__uint8_t*)a.data)[n]);
}

Result__Uint32_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint32_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint32_Array__uint8_t*)a.data)[n]);
}

Result__Uint64_Array__uint8_t* Array_unsafe_MINUS_nth__Result__Uint64_Array__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Result__Uint64_Array__uint8_t*)a.data)[n]);
}

String* Array_unsafe_MINUS_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((String*)a.data)[n]);
}

Uint16* Array_unsafe_MINUS_nth__Uint16 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint16*)a.data)[n]);
}

Uint32* Array_unsafe_MINUS_nth__Uint32 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint32*)a.data)[n]);
}

Uint64* Array_unsafe_MINUS_nth__Uint64 (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((Uint64*)a.data)[n]);
}

int* Array_unsafe_MINUS_nth__int (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((int*)a.data)[n]);
}

uint8_t* Array_unsafe_MINUS_nth__uint8_t (Array *aRef, int n) {
    Array a = *aRef;
    assert(n >= 0);
    assert(n < a.len);
    return &(((uint8_t*)a.data)[n]);
}

Array__uint8_t Array_zero__uint8_t() {
    Array _3 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
    return _3;
}

Array__String Array_zip__String_int_String(Lambda* f, Array__String* a, Array__int* b) {
    Array__String _62;
    /* let */ {
        int _11 = Array_length__String(a);
        int _14 = Array_length__int(b);
        int _15 = min__int(_11, _14);
        int l = _15;
        Array__String _19 = Array_allocate__String(l);
        Array__String na = _19;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, l);
            bool _1000006 = _1000008;
            while (_1000006) {
                Array__String* _35 = &na; // ref
                String* _43 = Array_unsafe_MINUS_nth__String(a, i);
                int* _47 = Array_unsafe_MINUS_nth__int(b, i);
                String _48 = (*f).env ? ((String(*)(LambdaEnv, String*, int*))(*f).callback)((*f).env, _43, _47) : ((String(*)(String*, int*))(*f).callback)(_43, _47);
                Array_aset_MINUS_uninitialized_BANG___String(_35, i, _48);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, l);
                _1000006 = _1000008;
            }
        }
        Array__String _61 = na;
        _62 = _61;
    }
    return _62;
}

Result__Uint16_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint16 _14 = (*_env->f).env ? ((Maybe__Uint16(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint16(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint16_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint16_Nothing_tag) {
        Maybe__Uint16 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint16_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint16(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint16_Just_tag) {
        Maybe__Uint16 _14_temp = _14;
        Uint16 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint16_Array__uint8_t _27 = Result_Success__Uint16_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint32_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint32 _14 = (*_env->f).env ? ((Maybe__Uint32(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint32(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint32_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint32_Nothing_tag) {
        Maybe__Uint32 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint32_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint32(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint32_Just_tag) {
        Maybe__Uint32 _14_temp = _14;
        Uint32 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint32_Array__uint8_t _27 = Result_Success__Uint32_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

Result__Uint64_Array__uint8_t Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* _env, Array__uint8_t* bs) {
    Maybe__Uint64 _14 = (*_env->f).env ? ((Maybe__Uint64(*)(LambdaEnv, ByteOrder, Array__uint8_t*))(*_env->f).callback)((*_env->f).env, _env->order, bs) : ((Maybe__Uint64(*)(ByteOrder, Array__uint8_t*))(*_env->f).callback)(_env->order, bs);
    Result__Uint64_Array__uint8_t _28;
    if(_14._tag == Maybe__Uint64_Nothing_tag) {
        Maybe__Uint64 _14_temp = _14;
        // Case expr:
        Array__uint8_t _20 = Array_copy__uint8_t(bs);
        Result__Uint64_Array__uint8_t _21 = Result_Error__Array__uint8_t_Uint64(_20);
        _28 = _21;
    }
    else if(_14._tag == Maybe__Uint64_Just_tag) {
        Maybe__Uint64 _14_temp = _14;
        Uint64 i = _14_temp.u.Just.member0;
        // Case expr:
        Result__Uint64_Array__uint8_t _27 = Result_Success__Uint64_Array__uint8_t(i);
        _28 = _27;
    }
    else UNHANDLED("Binary.carp", 61);
    return _28;
}

String Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env(uint8_t* b) {
    uint8_t _12 = Byte_copy(b);
    String _13 = Binary_to_MINUS_hex_MINUS_str(_12);
    return _13;
}

Array__uint8_t Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint16* i) {
    Uint16 _14 = Uint16_copy(i);
    Array__uint8_t _15 = Binary_int16_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint32 Binary__Lambda_int32_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint32 _14 = Uint32_from_MINUS_long(lng);
    Uint32 _15 = Uint32_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint32* i) {
    Uint32 _14 = Uint32_copy(i);
    Array__uint8_t _15 = Binary_int32_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

Uint64 Binary__Lambda_int64_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* _env, Long lng) {
    Uint64 _14 = Uint64_from_MINUS_long(lng);
    Uint64 _15 = Uint64_bit_MINUS_shift_MINUS_right(_env->i, _14);
    return _15;
}

Array__uint8_t Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* _env, Uint64* i) {
    Uint64 _14 = Uint64_copy(i);
    Array__uint8_t _15 = Binary_int64_MINUS__GT_bytes(_env->order, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

int Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env(int x, int* y) {
    int _14 = Int_copy(y);
    int _15 = Int__PLUS_(x, _14);
    return _15;
}

Uint16 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint16 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int16(_env->order, b);
    return _18;
}

Uint32 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint32 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int32(_env->order, b);
    return _18;
}

Uint64 Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* _env, Array__uint8_t* b) {
    Uint64 _18 = Binary_unsafe_MINUS_bytes_MINUS__GT_int64(_env->order, b);
    return _18;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy
    };
    return _29;
}

Lambda Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(Lambda* f, ByteOrder order) {
    // This lambda captures 2 variables: f, order
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty *_29_env = CARP_MALLOC(sizeof(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty));
    _29_env->f = f;
    _29_env->order = order;
    Lambda _29 = {
      .callback = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env,
      .env = _29_env,
      .delete = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete,
      .copy = (void*)Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy
    };
    return _29;
}

String Binary_bytes_MINUS__GT_hex_MINUS_string(Array__uint8_t* bs) {
    String _27;
    /* let */ {
        // This lambda captures 0 variables: 
        Lambda _14 = {
          .callback = (void*)Binary__Lambda_bytes_MINUS__GT_hex_MINUS_string_14_env,
          .env = NULL,
          .delete = (void*)NULL,
          .copy = (void*)NULL
        };
        Lambda f = _14;
        static String _17 = " ";
        String *_17_ref = &_17;
        Lambda* _22 = &f; // ref
        Array__String _24 = Array_copy_MINUS_map__uint8_t_String(_22, bs);
        Array__String* _25 = &_24; // ref
        String _26 = String_join(_17_ref, _25);
        _27 = _26;
        Array_delete__String(_24);
        Function_delete__uint8_t_MUL__String(f);
    }
    return _27;
}

Maybe__Uint16 Binary_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bytes) {
    Maybe__Uint16 _83;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bytes, 0);
        Maybe__Uint16 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint16 _1000006 = Maybe_Nothing__Uint16();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1009 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bytes, 1);
            Maybe__Uint16 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint16 _1000011 = Maybe_Nothing__Uint16();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1010 = _25_temp.u.Just.member0;
                // Case expr:
                Lambda _36 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _37 = &_36; // ref
                Uint16 _1000014 = (*_37).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_37).callback)((*_37).env, zip1009, zip1010) : ((Uint16(*)(uint8_t, uint8_t))(*_37).callback)(zip1009, zip1010);
                Maybe__Uint16 _1000013 = Maybe_Just__Uint16(_1000014);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 112);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 112);
        _83 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _51 = Array_nth__uint8_t(bytes, 1);
        Maybe__Uint16 _1000016;
        if(_51._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _51_temp = _51;
            // Case expr:
            Maybe__Uint16 _1000019 = Maybe_Nothing__Uint16();
            _1000016 = _1000019;
        }
        else if(_51._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _51_temp = _51;
            uint8_t zip1011 = _51_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _63 = Array_nth__uint8_t(bytes, 0);
            Maybe__Uint16 _1000021;
            if(_63._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _63_temp = _63;
                // Case expr:
                Maybe__Uint16 _1000024 = Maybe_Nothing__Uint16();
                _1000021 = _1000024;
            }
            else if(_63._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _63_temp = _63;
                uint8_t zip1012 = _63_temp.u.Just.member0;
                // Case expr:
                Lambda _74 = { .callback = (void*)Binary_to_MINUS_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int16 (LookupGlobal ExternalCode AFunction)
                Lambda* _75 = &_74; // ref
                Uint16 _1000027 = (*_75).env ? ((Uint16(*)(LambdaEnv, uint8_t, uint8_t))(*_75).callback)((*_75).env, zip1011, zip1012) : ((Uint16(*)(uint8_t, uint8_t))(*_75).callback)(zip1011, zip1012);
                Maybe__Uint16 _1000026 = Maybe_Just__Uint16(_1000027);
                _1000021 = _1000026;
            }
            else UNHANDLED("Binary.carp", 112);
            _1000016 = _1000021;
        }
        else UNHANDLED("Binary.carp", 112);
        _83 = _1000016;
    }
    else UNHANDLED("Binary.carp", 112);
    return _83;
}

Pair__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint16_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int16, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int16 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16(_15, order);
        Lambda f = _17;
        Pair__Array__Uint16_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint16_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint16_Array__uint8_t(_24, _27);
            Array__Result__Uint16_Array__uint8_t results = _28;
            Array__Result__Uint16_Array__uint8_t* _34 = &results; // ref
            Array__Uint16 _35 = Binary_interpreted__Uint16_Array__uint8_t(_34);
            Array__Result__Uint16_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint16_uint8_t(_39);
            Pair__Array__Uint16_int _41 = Pair_init__Array__Uint16_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint16_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint16_int Binary_bytes_MINUS__GT_int16_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint16_int _46;
    /* let */ {
        Pair__Array__Uint16_int _10 = Binary_bytes_MINUS__GT_int16_MINUS_seq(order, bs);
        Pair__Array__Uint16_int r = _10;
        Result__Array__Uint16_int _45;
        Pair__Array__Uint16_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint16_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint16_int* _29 = &r; // ref
            Array__Uint16* _30 = Pair_a__Array__Uint16_int(_29);
            Array__Uint16 _31 = Array_copy__Uint16(_30);
            Result__Array__Uint16_int _32 = Result_Success__Array__Uint16_int(_31);
            Result__Array__Uint16_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint16_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint16_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint16_int _43 = Result_Error__int_Array__Uint16(_42);
            Result__Array__Uint16_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint16_int(r);
    }
    return _46;
}

Maybe__Uint32 Binary_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint32 _139;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint32 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint32 _1000006 = Maybe_Nothing__Uint32();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1013 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint32 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint32 _1000011 = Maybe_Nothing__Uint32();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1014 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint32 _1000013;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint32 _1000016 = Maybe_Nothing__Uint32();
                    _1000013 = _1000016;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1015 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint32 _1000018;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint32 _1000021 = Maybe_Nothing__Uint32();
                        _1000018 = _1000021;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1016 = _49_temp.u.Just.member0;
                        // Case expr:
                        Lambda _60 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _61 = &_60; // ref
                        Uint32 _1000024 = (*_61).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)((*_61).env, zip1013, zip1014, zip1015, zip1016) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_61).callback)(zip1013, zip1014, zip1015, zip1016);
                        Maybe__Uint32 _1000023 = Maybe_Just__Uint32(_1000024);
                        _1000018 = _1000023;
                    }
                    else UNHANDLED("Binary.carp", 186);
                    _1000013 = _1000018;
                }
                else UNHANDLED("Binary.carp", 186);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 186);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 186);
        _139 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _79 = Array_nth__uint8_t(bs, 3);
        Maybe__Uint32 _1000026;
        if(_79._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _79_temp = _79;
            // Case expr:
            Maybe__Uint32 _1000029 = Maybe_Nothing__Uint32();
            _1000026 = _1000029;
        }
        else if(_79._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _79_temp = _79;
            uint8_t zip1017 = _79_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _91 = Array_nth__uint8_t(bs, 2);
            Maybe__Uint32 _1000031;
            if(_91._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _91_temp = _91;
                // Case expr:
                Maybe__Uint32 _1000034 = Maybe_Nothing__Uint32();
                _1000031 = _1000034;
            }
            else if(_91._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _91_temp = _91;
                uint8_t zip1018 = _91_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _103 = Array_nth__uint8_t(bs, 1);
                Maybe__Uint32 _1000036;
                if(_103._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    // Case expr:
                    Maybe__Uint32 _1000039 = Maybe_Nothing__Uint32();
                    _1000036 = _1000039;
                }
                else if(_103._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _103_temp = _103;
                    uint8_t zip1019 = _103_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _115 = Array_nth__uint8_t(bs, 0);
                    Maybe__Uint32 _1000041;
                    if(_115._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        // Case expr:
                        Maybe__Uint32 _1000044 = Maybe_Nothing__Uint32();
                        _1000041 = _1000044;
                    }
                    else if(_115._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _115_temp = _115;
                        uint8_t zip1020 = _115_temp.u.Just.member0;
                        // Case expr:
                        Lambda _126 = { .callback = (void*)Binary_to_MINUS_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int32 (LookupGlobal ExternalCode AFunction)
                        Lambda* _127 = &_126; // ref
                        Uint32 _1000047 = (*_127).env ? ((Uint32(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)((*_127).env, zip1017, zip1018, zip1019, zip1020) : ((Uint32(*)(uint8_t, uint8_t, uint8_t, uint8_t))(*_127).callback)(zip1017, zip1018, zip1019, zip1020);
                        Maybe__Uint32 _1000046 = Maybe_Just__Uint32(_1000047);
                        _1000041 = _1000046;
                    }
                    else UNHANDLED("Binary.carp", 186);
                    _1000036 = _1000041;
                }
                else UNHANDLED("Binary.carp", 186);
                _1000031 = _1000036;
            }
            else UNHANDLED("Binary.carp", 186);
            _1000026 = _1000031;
        }
        else UNHANDLED("Binary.carp", 186);
        _139 = _1000026;
    }
    else UNHANDLED("Binary.carp", 186);
    return _139;
}

Pair__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint32_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int32, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int32 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32(_15, order);
        Lambda f = _17;
        Pair__Array__Uint32_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint32_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint32_Array__uint8_t(_24, _27);
            Array__Result__Uint32_Array__uint8_t results = _28;
            Array__Result__Uint32_Array__uint8_t* _34 = &results; // ref
            Array__Uint32 _35 = Binary_interpreted__Uint32_Array__uint8_t(_34);
            Array__Result__Uint32_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint32_uint8_t(_39);
            Pair__Array__Uint32_int _41 = Pair_init__Array__Uint32_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint32_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint32_int Binary_bytes_MINUS__GT_int32_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint32_int _46;
    /* let */ {
        Pair__Array__Uint32_int _10 = Binary_bytes_MINUS__GT_int32_MINUS_seq(order, bs);
        Pair__Array__Uint32_int r = _10;
        Result__Array__Uint32_int _45;
        Pair__Array__Uint32_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint32_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint32_int* _29 = &r; // ref
            Array__Uint32* _30 = Pair_a__Array__Uint32_int(_29);
            Array__Uint32 _31 = Array_copy__Uint32(_30);
            Result__Array__Uint32_int _32 = Result_Success__Array__Uint32_int(_31);
            Result__Array__Uint32_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint32_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint32_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint32_int _43 = Result_Error__int_Array__Uint32(_42);
            Result__Array__Uint32_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint32_int(r);
    }
    return _46;
}

Maybe__Uint64 Binary_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Maybe__Uint64 _251;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _13 = Array_nth__uint8_t(bs, 0);
        Maybe__Uint64 _1000003;
        if(_13._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _13_temp = _13;
            // Case expr:
            Maybe__Uint64 _1000006 = Maybe_Nothing__Uint64();
            _1000003 = _1000006;
        }
        else if(_13._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _13_temp = _13;
            uint8_t zip1021 = _13_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _25 = Array_nth__uint8_t(bs, 1);
            Maybe__Uint64 _1000008;
            if(_25._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _25_temp = _25;
                // Case expr:
                Maybe__Uint64 _1000011 = Maybe_Nothing__Uint64();
                _1000008 = _1000011;
            }
            else if(_25._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _25_temp = _25;
                uint8_t zip1022 = _25_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _37 = Array_nth__uint8_t(bs, 2);
                Maybe__Uint64 _1000013;
                if(_37._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    // Case expr:
                    Maybe__Uint64 _1000016 = Maybe_Nothing__Uint64();
                    _1000013 = _1000016;
                }
                else if(_37._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _37_temp = _37;
                    uint8_t zip1023 = _37_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _49 = Array_nth__uint8_t(bs, 3);
                    Maybe__Uint64 _1000018;
                    if(_49._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        // Case expr:
                        Maybe__Uint64 _1000021 = Maybe_Nothing__Uint64();
                        _1000018 = _1000021;
                    }
                    else if(_49._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _49_temp = _49;
                        uint8_t zip1024 = _49_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _61 = Array_nth__uint8_t(bs, 4);
                        Maybe__Uint64 _1000023;
                        if(_61._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            // Case expr:
                            Maybe__Uint64 _1000026 = Maybe_Nothing__Uint64();
                            _1000023 = _1000026;
                        }
                        else if(_61._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _61_temp = _61;
                            uint8_t zip1025 = _61_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _73 = Array_nth__uint8_t(bs, 5);
                            Maybe__Uint64 _1000028;
                            if(_73._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                // Case expr:
                                Maybe__Uint64 _1000031 = Maybe_Nothing__Uint64();
                                _1000028 = _1000031;
                            }
                            else if(_73._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _73_temp = _73;
                                uint8_t zip1026 = _73_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _85 = Array_nth__uint8_t(bs, 6);
                                Maybe__Uint64 _1000033;
                                if(_85._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    // Case expr:
                                    Maybe__Uint64 _1000036 = Maybe_Nothing__Uint64();
                                    _1000033 = _1000036;
                                }
                                else if(_85._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _85_temp = _85;
                                    uint8_t zip1027 = _85_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _97 = Array_nth__uint8_t(bs, 7);
                                    Maybe__Uint64 _1000038;
                                    if(_97._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        // Case expr:
                                        Maybe__Uint64 _1000041 = Maybe_Nothing__Uint64();
                                        _1000038 = _1000041;
                                    }
                                    else if(_97._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _97_temp = _97;
                                        uint8_t zip1028 = _97_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _108 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _109 = &_108; // ref
                                        Uint64 _1000044 = (*_109).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)((*_109).env, zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_109).callback)(zip1021, zip1022, zip1023, zip1024, zip1025, zip1026, zip1027, zip1028);
                                        Maybe__Uint64 _1000043 = Maybe_Just__Uint64(_1000044);
                                        _1000038 = _1000043;
                                    }
                                    else UNHANDLED("Binary.carp", 269);
                                    _1000033 = _1000038;
                                }
                                else UNHANDLED("Binary.carp", 269);
                                _1000028 = _1000033;
                            }
                            else UNHANDLED("Binary.carp", 269);
                            _1000023 = _1000028;
                        }
                        else UNHANDLED("Binary.carp", 269);
                        _1000018 = _1000023;
                    }
                    else UNHANDLED("Binary.carp", 269);
                    _1000013 = _1000018;
                }
                else UNHANDLED("Binary.carp", 269);
                _1000008 = _1000013;
            }
            else UNHANDLED("Binary.carp", 269);
            _1000003 = _1000008;
        }
        else UNHANDLED("Binary.carp", 269);
        _251 = _1000003;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Maybe__uint8_t _135 = Array_nth__uint8_t(bs, 7);
        Maybe__Uint64 _1000046;
        if(_135._tag == Maybe__uint8_t_Nothing_tag) {
            Maybe__uint8_t _135_temp = _135;
            // Case expr:
            Maybe__Uint64 _1000049 = Maybe_Nothing__Uint64();
            _1000046 = _1000049;
        }
        else if(_135._tag == Maybe__uint8_t_Just_tag) {
            Maybe__uint8_t _135_temp = _135;
            uint8_t zip1029 = _135_temp.u.Just.member0;
            // Case expr:
            Maybe__uint8_t _147 = Array_nth__uint8_t(bs, 6);
            Maybe__Uint64 _1000051;
            if(_147._tag == Maybe__uint8_t_Nothing_tag) {
                Maybe__uint8_t _147_temp = _147;
                // Case expr:
                Maybe__Uint64 _1000054 = Maybe_Nothing__Uint64();
                _1000051 = _1000054;
            }
            else if(_147._tag == Maybe__uint8_t_Just_tag) {
                Maybe__uint8_t _147_temp = _147;
                uint8_t zip1030 = _147_temp.u.Just.member0;
                // Case expr:
                Maybe__uint8_t _159 = Array_nth__uint8_t(bs, 5);
                Maybe__Uint64 _1000056;
                if(_159._tag == Maybe__uint8_t_Nothing_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    // Case expr:
                    Maybe__Uint64 _1000059 = Maybe_Nothing__Uint64();
                    _1000056 = _1000059;
                }
                else if(_159._tag == Maybe__uint8_t_Just_tag) {
                    Maybe__uint8_t _159_temp = _159;
                    uint8_t zip1031 = _159_temp.u.Just.member0;
                    // Case expr:
                    Maybe__uint8_t _171 = Array_nth__uint8_t(bs, 4);
                    Maybe__Uint64 _1000061;
                    if(_171._tag == Maybe__uint8_t_Nothing_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        // Case expr:
                        Maybe__Uint64 _1000064 = Maybe_Nothing__Uint64();
                        _1000061 = _1000064;
                    }
                    else if(_171._tag == Maybe__uint8_t_Just_tag) {
                        Maybe__uint8_t _171_temp = _171;
                        uint8_t zip1032 = _171_temp.u.Just.member0;
                        // Case expr:
                        Maybe__uint8_t _183 = Array_nth__uint8_t(bs, 3);
                        Maybe__Uint64 _1000066;
                        if(_183._tag == Maybe__uint8_t_Nothing_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            // Case expr:
                            Maybe__Uint64 _1000069 = Maybe_Nothing__Uint64();
                            _1000066 = _1000069;
                        }
                        else if(_183._tag == Maybe__uint8_t_Just_tag) {
                            Maybe__uint8_t _183_temp = _183;
                            uint8_t zip1033 = _183_temp.u.Just.member0;
                            // Case expr:
                            Maybe__uint8_t _195 = Array_nth__uint8_t(bs, 2);
                            Maybe__Uint64 _1000071;
                            if(_195._tag == Maybe__uint8_t_Nothing_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                // Case expr:
                                Maybe__Uint64 _1000074 = Maybe_Nothing__Uint64();
                                _1000071 = _1000074;
                            }
                            else if(_195._tag == Maybe__uint8_t_Just_tag) {
                                Maybe__uint8_t _195_temp = _195;
                                uint8_t zip1034 = _195_temp.u.Just.member0;
                                // Case expr:
                                Maybe__uint8_t _207 = Array_nth__uint8_t(bs, 1);
                                Maybe__Uint64 _1000076;
                                if(_207._tag == Maybe__uint8_t_Nothing_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    // Case expr:
                                    Maybe__Uint64 _1000079 = Maybe_Nothing__Uint64();
                                    _1000076 = _1000079;
                                }
                                else if(_207._tag == Maybe__uint8_t_Just_tag) {
                                    Maybe__uint8_t _207_temp = _207;
                                    uint8_t zip1035 = _207_temp.u.Just.member0;
                                    // Case expr:
                                    Maybe__uint8_t _219 = Array_nth__uint8_t(bs, 0);
                                    Maybe__Uint64 _1000081;
                                    if(_219._tag == Maybe__uint8_t_Nothing_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        // Case expr:
                                        Maybe__Uint64 _1000084 = Maybe_Nothing__Uint64();
                                        _1000081 = _1000084;
                                    }
                                    else if(_219._tag == Maybe__uint8_t_Just_tag) {
                                        Maybe__uint8_t _219_temp = _219;
                                        uint8_t zip1036 = _219_temp.u.Just.member0;
                                        // Case expr:
                                        Lambda _230 = { .callback = (void*)Binary_to_MINUS_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.to-int64 (LookupGlobal ExternalCode AFunction)
                                        Lambda* _231 = &_230; // ref
                                        Uint64 _1000087 = (*_231).env ? ((Uint64(*)(LambdaEnv, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)((*_231).env, zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036) : ((Uint64(*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t))(*_231).callback)(zip1029, zip1030, zip1031, zip1032, zip1033, zip1034, zip1035, zip1036);
                                        Maybe__Uint64 _1000086 = Maybe_Just__Uint64(_1000087);
                                        _1000081 = _1000086;
                                    }
                                    else UNHANDLED("Binary.carp", 269);
                                    _1000076 = _1000081;
                                }
                                else UNHANDLED("Binary.carp", 269);
                                _1000071 = _1000076;
                            }
                            else UNHANDLED("Binary.carp", 269);
                            _1000066 = _1000071;
                        }
                        else UNHANDLED("Binary.carp", 269);
                        _1000061 = _1000066;
                    }
                    else UNHANDLED("Binary.carp", 269);
                    _1000056 = _1000061;
                }
                else UNHANDLED("Binary.carp", 269);
                _1000051 = _1000056;
            }
            else UNHANDLED("Binary.carp", 269);
            _1000046 = _1000051;
        }
        else UNHANDLED("Binary.carp", 269);
        _251 = _1000046;
    }
    else UNHANDLED("Binary.carp", 269);
    return _251;
}

Pair__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Pair__Array__Uint64_int _43;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        Lambda _14 = { .callback = (void*)Binary_bytes_MINUS__GT_int64, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.bytes->int64 (LookupGlobal CarpLand AFunction)
        Lambda* _15 = &_14; // ref
        Lambda _17 = Binary_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64(_15, order);
        Lambda f = _17;
        Pair__Array__Uint64_int _42;
        /* let */ {
            Lambda* _24 = &f; // ref
            Array__Array__uint8_t* _27 = &partitions; // ref
            Array__Result__Uint64_Array__uint8_t _28 = Array_copy_MINUS_map__Array__uint8_t_Result__Uint64_Array__uint8_t(_24, _27);
            Array__Result__Uint64_Array__uint8_t results = _28;
            Array__Result__Uint64_Array__uint8_t* _34 = &results; // ref
            Array__Uint64 _35 = Binary_interpreted__Uint64_Array__uint8_t(_34);
            Array__Result__Uint64_Array__uint8_t* _39 = &results; // ref
            int _40 = Binary_remaining_MINUS_bytes__Uint64_uint8_t(_39);
            Pair__Array__Uint64_int _41 = Pair_init__Array__Uint64_int(_35, _40);
            _42 = _41;
            Array_delete__Result__Uint64_Array__uint8_t(results);
        }
        _43 = _42;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t(f);
    }
    return _43;
}

Result__Array__Uint64_int Binary_bytes_MINUS__GT_int64_MINUS_seq_MINUS_exact(ByteOrder order, Array__uint8_t* bs) {
    Result__Array__Uint64_int _46;
    /* let */ {
        Pair__Array__Uint64_int _10 = Binary_bytes_MINUS__GT_int64_MINUS_seq(order, bs);
        Pair__Array__Uint64_int r = _10;
        Result__Array__Uint64_int _45;
        Pair__Array__Uint64_int* _19 = &r; // ref
        int* _20 = Pair_b__Array__Uint64_int(_19);
        int _21 = Int_copy(_20);
        bool _22 = Int__EQ_(0, _21);
        if (_22) {
            Pair__Array__Uint64_int* _29 = &r; // ref
            Array__Uint64* _30 = Pair_a__Array__Uint64_int(_29);
            Array__Uint64 _31 = Array_copy__Uint64(_30);
            Result__Array__Uint64_int _32 = Result_Success__Array__Uint64_int(_31);
            Result__Array__Uint64_int _33 = _32;
            _45 = _33;
        } else {
            Pair__Array__Uint64_int* _40 = &r; // ref
            int* _41 = Pair_b__Array__Uint64_int(_40);
            int _42 = Int_copy(_41);
            Result__Array__Uint64_int _43 = Result_Error__int_Array__Uint64(_42);
            Result__Array__Uint64_int _44 = _43;
            _45 = _44;
        }
        _46 = _45;
        Pair_delete__Array__Uint64_int(r);
    }
    return _46;
}

Array__uint8_t Binary_int16_MINUS__GT_bytes(ByteOrder order, Uint16 i) {
    Array__uint8_t _41;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _11 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _12 = &_11; // ref
        Array _21 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        ((Uint16*)_21.data)[0] = i;
        Uint16 _19 = Uint16_from_MINUS_long(8l);
        Uint16 _20 = Uint16_bit_MINUS_shift_MINUS_right(i, _19);
        ((Uint16*)_21.data)[1] = _20;
        Array__Uint16* _22 = &_21; // ref
        Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_uint8_t(_12, _22);
        _41 = _23;
        Array_delete__Uint16(_21);
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        Lambda _28 = { .callback = (void*)Binary_int16_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int16-to-byte (LookupGlobal ExternalCode AFunction)
        Lambda* _29 = &_28; // ref
        Array _38 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(Uint16) * 2) };
        Uint16 _35 = Uint16_from_MINUS_long(8l);
        Uint16 _36 = Uint16_bit_MINUS_shift_MINUS_right(i, _35);
        ((Uint16*)_38.data)[0] = _36;
        ((Uint16*)_38.data)[1] = i;
        Array__Uint16* _39 = &_38; // ref
        Array__uint8_t _40 = Array_copy_MINUS_map__Uint16_uint8_t(_29, _39);
        _41 = _40;
        Array_delete__Uint16(_38);
    }
    else UNHANDLED("Binary.carp", 122);
    return _41;
}

Array__Array__uint8_t Binary_int16_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint16* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint16_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint16_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int32_MINUS__GT_bytes(ByteOrder order, Uint32 i) {
    Array__uint8_t _61;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _60;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _37 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            ((Uint32*)_37.data)[0] = i;
            Uint32 _30 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_37.data)[1] = _30;
            Uint32 _33 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_37.data)[2] = _33;
            Uint32 _36 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_37.data)[3] = _36;
            Array__Uint32* _38 = &_37; // ref
            Array__uint8_t _39 = Array_copy_MINUS_map__Uint32_uint8_t(_25, _38);
            _60 = _39;
            Array_delete__Uint32(_37);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _44 = { .callback = (void*)Binary_int32_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int32-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _45 = &_44; // ref
            Array _57 = { .len = 4, .capacity = 4, .data = CARP_MALLOC(sizeof(Uint32) * 4) };
            Uint32 _49 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint32(*)(Long))shift.callback)(24l);
            ((Uint32*)_57.data)[0] = _49;
            Uint32 _52 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint32(*)(Long))shift.callback)(16l);
            ((Uint32*)_57.data)[1] = _52;
            Uint32 _55 = shift.env ? ((Uint32(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint32(*)(Long))shift.callback)(8l);
            ((Uint32*)_57.data)[2] = _55;
            ((Uint32*)_57.data)[3] = i;
            Array__Uint32* _58 = &_57; // ref
            Array__uint8_t _59 = Array_copy_MINUS_map__Uint32_uint8_t(_45, _58);
            _60 = _59;
            Array_delete__Uint32(_57);
        }
        else UNHANDLED("Binary.carp", 199);
        _61 = _60;
        Function_delete__Long_Uint32(shift);
    }
    return _61;
}

Array__Array__uint8_t Binary_int32_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint32* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint32_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint32_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__uint8_t Binary_int64_MINUS__GT_bytes(ByteOrder order, Uint64 i) {
    Array__uint8_t _85;
    /* let */ {
        // This lambda captures 1 variables: i
        Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty));
        _16_env->i = i;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda shift = _16;
        Array__uint8_t _84;
        if(order._tag == ByteOrder_LittleEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _24 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _25 = &_24; // ref
            Array _49 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            ((Uint64*)_49.data)[0] = i;
            Uint64 _30 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_49.data)[1] = _30;
            Uint64 _33 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_49.data)[2] = _33;
            Uint64 _36 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_49.data)[3] = _36;
            Uint64 _39 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_49.data)[4] = _39;
            Uint64 _42 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_49.data)[5] = _42;
            Uint64 _45 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_49.data)[6] = _45;
            Uint64 _48 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_49.data)[7] = _48;
            Array__Uint64* _50 = &_49; // ref
            Array__uint8_t _51 = Array_copy_MINUS_map__Uint64_uint8_t(_25, _50);
            _84 = _51;
            Array_delete__Uint64(_49);
        }
        else if(order._tag == ByteOrder_BigEndian_tag) {
            ByteOrder _19_temp = order;
            // Case expr:
            Lambda _56 = { .callback = (void*)Binary_int64_MINUS_to_MINUS_byte, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.int64-to-byte (LookupGlobal ExternalCode AFunction)
            Lambda* _57 = &_56; // ref
            Array _81 = { .len = 8, .capacity = 8, .data = CARP_MALLOC(sizeof(Uint64) * 8) };
            Uint64 _61 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 56l) : ((Uint64(*)(Long))shift.callback)(56l);
            ((Uint64*)_81.data)[0] = _61;
            Uint64 _64 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 48l) : ((Uint64(*)(Long))shift.callback)(48l);
            ((Uint64*)_81.data)[1] = _64;
            Uint64 _67 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 40l) : ((Uint64(*)(Long))shift.callback)(40l);
            ((Uint64*)_81.data)[2] = _67;
            Uint64 _70 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 32l) : ((Uint64(*)(Long))shift.callback)(32l);
            ((Uint64*)_81.data)[3] = _70;
            Uint64 _73 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 24l) : ((Uint64(*)(Long))shift.callback)(24l);
            ((Uint64*)_81.data)[4] = _73;
            Uint64 _76 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 16l) : ((Uint64(*)(Long))shift.callback)(16l);
            ((Uint64*)_81.data)[5] = _76;
            Uint64 _79 = shift.env ? ((Uint64(*)(LambdaEnv, Long))shift.callback)(shift.env, 8l) : ((Uint64(*)(Long))shift.callback)(8l);
            ((Uint64*)_81.data)[6] = _79;
            ((Uint64*)_81.data)[7] = i;
            Array__Uint64* _82 = &_81; // ref
            Array__uint8_t _83 = Array_copy_MINUS_map__Uint64_uint8_t(_57, _82);
            _84 = _83;
            Array_delete__Uint64(_81);
        }
        else UNHANDLED("Binary.carp", 285);
        _85 = _84;
        Function_delete__Long_Uint64(shift);
    }
    return _85;
}

Array__Array__uint8_t Binary_int64_MINUS_seq_MINUS__GT_bytes(ByteOrder order, Array__Uint64* is) {
    Array__Array__uint8_t _24;
    /* let */ {
        // This lambda captures 1 variables: order
        Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty *_16_env = CARP_MALLOC(sizeof(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty));
        _16_env->order = order;
        Lambda _16 = {
          .callback = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env,
          .env = _16_env,
          .delete = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete,
          .copy = (void*)Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy
        };
        Lambda f = _16;
        Lambda* _21 = &f; // ref
        Array__Array__uint8_t _23 = Array_copy_MINUS_map__Uint64_Array__uint8_t(_21, is);
        _24 = _23;
        Function_delete__Uint64_MUL__Array__uint8_t(f);
    }
    return _24;
}

Array__Uint16 Binary_interpreted__Uint16_Array__uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint16_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_12, results);
    Array__Result__Uint16_Array__uint8_t* _15 = &_14; // ref
    Array__Uint16 _16 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Uint16(_7, _15);
    Array_delete__Result__Uint16_Array__uint8_t(_14);
    return _16;
}

Array__Uint32 Binary_interpreted__Uint32_Array__uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint32_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_12, results);
    Array__Result__Uint32_Array__uint8_t* _15 = &_14; // ref
    Array__Uint32 _16 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Uint32(_7, _15);
    Array_delete__Result__Uint32_Array__uint8_t(_14);
    return _16;
}

Array__Uint64 Binary_interpreted__Uint64_Array__uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    Lambda _6 = { .callback = (void*)Binary_unwrap_MINUS_success__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-success__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _7 = &_6; // ref
    Lambda _11 = { .callback = (void*)Result_success_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.success?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _12 = &_11; // ref
    Array__Result__Uint64_Array__uint8_t _14 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_12, results);
    Array__Result__Uint64_Array__uint8_t* _15 = &_14; // ref
    Array__Uint64 _16 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Uint64(_7, _15);
    Array_delete__Result__Uint64_Array__uint8_t(_14);
    return _16;
}

int Binary_remaining_MINUS_bytes__Uint16_uint8_t(Array__Result__Uint16_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint16_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint16_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint16_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint16_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint16_Array__uint8_t(_33, results);
    Array__Result__Uint16_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint16_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint16_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint32_uint8_t(Array__Result__Uint32_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint32_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint32_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint32_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint32_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint32_Array__uint8_t(_33, results);
    Array__Result__Uint32_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint32_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint32_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

int Binary_remaining_MINUS_bytes__Uint64_uint8_t(Array__Result__Uint64_Array__uint8_t* results) {
    // This lambda captures 0 variables: 
    Lambda _16 = {
      .callback = (void*)Binary__Lambda_remaining_MINUS_bytes__Uint64_uint8_t_16_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _17 = &_16; // ref
    Lambda _22 = { .callback = (void*)Array_length__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Array.length__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _23 = &_22; // ref
    Lambda _27 = { .callback = (void*)Binary_unwrap_MINUS_error__Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Binary.unwrap-error__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _28 = &_27; // ref
    Lambda _32 = { .callback = (void*)Result_error_QMARK___Uint64_Array__uint8_t, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.error?__Uint64_Array__uint8_t (LookupGlobal CarpLand AFunction)
    Lambda* _33 = &_32; // ref
    Array__Result__Uint64_Array__uint8_t _35 = Array_copy_MINUS_filter__Result__Uint64_Array__uint8_t(_33, results);
    Array__Result__Uint64_Array__uint8_t* _36 = &_35; // ref
    Array__Array__uint8_t _37 = Array_copy_MINUS_map__Result__Uint64_Array__uint8_t_Array__uint8_t(_28, _36);
    Array__Array__uint8_t* _38 = &_37; // ref
    Array__int _39 = Array_copy_MINUS_map__Array__uint8_t_int(_23, _38);
    Array__int* _40 = &_39; // ref
    int _41 = Array_reduce__int_int(_17, 0, _40);
    Array_delete__Array__uint8_t(_37);
    Array_delete__Result__Uint64_Array__uint8_t(_35);
    Array_delete__int(_39);
    Function_delete__int_int_MUL__int(_16);
    return _41;
}

ByteOrder Binary_system_MINUS_endianness() {
    ByteOrder _17;
    int _6 = Binary_system_MINUS_endianness_MINUS_internal();
    bool _8 = Int__EQ_(_6, 1);
    if (_8) {
        ByteOrder _11 = ByteOrder_LittleEndian();
        ByteOrder _12 = _11;
        _17 = _12;
    } else {
        ByteOrder _15 = ByteOrder_BigEndian();
        ByteOrder _16 = _15;
        _17 = _16;
    }
    return _17;
}

String Binary_to_MINUS_hex_MINUS_str(uint8_t b) {
    String _525;
    /* let */ {
        uint8_t _10 = Byte_from_MINUS_int(240);
        uint8_t _11 = Byte_bit_MINUS_and(b, _10);
        uint8_t hi = _11;
        uint8_t _17 = Byte_from_MINUS_int(4);
        uint8_t _18 = Byte_bit_MINUS_shift_MINUS_left(b, _17);
        uint8_t lo = _18;
        String _267;
        /* let */ {
            uint8_t gensym_MINUS_generated1037 = hi;
            String _266;
            uint8_t _29 = Byte_from_MINUS_int(0);
            bool _30 = Byte__EQ_(gensym_MINUS_generated1037, _29);
            if (_30) {
                static String _33 = "0";
                String *_33_ref = &_33;
                String _34 = String_copy(_33_ref);
                String _35 = _34;
                _266 = _35;
            } else {
                String _264;
                uint8_t _42 = Byte_from_MINUS_int(16);
                bool _43 = Byte__EQ_(gensym_MINUS_generated1037, _42);
                if (_43) {
                    static String _46 = "1";
                    String *_46_ref = &_46;
                    String _47 = String_copy(_46_ref);
                    String _48 = _47;
                    _264 = _48;
                } else {
                    String _262;
                    uint8_t _55 = Byte_from_MINUS_int(32);
                    bool _56 = Byte__EQ_(gensym_MINUS_generated1037, _55);
                    if (_56) {
                        static String _59 = "2";
                        String *_59_ref = &_59;
                        String _60 = String_copy(_59_ref);
                        String _61 = _60;
                        _262 = _61;
                    } else {
                        String _260;
                        uint8_t _68 = Byte_from_MINUS_int(48);
                        bool _69 = Byte__EQ_(gensym_MINUS_generated1037, _68);
                        if (_69) {
                            static String _72 = "3";
                            String *_72_ref = &_72;
                            String _73 = String_copy(_72_ref);
                            String _74 = _73;
                            _260 = _74;
                        } else {
                            String _258;
                            uint8_t _81 = Byte_from_MINUS_int(64);
                            bool _82 = Byte__EQ_(gensym_MINUS_generated1037, _81);
                            if (_82) {
                                static String _85 = "4";
                                String *_85_ref = &_85;
                                String _86 = String_copy(_85_ref);
                                String _87 = _86;
                                _258 = _87;
                            } else {
                                String _256;
                                uint8_t _94 = Byte_from_MINUS_int(80);
                                bool _95 = Byte__EQ_(gensym_MINUS_generated1037, _94);
                                if (_95) {
                                    static String _98 = "5";
                                    String *_98_ref = &_98;
                                    String _99 = String_copy(_98_ref);
                                    String _100 = _99;
                                    _256 = _100;
                                } else {
                                    String _254;
                                    uint8_t _107 = Byte_from_MINUS_int(96);
                                    bool _108 = Byte__EQ_(gensym_MINUS_generated1037, _107);
                                    if (_108) {
                                        static String _111 = "6";
                                        String *_111_ref = &_111;
                                        String _112 = String_copy(_111_ref);
                                        String _113 = _112;
                                        _254 = _113;
                                    } else {
                                        String _252;
                                        uint8_t _120 = Byte_from_MINUS_int(112);
                                        bool _121 = Byte__EQ_(gensym_MINUS_generated1037, _120);
                                        if (_121) {
                                            static String _124 = "7";
                                            String *_124_ref = &_124;
                                            String _125 = String_copy(_124_ref);
                                            String _126 = _125;
                                            _252 = _126;
                                        } else {
                                            String _250;
                                            uint8_t _133 = Byte_from_MINUS_int(128);
                                            bool _134 = Byte__EQ_(gensym_MINUS_generated1037, _133);
                                            if (_134) {
                                                static String _137 = "8";
                                                String *_137_ref = &_137;
                                                String _138 = String_copy(_137_ref);
                                                String _139 = _138;
                                                _250 = _139;
                                            } else {
                                                String _248;
                                                uint8_t _146 = Byte_from_MINUS_int(144);
                                                bool _147 = Byte__EQ_(gensym_MINUS_generated1037, _146);
                                                if (_147) {
                                                    static String _150 = "9";
                                                    String *_150_ref = &_150;
                                                    String _151 = String_copy(_150_ref);
                                                    String _152 = _151;
                                                    _248 = _152;
                                                } else {
                                                    String _246;
                                                    uint8_t _159 = Byte_from_MINUS_int(160);
                                                    bool _160 = Byte__EQ_(gensym_MINUS_generated1037, _159);
                                                    if (_160) {
                                                        static String _163 = "A";
                                                        String *_163_ref = &_163;
                                                        String _164 = String_copy(_163_ref);
                                                        String _165 = _164;
                                                        _246 = _165;
                                                    } else {
                                                        String _244;
                                                        uint8_t _172 = Byte_from_MINUS_int(176);
                                                        bool _173 = Byte__EQ_(gensym_MINUS_generated1037, _172);
                                                        if (_173) {
                                                            static String _176 = "B";
                                                            String *_176_ref = &_176;
                                                            String _177 = String_copy(_176_ref);
                                                            String _178 = _177;
                                                            _244 = _178;
                                                        } else {
                                                            String _242;
                                                            uint8_t _185 = Byte_from_MINUS_int(192);
                                                            bool _186 = Byte__EQ_(gensym_MINUS_generated1037, _185);
                                                            if (_186) {
                                                                static String _189 = "C";
                                                                String *_189_ref = &_189;
                                                                String _190 = String_copy(_189_ref);
                                                                String _191 = _190;
                                                                _242 = _191;
                                                            } else {
                                                                String _240;
                                                                uint8_t _198 = Byte_from_MINUS_int(208);
                                                                bool _199 = Byte__EQ_(gensym_MINUS_generated1037, _198);
                                                                if (_199) {
                                                                    static String _202 = "D";
                                                                    String *_202_ref = &_202;
                                                                    String _203 = String_copy(_202_ref);
                                                                    String _204 = _203;
                                                                    _240 = _204;
                                                                } else {
                                                                    String _238;
                                                                    uint8_t _211 = Byte_from_MINUS_int(224);
                                                                    bool _212 = Byte__EQ_(gensym_MINUS_generated1037, _211);
                                                                    if (_212) {
                                                                        static String _215 = "E";
                                                                        String *_215_ref = &_215;
                                                                        String _216 = String_copy(_215_ref);
                                                                        String _217 = _216;
                                                                        _238 = _217;
                                                                    } else {
                                                                        String _236;
                                                                        uint8_t _224 = Byte_from_MINUS_int(240);
                                                                        bool _225 = Byte__EQ_(gensym_MINUS_generated1037, _224);
                                                                        if (_225) {
                                                                            static String _228 = "F";
                                                                            String *_228_ref = &_228;
                                                                            String _229 = String_copy(_228_ref);
                                                                            String _230 = _229;
                                                                            _236 = _230;
                                                                        } else {
                                                                            static String _233 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_233_ref = &_233;
                                                                            String _234 = String_copy(_233_ref);
                                                                            String _235 = _234;
                                                                            _236 = _235;
                                                                        }
                                                                        String _237 = _236;
                                                                        _238 = _237;
                                                                    }
                                                                    String _239 = _238;
                                                                    _240 = _239;
                                                                }
                                                                String _241 = _240;
                                                                _242 = _241;
                                                            }
                                                            String _243 = _242;
                                                            _244 = _243;
                                                        }
                                                        String _245 = _244;
                                                        _246 = _245;
                                                    }
                                                    String _247 = _246;
                                                    _248 = _247;
                                                }
                                                String _249 = _248;
                                                _250 = _249;
                                            }
                                            String _251 = _250;
                                            _252 = _251;
                                        }
                                        String _253 = _252;
                                        _254 = _253;
                                    }
                                    String _255 = _254;
                                    _256 = _255;
                                }
                                String _257 = _256;
                                _258 = _257;
                            }
                            String _259 = _258;
                            _260 = _259;
                        }
                        String _261 = _260;
                        _262 = _261;
                    }
                    String _263 = _262;
                    _264 = _263;
                }
                String _265 = _264;
                _266 = _265;
            }
            _267 = _266;
        }
        String nib_MINUS_one = _267;
        String _516;
        /* let */ {
            uint8_t gensym_MINUS_generated1038 = lo;
            String _515;
            uint8_t _278 = Byte_from_MINUS_int(0);
            bool _279 = Byte__EQ_(gensym_MINUS_generated1038, _278);
            if (_279) {
                static String _282 = "0";
                String *_282_ref = &_282;
                String _283 = String_copy(_282_ref);
                String _284 = _283;
                _515 = _284;
            } else {
                String _513;
                uint8_t _291 = Byte_from_MINUS_int(16);
                bool _292 = Byte__EQ_(gensym_MINUS_generated1038, _291);
                if (_292) {
                    static String _295 = "1";
                    String *_295_ref = &_295;
                    String _296 = String_copy(_295_ref);
                    String _297 = _296;
                    _513 = _297;
                } else {
                    String _511;
                    uint8_t _304 = Byte_from_MINUS_int(32);
                    bool _305 = Byte__EQ_(gensym_MINUS_generated1038, _304);
                    if (_305) {
                        static String _308 = "2";
                        String *_308_ref = &_308;
                        String _309 = String_copy(_308_ref);
                        String _310 = _309;
                        _511 = _310;
                    } else {
                        String _509;
                        uint8_t _317 = Byte_from_MINUS_int(48);
                        bool _318 = Byte__EQ_(gensym_MINUS_generated1038, _317);
                        if (_318) {
                            static String _321 = "3";
                            String *_321_ref = &_321;
                            String _322 = String_copy(_321_ref);
                            String _323 = _322;
                            _509 = _323;
                        } else {
                            String _507;
                            uint8_t _330 = Byte_from_MINUS_int(64);
                            bool _331 = Byte__EQ_(gensym_MINUS_generated1038, _330);
                            if (_331) {
                                static String _334 = "4";
                                String *_334_ref = &_334;
                                String _335 = String_copy(_334_ref);
                                String _336 = _335;
                                _507 = _336;
                            } else {
                                String _505;
                                uint8_t _343 = Byte_from_MINUS_int(80);
                                bool _344 = Byte__EQ_(gensym_MINUS_generated1038, _343);
                                if (_344) {
                                    static String _347 = "5";
                                    String *_347_ref = &_347;
                                    String _348 = String_copy(_347_ref);
                                    String _349 = _348;
                                    _505 = _349;
                                } else {
                                    String _503;
                                    uint8_t _356 = Byte_from_MINUS_int(96);
                                    bool _357 = Byte__EQ_(gensym_MINUS_generated1038, _356);
                                    if (_357) {
                                        static String _360 = "6";
                                        String *_360_ref = &_360;
                                        String _361 = String_copy(_360_ref);
                                        String _362 = _361;
                                        _503 = _362;
                                    } else {
                                        String _501;
                                        uint8_t _369 = Byte_from_MINUS_int(112);
                                        bool _370 = Byte__EQ_(gensym_MINUS_generated1038, _369);
                                        if (_370) {
                                            static String _373 = "7";
                                            String *_373_ref = &_373;
                                            String _374 = String_copy(_373_ref);
                                            String _375 = _374;
                                            _501 = _375;
                                        } else {
                                            String _499;
                                            uint8_t _382 = Byte_from_MINUS_int(128);
                                            bool _383 = Byte__EQ_(gensym_MINUS_generated1038, _382);
                                            if (_383) {
                                                static String _386 = "8";
                                                String *_386_ref = &_386;
                                                String _387 = String_copy(_386_ref);
                                                String _388 = _387;
                                                _499 = _388;
                                            } else {
                                                String _497;
                                                uint8_t _395 = Byte_from_MINUS_int(144);
                                                bool _396 = Byte__EQ_(gensym_MINUS_generated1038, _395);
                                                if (_396) {
                                                    static String _399 = "9";
                                                    String *_399_ref = &_399;
                                                    String _400 = String_copy(_399_ref);
                                                    String _401 = _400;
                                                    _497 = _401;
                                                } else {
                                                    String _495;
                                                    uint8_t _408 = Byte_from_MINUS_int(160);
                                                    bool _409 = Byte__EQ_(gensym_MINUS_generated1038, _408);
                                                    if (_409) {
                                                        static String _412 = "A";
                                                        String *_412_ref = &_412;
                                                        String _413 = String_copy(_412_ref);
                                                        String _414 = _413;
                                                        _495 = _414;
                                                    } else {
                                                        String _493;
                                                        uint8_t _421 = Byte_from_MINUS_int(176);
                                                        bool _422 = Byte__EQ_(gensym_MINUS_generated1038, _421);
                                                        if (_422) {
                                                            static String _425 = "B";
                                                            String *_425_ref = &_425;
                                                            String _426 = String_copy(_425_ref);
                                                            String _427 = _426;
                                                            _493 = _427;
                                                        } else {
                                                            String _491;
                                                            uint8_t _434 = Byte_from_MINUS_int(192);
                                                            bool _435 = Byte__EQ_(gensym_MINUS_generated1038, _434);
                                                            if (_435) {
                                                                static String _438 = "C";
                                                                String *_438_ref = &_438;
                                                                String _439 = String_copy(_438_ref);
                                                                String _440 = _439;
                                                                _491 = _440;
                                                            } else {
                                                                String _489;
                                                                uint8_t _447 = Byte_from_MINUS_int(208);
                                                                bool _448 = Byte__EQ_(gensym_MINUS_generated1038, _447);
                                                                if (_448) {
                                                                    static String _451 = "D";
                                                                    String *_451_ref = &_451;
                                                                    String _452 = String_copy(_451_ref);
                                                                    String _453 = _452;
                                                                    _489 = _453;
                                                                } else {
                                                                    String _487;
                                                                    uint8_t _460 = Byte_from_MINUS_int(224);
                                                                    bool _461 = Byte__EQ_(gensym_MINUS_generated1038, _460);
                                                                    if (_461) {
                                                                        static String _464 = "E";
                                                                        String *_464_ref = &_464;
                                                                        String _465 = String_copy(_464_ref);
                                                                        String _466 = _465;
                                                                        _487 = _466;
                                                                    } else {
                                                                        String _485;
                                                                        uint8_t _473 = Byte_from_MINUS_int(240);
                                                                        bool _474 = Byte__EQ_(gensym_MINUS_generated1038, _473);
                                                                        if (_474) {
                                                                            static String _477 = "F";
                                                                            String *_477_ref = &_477;
                                                                            String _478 = String_copy(_477_ref);
                                                                            String _479 = _478;
                                                                            _485 = _479;
                                                                        } else {
                                                                            static String _482 = "FATAL ERROR IN BIT LAND! ALL IS LOST";
                                                                            String *_482_ref = &_482;
                                                                            String _483 = String_copy(_482_ref);
                                                                            String _484 = _483;
                                                                            _485 = _484;
                                                                        }
                                                                        String _486 = _485;
                                                                        _487 = _486;
                                                                    }
                                                                    String _488 = _487;
                                                                    _489 = _488;
                                                                }
                                                                String _490 = _489;
                                                                _491 = _490;
                                                            }
                                                            String _492 = _491;
                                                            _493 = _492;
                                                        }
                                                        String _494 = _493;
                                                        _495 = _494;
                                                    }
                                                    String _496 = _495;
                                                    _497 = _496;
                                                }
                                                String _498 = _497;
                                                _499 = _498;
                                            }
                                            String _500 = _499;
                                            _501 = _500;
                                        }
                                        String _502 = _501;
                                        _503 = _502;
                                    }
                                    String _504 = _503;
                                    _505 = _504;
                                }
                                String _506 = _505;
                                _507 = _506;
                            }
                            String _508 = _507;
                            _509 = _508;
                        }
                        String _510 = _509;
                        _511 = _510;
                    }
                    String _512 = _511;
                    _513 = _512;
                }
                String _514 = _513;
                _515 = _514;
            }
            _516 = _515;
        }
        String nib_MINUS_two = _516;
        Array _522 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
        ((String*)_522.data)[0] = nib_MINUS_one;
        ((String*)_522.data)[1] = nib_MINUS_two;
        Array__String* _523 = &_522; // ref
        String _524 = String_concat(_523);
        _525 = _524;
        Array_delete__String(_522);
    }
    return _525;
}

Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16(ByteOrder order, Array__uint8_t* bs) {
    Uint16 _39;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        Uint16 _22 = Binary_to_MINUS_int16(_15, _21);
        _39 = _22;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _30 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _31 = Byte_copy(_30);
        uint8_t* _36 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _37 = Byte_copy(_36);
        Uint16 _38 = Binary_to_MINUS_int16(_31, _37);
        _39 = _38;
    }
    else UNHANDLED("Binary.carp", 99);
    return _39;
}

Array__Uint16 Binary_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint16 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 2);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint16 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint16(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint16(f);
    }
    return _29;
}

Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32(ByteOrder order, Array__uint8_t* bs) {
    Uint32 _63;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        Uint32 _34 = Binary_to_MINUS_int32(_15, _21, _27, _33);
        _63 = _34;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _42 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _43 = Byte_copy(_42);
        uint8_t* _48 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _49 = Byte_copy(_48);
        uint8_t* _54 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _55 = Byte_copy(_54);
        uint8_t* _60 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _61 = Byte_copy(_60);
        Uint32 _62 = Binary_to_MINUS_int32(_43, _49, _55, _61);
        _63 = _62;
    }
    else UNHANDLED("Binary.carp", 171);
    return _63;
}

Array__Uint32 Binary_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint32 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 4);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint32 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint32(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint32(f);
    }
    return _29;
}

Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64(ByteOrder order, Array__uint8_t* bs) {
    Uint64 _111;
    if(order._tag == ByteOrder_LittleEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _14 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _15 = Byte_copy(_14);
        uint8_t* _20 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _21 = Byte_copy(_20);
        uint8_t* _26 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _27 = Byte_copy(_26);
        uint8_t* _32 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _33 = Byte_copy(_32);
        uint8_t* _38 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _39 = Byte_copy(_38);
        uint8_t* _44 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _45 = Byte_copy(_44);
        uint8_t* _50 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _51 = Byte_copy(_50);
        uint8_t* _56 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _57 = Byte_copy(_56);
        Uint64 _58 = Binary_to_MINUS_int64(_15, _21, _27, _33, _39, _45, _51, _57);
        _111 = _58;
    }
    else if(order._tag == ByteOrder_BigEndian_tag) {
        ByteOrder _6_temp = order;
        // Case expr:
        uint8_t* _66 = Array_unsafe_MINUS_nth__uint8_t(bs, 7);
        uint8_t _67 = Byte_copy(_66);
        uint8_t* _72 = Array_unsafe_MINUS_nth__uint8_t(bs, 6);
        uint8_t _73 = Byte_copy(_72);
        uint8_t* _78 = Array_unsafe_MINUS_nth__uint8_t(bs, 5);
        uint8_t _79 = Byte_copy(_78);
        uint8_t* _84 = Array_unsafe_MINUS_nth__uint8_t(bs, 4);
        uint8_t _85 = Byte_copy(_84);
        uint8_t* _90 = Array_unsafe_MINUS_nth__uint8_t(bs, 3);
        uint8_t _91 = Byte_copy(_90);
        uint8_t* _96 = Array_unsafe_MINUS_nth__uint8_t(bs, 2);
        uint8_t _97 = Byte_copy(_96);
        uint8_t* _102 = Array_unsafe_MINUS_nth__uint8_t(bs, 1);
        uint8_t _103 = Byte_copy(_102);
        uint8_t* _108 = Array_unsafe_MINUS_nth__uint8_t(bs, 0);
        uint8_t _109 = Byte_copy(_108);
        Uint64 _110 = Binary_to_MINUS_int64(_67, _73, _79, _85, _91, _97, _103, _109);
        _111 = _110;
    }
    else UNHANDLED("Binary.carp", 250);
    return _111;
}

Array__Uint64 Binary_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq(ByteOrder order, Array__uint8_t* bs) {
    Array__Uint64 _29;
    /* let */ {
        Array__Array__uint8_t _10 = Array_partition__uint8_t(bs, 8);
        Array__Array__uint8_t partitions = _10;
        // This lambda captures 1 variables: order
        Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty *_19_env = CARP_MALLOC(sizeof(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty));
        _19_env->order = order;
        Lambda _19 = {
          .callback = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env,
          .env = _19_env,
          .delete = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete,
          .copy = (void*)Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy
        };
        Lambda f = _19;
        Lambda* _24 = &f; // ref
        Array__Array__uint8_t* _27 = &partitions; // ref
        Array__Uint64 _28 = Array_copy_MINUS_map__Array__uint8_t_Uint64(_24, _27);
        _29 = _28;
        Array_delete__Array__uint8_t(partitions);
        Function_delete__Array__uint8_t_MUL__Uint64(f);
    }
    return _29;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint16_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint32_Array__uint8_t(_7, _9);
    return _10;
}

Array__uint8_t Binary_unwrap_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Array__uint8_t _9 = Array_zero__uint8_t();
    Array__uint8_t _10 = Result_from_MINUS_error__Uint64_Array__uint8_t(_7, _9);
    return _10;
}

Uint16 Binary_unwrap_MINUS_success__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* x) {
    Result__Uint16_Array__uint8_t _7 = Result_copy__Uint16_Array__uint8_t(x);
    Uint16 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(_7);
    return _8;
}

Uint32 Binary_unwrap_MINUS_success__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* x) {
    Result__Uint32_Array__uint8_t _7 = Result_copy__Uint32_Array__uint8_t(x);
    Uint32 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(_7);
    return _8;
}

Uint64 Binary_unwrap_MINUS_success__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* x) {
    Result__Uint64_Array__uint8_t _7 = Result_copy__Uint64_Array__uint8_t(x);
    Uint64 _8 = Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(_7);
    return _8;
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint16_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint16) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint32_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint32) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_copy(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* pRef) {
    Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty_delete(Binary__Lambda_byte_MINUS_converter__ByteOrder_Array__uint8_t_Uint64_29_env_ty* p) {
    /* Ignore non-managed member 'f' : (Ref (Fn [ByteOrder, (Ref (Array Byte) <c>)] (Maybe Uint64) <StaticLifetime>) <StaticLifetime>) */
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int16_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint32 */
    return copy;
}

void Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint32 */
}

Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int32_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'i' : Uint64 */
    return copy;
}

void Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'i' : Uint64 */
}

Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_copy(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* pRef) {
    Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty_delete(Binary__Lambda_int64_MINUS_seq_MINUS__GT_bytes_16_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int16_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int32_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_copy(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* pRef) {
    Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'order' : ByteOrder */
    return copy;
}

void Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty_delete(Binary__Lambda_unsafe_MINUS_bytes_MINUS__GT_int64_MINUS_seq_19_env_ty* p) {
    /* Ignore non-managed member 'order' : ByteOrder */
}

bool Bool_blit(bool x) {
    bool _7 = x; // From the 'the' function.
    return _7;
}

int Bool_hash(bool* k) {
    int _17;
    bool _9 = Bool_copy(k);
    bool _10 = _9; // From the 'the' function.
    if (_10) {
        int _13 = 1;
        _17 = _13;
    } else {
        int _16 = 0;
        _17 = _16;
    }
    return _17;
}

String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Bool_zero() {
    return false;
}

String BoolRef_format(String* s, bool* x) {
    bool _9 = Bool_copy(x);
    String _10 = Bool_format(s, _9);
    return _10;
}

String BoolRef_prn(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

String BoolRef_str(bool* x) {
    bool _7 = Bool_copy(x);
    String _8 = Bool_str(_7);
    return _8;
}

Pair__ColorId_String Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* _env, Pair__ColorId_String p) {
    String _19 = String_copy(_env->val);
    Pair__ColorId_String _20 = Pair_set_MINUS_b__ColorId_String(p, _19);
    return _20;
}

void Bucket_delete__ColorId_String(Bucket__ColorId_String p) {
    Array_delete__Pair__ColorId_String(p.entries);
}

Bucket__ColorId_String Bucket_empty__ColorId_String() {
    Array _4 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Pair__ColorId_String) * 0) };
    Bucket__ColorId_String _5 = Bucket_init__ColorId_String(_4);
    return _5;
}

Array__Pair__ColorId_String* Bucket_entries__ColorId_String(Bucket__ColorId_String* p) { return (&(p->entries)); }

int Bucket_find__ColorId_String(Bucket__ColorId_String* b, ColorId* k) {
    int _64;
    /* let */ {
        int ret = -1;
        Array__Pair__ColorId_String* _12 = Bucket_entries__ColorId_String(b);
        int _13 = Array_length__Pair__ColorId_String(_12);
        int l = _13;
        Array__Pair__ColorId_String* _17 = Bucket_entries__ColorId_String(b);
        Array__Pair__ColorId_String* es = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, l);
            bool _1000006 = _1000008;
            while (_1000006) {
                Pair__ColorId_String* _36 = Array_unsafe_MINUS_nth__Pair__ColorId_String(es, i);
                ColorId* _37 = Pair_a__ColorId_String(_36);
                bool _39 = Color__EQ___ColorId(_37, k);
                if (_39) {
                    ret = i;  // Int = Int
                    break;
                    // Unreachable:
                } else {
                    /* () */
                }
                int _1000018 = Int__PLUS_(i, 1);
                i = _1000018;  // Int = Int
                bool _1000008 = Int__LT_(i, l);
                _1000006 = _1000008;
            }
        }
        int _63 = ret;
        _64 = _63;
    }
    return _64;
}

String Bucket_get_MINUS_idx__ColorId_String(Bucket__ColorId_String* b, int i) {
    Array__Pair__ColorId_String* _10 = Bucket_entries__ColorId_String(b);
    Pair__ColorId_String* _12 = Array_unsafe_MINUS_nth__Pair__ColorId_String(_10, i);
    String* _13 = Pair_b__ColorId_String(_12);
    String _14 = String_copy(_13);
    return _14;
}

String Bucket_get__ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* default_MINUS_value) {
    String _30;
    /* let */ {
        int _11 = Bucket_find__ColorId_String(b, k);
        int i = _11;
        String _29;
        bool _17 = _LT__EQ___int(0, i);
        if (_17) {
            String _22 = Bucket_get_MINUS_idx__ColorId_String(b, i);
            String _23 = _22;
            _29 = _23;
        } else {
            String _27 = String_copy(default_MINUS_value);
            String _28 = _27;
            _29 = _28;
        }
        _30 = _29;
    }
    return _30;
}

Bucket__ColorId_String Bucket_init__ColorId_String(Array__Pair__ColorId_String entries) {
    Bucket__ColorId_String instance;
    instance.entries = entries;
    return instance;
}

void Bucket_push_MINUS_back_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v) {
    Array__Pair__ColorId_String* _9 = Bucket_entries__ColorId_String(b);
    Pair__ColorId_String _13 = Pair_init_MINUS_from_MINUS_refs__ColorId_String(k, v);
    Array_push_MINUS_back_BANG___Pair__ColorId_String(_9, _13);
}

void Bucket_put_BANG___ColorId_String(Bucket__ColorId_String* b, ColorId* k, String* v) {
    /* let */ {
        int _11 = Bucket_find__ColorId_String(b, k);
        int i = _11;
        bool _17 = _LT__EQ___int(0, i);
        if (_17) {
            Bucket_set_MINUS_idx_BANG___ColorId_String(b, i, v);
        } else {
            Bucket_push_MINUS_back_BANG___ColorId_String(b, k, v);
        }
    }
}

void Bucket_set_MINUS_idx_BANG___ColorId_String(Bucket__ColorId_String* b, int i, String* val) {
    Array__Pair__ColorId_String* _9 = Bucket_entries__ColorId_String(b);
    // This lambda captures 1 variables: val
    Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty *_21_env = CARP_MALLOC(sizeof(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty));
    _21_env->val = val;
    Lambda _21 = {
      .callback = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env,
      .env = _21_env,
      .delete = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete,
      .copy = (void*)Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy
    };
    Lambda* _22 = &_21; // ref
    Array_aupdate_BANG___Pair__ColorId_String(_9, i, _22);
    Function_delete__Pair__ColorId_String_Pair__ColorId_String(_21);
}

Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_copy(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* pRef) {
    Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'val' : (Ref String <d>) */
    return copy;
}

void Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty_delete(Bucket__Lambda_set_MINUS_idx_BANG___ColorId_String_21_env_ty* p) {
    /* Ignore non-managed member 'val' : (Ref String <d>) */
}

uint8_t Byte_add_MINUS_ref(uint8_t* x, uint8_t* y) {
    uint8_t _8 = Byte_copy(x);
    uint8_t _11 = Byte_copy(y);
    uint8_t _12 = Byte__PLUS_(_8, _11);
    return _12;
}

uint8_t Byte_blit(uint8_t x) {
    uint8_t _7 = x; // From the 'the' function.
    return _7;
}

bool Byte_even_QMARK_(uint8_t a) {
    uint8_t _8 = Byte_mod(a, 2);
    bool _10 = Byte__EQ_(_8, 0);
    return _10;
}

Maybe__uint8_t Byte_from_MINUS_string(String* s) {
    Maybe__uint8_t _25;
    /* let */ {
        uint8_t res = 0;
        Maybe__uint8_t _24;
        uint8_t* _13 = &res; // ref
        bool _14 = Byte_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__uint8_t _18 = Maybe_Just__uint8_t(res);
            Maybe__uint8_t _19 = _18;
            _24 = _19;
        } else {
            Maybe__uint8_t _22 = Maybe_Nothing__uint8_t();
            Maybe__uint8_t _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Byte_hash(uint8_t* k) {
    uint8_t _9 = Byte_copy(k);
    uint8_t _10 = _9; // From the 'the' function.
    int _11 = Byte_to_MINUS_int(_10);
    return _11;
}

bool Byte_odd_QMARK_(uint8_t a) {
    bool _7 = Byte_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

uint8_t Byte_pow(uint8_t x, uint8_t y) {
    uint8_t _55;
    /* let */ {
        uint8_t r = 1;
        bool _14 = _DIV__EQ___uint8_t(y, 0);
        bool _52 = _14;
        while (_52) {
            uint8_t _21 = Byte_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___uint8_t(_21, 0);
            if (_23) {
                uint8_t _30 = Byte__MUL_(r, x);
                r = _30;  // Byte = Byte
            } else {
                /* () */
            }
            uint8_t _42 = Byte__DIV_(y, 2);
            y = _42;  // Byte = Byte
            uint8_t _49 = Byte__MUL_(x, x);
            x = _49;  // Byte = Byte
            bool _14 = _DIV__EQ___uint8_t(y, 0);
            _52 = _14;
        }
        uint8_t _54 = r;
        _55 = _54;
    }
    return _55;
}

String Byte_prn(uint8_t x) {
    String _6 = Byte_str(x);
    return _6;
}

uint8_t Byte_random() {
    int _5 = Int_random();
    uint8_t _6 = Byte_from_MINUS_int(_5);
    return _6;
}

uint8_t Byte_random_MINUS_between(uint8_t lower, uint8_t upper) {
    int _9 = Byte_to_MINUS_int(lower);
    int _12 = Byte_to_MINUS_int(upper);
    int _13 = Int_random_MINUS_between(_9, _12);
    uint8_t _14 = Byte_from_MINUS_int(_13);
    return _14;
}

uint8_t Byte_zero() {
    return 0;
}

ByteOrder ByteOrder_BigEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_BigEndian_tag;
    return instance;
}

ByteOrder ByteOrder_LittleEndian() {
  ByteOrder instance;

    instance._tag = ByteOrder_LittleEndian_tag;
    return instance;
}

ByteOrder ByteOrder_blit(ByteOrder x) {
    ByteOrder _7 = x; // From the 'the' function.
    return _7;
}

ByteOrder ByteOrder_copy(ByteOrder* pRef) {
    ByteOrder copy = *pRef;
    if(pRef->_tag == ByteOrder_LittleEndian_tag) {

    }

    else if(pRef->_tag == ByteOrder_BigEndian_tag) {

    }

    return copy;
}

void ByteOrder_delete(ByteOrder p) {
  if(p._tag == ByteOrder_LittleEndian_tag) {

  }
  else if(p._tag == ByteOrder_BigEndian_tag) {

  }

}

int ByteOrder_get_MINUS_tag(ByteOrder *p) { return p->_tag; }
String ByteOrder_prn(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LittleEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BigEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String ByteOrder_str(ByteOrder *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ByteOrder_LittleEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "LittleEndian");

  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    size += snprintf(NULL, 0, "(%s ", "BigEndian");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ByteOrder_LittleEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "LittleEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ByteOrder_BigEndian_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BigEndian");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

bool ByteRef__LT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__LT_(_8, _11);
    return _12;
}

bool ByteRef__EQ_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__EQ_(_8, _11);
    return _12;
}

bool ByteRef__GT_(uint8_t* a, uint8_t* b) {
    uint8_t _8 = Byte_copy(a);
    uint8_t _11 = Byte_copy(b);
    bool _12 = Byte__GT_(_8, _11);
    return _12;
}

String ByteRef_format(String* s, uint8_t* x) {
    uint8_t _9 = Byte_copy(x);
    String _10 = Byte_format(s, _9);
    return _10;
}

String ByteRef_prn(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

String ByteRef_str(uint8_t* x) {
    uint8_t _7 = Byte_copy(x);
    String _8 = Byte_str(_7);
    return _8;
}

bool Char_alpha_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_lower_MINUS_case_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_upper_MINUS_case_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

bool Char_alphanum_QMARK_(Char c) {
    bool _16;
    bool _7 = Char_alpha_QMARK_(c);
    if (_7) {
        bool _10 = true;
        _16 = _10;
    } else {
        bool _14 = Char_num_QMARK_(c);
        bool _15 = _14;
        _16 = _15;
    }
    return _16;
}

Char Char_blit(Char x) {
    Char _7 = x; // From the 'the' function.
    return _7;
}

int Char_hash(Char* k) {
    Char _9 = Char_copy(k);
    Char _10 = _9; // From the 'the' function.
    int _11 = Char_to_MINUS_int(_10);
    return _11;
}

bool Char_lower_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(97/*'a'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 122/*'z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

int Char_meaning(Char* char_MINUS_ref) {
    int _126;
    /* let */ {
        Char _8 = Char_copy(char_MINUS_ref);
        Char c = _8;
        int _125;
        /* let */ {
            Char gensym_MINUS_generated1002 = c;
            int _124;
            bool _18 = Char__EQ_(gensym_MINUS_generated1002, 48/*'0'*/);
            if (_18) {
                int _21 = 0;
                _124 = _21;
            } else {
                int _122;
                bool _27 = Char__EQ_(gensym_MINUS_generated1002, 49/*'1'*/);
                if (_27) {
                    int _30 = 1;
                    _122 = _30;
                } else {
                    int _120;
                    bool _36 = Char__EQ_(gensym_MINUS_generated1002, 50/*'2'*/);
                    if (_36) {
                        int _39 = 2;
                        _120 = _39;
                    } else {
                        int _118;
                        bool _45 = Char__EQ_(gensym_MINUS_generated1002, 51/*'3'*/);
                        if (_45) {
                            int _48 = 3;
                            _118 = _48;
                        } else {
                            int _116;
                            bool _54 = Char__EQ_(gensym_MINUS_generated1002, 52/*'4'*/);
                            if (_54) {
                                int _57 = 4;
                                _116 = _57;
                            } else {
                                int _114;
                                bool _63 = Char__EQ_(gensym_MINUS_generated1002, 53/*'5'*/);
                                if (_63) {
                                    int _66 = 5;
                                    _114 = _66;
                                } else {
                                    int _112;
                                    bool _72 = Char__EQ_(gensym_MINUS_generated1002, 54/*'6'*/);
                                    if (_72) {
                                        int _75 = 6;
                                        _112 = _75;
                                    } else {
                                        int _110;
                                        bool _81 = Char__EQ_(gensym_MINUS_generated1002, 55/*'7'*/);
                                        if (_81) {
                                            int _84 = 7;
                                            _110 = _84;
                                        } else {
                                            int _108;
                                            bool _90 = Char__EQ_(gensym_MINUS_generated1002, 56/*'8'*/);
                                            if (_90) {
                                                int _93 = 8;
                                                _108 = _93;
                                            } else {
                                                int _106;
                                                bool _99 = Char__EQ_(gensym_MINUS_generated1002, 57/*'9'*/);
                                                if (_99) {
                                                    int _102 = 9;
                                                    _106 = _102;
                                                } else {
                                                    int _105 = -1;
                                                    _106 = _105;
                                                }
                                                int _107 = _106;
                                                _108 = _107;
                                            }
                                            int _109 = _108;
                                            _110 = _109;
                                        }
                                        int _111 = _110;
                                        _112 = _111;
                                    }
                                    int _113 = _112;
                                    _114 = _113;
                                }
                                int _115 = _114;
                                _116 = _115;
                            }
                            int _117 = _116;
                            _118 = _117;
                        }
                        int _119 = _118;
                        _120 = _119;
                    }
                    int _121 = _120;
                    _122 = _121;
                }
                int _123 = _122;
                _124 = _123;
            }
            _125 = _124;
        }
        _126 = _125;
    }
    return _126;
}

bool Char_num_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(48/*'0'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 57/*'9'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_random() {
    int _5 = Int_random();
    Char _6 = Char_from_MINUS_int(_5);
    return _6;
}

Char Char_random_MINUS_between(Char a, Char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    Char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool Char_upper_MINUS_case_QMARK_(Char c) {
    bool _18;
    bool _8 = _LT__EQ___Char(65/*'A'*/, c);
    if (_8) {
        bool _13 = _LT__EQ___Char(c, 90/*'Z'*/);
        bool _14 = _13;
        _18 = _14;
    } else {
        bool _17 = false;
        _18 = _17;
    }
    return _18;
}

Char Char_zero() {
    Char _7 = Char_from_MINUS_int(0);
    Char _8 = _7; // From the 'the' function.
    return _8;
}

bool CharRef__LT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__LT_(_8, _11);
    return _12;
}

bool CharRef__EQ_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool CharRef__GT_(Char* a, Char* b) {
    Char _8 = Char_copy(a);
    Char _11 = Char_copy(b);
    bool _12 = Char__GT_(_8, _11);
    return _12;
}

bool Color__EQ___ColorId(ColorId* a, ColorId* b) {
    ColorId* _12 = a; // From the 'the' function.
    int _13 = Color_hash(_12);
    int _16 = Color_hash(b);
    bool _17 = Int__EQ_(_13, _16);
    return _17;
}

ColorId Color_Id_BgBlack() {
  ColorId instance;

    instance._tag = ColorId_BgBlack_tag;
    return instance;
}

ColorId Color_Id_BgBlue() {
  ColorId instance;

    instance._tag = ColorId_BgBlue_tag;
    return instance;
}

ColorId Color_Id_BgCyan() {
  ColorId instance;

    instance._tag = ColorId_BgCyan_tag;
    return instance;
}

ColorId Color_Id_BgGreen() {
  ColorId instance;

    instance._tag = ColorId_BgGreen_tag;
    return instance;
}

ColorId Color_Id_BgMagenta() {
  ColorId instance;

    instance._tag = ColorId_BgMagenta_tag;
    return instance;
}

ColorId Color_Id_BgRed() {
  ColorId instance;

    instance._tag = ColorId_BgRed_tag;
    return instance;
}

ColorId Color_Id_BgWhite() {
  ColorId instance;

    instance._tag = ColorId_BgWhite_tag;
    return instance;
}

ColorId Color_Id_BgYellow() {
  ColorId instance;

    instance._tag = ColorId_BgYellow_tag;
    return instance;
}

ColorId Color_Id_Black() {
  ColorId instance;

    instance._tag = ColorId_Black_tag;
    return instance;
}

ColorId Color_Id_BlinkRapid() {
  ColorId instance;

    instance._tag = ColorId_BlinkRapid_tag;
    return instance;
}

ColorId Color_Id_BlinkSlow() {
  ColorId instance;

    instance._tag = ColorId_BlinkSlow_tag;
    return instance;
}

ColorId Color_Id_Blue() {
  ColorId instance;

    instance._tag = ColorId_Blue_tag;
    return instance;
}

ColorId Color_Id_Bold() {
  ColorId instance;

    instance._tag = ColorId_Bold_tag;
    return instance;
}

ColorId Color_Id_Cyan() {
  ColorId instance;

    instance._tag = ColorId_Cyan_tag;
    return instance;
}

ColorId Color_Id_Green() {
  ColorId instance;

    instance._tag = ColorId_Green_tag;
    return instance;
}

ColorId Color_Id_Italic() {
  ColorId instance;

    instance._tag = ColorId_Italic_tag;
    return instance;
}

ColorId Color_Id_Magenta() {
  ColorId instance;

    instance._tag = ColorId_Magenta_tag;
    return instance;
}

ColorId Color_Id_None() {
  ColorId instance;

    instance._tag = ColorId_None_tag;
    return instance;
}

ColorId Color_Id_Red() {
  ColorId instance;

    instance._tag = ColorId_Red_tag;
    return instance;
}

ColorId Color_Id_Reset() {
  ColorId instance;

    instance._tag = ColorId_Reset_tag;
    return instance;
}

ColorId Color_Id_Underline() {
  ColorId instance;

    instance._tag = ColorId_Underline_tag;
    return instance;
}

ColorId Color_Id_White() {
  ColorId instance;

    instance._tag = ColorId_White_tag;
    return instance;
}

ColorId Color_Id_Yellow() {
  ColorId instance;

    instance._tag = ColorId_Yellow_tag;
    return instance;
}

ColorId Color_Id_copy(ColorId* pRef) {
    ColorId copy = *pRef;
    if(pRef->_tag == ColorId_Black_tag) {

    }

    else if(pRef->_tag == ColorId_Red_tag) {

    }

    else if(pRef->_tag == ColorId_Green_tag) {

    }

    else if(pRef->_tag == ColorId_Yellow_tag) {

    }

    else if(pRef->_tag == ColorId_Blue_tag) {

    }

    else if(pRef->_tag == ColorId_Magenta_tag) {

    }

    else if(pRef->_tag == ColorId_Cyan_tag) {

    }

    else if(pRef->_tag == ColorId_White_tag) {

    }

    else if(pRef->_tag == ColorId_Reset_tag) {

    }

    else if(pRef->_tag == ColorId_None_tag) {

    }

    else if(pRef->_tag == ColorId_Bold_tag) {

    }

    else if(pRef->_tag == ColorId_Italic_tag) {

    }

    else if(pRef->_tag == ColorId_Underline_tag) {

    }

    else if(pRef->_tag == ColorId_BlinkSlow_tag) {

    }

    else if(pRef->_tag == ColorId_BlinkRapid_tag) {

    }

    else if(pRef->_tag == ColorId_BgBlack_tag) {

    }

    else if(pRef->_tag == ColorId_BgRed_tag) {

    }

    else if(pRef->_tag == ColorId_BgGreen_tag) {

    }

    else if(pRef->_tag == ColorId_BgYellow_tag) {

    }

    else if(pRef->_tag == ColorId_BgBlue_tag) {

    }

    else if(pRef->_tag == ColorId_BgMagenta_tag) {

    }

    else if(pRef->_tag == ColorId_BgCyan_tag) {

    }

    else if(pRef->_tag == ColorId_BgWhite_tag) {

    }

    return copy;
}

void Color_Id_delete(ColorId p) {
  if(p._tag == ColorId_Black_tag) {

  }
  else if(p._tag == ColorId_Red_tag) {

  }
  else if(p._tag == ColorId_Green_tag) {

  }
  else if(p._tag == ColorId_Yellow_tag) {

  }
  else if(p._tag == ColorId_Blue_tag) {

  }
  else if(p._tag == ColorId_Magenta_tag) {

  }
  else if(p._tag == ColorId_Cyan_tag) {

  }
  else if(p._tag == ColorId_White_tag) {

  }
  else if(p._tag == ColorId_Reset_tag) {

  }
  else if(p._tag == ColorId_None_tag) {

  }
  else if(p._tag == ColorId_Bold_tag) {

  }
  else if(p._tag == ColorId_Italic_tag) {

  }
  else if(p._tag == ColorId_Underline_tag) {

  }
  else if(p._tag == ColorId_BlinkSlow_tag) {

  }
  else if(p._tag == ColorId_BlinkRapid_tag) {

  }
  else if(p._tag == ColorId_BgBlack_tag) {

  }
  else if(p._tag == ColorId_BgRed_tag) {

  }
  else if(p._tag == ColorId_BgGreen_tag) {

  }
  else if(p._tag == ColorId_BgYellow_tag) {

  }
  else if(p._tag == ColorId_BgBlue_tag) {

  }
  else if(p._tag == ColorId_BgMagenta_tag) {

  }
  else if(p._tag == ColorId_BgCyan_tag) {

  }
  else if(p._tag == ColorId_BgWhite_tag) {

  }

}

int Color_Id_get_MINUS_tag(ColorId *p) { return p->_tag; }
String Color_Id_prn(ColorId *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ColorId_Black_tag) {
    size += snprintf(NULL, 0, "(%s ", "Black");

  }
  if(p->_tag == ColorId_Red_tag) {
    size += snprintf(NULL, 0, "(%s ", "Red");

  }
  if(p->_tag == ColorId_Green_tag) {
    size += snprintf(NULL, 0, "(%s ", "Green");

  }
  if(p->_tag == ColorId_Yellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "Yellow");

  }
  if(p->_tag == ColorId_Blue_tag) {
    size += snprintf(NULL, 0, "(%s ", "Blue");

  }
  if(p->_tag == ColorId_Magenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "Magenta");

  }
  if(p->_tag == ColorId_Cyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cyan");

  }
  if(p->_tag == ColorId_White_tag) {
    size += snprintf(NULL, 0, "(%s ", "White");

  }
  if(p->_tag == ColorId_Reset_tag) {
    size += snprintf(NULL, 0, "(%s ", "Reset");

  }
  if(p->_tag == ColorId_None_tag) {
    size += snprintf(NULL, 0, "(%s ", "None");

  }
  if(p->_tag == ColorId_Bold_tag) {
    size += snprintf(NULL, 0, "(%s ", "Bold");

  }
  if(p->_tag == ColorId_Italic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Italic");

  }
  if(p->_tag == ColorId_Underline_tag) {
    size += snprintf(NULL, 0, "(%s ", "Underline");

  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkSlow");

  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkRapid");

  }
  if(p->_tag == ColorId_BgBlack_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlack");

  }
  if(p->_tag == ColorId_BgRed_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgRed");

  }
  if(p->_tag == ColorId_BgGreen_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgGreen");

  }
  if(p->_tag == ColorId_BgYellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgYellow");

  }
  if(p->_tag == ColorId_BgBlue_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlue");

  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgMagenta");

  }
  if(p->_tag == ColorId_BgCyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgCyan");

  }
  if(p->_tag == ColorId_BgWhite_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgWhite");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ColorId_Black_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Black");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Red_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Red");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Green_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Green");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Yellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Yellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Blue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Blue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Magenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Magenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Cyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Cyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_White_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "White");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Reset_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Reset");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_None_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "None");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Bold_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Bold");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Italic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Italic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Underline_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Underline");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkSlow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkRapid");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlack_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlack");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgRed_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgRed");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgGreen_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgGreen");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgYellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgYellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgMagenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgCyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgCyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgWhite_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgWhite");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Color_Id_str(ColorId *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == ColorId_Black_tag) {
    size += snprintf(NULL, 0, "(%s ", "Black");

  }
  if(p->_tag == ColorId_Red_tag) {
    size += snprintf(NULL, 0, "(%s ", "Red");

  }
  if(p->_tag == ColorId_Green_tag) {
    size += snprintf(NULL, 0, "(%s ", "Green");

  }
  if(p->_tag == ColorId_Yellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "Yellow");

  }
  if(p->_tag == ColorId_Blue_tag) {
    size += snprintf(NULL, 0, "(%s ", "Blue");

  }
  if(p->_tag == ColorId_Magenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "Magenta");

  }
  if(p->_tag == ColorId_Cyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "Cyan");

  }
  if(p->_tag == ColorId_White_tag) {
    size += snprintf(NULL, 0, "(%s ", "White");

  }
  if(p->_tag == ColorId_Reset_tag) {
    size += snprintf(NULL, 0, "(%s ", "Reset");

  }
  if(p->_tag == ColorId_None_tag) {
    size += snprintf(NULL, 0, "(%s ", "None");

  }
  if(p->_tag == ColorId_Bold_tag) {
    size += snprintf(NULL, 0, "(%s ", "Bold");

  }
  if(p->_tag == ColorId_Italic_tag) {
    size += snprintf(NULL, 0, "(%s ", "Italic");

  }
  if(p->_tag == ColorId_Underline_tag) {
    size += snprintf(NULL, 0, "(%s ", "Underline");

  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkSlow");

  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    size += snprintf(NULL, 0, "(%s ", "BlinkRapid");

  }
  if(p->_tag == ColorId_BgBlack_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlack");

  }
  if(p->_tag == ColorId_BgRed_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgRed");

  }
  if(p->_tag == ColorId_BgGreen_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgGreen");

  }
  if(p->_tag == ColorId_BgYellow_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgYellow");

  }
  if(p->_tag == ColorId_BgBlue_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgBlue");

  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgMagenta");

  }
  if(p->_tag == ColorId_BgCyan_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgCyan");

  }
  if(p->_tag == ColorId_BgWhite_tag) {
    size += snprintf(NULL, 0, "(%s ", "BgWhite");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == ColorId_Black_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Black");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Red_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Red");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Green_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Green");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Yellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Yellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Blue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Blue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Magenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Magenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Cyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Cyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_White_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "White");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Reset_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Reset");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_None_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "None");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Bold_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Bold");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Italic_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Italic");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_Underline_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Underline");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkSlow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkSlow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BlinkRapid_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BlinkRapid");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlack_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlack");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgRed_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgRed");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgGreen_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgGreen");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgYellow_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgYellow");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgBlue_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgBlue");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgMagenta_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgMagenta");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgCyan_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgCyan");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == ColorId_BgWhite_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "BgWhite");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Color_color(ColorId cid) {
    String _26;
    /* let */ {
        Map__ColorId_String* _9 = &Color_table; // ref
        ColorId* _12 = &cid; // ref
        String _13 = Map_get__ColorId_String(_9, _12);
        String n = _13;
        static String _16 = "[";
        String *_16_ref = &_16;
        String* _21 = &n; // ref
        static String _22 = "m";
        String *_22_ref = &_22;
        String _23 = String_append(_21, _22_ref);
        String* _24 = &_23; // ref
        String _25 = String_append(_16_ref, _24);
        _26 = _25;
        String_delete(_23);
        String_delete(n);
    }
    Color_Id_delete(cid);
    return _26;
}

String Color_colorize(ColorId cid, String* s) {
    String _9 = Color_color(cid);
    String* _10 = &_9; // ref
    ColorId _17 = Color_Id_Reset();
    String _18 = Color_color(_17);
    String* _19 = &_18; // ref
    String _20 = String_append(s, _19);
    String* _21 = &_20; // ref
    String _22 = String_append(_10, _21);
    String_delete(_18);
    String_delete(_20);
    String_delete(_9);
    return _22;
}

int Color_hash(ColorId* k) {
    int _6 = Color_Id_get_MINUS_tag(k);
    return _6;
}

bool Datetime__LT_(Datetime* a, Datetime* b) {
    bool _135;
    int* _10 = Datetime_year(a);
    int _11 = Int_copy(_10);
    int* _15 = Datetime_year(b);
    int _16 = Int_copy(_15);
    bool _17 = Int__LT_(_11, _16);
    if (_17) {
        bool _20 = true;
        _135 = _20;
    } else {
        bool _133;
        int* _27 = Datetime_day(a);
        int _28 = Int_copy(_27);
        int* _32 = Datetime_day(b);
        int _33 = Int_copy(_32);
        bool _34 = Int__LT_(_28, _33);
        if (_34) {
            bool _37 = true;
            _133 = _37;
        } else {
            bool _131;
            Maybe__int* _45 = Datetime_hours(a);
            Maybe__int _46 = Maybe_copy__int(_45);
            int _48 = Maybe_from__int(_46, 0);
            Maybe__int* _53 = Datetime_hours(b);
            Maybe__int _54 = Maybe_copy__int(_53);
            int _56 = Maybe_from__int(_54, 0);
            bool _57 = Int__LT_(_48, _56);
            if (_57) {
                bool _60 = true;
                _131 = _60;
            } else {
                bool _129;
                Maybe__int* _68 = Datetime_minutes(a);
                Maybe__int _69 = Maybe_copy__int(_68);
                int _71 = Maybe_from__int(_69, 0);
                Maybe__int* _76 = Datetime_minutes(b);
                Maybe__int _77 = Maybe_copy__int(_76);
                int _79 = Maybe_from__int(_77, 0);
                bool _80 = Int__LT_(_71, _79);
                if (_80) {
                    bool _83 = true;
                    _129 = _83;
                } else {
                    bool _127;
                    Maybe__int* _91 = Datetime_seconds(a);
                    Maybe__int _92 = Maybe_copy__int(_91);
                    int _94 = Maybe_from__int(_92, 0);
                    Maybe__int* _99 = Datetime_seconds(b);
                    Maybe__int _100 = Maybe_copy__int(_99);
                    int _102 = Maybe_from__int(_100, 0);
                    bool _103 = Int__LT_(_94, _102);
                    if (_103) {
                        bool _106 = true;
                        _127 = _106;
                    } else {
                        Maybe__int* _113 = Datetime_nanoseconds(a);
                        Maybe__int _114 = Maybe_copy__int(_113);
                        int _116 = Maybe_from__int(_114, 0);
                        Maybe__int* _121 = Datetime_nanoseconds(b);
                        Maybe__int _122 = Maybe_copy__int(_121);
                        int _124 = Maybe_from__int(_122, 0);
                        bool _125 = Int__LT_(_116, _124);
                        bool _126 = _125;
                        _127 = _126;
                    }
                    bool _128 = _127;
                    _129 = _128;
                }
                bool _130 = _129;
                _131 = _130;
            }
            bool _132 = _131;
            _133 = _132;
        }
        bool _134 = _133;
        _135 = _134;
    }
    return _135;
}

bool Datetime__EQ_(Datetime* a, Datetime* b) {
    bool _124;
    int* _9 = Datetime_year(a);
    int* _12 = Datetime_year(b);
    bool _13 = IntRef__EQ_(_9, _12);
    if (_13) {
        bool _119;
        int* _19 = Datetime_day(a);
        int* _22 = Datetime_day(b);
        bool _23 = IntRef__EQ_(_19, _22);
        if (_23) {
            bool _114;
            Maybe__int* _29 = Datetime_hours(a);
            Maybe__int* _32 = Datetime_hours(b);
            bool _33 = Maybe__EQ___int(_29, _32);
            if (_33) {
                bool _109;
                Maybe__int* _39 = Datetime_minutes(a);
                Maybe__int* _42 = Datetime_minutes(b);
                bool _43 = Maybe__EQ___int(_39, _42);
                if (_43) {
                    bool _104;
                    Maybe__int* _49 = Datetime_seconds(a);
                    Maybe__int* _52 = Datetime_seconds(b);
                    bool _53 = Maybe__EQ___int(_49, _52);
                    if (_53) {
                        bool _99;
                        Maybe__int* _59 = Datetime_nanoseconds(a);
                        Maybe__int* _62 = Datetime_nanoseconds(b);
                        bool _63 = Maybe__EQ___int(_59, _62);
                        if (_63) {
                            Maybe__Timezone* _71 = Datetime_tz(a);
                            Maybe__Timezone _72 = Maybe_copy__Timezone(_71);
                            Timezone* _76 = &Timezone_utc; // ref
                            Timezone _77 = Timezone_copy(_76);
                            Timezone _78 = Maybe_from__Timezone(_72, _77);
                            Timezone* _79 = &_78; // ref
                            Maybe__Timezone* _85 = Datetime_tz(b);
                            Maybe__Timezone _86 = Maybe_copy__Timezone(_85);
                            Timezone* _90 = &Timezone_utc; // ref
                            Timezone _91 = Timezone_copy(_90);
                            Timezone _92 = Maybe_from__Timezone(_86, _91);
                            Timezone* _93 = &_92; // ref
                            bool _94 = Timezone__EQ_(_79, _93);
                            bool _95 = _94;
                            Timezone_delete(_78);
                            Timezone_delete(_92);
                            _99 = _95;
                        } else {
                            bool _98 = false;
                            _99 = _98;
                        }
                        bool _100 = _99;
                        _104 = _100;
                    } else {
                        bool _103 = false;
                        _104 = _103;
                    }
                    bool _105 = _104;
                    _109 = _105;
                } else {
                    bool _108 = false;
                    _109 = _108;
                }
                bool _110 = _109;
                _114 = _110;
            } else {
                bool _113 = false;
                _114 = _113;
            }
            bool _115 = _114;
            _119 = _115;
        } else {
            bool _118 = false;
            _119 = _118;
        }
        bool _120 = _119;
        _124 = _120;
    } else {
        bool _123 = false;
        _124 = _123;
    }
    return _124;
}

bool Datetime__GT_(Datetime* a, Datetime* b) {
    bool _135;
    int* _10 = Datetime_year(a);
    int _11 = Int_copy(_10);
    int* _15 = Datetime_year(b);
    int _16 = Int_copy(_15);
    bool _17 = Int__GT_(_11, _16);
    if (_17) {
        bool _20 = true;
        _135 = _20;
    } else {
        bool _133;
        int* _27 = Datetime_day(a);
        int _28 = Int_copy(_27);
        int* _32 = Datetime_day(b);
        int _33 = Int_copy(_32);
        bool _34 = Int__GT_(_28, _33);
        if (_34) {
            bool _37 = true;
            _133 = _37;
        } else {
            bool _131;
            Maybe__int* _45 = Datetime_hours(a);
            Maybe__int _46 = Maybe_copy__int(_45);
            int _48 = Maybe_from__int(_46, 0);
            Maybe__int* _53 = Datetime_hours(b);
            Maybe__int _54 = Maybe_copy__int(_53);
            int _56 = Maybe_from__int(_54, 0);
            bool _57 = Int__GT_(_48, _56);
            if (_57) {
                bool _60 = true;
                _131 = _60;
            } else {
                bool _129;
                Maybe__int* _68 = Datetime_minutes(a);
                Maybe__int _69 = Maybe_copy__int(_68);
                int _71 = Maybe_from__int(_69, 0);
                Maybe__int* _76 = Datetime_minutes(b);
                Maybe__int _77 = Maybe_copy__int(_76);
                int _79 = Maybe_from__int(_77, 0);
                bool _80 = Int__GT_(_71, _79);
                if (_80) {
                    bool _83 = true;
                    _129 = _83;
                } else {
                    bool _127;
                    Maybe__int* _91 = Datetime_seconds(a);
                    Maybe__int _92 = Maybe_copy__int(_91);
                    int _94 = Maybe_from__int(_92, 0);
                    Maybe__int* _99 = Datetime_seconds(b);
                    Maybe__int _100 = Maybe_copy__int(_99);
                    int _102 = Maybe_from__int(_100, 0);
                    bool _103 = Int__GT_(_94, _102);
                    if (_103) {
                        bool _106 = true;
                        _127 = _106;
                    } else {
                        Maybe__int* _113 = Datetime_nanoseconds(a);
                        Maybe__int _114 = Maybe_copy__int(_113);
                        int _116 = Maybe_from__int(_114, 0);
                        Maybe__int* _121 = Datetime_nanoseconds(b);
                        Maybe__int _122 = Maybe_copy__int(_121);
                        int _124 = Maybe_from__int(_122, 0);
                        bool _125 = Int__GT_(_116, _124);
                        bool _126 = _125;
                        _127 = _126;
                    }
                    bool _128 = _127;
                    _129 = _128;
                }
                bool _130 = _129;
                _131 = _130;
            }
            bool _132 = _131;
            _133 = _132;
        }
        bool _134 = _133;
        _135 = _134;
    }
    return _135;
}

int Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* _env, int acc, int* x) {
    int _68;
    int _57 = Int_copy(x);
    bool _59 = Int__LT_(_57, _env->n);
    if (_59) {
        int _63 = Int_copy(x);
        int _64 = _63;
        _68 = _64;
    } else {
        int _67 = acc;
        _68 = _67;
    }
    return _68;
}

int Datetime__Lambda_for_MINUS_year_31_env(Datetime__Lambda_for_MINUS_year_31_env_ty* _env, int acc, int* x) {
    int _30;
    int _16 = Int_copy(x);
    bool _17 = Datetime_is_MINUS_leap(_16);
    if (_17) {
        int _22 = Int__PLUS_(_env->a, acc);
        int _23 = _22;
        _30 = _23;
    } else {
        int _28 = Int__PLUS_(_env->b, acc);
        int _29 = _28;
        _30 = _29;
    }
    return _30;
}

int Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env(Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* _env, int acc, int* x) {
    int _68;
    int _57 = Int_copy(x);
    bool _59 = Int__LT_(_57, _env->n);
    if (_59) {
        int _63 = Int_copy(x);
        int _64 = _63;
        _68 = _64;
    } else {
        int _67 = acc;
        _68 = _67;
    }
    return _68;
}

int Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_76_env(int n) {
    // This lambda captures 1 variables: n
    Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty *_69_env = CARP_MALLOC(sizeof(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty));
    _69_env->n = n;
    Lambda _69 = {
      .callback = (void*)Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env,
      .env = _69_env,
      .delete = (void*)Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty_delete,
      .copy = (void*)Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty_copy
    };
    Lambda* _70 = &_69; // ref
    Array__int* _74 = &Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH; // ref
    int _75 = Array_reduce__int_int(_70, 0, _74);
    Function_delete__int_int_MUL__int(_69);
    return _75;
}

String Datetime__Lambda_strftime__Datetime_MUL__105_env(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* _env, String* x, int* i) {
    String _104;
    bool _68;
    bool _43 = String_empty_QMARK_(x);
    if (_43) {
        bool _63;
        static int _50_lit = 0;
        int* _50 = &_50_lit; // ref
        bool _51 = IntRef__EQ_(i, _50);
        if (_51) {
            bool _54 = true;
            _63 = _54;
        } else {
            int* _60 = &_env->ln; // ref
            bool _61 = IntRef__EQ_(i, _60);
            bool _62 = _61;
            _63 = _62;
        }
        bool _64 = _63;
        _68 = _64;
    } else {
        bool _67 = false;
        _68 = _67;
    }
    if (_68) {
        static String _71 = "";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _73 = _72;
        _104 = _73;
    } else {
        String _102;
        bool _78 = String_empty_QMARK_(x);
        if (_78) {
            static String _81 = "%";
            String *_81_ref = &_81;
            String _82 = String_copy(_81_ref);
            String _83 = _82;
            _102 = _83;
        } else {
            Array _95 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
            static String _90 = "%";
            String *_90_ref = &_90;
            String _91 = String_copy(_90_ref);
            ((String*)_95.data)[0] = _91;
            String _94 = String_copy(x);
            ((String*)_95.data)[1] = _94;
            Array__String* _96 = &_95; // ref
            String _97 = String_concat(_96);
            String* _98 = &_97; // ref
            String _100 = Datetime_format(_98, _env->dt);
            String _101 = _100;
            Array_delete__String(_95);
            String_delete(_97);
            _102 = _101;
        }
        String _103 = _102;
        _104 = _103;
    }
    return _104;
}

Datetime Datetime_add_MINUS_seconds(Datetime* d, int n) {
    Datetime _407;
    bool _8 = neg_QMARK___int(n);
    if (_8) {
        Datetime _210;
        /* let */ {
            Datetime _14 = Datetime_copy(d);
            Datetime nd = _14;
            Maybe__int* _20 = Datetime_seconds(d);
            Maybe__int _21 = Maybe_copy__int(_20);
            int _23 = Maybe_from__int(_21, 0);
            int s = _23;
            int _29 = Int__PLUS_(s, n);
            int _30 = Int_dec(_29);
            int a = _30;
            Datetime* _36 = &nd; // ref
            int _41 = Datetime_mod_MINUS_(a, 60);
            Maybe__int _42 = Maybe_Just__int(_41);
            Datetime_set_MINUS_seconds_BANG_(_36, _42);
            Datetime _208;
            bool _48 = _GT__EQ___int(a, 0);
            if (_48) {
                Datetime _51 = nd;
                _208 = _51;
            } else {
                Datetime _206;
                /* let */ {
                    int _58 = Int__DIV_(a, 60);
                    int m = _58;
                    Maybe__int* _64 = Datetime_minutes(d);
                    Maybe__int _65 = Maybe_copy__int(_64);
                    int _67 = Maybe_from__int(_65, 0);
                    int dm = _67;
                    int _73 = Int__PLUS_(m, dm);
                    int _74 = Int_dec(_73);
                    int ma = _74;
                    Datetime* _80 = &nd; // ref
                    int _85 = Datetime_mod_MINUS_(ma, 60);
                    Maybe__int _86 = Maybe_Just__int(_85);
                    Datetime_set_MINUS_minutes_BANG_(_80, _86);
                    Datetime _204;
                    bool _92 = _GT__EQ___int(ma, 0);
                    if (_92) {
                        Datetime _95 = nd;
                        _204 = _95;
                    } else {
                        Datetime _202;
                        /* let */ {
                            int _102 = Int__DIV_(ma, 60);
                            int h = _102;
                            Maybe__int* _108 = Datetime_hours(d);
                            Maybe__int _109 = Maybe_copy__int(_108);
                            int _111 = Maybe_from__int(_109, 0);
                            int dh = _111;
                            int _117 = Int__PLUS_(h, dh);
                            int _118 = Int_dec(_117);
                            int ha = _118;
                            Datetime* _124 = &nd; // ref
                            int _129 = Datetime_mod_MINUS_(ha, 24);
                            Maybe__int _130 = Maybe_Just__int(_129);
                            Datetime_set_MINUS_hours_BANG_(_124, _130);
                            Datetime _200;
                            bool _136 = _GT__EQ___int(ha, 0);
                            if (_136) {
                                Datetime _139 = nd;
                                _200 = _139;
                            } else {
                                Datetime _198;
                                /* let */ {
                                    int _145 = Datetime_to_MINUS_ordinal(d);
                                    int ord = _145;
                                    int _154 = Int__DIV_(ha, 24);
                                    int _155 = Int__PLUS_(ord, _154);
                                    int _156 = Int_dec(_155);
                                    Datetime _157 = Datetime_from_MINUS_ordinal__int(_156);
                                    Datetime nnd = _157;
                                    Datetime* _163 = &nd; // ref
                                    Datetime* _168 = &nnd; // ref
                                    int* _169 = Datetime_day(_168);
                                    int _170 = Int_copy(_169);
                                    Datetime_set_MINUS_day_BANG_(_163, _170);
                                    Datetime* _175 = &nd; // ref
                                    Datetime* _180 = &nnd; // ref
                                    int* _181 = Datetime_month(_180);
                                    int _182 = Int_copy(_181);
                                    Datetime_set_MINUS_month_BANG_(_175, _182);
                                    Datetime* _187 = &nd; // ref
                                    Datetime* _192 = &nnd; // ref
                                    int* _193 = Datetime_year(_192);
                                    int _194 = Int_copy(_193);
                                    Datetime_set_MINUS_year_BANG_(_187, _194);
                                    Datetime _197 = nd;
                                    _198 = _197;
                                    Datetime_delete(nnd);
                                }
                                Datetime _199 = _198;
                                _200 = _199;
                            }
                            Datetime _201 = _200;
                            _202 = _201;
                        }
                        Datetime _203 = _202;
                        _204 = _203;
                    }
                    Datetime _205 = _204;
                    _206 = _205;
                }
                Datetime _207 = _206;
                _208 = _207;
            }
            Datetime _209 = _208;
            _210 = _209;
        }
        Datetime _211 = _210;
        _407 = _211;
    } else {
        Datetime _405;
        /* let */ {
            Datetime _217 = Datetime_copy(d);
            Datetime nd = _217;
            Maybe__int* _223 = Datetime_seconds(d);
            Maybe__int _224 = Maybe_copy__int(_223);
            int _226 = Maybe_from__int(_224, 0);
            int s = _226;
            int _231 = Int__PLUS_(s, n);
            int a = _231;
            Datetime* _237 = &nd; // ref
            int _242 = Int_mod(a, 60);
            Maybe__int _243 = Maybe_Just__int(_242);
            Datetime_set_MINUS_seconds_BANG_(_237, _243);
            Datetime _403;
            bool _249 = Int__LT_(a, 60);
            if (_249) {
                Datetime _252 = nd;
                _403 = _252;
            } else {
                Datetime _401;
                /* let */ {
                    int _259 = Int__DIV_(a, 60);
                    int m = _259;
                    Maybe__int* _265 = Datetime_minutes(d);
                    Maybe__int _266 = Maybe_copy__int(_265);
                    int _268 = Maybe_from__int(_266, 0);
                    int dm = _268;
                    int _273 = Int__PLUS_(m, dm);
                    int ma = _273;
                    Datetime* _279 = &nd; // ref
                    int _284 = Int_mod(ma, 60);
                    Maybe__int _285 = Maybe_Just__int(_284);
                    Datetime_set_MINUS_minutes_BANG_(_279, _285);
                    Datetime _399;
                    bool _291 = Int__LT_(ma, 60);
                    if (_291) {
                        Datetime _294 = nd;
                        _399 = _294;
                    } else {
                        Datetime _397;
                        /* let */ {
                            int _301 = Int__DIV_(ma, 60);
                            int h = _301;
                            Maybe__int* _307 = Datetime_hours(d);
                            Maybe__int _308 = Maybe_copy__int(_307);
                            int _310 = Maybe_from__int(_308, 0);
                            int dh = _310;
                            int _315 = Int__PLUS_(h, dh);
                            int ha = _315;
                            Datetime* _321 = &nd; // ref
                            int _326 = Int_mod(ha, 24);
                            Maybe__int _327 = Maybe_Just__int(_326);
                            Datetime_set_MINUS_hours_BANG_(_321, _327);
                            Datetime _395;
                            bool _333 = Int__LT_(ha, 24);
                            if (_333) {
                                Datetime _336 = nd;
                                _395 = _336;
                            } else {
                                Datetime _393;
                                /* let */ {
                                    int _342 = Datetime_to_MINUS_ordinal(d);
                                    int ord = _342;
                                    int _350 = Int__DIV_(ha, 24);
                                    int _351 = Int__PLUS_(ord, _350);
                                    Datetime _352 = Datetime_from_MINUS_ordinal__int(_351);
                                    Datetime nnd = _352;
                                    Datetime* _358 = &nd; // ref
                                    Datetime* _363 = &nnd; // ref
                                    int* _364 = Datetime_day(_363);
                                    int _365 = Int_copy(_364);
                                    Datetime_set_MINUS_day_BANG_(_358, _365);
                                    Datetime* _370 = &nd; // ref
                                    Datetime* _375 = &nnd; // ref
                                    int* _376 = Datetime_month(_375);
                                    int _377 = Int_copy(_376);
                                    Datetime_set_MINUS_month_BANG_(_370, _377);
                                    Datetime* _382 = &nd; // ref
                                    Datetime* _387 = &nnd; // ref
                                    int* _388 = Datetime_year(_387);
                                    int _389 = Int_copy(_388);
                                    Datetime_set_MINUS_year_BANG_(_382, _389);
                                    Datetime _392 = nd;
                                    _393 = _392;
                                    Datetime_delete(nnd);
                                }
                                Datetime _394 = _393;
                                _395 = _394;
                            }
                            Datetime _396 = _395;
                            _397 = _396;
                        }
                        Datetime _398 = _397;
                        _399 = _398;
                    }
                    Datetime _400 = _399;
                    _401 = _400;
                }
                Datetime _402 = _401;
                _403 = _402;
            }
            Datetime _404 = _403;
            _405 = _404;
        }
        Datetime _406 = _405;
        _407 = _406;
    }
    return _407;
}

Datetime Datetime_copy(Datetime* pRef) {
    Datetime copy = *pRef;
    /* Ignore non-managed member 'year' : Int */
    /* Ignore non-managed member 'month' : Int */
    /* Ignore non-managed member 'day' : Int */
    copy.hours = Maybe_copy__int(&(pRef->hours));
    copy.minutes = Maybe_copy__int(&(pRef->minutes));
    copy.seconds = Maybe_copy__int(&(pRef->seconds));
    copy.nanoseconds = Maybe_copy__int(&(pRef->nanoseconds));
    copy.tz = Maybe_copy__Timezone(&(pRef->tz));
    return copy;
}

Datetime Datetime_date(int y, int m, int d) {
    Maybe__int _11 = Maybe_Nothing__int();
    Maybe__int _13 = Maybe_Nothing__int();
    Maybe__int _15 = Maybe_Nothing__int();
    Maybe__int _17 = Maybe_Nothing__int();
    Maybe__Timezone _19 = Maybe_Nothing__Timezone();
    Datetime _20 = Datetime_init(y, m, d, _11, _13, _15, _17, _19);
    return _20;
}

int* Datetime_day(Datetime* p) { return (&(p->day)); }

int Datetime_days_MINUS_before_MINUS_month(int year, int month) {
    int _42;
    bool _19;
    bool _10 = Int__GT_(month, 2);
    if (_10) {
        bool _14 = Datetime_is_MINUS_leap(year);
        bool _15 = _14;
        _19 = _15;
    } else {
        bool _18 = false;
        _19 = _18;
    }
    if (_19) {
        Array__int* _26 = &Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH; // ref
        int* _28 = Array_unsafe_MINUS_nth__int(_26, month);
        int _29 = Int_copy(_28);
        int _30 = Int_inc(_29);
        int _31 = _30;
        _42 = _31;
    } else {
        Array__int* _37 = &Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH; // ref
        int* _39 = Array_unsafe_MINUS_nth__int(_37, month);
        int _40 = Int_copy(_39);
        int _41 = _40;
        _42 = _41;
    }
    return _42;
}

int Datetime_days_MINUS_before_MINUS_year(int year) {
    int _32;
    /* let */ {
        int _8 = Int_dec(year);
        int y = _8;
        int _15 = Int__MUL_(y, 365);
        int _20 = Int__DIV_(y, 4);
        int _24 = Int__DIV_(y, 400);
        int _25 = Int__PLUS_(_20, _24);
        int _26 = Int__PLUS_(_15, _25);
        int _30 = Int__DIV_(y, 100);
        int _31 = Int__MINUS_(_26, _30);
        _32 = _31;
    }
    return _32;
}

int Datetime_days_MINUS_in_MINUS_month(int year, int month) {
    int _33;
    bool _19;
    bool _10 = Int__EQ_(month, 2);
    if (_10) {
        bool _14 = Datetime_is_MINUS_leap(year);
        bool _15 = _14;
        _19 = _15;
    } else {
        bool _18 = false;
        _19 = _18;
    }
    if (_19) {
        int _22 = 29;
        _33 = _22;
    } else {
        Array__int* _28 = &Datetime_DAYS_MINUS_IN_MINUS_MONTH; // ref
        int* _30 = Array_unsafe_MINUS_nth__int(_28, month);
        int _31 = Int_copy(_30);
        int _32 = _31;
        _33 = _32;
    }
    return _33;
}

void Datetime_delete(Datetime p) {
    /* Ignore non-managed member 'year' : Int */
    /* Ignore non-managed member 'month' : Int */
    /* Ignore non-managed member 'day' : Int */
    Maybe_delete__int(p.hours);
    Maybe_delete__int(p.minutes);
    Maybe_delete__int(p.seconds);
    Maybe_delete__int(p.nanoseconds);
    Maybe_delete__Timezone(p.tz);
}

String Datetime_expand_MINUS_compound_MINUS_formats(String* fmt) {
    String _201;
    /* let */ {
        static String _7 = "";
        String *_7_ref = &_7;
        String _8 = String_copy(_7_ref);
        String result = _8;
        int i = 0;
        int _14 = String_length(fmt);
        int len = _14;
        bool _21 = Int__LT_(i, len);
        bool _198 = _21;
        while (_198) {
            /* let */ {
                Char _27 = String_char_MINUS_at(fmt, i);
                Char c = _27;
                bool _47;
                bool _34 = Char__EQ_(c, 37/*'%'*/);
                if (_34) {
                    int _40 = Int__PLUS_(i, 1);
                    bool _42 = Int__LT_(_40, len);
                    bool _43 = _42;
                    _47 = _43;
                } else {
                    bool _46 = false;
                    _47 = _46;
                }
                if (_47) {
                    /* let */ {
                        int _56 = Int__PLUS_(i, 1);
                        Char _57 = String_char_MINUS_at(fmt, _56);
                        Char spec = _57;
                        /* let */ {
                            Char gensym_MINUS_generated1040 = spec;
                            bool _67 = Char__EQ_(gensym_MINUS_generated1040, 99/*'c'*/);
                            if (_67) {
                                Array _77 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
                                ((String*)_77.data)[0] = result;
                                static String _75 = "%a %b %d %H:%M:%S %Y";
                                String *_75_ref = &_75;
                                String _76 = String_copy(_75_ref);
                                ((String*)_77.data)[1] = _76;
                                Array__String* _78 = &_77; // ref
                                String _79 = String_concat(_78);
                                result = _79;  // String = String
                                int _86 = Int__PLUS_(i, 2);
                                i = _86;  // Int = Int
                                Array_delete__String(_77);
                            } else {
                                bool _94 = Char__EQ_(gensym_MINUS_generated1040, 120/*'x'*/);
                                if (_94) {
                                    Array _104 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
                                    ((String*)_104.data)[0] = result;
                                    static String _102 = "%Y-%m-%d";
                                    String *_102_ref = &_102;
                                    String _103 = String_copy(_102_ref);
                                    ((String*)_104.data)[1] = _103;
                                    Array__String* _105 = &_104; // ref
                                    String _106 = String_concat(_105);
                                    result = _106;  // String = String
                                    int _113 = Int__PLUS_(i, 2);
                                    i = _113;  // Int = Int
                                    Array_delete__String(_104);
                                } else {
                                    bool _121 = Char__EQ_(gensym_MINUS_generated1040, 88/*'X'*/);
                                    if (_121) {
                                        Array _131 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
                                        ((String*)_131.data)[0] = result;
                                        static String _129 = "%H:%M:%S";
                                        String *_129_ref = &_129;
                                        String _130 = String_copy(_129_ref);
                                        ((String*)_131.data)[1] = _130;
                                        Array__String* _132 = &_131; // ref
                                        String _133 = String_concat(_132);
                                        result = _133;  // String = String
                                        int _140 = Int__PLUS_(i, 2);
                                        i = _140;  // Int = Int
                                        Array_delete__String(_131);
                                    } else {
                                        Array _155 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(String) * 3) };
                                        ((String*)_155.data)[0] = result;
                                        String _151 = Char_str(c);
                                        ((String*)_155.data)[1] = _151;
                                        String _154 = Char_str(spec);
                                        ((String*)_155.data)[2] = _154;
                                        Array__String* _156 = &_155; // ref
                                        String _157 = String_concat(_156);
                                        result = _157;  // String = String
                                        int _164 = Int__PLUS_(i, 2);
                                        i = _164;  // Int = Int
                                        Array_delete__String(_155);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    Array _184 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
                    ((String*)_184.data)[0] = result;
                    String _183 = Char_str(c);
                    ((String*)_184.data)[1] = _183;
                    Array__String* _185 = &_184; // ref
                    String _186 = String_concat(_185);
                    result = _186;  // String = String
                    int _193 = Int__PLUS_(i, 1);
                    i = _193;  // Int = Int
                    Array_delete__String(_184);
                }
            }
            bool _21 = Int__LT_(i, len);
            _198 = _21;
        }
        String _200 = result;
        _201 = _200;
    }
    return _201;
}

int Datetime_for_MINUS_year(Array__int* years, int a, int b) {
    // This lambda captures 2 variables: a, b
    Datetime__Lambda_for_MINUS_year_31_env_ty *_31_env = CARP_MALLOC(sizeof(Datetime__Lambda_for_MINUS_year_31_env_ty));
    _31_env->a = a;
    _31_env->b = b;
    Lambda _31 = {
      .callback = (void*)Datetime__Lambda_for_MINUS_year_31_env,
      .env = _31_env,
      .delete = (void*)Datetime__Lambda_for_MINUS_year_31_env_ty_delete,
      .copy = (void*)Datetime__Lambda_for_MINUS_year_31_env_ty_copy
    };
    Lambda* _32 = &_31; // ref
    int _35 = Array_reduce__int_int(_32, 0, years);
    Function_delete__int_int_MUL__int(_31);
    return _35;
}

String Datetime_format(String* s, Datetime* dt) {
    String _39;
    /* let */ {
        int _10 = String_index_MINUS_of(s, 37/*'%'*/);
        int idx = _10;
        int _16 = Int_inc(idx);
        Char _17 = String_char_MINUS_at(s, _16);
        Char formatter = _17;
        Array _36 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(String) * 3) };
        String _24 = String_prefix(s, idx);
        ((String*)_36.data)[0] = _24;
        String _28 = Datetime_format_MINUS_for(formatter, dt);
        ((String*)_36.data)[1] = _28;
        int _34 = Int__PLUS_(idx, 2);
        String _35 = String_suffix(s, _34);
        ((String*)_36.data)[2] = _35;
        Array__String* _37 = &_36; // ref
        String _38 = String_concat(_37);
        _39 = _38;
        Array_delete__String(_36);
    }
    return _39;
}

String Datetime_format_MINUS_for(Char c, Datetime* dt) {
    String _521;
    /* let */ {
        Char gensym_MINUS_generated1039 = c;
        String _520;
        bool _13 = Char__EQ_(gensym_MINUS_generated1039, 97/*'a'*/);
        if (_13) {
            String _17 = Datetime_weekday_MINUS_short_MINUS_string(dt);
            String _18 = _17;
            _520 = _18;
        } else {
            String _518;
            bool _24 = Char__EQ_(gensym_MINUS_generated1039, 65/*'A'*/);
            if (_24) {
                String _28 = Datetime_weekday_MINUS_string(dt);
                String _29 = _28;
                _518 = _29;
            } else {
                String _516;
                bool _35 = Char__EQ_(gensym_MINUS_generated1039, 119/*'w'*/);
                if (_35) {
                    int _40 = Datetime_weekday(dt);
                    String _41 = Int_str(_40);
                    String _42 = _41;
                    _516 = _42;
                } else {
                    String _514;
                    bool _48 = Char__EQ_(gensym_MINUS_generated1039, 100/*'d'*/);
                    if (_48) {
                        static String _51 = "%02d";
                        String *_51_ref = &_51;
                        int* _55 = Datetime_day(dt);
                        int _56 = Int_copy(_55);
                        String _57 = Int_format(_51_ref, _56);
                        String _58 = _57;
                        _514 = _58;
                    } else {
                        String _512;
                        bool _64 = Char__EQ_(gensym_MINUS_generated1039, 98/*'b'*/);
                        if (_64) {
                            String _68 = Datetime_month_MINUS_short_MINUS_string(dt);
                            String _69 = _68;
                            _512 = _69;
                        } else {
                            String _510;
                            bool _75 = Char__EQ_(gensym_MINUS_generated1039, 66/*'B'*/);
                            if (_75) {
                                String _79 = Datetime_month_MINUS_string(dt);
                                String _80 = _79;
                                _510 = _80;
                            } else {
                                String _508;
                                bool _86 = Char__EQ_(gensym_MINUS_generated1039, 109/*'m'*/);
                                if (_86) {
                                    static String _89 = "%02d";
                                    String *_89_ref = &_89;
                                    int* _93 = Datetime_month(dt);
                                    int _94 = Int_copy(_93);
                                    String _95 = Int_format(_89_ref, _94);
                                    String _96 = _95;
                                    _508 = _96;
                                } else {
                                    String _506;
                                    bool _102 = Char__EQ_(gensym_MINUS_generated1039, 121/*'y'*/);
                                    if (_102) {
                                        static String _105 = "%02d";
                                        String *_105_ref = &_105;
                                        int* _110 = Datetime_year(dt);
                                        int _111 = Int_copy(_110);
                                        int _113 = Int_mod(_111, 100);
                                        String _114 = Int_format(_105_ref, _113);
                                        String _115 = _114;
                                        _506 = _115;
                                    } else {
                                        String _504;
                                        bool _121 = Char__EQ_(gensym_MINUS_generated1039, 89/*'Y'*/);
                                        if (_121) {
                                            static String _124 = "%04d";
                                            String *_124_ref = &_124;
                                            int* _128 = Datetime_year(dt);
                                            int _129 = Int_copy(_128);
                                            String _130 = Int_format(_124_ref, _129);
                                            String _131 = _130;
                                            _504 = _131;
                                        } else {
                                            String _502;
                                            bool _137 = Char__EQ_(gensym_MINUS_generated1039, 72/*'H'*/);
                                            if (_137) {
                                                static String _140 = "%02d";
                                                String *_140_ref = &_140;
                                                Maybe__int* _145 = Datetime_hours(dt);
                                                Maybe__int _146 = Maybe_copy__int(_145);
                                                int _148 = Maybe_from__int(_146, 0);
                                                String _149 = Int_format(_140_ref, _148);
                                                String _150 = _149;
                                                _502 = _150;
                                            } else {
                                                String _500;
                                                bool _156 = Char__EQ_(gensym_MINUS_generated1039, 73/*'I'*/);
                                                if (_156) {
                                                    static String _159 = "%02d";
                                                    String *_159_ref = &_159;
                                                    Maybe__int* _165 = Datetime_hours(dt);
                                                    Maybe__int _166 = Maybe_copy__int(_165);
                                                    int _168 = Maybe_from__int(_166, 0);
                                                    int _170 = Int_mod(_168, 12);
                                                    String _171 = Int_format(_159_ref, _170);
                                                    String _172 = _171;
                                                    _500 = _172;
                                                } else {
                                                    String _498;
                                                    bool _178 = Char__EQ_(gensym_MINUS_generated1039, 112/*'p'*/);
                                                    if (_178) {
                                                        String _202;
                                                        Maybe__int* _186 = Datetime_hours(dt);
                                                        Maybe__int _187 = Maybe_copy__int(_186);
                                                        int _189 = Maybe_from__int(_187, 0);
                                                        bool _191 = Int__GT_(_189, 11);
                                                        if (_191) {
                                                            static String _194 = "PM";
                                                            String *_194_ref = &_194;
                                                            String _195 = String_copy(_194_ref);
                                                            String _196 = _195;
                                                            _202 = _196;
                                                        } else {
                                                            static String _199 = "AM";
                                                            String *_199_ref = &_199;
                                                            String _200 = String_copy(_199_ref);
                                                            String _201 = _200;
                                                            _202 = _201;
                                                        }
                                                        String _203 = _202;
                                                        _498 = _203;
                                                    } else {
                                                        String _496;
                                                        bool _209 = Char__EQ_(gensym_MINUS_generated1039, 77/*'M'*/);
                                                        if (_209) {
                                                            static String _212 = "%02d";
                                                            String *_212_ref = &_212;
                                                            Maybe__int* _217 = Datetime_minutes(dt);
                                                            Maybe__int _218 = Maybe_copy__int(_217);
                                                            int _220 = Maybe_from__int(_218, 0);
                                                            String _221 = Int_format(_212_ref, _220);
                                                            String _222 = _221;
                                                            _496 = _222;
                                                        } else {
                                                            String _494;
                                                            bool _228 = Char__EQ_(gensym_MINUS_generated1039, 83/*'S'*/);
                                                            if (_228) {
                                                                static String _231 = "%02d";
                                                                String *_231_ref = &_231;
                                                                Maybe__int* _236 = Datetime_seconds(dt);
                                                                Maybe__int _237 = Maybe_copy__int(_236);
                                                                int _239 = Maybe_from__int(_237, 0);
                                                                String _240 = Int_format(_231_ref, _239);
                                                                String _241 = _240;
                                                                _494 = _241;
                                                            } else {
                                                                String _492;
                                                                bool _247 = Char__EQ_(gensym_MINUS_generated1039, 110/*'n'*/);
                                                                if (_247) {
                                                                    static String _250 = "%09d";
                                                                    String *_250_ref = &_250;
                                                                    Maybe__int* _255 = Datetime_nanoseconds(dt);
                                                                    Maybe__int _256 = Maybe_copy__int(_255);
                                                                    int _258 = Maybe_from__int(_256, 0);
                                                                    String _259 = Int_format(_250_ref, _258);
                                                                    String _260 = _259;
                                                                    _492 = _260;
                                                                } else {
                                                                    String _490;
                                                                    bool _266 = Char__EQ_(gensym_MINUS_generated1039, 122/*'z'*/);
                                                                    if (_266) {
                                                                        Maybe__Timezone* _272 = Datetime_tz(dt);
                                                                        Maybe__Timezone _273 = Maybe_copy__Timezone(_272);
                                                                        String _345;
                                                                        if(_273._tag == Maybe__Timezone_Just_tag) {
                                                                            Maybe__Timezone _273_temp = _273;
                                                                            Timezone t = _273_temp.u.Just.member0;
                                                                            // Case expr:
                                                                            String _339;
                                                                            /* let */ {
                                                                                Timezone* _283 = &t; // ref
                                                                                Long* _284 = Timezone_delta(_283);
                                                                                Long _285 = Long_copy(_284);
                                                                                Long d = _285;
                                                                                Long _290 = Long__MUL_(60l, 60l);
                                                                                Long s = _290;
                                                                                static String _297 = "%s";
                                                                                String *_297_ref = &_297;
                                                                                String* _309;
                                                                                bool _302 = Long__LT_(d, 0l);
                                                                                if (_302) {
                                                                                    static String _304 = "-";
                                                                                    String *_304_ref = &_304;
                                                                                    String* _305 = _304_ref;
                                                                                    _309 = _305;
                                                                                } else {
                                                                                    static String _307 = "+";
                                                                                    String *_307_ref = &_307;
                                                                                    String* _308 = _307_ref;
                                                                                    _309 = _308;
                                                                                }
                                                                                String _1000060 = String_format(_297_ref, _309);
                                                                                String* _1000058 = &_1000060; // ref
                                                                                static String _316 = "%02d";
                                                                                String *_316_ref = &_316;
                                                                                Long _321 = Long__DIV_(d, s);
                                                                                Long _322 = Long_abs(_321);
                                                                                String _1000069 = Long_format(_316_ref, _322);
                                                                                String* _1000067 = &_1000069; // ref
                                                                                static String _327 = "%02d";
                                                                                String *_327_ref = &_327;
                                                                                Long _331 = Long_mod(d, s);
                                                                                String _1000072 = Long_format(_327_ref, _331);
                                                                                String* _1000070 = &_1000072; // ref
                                                                                String _1000066 = String_append(_1000067, _1000070);
                                                                                String* _1000064 = &_1000066; // ref
                                                                                String _1000057 = String_append(_1000058, _1000064);
                                                                                String* _1000055 = &_1000057; // ref
                                                                                String _338 = String_copy(_1000055);
                                                                                _339 = _338;
                                                                                String_delete(_1000057);
                                                                                String_delete(_1000060);
                                                                                String_delete(_1000066);
                                                                                String_delete(_1000069);
                                                                                String_delete(_1000072);
                                                                            }
                                                                            _345 = _339;
                                                                            Timezone_delete(t);
                                                                        }
                                                                        else if(_273._tag == Maybe__Timezone_Nothing_tag) {
                                                                            Maybe__Timezone _273_temp = _273;
                                                                            // Case expr:
                                                                            static String _343 = "";
                                                                            String *_343_ref = &_343;
                                                                            String _344 = String_copy(_343_ref);
                                                                            _345 = _344;
                                                                        }
                                                                        else UNHANDLED("time.carp", 491);
                                                                        String _346 = _345;
                                                                        _490 = _346;
                                                                    } else {
                                                                        String _488;
                                                                        bool _352 = Char__EQ_(gensym_MINUS_generated1039, 90/*'Z'*/);
                                                                        if (_352) {
                                                                            Maybe__Timezone* _361 = Datetime_tz(dt);
                                                                            Maybe__Timezone _362 = Maybe_copy__Timezone(_361);
                                                                            Timezone _364 = Timezone_zero();
                                                                            Timezone _365 = Maybe_from__Timezone(_362, _364);
                                                                            Timezone* _366 = &_365; // ref
                                                                            String* _367 = Timezone_name(_366);
                                                                            String _368 = String_copy(_367);
                                                                            String _369 = _368;
                                                                            Timezone_delete(_365);
                                                                            _488 = _369;
                                                                        } else {
                                                                            String _486;
                                                                            bool _375 = Char__EQ_(gensym_MINUS_generated1039, 106/*'j'*/);
                                                                            if (_375) {
                                                                                static String _378 = "%03d";
                                                                                String *_378_ref = &_378;
                                                                                int _381 = Datetime_yearday(dt);
                                                                                String _382 = Int_format(_378_ref, _381);
                                                                                String _383 = _382;
                                                                                _486 = _383;
                                                                            } else {
                                                                                String _484;
                                                                                bool _389 = Char__EQ_(gensym_MINUS_generated1039, 85/*'U'*/);
                                                                                if (_389) {
                                                                                    static String _392 = "%02d";
                                                                                    String *_392_ref = &_392;
                                                                                    int _398 = Datetime_yearday(dt);
                                                                                    int _401 = Datetime_isoweekday(dt);
                                                                                    int _402 = Int__MINUS_(_398, _401);
                                                                                    int _404 = Int__PLUS_(_402, 7);
                                                                                    int _406 = Int__DIV_(_404, 7);
                                                                                    String _407 = Int_format(_392_ref, _406);
                                                                                    String _408 = _407;
                                                                                    _484 = _408;
                                                                                } else {
                                                                                    String _482;
                                                                                    bool _414 = Char__EQ_(gensym_MINUS_generated1039, 87/*'W'*/);
                                                                                    if (_414) {
                                                                                        static String _417 = "%02d";
                                                                                        String *_417_ref = &_417;
                                                                                        int _423 = Datetime_yearday(dt);
                                                                                        int _427 = Datetime_isoweekday(dt);
                                                                                        int _429 = Int_mod(_427, 7);
                                                                                        int _430 = Int__MINUS_(_423, _429);
                                                                                        int _432 = Int__PLUS_(_430, 7);
                                                                                        int _434 = Int__DIV_(_432, 7);
                                                                                        String _435 = Int_format(_417_ref, _434);
                                                                                        String _436 = _435;
                                                                                        _482 = _436;
                                                                                    } else {
                                                                                        String _480;
                                                                                        bool _442 = Char__EQ_(gensym_MINUS_generated1039, 99/*'c'*/);
                                                                                        if (_442) {
                                                                                            static String _446 = "%a %b %d %H:%M:%S %Y";
                                                                                            String *_446_ref = &_446;
                                                                                            String _447 = Datetime_strftime__Datetime_MUL_(dt, _446_ref);
                                                                                            String _448 = _447;
                                                                                            _480 = _448;
                                                                                        } else {
                                                                                            String _478;
                                                                                            bool _454 = Char__EQ_(gensym_MINUS_generated1039, 120/*'x'*/);
                                                                                            if (_454) {
                                                                                                String _458 = Datetime_isoformat(dt);
                                                                                                String _459 = _458;
                                                                                                _478 = _459;
                                                                                            } else {
                                                                                                String _476;
                                                                                                bool _465 = Char__EQ_(gensym_MINUS_generated1039, 88/*'X'*/);
                                                                                                if (_465) {
                                                                                                    String _469 = Datetime_isotime(dt);
                                                                                                    String _470 = _469;
                                                                                                    _476 = _470;
                                                                                                } else {
                                                                                                    String _474 = Char_str(c);
                                                                                                    String _475 = _474;
                                                                                                    _476 = _475;
                                                                                                }
                                                                                                String _477 = _476;
                                                                                                _478 = _477;
                                                                                            }
                                                                                            String _479 = _478;
                                                                                            _480 = _479;
                                                                                        }
                                                                                        String _481 = _480;
                                                                                        _482 = _481;
                                                                                    }
                                                                                    String _483 = _482;
                                                                                    _484 = _483;
                                                                                }
                                                                                String _485 = _484;
                                                                                _486 = _485;
                                                                            }
                                                                            String _487 = _486;
                                                                            _488 = _487;
                                                                        }
                                                                        String _489 = _488;
                                                                        _490 = _489;
                                                                    }
                                                                    String _491 = _490;
                                                                    _492 = _491;
                                                                }
                                                                String _493 = _492;
                                                                _494 = _493;
                                                            }
                                                            String _495 = _494;
                                                            _496 = _495;
                                                        }
                                                        String _497 = _496;
                                                        _498 = _497;
                                                    }
                                                    String _499 = _498;
                                                    _500 = _499;
                                                }
                                                String _501 = _500;
                                                _502 = _501;
                                            }
                                            String _503 = _502;
                                            _504 = _503;
                                        }
                                        String _505 = _504;
                                        _506 = _505;
                                    }
                                    String _507 = _506;
                                    _508 = _507;
                                }
                                String _509 = _508;
                                _510 = _509;
                            }
                            String _511 = _510;
                            _512 = _511;
                        }
                        String _513 = _512;
                        _514 = _513;
                    }
                    String _515 = _514;
                    _516 = _515;
                }
                String _517 = _516;
                _518 = _517;
            }
            String _519 = _518;
            _520 = _519;
        }
        _521 = _520;
    }
    return _521;
}

Datetime Datetime_from_MINUS_ordinal__int(int ord) {
    Datetime _169;
    /* let */ {
        int _9 = Int__MINUS_(ord, 1);
        int ord = _9;
        int _14 = Int__DIV_(ord, Datetime_DI400Y);
        int n400 = _14;
        int _19 = Int_mod(ord, Datetime_DI400Y);
        int ord_MINUS_ = _19;
        int _25 = Int__MUL_(n400, 400);
        int _27 = Int__PLUS_(_25, 1);
        int year_MINUS_ = _27;
        int _32 = Int__DIV_(ord_MINUS_, Datetime_DI100Y);
        int n100 = _32;
        int _37 = Int_mod(ord_MINUS_, Datetime_DI100Y);
        int ord_MINUS__MINUS_ = _37;
        int _42 = Int__DIV_(ord_MINUS__MINUS_, Datetime_DI4Y);
        int n4 = _42;
        int _47 = Int_mod(ord_MINUS__MINUS_, Datetime_DI4Y);
        int ord_MINUS__MINUS__MINUS_ = _47;
        int _52 = Int__DIV_(ord_MINUS__MINUS__MINUS_, 365);
        int n1 = _52;
        int _57 = Int_mod(ord_MINUS__MINUS__MINUS_, 365);
        int n = _57;
        int _65 = Int__MUL_(n100, 100);
        int _70 = Int__MUL_(n4, 4);
        int _72 = Int__PLUS_(_70, n1);
        int _73 = Int__PLUS_(_65, _72);
        int _74 = Int__PLUS_(year_MINUS_, _73);
        int year = _74;
        Datetime _168;
        bool _91;
        bool _81 = Int__EQ_(n1, 4);
        if (_81) {
            bool _84 = true;
            _91 = _84;
        } else {
            bool _89 = Int__EQ_(n100, 4);
            bool _90 = _89;
            _91 = _90;
        }
        if (_91) {
            int _97 = Int__MINUS_(year, 1);
            Datetime _100 = Datetime_date(_97, 12, 31);
            Datetime _101 = _100;
            _168 = _101;
        } else {
            Datetime _166;
            /* let */ {
                int _109 = Int__PLUS_(n, 50);
                int _111 = Int_bit_MINUS_shift_MINUS_right(_109, 5);
                int month = _111;
                int _116 = Datetime_days_MINUS_before_MINUS_month(year, month);
                int prec = _116;
                Datetime _165;
                bool _122 = Int__GT_(prec, n);
                if (_122) {
                    Datetime _150;
                    /* let */ {
                        int _129 = Int__MINUS_(month, 1);
                        int month = _129;
                        int _136 = Datetime_days_MINUS_in_MINUS_month(year, month);
                        int _137 = Int__MINUS_(prec, _136);
                        int prec = _137;
                        int _146 = Int__MINUS_(n, prec);
                        int _148 = Int__PLUS_(_146, 1);
                        Datetime _149 = Datetime_date(year, month, _148);
                        _150 = _149;
                    }
                    Datetime _151 = _150;
                    _165 = _151;
                } else {
                    int _160 = Int__MINUS_(n, prec);
                    int _162 = Int__PLUS_(_160, 1);
                    Datetime _163 = Datetime_date(year, month, _162);
                    Datetime _164 = _163;
                    _165 = _164;
                }
                _166 = _165;
            }
            Datetime _167 = _166;
            _168 = _167;
        }
        _169 = _168;
    }
    return _169;
}

Datetime Datetime_from_MINUS_unix_MINUS_timestamp(int ts) {
    Datetime _206;
    /* let */ {
        int _9 = Int__DIV_(ts, Datetime_YEAR);
        int y = _9;
        int _20 = Int__PLUS_(y, 1971);
        Result__Array__int_String _22 = Array_range__int(1970, _20, 1);
        Array__int _23 = Result_unsafe_MINUS_from_MINUS_success__Array__int_String(_22);
        Array__int* _24 = &_23; // ref
        int _27 = Datetime_for_MINUS_year(_24, 1, 0);
        int _28 = Int_dec(_27);
        int ld = _28;
        int _35 = Int__DIV_(ts, Datetime_DAY);
        int _39 = Int__MUL_(y, 365);
        int _40 = Int__MINUS_(_35, _39);
        int _42 = Int__MINUS_(_40, ld);
        int d = _42;
        // This lambda captures 0 variables: 
        Lambda _76 = {
          .callback = (void*)Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_76_env,
          .env = NULL,
          .delete = (void*)NULL,
          .copy = (void*)NULL
        };
        Lambda get_MINUS_m_MINUS_until = _76;
        int _80 = get_MINUS_m_MINUS_until.env ? ((int(*)(LambdaEnv, int))get_MINUS_m_MINUS_until.callback)(get_MINUS_m_MINUS_until.env, d) : ((int(*)(int))get_MINUS_m_MINUS_until.callback)(d);
        int mdays = _80;
        Array__int* _86 = &Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH; // ref
        int* _89 = &mdays; // ref
        Maybe__int _90 = Array_index_MINUS_of__int(_86, _89);
        int _91 = Maybe_unsafe_MINUS_from__int(_90);
        int m = _91;
        int _96 = Int__MINUS_(d, mdays);
        int nd = _96;
        int _103 = Int__MUL_(365, 24);
        int _104 = Int__MUL_(y, _103);
        int tmpy = _104;
        int _112 = Int__PLUS_(ld, mdays);
        int _113 = Int__PLUS_(nd, _112);
        int _115 = Int__MUL_(_113, 24);
        int tmpd = _115;
        int _122 = Int__DIV_(ts, Datetime_HOUR);
        int _124 = Int__MINUS_(_122, tmpd);
        int _126 = Int__MINUS_(_124, tmpy);
        int hh = _126;
        int _131 = Int__MUL_(tmpy, 60);
        int tmy = _131;
        int _136 = Int__MUL_(tmpd, 60);
        int tmd = _136;
        int _141 = Int__MUL_(hh, 60);
        int tmh = _141;
        int _149 = Int__DIV_(ts, 60);
        int _151 = Int__MINUS_(_149, tmh);
        int _153 = Int__MINUS_(_151, tmd);
        int _155 = Int__MINUS_(_153, tmy);
        int mm = _155;
        int _165 = Int__MUL_(60, mm);
        int _166 = Int__MINUS_(ts, _165);
        int _170 = Int__MUL_(tmh, 60);
        int _171 = Int__MINUS_(_166, _170);
        int _175 = Int__MUL_(tmd, 60);
        int _176 = Int__MINUS_(_171, _175);
        int _180 = Int__MUL_(tmy, 60);
        int _181 = Int__MINUS_(_176, _180);
        int ss = _181;
        int _187 = Int__PLUS_(y, 1970);
        int _191 = Int_inc(nd);
        Maybe__int _194 = Maybe_Just__int(hh);
        Maybe__int _197 = Maybe_Just__int(mm);
        Maybe__int _200 = Maybe_Just__int(ss);
        Maybe__int _202 = Maybe_Nothing__int();
        Maybe__Timezone _204 = Maybe_Nothing__Timezone();
        Datetime _205 = Datetime_init(_187, m, _191, _194, _197, _200, _202, _204);
        _206 = _205;
        Array_delete__int(_23);
        Function_delete__int_int(get_MINUS_m_MINUS_until);
    }
    return _206;
}

Maybe__int* Datetime_hours(Datetime* p) { return (&(p->hours)); }

Datetime Datetime_init(int year, int month, int day, Maybe__int hours, Maybe__int minutes, Maybe__int seconds, Maybe__int nanoseconds, Maybe__Timezone tz) {
    Datetime instance;
    instance.year = year;
    instance.month = month;
    instance.day = day;
    instance.hours = hours;
    instance.minutes = minutes;
    instance.seconds = seconds;
    instance.nanoseconds = nanoseconds;
    instance.tz = tz;
    return instance;
}

bool Datetime_is_MINUS_leap(int y) {
    bool _38;
    int _10 = Int_mod(y, 4);
    bool _11 = Int__EQ_(0, _10);
    if (_11) {
        bool _33;
        int _19 = Int_mod(y, 100);
        bool _20 = _DIV__EQ___int(0, _19);
        if (_20) {
            bool _23 = true;
            _33 = _23;
        } else {
            int _30 = Int_mod(y, 400);
            bool _31 = Int__EQ_(0, _30);
            bool _32 = _31;
            _33 = _32;
        }
        bool _34 = _33;
        _38 = _34;
    } else {
        bool _37 = false;
        _38 = _37;
    }
    return _38;
}

String Datetime_isoformat(Datetime* dt) {
    static String _9 = "%04d-";
    String *_9_ref = &_9;
    int* _13 = Datetime_year(dt);
    int _14 = Int_copy(_13);
    String _1000007 = Int_format(_9_ref, _14);
    String* _1000005 = &_1000007; // ref
    static String _21 = "%02d-";
    String *_21_ref = &_21;
    int* _25 = Datetime_month(dt);
    int _26 = Int_copy(_25);
    String _1000013 = Int_format(_21_ref, _26);
    String* _1000011 = &_1000013; // ref
    static String _31 = "%02d";
    String *_31_ref = &_31;
    int* _35 = Datetime_day(dt);
    int _36 = Int_copy(_35);
    String _1000016 = Int_format(_31_ref, _36);
    String* _1000014 = &_1000016; // ref
    String _1000010 = String_append(_1000011, _1000014);
    String* _1000008 = &_1000010; // ref
    String _1000004 = String_append(_1000005, _1000008);
    String* _1000002 = &_1000004; // ref
    String _43 = String_copy(_1000002);
    String_delete(_1000004);
    String_delete(_1000007);
    String_delete(_1000010);
    String_delete(_1000013);
    String_delete(_1000016);
    return _43;
}

String Datetime_isotime(Datetime* dt) {
    static String _9 = "%02d:";
    String *_9_ref = &_9;
    Maybe__int* _14 = Datetime_hours(dt);
    Maybe__int _15 = Maybe_copy__int(_14);
    int _17 = Maybe_from__int(_15, 0);
    String _1000007 = Int_format(_9_ref, _17);
    String* _1000005 = &_1000007; // ref
    static String _24 = "%02d:";
    String *_24_ref = &_24;
    Maybe__int* _29 = Datetime_minutes(dt);
    Maybe__int _30 = Maybe_copy__int(_29);
    int _32 = Maybe_from__int(_30, 0);
    String _1000013 = Int_format(_24_ref, _32);
    String* _1000011 = &_1000013; // ref
    static String _37 = "%02d";
    String *_37_ref = &_37;
    Maybe__int* _42 = Datetime_seconds(dt);
    Maybe__int _43 = Maybe_copy__int(_42);
    int _45 = Maybe_from__int(_43, 0);
    String _1000016 = Int_format(_37_ref, _45);
    String* _1000014 = &_1000016; // ref
    String _1000010 = String_append(_1000011, _1000014);
    String* _1000008 = &_1000010; // ref
    String _1000004 = String_append(_1000005, _1000008);
    String* _1000002 = &_1000004; // ref
    String _52 = String_copy(_1000002);
    String_delete(_1000004);
    String_delete(_1000007);
    String_delete(_1000010);
    String_delete(_1000013);
    String_delete(_1000016);
    return _52;
}

int Datetime_isoweekday(Datetime* dt) {
    int _7 = Datetime_weekday(dt);
    int _9 = Int__PLUS_(_7, 1);
    return _9;
}

bool Datetime_leap_QMARK_(Datetime* dt) {
    int* _8 = Datetime_year(dt);
    int _9 = Int_copy(_8);
    bool _10 = Datetime_is_MINUS_leap(_9);
    return _10;
}

int Datetime_match_MINUS_in_MINUS_array(Array__String* arr, String* s, int pos) {
    int _97;
    /* let */ {
        int result = -1;
        int i = 1;
        int _14 = String_length(s);
        int slen = _14;
        String _19 = String_suffix(s, pos);
        String sub = _19;
        bool _39;
        bool _27 = Int__EQ_(result, -1);
        if (_27) {
            int _33 = Array_length__String(arr);
            bool _34 = Int__LT_(i, _33);
            bool _35 = _34;
            _39 = _35;
        } else {
            bool _38 = false;
            _39 = _38;
        }
        bool _94 = _39;
        while (_94) {
            /* let */ {
                String* _45 = Array_unsafe_MINUS_nth__String(arr, i);
                String* candidate = _45;
                int _49 = String_length(candidate);
                int clen = _49;
                bool _76;
                int _57 = Int__PLUS_(pos, clen);
                bool _59 = _LT__EQ___int(_57, slen);
                if (_59) {
                    String* _66 = &sub; // ref
                    String _68 = String_prefix(_66, clen);
                    String* _69 = &_68; // ref
                    bool _71 = String__EQ_(_69, candidate);
                    bool _72 = _71;
                    String_delete(_68);
                    _76 = _72;
                } else {
                    bool _75 = false;
                    _76 = _75;
                }
                if (_76) {
                    result = i;  // Int = Int
                } else {
                    int _89 = Int__PLUS_(i, 1);
                    i = _89;  // Int = Int
                }
            }
            bool _39;
            bool _27 = Int__EQ_(result, -1);
            if (_27) {
                int _33 = Array_length__String(arr);
                bool _34 = Int__LT_(i, _33);
                bool _35 = _34;
                _39 = _35;
            } else {
                bool _38 = false;
                _39 = _38;
            }
            _94 = _39;
        }
        int _96 = result;
        _97 = _96;
        String_delete(sub);
    }
    return _97;
}

int Datetime_match_MINUS_short_MINUS_in_MINUS_array(Array__String* arr, String* s, int pos) {
    int _111;
    int _11 = Int__PLUS_(pos, 3);
    int _14 = String_length(s);
    bool _15 = Int__GT_(_11, _14);
    if (_15) {
        int _18 = -1;
        _111 = _18;
    } else {
        int _109;
        /* let */ {
            int result = -1;
            int i = 1;
            String _29 = String_suffix(s, pos);
            String sub = _29;
            String* _34 = &sub; // ref
            String _36 = String_prefix(_34, 3);
            String tok = _36;
            bool _56;
            bool _44 = Int__EQ_(result, -1);
            if (_44) {
                int _50 = Array_length__String(arr);
                bool _51 = Int__LT_(i, _50);
                bool _52 = _51;
                _56 = _52;
            } else {
                bool _55 = false;
                _56 = _55;
            }
            bool _106 = _56;
            while (_106) {
                /* let */ {
                    String* _62 = Array_unsafe_MINUS_nth__String(arr, i);
                    String* candidate = _62;
                    bool _88;
                    int _69 = String_length(candidate);
                    bool _71 = _GT__EQ___int(_69, 3);
                    if (_71) {
                        String* _76 = &tok; // ref
                        String _81 = String_prefix(candidate, 3);
                        String* _82 = &_81; // ref
                        bool _83 = String__EQ_(_76, _82);
                        bool _84 = _83;
                        String_delete(_81);
                        _88 = _84;
                    } else {
                        bool _87 = false;
                        _88 = _87;
                    }
                    if (_88) {
                        result = i;  // Int = Int
                    } else {
                        int _101 = Int__PLUS_(i, 1);
                        i = _101;  // Int = Int
                    }
                }
                bool _56;
                bool _44 = Int__EQ_(result, -1);
                if (_44) {
                    int _50 = Array_length__String(arr);
                    bool _51 = Int__LT_(i, _50);
                    bool _52 = _51;
                    _56 = _52;
                } else {
                    bool _55 = false;
                    _56 = _55;
                }
                _106 = _56;
            }
            int _108 = result;
            _109 = _108;
            String_delete(sub);
            String_delete(tok);
        }
        int _110 = _109;
        _111 = _110;
    }
    return _111;
}

Maybe__int* Datetime_minutes(Datetime* p) { return (&(p->minutes)); }

int Datetime_mod_MINUS_(int a, int n) {
    double _14 = Double_from_MINUS_int(a);
    double _17 = Double_from_MINUS_int(n);
    double _18 = Double__DIV_(_14, _17);
    double _19 = Double_floor(_18);
    int _20 = Double_to_MINUS_int(_19);
    int _21 = Int__MUL_(n, _20);
    int _22 = Int__MINUS_(a, _21);
    return _22;
}

int* Datetime_month(Datetime* p) { return (&(p->month)); }

String Datetime_month_MINUS_short_MINUS_string(Datetime* dt) {
    Array__String* _8 = &Datetime_MONTH_MINUS_STRINGS; // ref
    int* _12 = Datetime_month(dt);
    int _13 = Int_copy(_12);
    String* _14 = Array_unsafe_MINUS_nth__String(_8, _13);
    String _16 = String_prefix(_14, 3);
    return _16;
}

String Datetime_month_MINUS_string(Datetime* dt) {
    Array__String* _8 = &Datetime_MONTH_MINUS_STRINGS; // ref
    int* _12 = Datetime_month(dt);
    int _13 = Int_copy(_12);
    String* _14 = Array_unsafe_MINUS_nth__String(_8, _13);
    String _15 = String_copy(_14);
    return _15;
}

Maybe__int* Datetime_nanoseconds(Datetime* p) { return (&(p->nanoseconds)); }

Datetime Datetime_now() {
    Datetime _86;
    /* let */ {
        Uint64 _6 = System_nanotime();
        Uint64 t = _6;
        TM* _9 = create_time();
        TM* ct = _9;
        int* _16 = TM_tm_year(ct);
        int _17 = Int_copy(_16);
        int _19 = Int__PLUS_(_17, 1900);
        int* _24 = TM_tm_mon(ct);
        int _25 = Int_copy(_24);
        int _26 = Int_inc(_25);
        int* _30 = TM_tm_mday(ct);
        int _31 = Int_copy(_30);
        int* _36 = TM_tm_hour(ct);
        int _37 = Int_copy(_36);
        Maybe__int _38 = Maybe_Just__int(_37);
        int* _43 = TM_tm_min(ct);
        int _44 = Int_copy(_43);
        Maybe__int _45 = Maybe_Just__int(_44);
        int* _50 = TM_tm_sec(ct);
        int _51 = Int_copy(_50);
        Maybe__int _52 = Maybe_Just__int(_51);
        Long _58 = Uint64_to_MINUS_long(t);
        Long _60 = Long_mod(_58, 1000000000l);
        int _61 = Long_to_MINUS_int(_60);
        Maybe__int _62 = Maybe_Just__int(_61);
        String* _68 = TM_tm_zone(ct);
        String _69 = String_copy(_68);
        Long* _73 = TM_tm_gmtoff(ct);
        Long _74 = Long_copy(_73);
        int* _80 = TM_tm_isdst(ct);
        int _81 = Int_copy(_80);
        bool _82 = _DIV__EQ___int(0, _81);
        Timezone _83 = Timezone_init(_69, _74, _82);
        Maybe__Timezone _84 = Maybe_Just__Timezone(_83);
        Datetime _85 = Datetime_init(_19, _26, _31, _38, _45, _52, _62, _84);
        _86 = _85;
    }
    return _86;
}

Maybe__int Datetime_parse_MINUS_digits(String* s, int pos, int n) {
    Maybe__int _42;
    int _11 = Int__PLUS_(pos, n);
    int _14 = String_length(s);
    bool _15 = _LT__EQ___int(_11, _14);
    if (_15) {
        Maybe__int _36;
        /* let */ {
            String _22 = String_suffix(s, pos);
            String sub = _22;
            String* _27 = &sub; // ref
            String _29 = String_prefix(_27, n);
            String tok = _29;
            String* _34 = &tok; // ref
            Maybe__int _35 = Int_from_MINUS_string(_34);
            _36 = _35;
            String_delete(sub);
            String_delete(tok);
        }
        Maybe__int _37 = _36;
        _42 = _37;
    } else {
        Maybe__int _40 = Maybe_Nothing__int();
        Maybe__int _41 = _40;
        _42 = _41;
    }
    return _42;
}

String Datetime_prn(Datetime *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Datetime");
  temp = Int_prn(p->year); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->month); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->day); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->hours); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->minutes); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->seconds); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->nanoseconds); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__Timezone(&p->tz); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Datetime");
  temp = Int_prn(p->year);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->month);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->day);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->hours);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->minutes);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->seconds);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->nanoseconds);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__Timezone(&p->tz);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Maybe__int* Datetime_seconds(Datetime* p) { return (&(p->seconds)); }

Datetime Datetime_set_MINUS_day(Datetime p, int newValue) {
    /* Ignore non-managed member 'day' : Int */
    p.day = newValue;
    return p;
}


void Datetime_set_MINUS_day_BANG_(Datetime* pRef, int newValue) {
    /* Ignore non-managed member 'day' : Int */
    pRef->day = newValue;
}


Datetime Datetime_set_MINUS_hours(Datetime p, Maybe__int newValue) {
    Maybe_delete__int(p.hours);
    p.hours = newValue;
    return p;
}


void Datetime_set_MINUS_hours_BANG_(Datetime* pRef, Maybe__int newValue) {
    Maybe_delete__int(pRef->hours);
    pRef->hours = newValue;
}


Datetime Datetime_set_MINUS_minutes(Datetime p, Maybe__int newValue) {
    Maybe_delete__int(p.minutes);
    p.minutes = newValue;
    return p;
}


void Datetime_set_MINUS_minutes_BANG_(Datetime* pRef, Maybe__int newValue) {
    Maybe_delete__int(pRef->minutes);
    pRef->minutes = newValue;
}


Datetime Datetime_set_MINUS_month(Datetime p, int newValue) {
    /* Ignore non-managed member 'month' : Int */
    p.month = newValue;
    return p;
}


void Datetime_set_MINUS_month_BANG_(Datetime* pRef, int newValue) {
    /* Ignore non-managed member 'month' : Int */
    pRef->month = newValue;
}


Datetime Datetime_set_MINUS_nanoseconds(Datetime p, Maybe__int newValue) {
    Maybe_delete__int(p.nanoseconds);
    p.nanoseconds = newValue;
    return p;
}


void Datetime_set_MINUS_nanoseconds_BANG_(Datetime* pRef, Maybe__int newValue) {
    Maybe_delete__int(pRef->nanoseconds);
    pRef->nanoseconds = newValue;
}


Datetime Datetime_set_MINUS_seconds(Datetime p, Maybe__int newValue) {
    Maybe_delete__int(p.seconds);
    p.seconds = newValue;
    return p;
}


void Datetime_set_MINUS_seconds_BANG_(Datetime* pRef, Maybe__int newValue) {
    Maybe_delete__int(pRef->seconds);
    pRef->seconds = newValue;
}


Datetime Datetime_set_MINUS_tz(Datetime p, Maybe__Timezone newValue) {
    Maybe_delete__Timezone(p.tz);
    p.tz = newValue;
    return p;
}


void Datetime_set_MINUS_tz_BANG_(Datetime* pRef, Maybe__Timezone newValue) {
    Maybe_delete__Timezone(pRef->tz);
    pRef->tz = newValue;
}


Datetime Datetime_set_MINUS_year(Datetime p, int newValue) {
    /* Ignore non-managed member 'year' : Int */
    p.year = newValue;
    return p;
}


void Datetime_set_MINUS_year_BANG_(Datetime* pRef, int newValue) {
    /* Ignore non-managed member 'year' : Int */
    pRef->year = newValue;
}


String Datetime_str(Datetime *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Datetime");
  temp = Int_prn(p->year); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->month); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->day); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->hours); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->minutes); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->seconds); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->nanoseconds); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__Timezone(&p->tz); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Datetime");
  temp = Int_prn(p->year);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->month);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->day);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->hours);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->minutes);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->seconds);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__int(&p->nanoseconds);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Maybe_prn__Timezone(&p->tz);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

String Datetime_strftime__Datetime_MUL_(Datetime* dt, String* s) {
    String _116;
    /* let */ {
        Array _11 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
        ((Char*)_11.data)[0] = 37/*'%'*/;
        Array__Char* _12 = &_11; // ref
        Array__String _13 = String_split_MINUS_by(s, _12);
        Array__String strings = _13;
        Array__String* _19 = &strings; // ref
        int _20 = Array_length__String(_19);
        int _21 = Int_dec(_20);
        int ln = _21;
        Result__Array__int_String _28 = Array_range__int(0, ln, 1);
        Array__int _29 = Result_unsafe_MINUS_from_MINUS_success__Array__int_String(_28);
        Array__int rng = _29;
        // This lambda captures 2 variables: dt, ln
        Datetime__Lambda_strftime__Datetime_MUL__105_env_ty *_105_env = CARP_MALLOC(sizeof(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty));
        _105_env->dt = dt;
        _105_env->ln = ln;
        Lambda _105 = {
          .callback = (void*)Datetime__Lambda_strftime__Datetime_MUL__105_env,
          .env = _105_env,
          .delete = (void*)Datetime__Lambda_strftime__Datetime_MUL__105_env_ty_delete,
          .copy = (void*)Datetime__Lambda_strftime__Datetime_MUL__105_env_ty_copy
        };
        Lambda* _106 = &_105; // ref
        Array__String* _109 = &strings; // ref
        Array__int* _112 = &rng; // ref
        Array__String _113 = Array_zip__String_int_String(_106, _109, _112);
        Array__String* _114 = &_113; // ref
        String _115 = String_concat(_114);
        _116 = _115;
        Array_delete__Char(_11);
        Array_delete__String(_113);
        Array_delete__String(strings);
        Array_delete__int(rng);
        Function_delete__String_MUL__int_MUL__String(_105);
    }
    return _116;
}

Result__Datetime_String Datetime_strptime(String* input, String* fmt) {
    Result__Datetime_String _1810;
    /* let */ {
        String _9 = Datetime_expand_MINUS_compound_MINUS_formats(fmt);
        String efmt = _9;
        int ipos = 0;
        int fpos = 0;
        String* _18 = &efmt; // ref
        int _19 = String_length(_18);
        int flen = _19;
        int _23 = String_length(input);
        int ilen = _23;
        int yr = 0;
        int mo = 0;
        int dy = 0;
        int hr = -1;
        int mi = -1;
        int sc = -1;
        int ns = -1;
        int ampm = 0;
        static String _42 = "";
        String *_42_ref = &_42;
        String _43 = String_copy(_42_ref);
        String tz_MINUS_nm = _43;
        Long tz_MINUS_delta = 0l;
        bool has_MINUS_tz = false;
        static String _50 = "";
        String *_50_ref = &_50;
        String _51 = String_copy(_50_ref);
        String err = _51;
        bool ok = true;
        bool _68;
        if (ok) {
            bool _63 = Int__LT_(fpos, flen);
            bool _64 = _63;
            _68 = _64;
        } else {
            bool _67 = false;
            _68 = _67;
        }
        bool _1645 = _68;
        while (_1645) {
            /* let */ {
                String* _74 = &efmt; // ref
                Char _76 = String_char_MINUS_at(_74, fpos);
                Char fc = _76;
                bool _96;
                bool _83 = Char__EQ_(fc, 37/*'%'*/);
                if (_83) {
                    int _89 = Int__PLUS_(fpos, 1);
                    bool _91 = Int__LT_(_89, flen);
                    bool _92 = _91;
                    _96 = _92;
                } else {
                    bool _95 = false;
                    _96 = _95;
                }
                if (_96) {
                    /* let */ {
                        String* _103 = &efmt; // ref
                        int _107 = Int__PLUS_(fpos, 1);
                        Char _108 = String_char_MINUS_at(_103, _107);
                        Char spec = _108;
                        /* let */ {
                            Char gensym_MINUS_generated1041 = spec;
                            bool _118 = Char__EQ_(gensym_MINUS_generated1041, 89/*'Y'*/);
                            if (_118) {
                                Maybe__int _125 = Datetime_parse_MINUS_digits(input, ipos, 4);
                                if(_125._tag == Maybe__int_Just_tag) {
                                    Maybe__int _125_temp = _125;
                                    int v = _125_temp.u.Just.member0;
                                    // Case expr:
                                    yr = v;  // Int = Int
                                    int _139 = Int__PLUS_(ipos, 4);
                                    ipos = _139;  // Int = Int
                                    int _146 = Int__PLUS_(fpos, 2);
                                    fpos = _146;  // Int = Int
                                }
                                else if(_125._tag == Maybe__int_Nothing_tag) {
                                    Maybe__int _125_temp = _125;
                                    // Case expr:
                                    static String _155 = "failed to parse %Y";
                                    String *_155_ref = &_155;
                                    String _156 = String_copy(_155_ref);
                                    String_delete(err);
                                    err = _156;  // String = String
                                    ok = false;  // Bool = Bool
                                }
                                else UNHANDLED("time.carp", 657);
                            } else {
                                bool _170 = Char__EQ_(gensym_MINUS_generated1041, 121/*'y'*/);
                                if (_170) {
                                    Maybe__int _177 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                    if(_177._tag == Maybe__int_Just_tag) {
                                        Maybe__int _177_temp = _177;
                                        int v = _177_temp.u.Just.member0;
                                        // Case expr:
                                        int _201;
                                        bool _188 = Int__LT_(v, 69);
                                        if (_188) {
                                            int _193 = Int__PLUS_(v, 2000);
                                            int _194 = _193;
                                            _201 = _194;
                                        } else {
                                            int _199 = Int__PLUS_(v, 1900);
                                            int _200 = _199;
                                            _201 = _200;
                                        }
                                        yr = _201;  // Int = Int
                                        int _208 = Int__PLUS_(ipos, 2);
                                        ipos = _208;  // Int = Int
                                        int _215 = Int__PLUS_(fpos, 2);
                                        fpos = _215;  // Int = Int
                                    }
                                    else if(_177._tag == Maybe__int_Nothing_tag) {
                                        Maybe__int _177_temp = _177;
                                        // Case expr:
                                        static String _224 = "failed to parse %y";
                                        String *_224_ref = &_224;
                                        String _225 = String_copy(_224_ref);
                                        String_delete(err);
                                        err = _225;  // String = String
                                        ok = false;  // Bool = Bool
                                    }
                                    else UNHANDLED("time.carp", 666);
                                } else {
                                    bool _239 = Char__EQ_(gensym_MINUS_generated1041, 109/*'m'*/);
                                    if (_239) {
                                        Maybe__int _246 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                        if(_246._tag == Maybe__int_Just_tag) {
                                            Maybe__int _246_temp = _246;
                                            int v = _246_temp.u.Just.member0;
                                            // Case expr:
                                            mo = v;  // Int = Int
                                            int _260 = Int__PLUS_(ipos, 2);
                                            ipos = _260;  // Int = Int
                                            int _267 = Int__PLUS_(fpos, 2);
                                            fpos = _267;  // Int = Int
                                        }
                                        else if(_246._tag == Maybe__int_Nothing_tag) {
                                            Maybe__int _246_temp = _246;
                                            // Case expr:
                                            static String _276 = "failed to parse %m";
                                            String *_276_ref = &_276;
                                            String _277 = String_copy(_276_ref);
                                            String_delete(err);
                                            err = _277;  // String = String
                                            ok = false;  // Bool = Bool
                                        }
                                        else UNHANDLED("time.carp", 675);
                                    } else {
                                        bool _291 = Char__EQ_(gensym_MINUS_generated1041, 100/*'d'*/);
                                        if (_291) {
                                            Maybe__int _298 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                            if(_298._tag == Maybe__int_Just_tag) {
                                                Maybe__int _298_temp = _298;
                                                int v = _298_temp.u.Just.member0;
                                                // Case expr:
                                                dy = v;  // Int = Int
                                                int _312 = Int__PLUS_(ipos, 2);
                                                ipos = _312;  // Int = Int
                                                int _319 = Int__PLUS_(fpos, 2);
                                                fpos = _319;  // Int = Int
                                            }
                                            else if(_298._tag == Maybe__int_Nothing_tag) {
                                                Maybe__int _298_temp = _298;
                                                // Case expr:
                                                static String _328 = "failed to parse %d";
                                                String *_328_ref = &_328;
                                                String _329 = String_copy(_328_ref);
                                                String_delete(err);
                                                err = _329;  // String = String
                                                ok = false;  // Bool = Bool
                                            }
                                            else UNHANDLED("time.carp", 684);
                                        } else {
                                            bool _343 = Char__EQ_(gensym_MINUS_generated1041, 72/*'H'*/);
                                            if (_343) {
                                                Maybe__int _350 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                                if(_350._tag == Maybe__int_Just_tag) {
                                                    Maybe__int _350_temp = _350;
                                                    int v = _350_temp.u.Just.member0;
                                                    // Case expr:
                                                    hr = v;  // Int = Int
                                                    int _364 = Int__PLUS_(ipos, 2);
                                                    ipos = _364;  // Int = Int
                                                    int _371 = Int__PLUS_(fpos, 2);
                                                    fpos = _371;  // Int = Int
                                                }
                                                else if(_350._tag == Maybe__int_Nothing_tag) {
                                                    Maybe__int _350_temp = _350;
                                                    // Case expr:
                                                    static String _380 = "failed to parse %H";
                                                    String *_380_ref = &_380;
                                                    String _381 = String_copy(_380_ref);
                                                    String_delete(err);
                                                    err = _381;  // String = String
                                                    ok = false;  // Bool = Bool
                                                }
                                                else UNHANDLED("time.carp", 693);
                                            } else {
                                                bool _395 = Char__EQ_(gensym_MINUS_generated1041, 73/*'I'*/);
                                                if (_395) {
                                                    Maybe__int _402 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                                    if(_402._tag == Maybe__int_Just_tag) {
                                                        Maybe__int _402_temp = _402;
                                                        int v = _402_temp.u.Just.member0;
                                                        // Case expr:
                                                        hr = v;  // Int = Int
                                                        int _416 = Int__PLUS_(ipos, 2);
                                                        ipos = _416;  // Int = Int
                                                        int _423 = Int__PLUS_(fpos, 2);
                                                        fpos = _423;  // Int = Int
                                                    }
                                                    else if(_402._tag == Maybe__int_Nothing_tag) {
                                                        Maybe__int _402_temp = _402;
                                                        // Case expr:
                                                        static String _432 = "failed to parse %I";
                                                        String *_432_ref = &_432;
                                                        String _433 = String_copy(_432_ref);
                                                        String_delete(err);
                                                        err = _433;  // String = String
                                                        ok = false;  // Bool = Bool
                                                    }
                                                    else UNHANDLED("time.carp", 702);
                                                } else {
                                                    bool _447 = Char__EQ_(gensym_MINUS_generated1041, 112/*'p'*/);
                                                    if (_447) {
                                                        int _454 = Int__PLUS_(ipos, 2);
                                                        bool _456 = Int__GT_(_454, ilen);
                                                        if (_456) {
                                                            static String _461 = "failed to parse %p";
                                                            String *_461_ref = &_461;
                                                            String _462 = String_copy(_461_ref);
                                                            String_delete(err);
                                                            err = _462;  // String = String
                                                            ok = false;  // Bool = Bool
                                                        } else {
                                                            /* let */ {
                                                                String _475 = String_suffix(input, ipos);
                                                                String sub = _475;
                                                                String* _480 = &sub; // ref
                                                                String _482 = String_prefix(_480, 2);
                                                                String tok = _482;
                                                                String* _488 = &tok; // ref
                                                                static String _489 = "AM";
                                                                String *_489_ref = &_489;
                                                                bool _490 = String__EQ_(_488, _489_ref);
                                                                if (_490) {
                                                                    ampm = 1;  // Int = Int
                                                                    int _501 = Int__PLUS_(ipos, 2);
                                                                    ipos = _501;  // Int = Int
                                                                    int _508 = Int__PLUS_(fpos, 2);
                                                                    fpos = _508;  // Int = Int
                                                                } else {
                                                                    String* _516 = &tok; // ref
                                                                    static String _517 = "PM";
                                                                    String *_517_ref = &_517;
                                                                    bool _518 = String__EQ_(_516, _517_ref);
                                                                    if (_518) {
                                                                        ampm = 2;  // Int = Int
                                                                        int _529 = Int__PLUS_(ipos, 2);
                                                                        ipos = _529;  // Int = Int
                                                                        int _536 = Int__PLUS_(fpos, 2);
                                                                        fpos = _536;  // Int = Int
                                                                    } else {
                                                                        static String _543 = "failed to parse %p: expected AM or PM";
                                                                        String *_543_ref = &_543;
                                                                        String _544 = String_copy(_543_ref);
                                                                        String_delete(err);
                                                                        err = _544;  // String = String
                                                                        ok = false;  // Bool = Bool
                                                                    }
                                                                }
                                                                String_delete(sub);
                                                                String_delete(tok);
                                                            }
                                                        }
                                                    } else {
                                                        bool _563 = Char__EQ_(gensym_MINUS_generated1041, 77/*'M'*/);
                                                        if (_563) {
                                                            Maybe__int _570 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                                            if(_570._tag == Maybe__int_Just_tag) {
                                                                Maybe__int _570_temp = _570;
                                                                int v = _570_temp.u.Just.member0;
                                                                // Case expr:
                                                                mi = v;  // Int = Int
                                                                int _584 = Int__PLUS_(ipos, 2);
                                                                ipos = _584;  // Int = Int
                                                                int _591 = Int__PLUS_(fpos, 2);
                                                                fpos = _591;  // Int = Int
                                                            }
                                                            else if(_570._tag == Maybe__int_Nothing_tag) {
                                                                Maybe__int _570_temp = _570;
                                                                // Case expr:
                                                                static String _600 = "failed to parse %M";
                                                                String *_600_ref = &_600;
                                                                String _601 = String_copy(_600_ref);
                                                                String_delete(err);
                                                                err = _601;  // String = String
                                                                ok = false;  // Bool = Bool
                                                            }
                                                            else UNHANDLED("time.carp", 729);
                                                        } else {
                                                            bool _615 = Char__EQ_(gensym_MINUS_generated1041, 83/*'S'*/);
                                                            if (_615) {
                                                                Maybe__int _622 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                                                if(_622._tag == Maybe__int_Just_tag) {
                                                                    Maybe__int _622_temp = _622;
                                                                    int v = _622_temp.u.Just.member0;
                                                                    // Case expr:
                                                                    sc = v;  // Int = Int
                                                                    int _636 = Int__PLUS_(ipos, 2);
                                                                    ipos = _636;  // Int = Int
                                                                    int _643 = Int__PLUS_(fpos, 2);
                                                                    fpos = _643;  // Int = Int
                                                                }
                                                                else if(_622._tag == Maybe__int_Nothing_tag) {
                                                                    Maybe__int _622_temp = _622;
                                                                    // Case expr:
                                                                    static String _652 = "failed to parse %S";
                                                                    String *_652_ref = &_652;
                                                                    String _653 = String_copy(_652_ref);
                                                                    String_delete(err);
                                                                    err = _653;  // String = String
                                                                    ok = false;  // Bool = Bool
                                                                }
                                                                else UNHANDLED("time.carp", 738);
                                                            } else {
                                                                bool _667 = Char__EQ_(gensym_MINUS_generated1041, 110/*'n'*/);
                                                                if (_667) {
                                                                    Maybe__int _674 = Datetime_parse_MINUS_digits(input, ipos, 9);
                                                                    if(_674._tag == Maybe__int_Just_tag) {
                                                                        Maybe__int _674_temp = _674;
                                                                        int v = _674_temp.u.Just.member0;
                                                                        // Case expr:
                                                                        ns = v;  // Int = Int
                                                                        int _688 = Int__PLUS_(ipos, 9);
                                                                        ipos = _688;  // Int = Int
                                                                        int _695 = Int__PLUS_(fpos, 2);
                                                                        fpos = _695;  // Int = Int
                                                                    }
                                                                    else if(_674._tag == Maybe__int_Nothing_tag) {
                                                                        Maybe__int _674_temp = _674;
                                                                        // Case expr:
                                                                        static String _704 = "failed to parse %n";
                                                                        String *_704_ref = &_704;
                                                                        String _705 = String_copy(_704_ref);
                                                                        String_delete(err);
                                                                        err = _705;  // String = String
                                                                        ok = false;  // Bool = Bool
                                                                    }
                                                                    else UNHANDLED("time.carp", 747);
                                                                } else {
                                                                    bool _719 = Char__EQ_(gensym_MINUS_generated1041, 98/*'b'*/);
                                                                    if (_719) {
                                                                        /* let */ {
                                                                            Array__String* _726 = &Datetime_MONTH_MINUS_STRINGS; // ref
                                                                            int _729 = Datetime_match_MINUS_short_MINUS_in_MINUS_array(_726, input, ipos);
                                                                            int idx = _729;
                                                                            bool _735 = Int__GT_(idx, 0);
                                                                            if (_735) {
                                                                                mo = idx;  // Int = Int
                                                                                int _746 = Int__PLUS_(ipos, 3);
                                                                                ipos = _746;  // Int = Int
                                                                                int _753 = Int__PLUS_(fpos, 2);
                                                                                fpos = _753;  // Int = Int
                                                                            } else {
                                                                                static String _760 = "failed to parse %b";
                                                                                String *_760_ref = &_760;
                                                                                String _761 = String_copy(_760_ref);
                                                                                String_delete(err);
                                                                                err = _761;  // String = String
                                                                                ok = false;  // Bool = Bool
                                                                            }
                                                                        }
                                                                    } else {
                                                                        bool _776 = Char__EQ_(gensym_MINUS_generated1041, 66/*'B'*/);
                                                                        if (_776) {
                                                                            /* let */ {
                                                                                Array__String* _783 = &Datetime_MONTH_MINUS_STRINGS; // ref
                                                                                int _786 = Datetime_match_MINUS_in_MINUS_array(_783, input, ipos);
                                                                                int idx = _786;
                                                                                bool _792 = Int__GT_(idx, 0);
                                                                                if (_792) {
                                                                                    mo = idx;  // Int = Int
                                                                                    Array__String* _806 = &Datetime_MONTH_MINUS_STRINGS; // ref
                                                                                    String* _808 = Array_unsafe_MINUS_nth__String(_806, idx);
                                                                                    int _809 = String_length(_808);
                                                                                    int _810 = Int__PLUS_(ipos, _809);
                                                                                    ipos = _810;  // Int = Int
                                                                                    int _817 = Int__PLUS_(fpos, 2);
                                                                                    fpos = _817;  // Int = Int
                                                                                } else {
                                                                                    static String _824 = "failed to parse %B";
                                                                                    String *_824_ref = &_824;
                                                                                    String _825 = String_copy(_824_ref);
                                                                                    String_delete(err);
                                                                                    err = _825;  // String = String
                                                                                    ok = false;  // Bool = Bool
                                                                                }
                                                                            }
                                                                        } else {
                                                                            bool _840 = Char__EQ_(gensym_MINUS_generated1041, 97/*'a'*/);
                                                                            if (_840) {
                                                                                /* let */ {
                                                                                    Array__String* _847 = &Datetime_WEEKDAY_MINUS_STRINGS; // ref
                                                                                    int _850 = Datetime_match_MINUS_short_MINUS_in_MINUS_array(_847, input, ipos);
                                                                                    int idx = _850;
                                                                                    bool _856 = Int__GT_(idx, 0);
                                                                                    if (_856) {
                                                                                        int _863 = Int__PLUS_(ipos, 3);
                                                                                        ipos = _863;  // Int = Int
                                                                                        int _870 = Int__PLUS_(fpos, 2);
                                                                                        fpos = _870;  // Int = Int
                                                                                    } else {
                                                                                        static String _877 = "failed to parse %a";
                                                                                        String *_877_ref = &_877;
                                                                                        String _878 = String_copy(_877_ref);
                                                                                        String_delete(err);
                                                                                        err = _878;  // String = String
                                                                                        ok = false;  // Bool = Bool
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                bool _893 = Char__EQ_(gensym_MINUS_generated1041, 65/*'A'*/);
                                                                                if (_893) {
                                                                                    /* let */ {
                                                                                        Array__String* _900 = &Datetime_WEEKDAY_MINUS_STRINGS; // ref
                                                                                        int _903 = Datetime_match_MINUS_in_MINUS_array(_900, input, ipos);
                                                                                        int idx = _903;
                                                                                        bool _909 = Int__GT_(idx, 0);
                                                                                        if (_909) {
                                                                                            Array__String* _919 = &Datetime_WEEKDAY_MINUS_STRINGS; // ref
                                                                                            String* _921 = Array_unsafe_MINUS_nth__String(_919, idx);
                                                                                            int _922 = String_length(_921);
                                                                                            int _923 = Int__PLUS_(ipos, _922);
                                                                                            ipos = _923;  // Int = Int
                                                                                            int _930 = Int__PLUS_(fpos, 2);
                                                                                            fpos = _930;  // Int = Int
                                                                                        } else {
                                                                                            static String _937 = "failed to parse %A";
                                                                                            String *_937_ref = &_937;
                                                                                            String _938 = String_copy(_937_ref);
                                                                                            String_delete(err);
                                                                                            err = _938;  // String = String
                                                                                            ok = false;  // Bool = Bool
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    bool _953 = Char__EQ_(gensym_MINUS_generated1041, 119/*'w'*/);
                                                                                    if (_953) {
                                                                                        Maybe__int _960 = Datetime_parse_MINUS_digits(input, ipos, 1);
                                                                                        if(_960._tag == Maybe__int_Just_tag) {
                                                                                            Maybe__int _960_temp = _960;
                                                                                            int v = _960_temp.u.Just.member0;
                                                                                            // Case expr:
                                                                                            int _970 = Int__PLUS_(ipos, 1);
                                                                                            ipos = _970;  // Int = Int
                                                                                            int _977 = Int__PLUS_(fpos, 2);
                                                                                            fpos = _977;  // Int = Int
                                                                                        }
                                                                                        else if(_960._tag == Maybe__int_Nothing_tag) {
                                                                                            Maybe__int _960_temp = _960;
                                                                                            // Case expr:
                                                                                            static String _986 = "failed to parse %w";
                                                                                            String *_986_ref = &_986;
                                                                                            String _987 = String_copy(_986_ref);
                                                                                            String_delete(err);
                                                                                            err = _987;  // String = String
                                                                                            ok = false;  // Bool = Bool
                                                                                        }
                                                                                        else UNHANDLED("time.carp", 792);
                                                                                    } else {
                                                                                        bool _1001 = Char__EQ_(gensym_MINUS_generated1041, 106/*'j'*/);
                                                                                        if (_1001) {
                                                                                            Maybe__int _1008 = Datetime_parse_MINUS_digits(input, ipos, 3);
                                                                                            if(_1008._tag == Maybe__int_Just_tag) {
                                                                                                Maybe__int _1008_temp = _1008;
                                                                                                int v = _1008_temp.u.Just.member0;
                                                                                                // Case expr:
                                                                                                int _1018 = Int__PLUS_(ipos, 3);
                                                                                                ipos = _1018;  // Int = Int
                                                                                                int _1025 = Int__PLUS_(fpos, 2);
                                                                                                fpos = _1025;  // Int = Int
                                                                                            }
                                                                                            else if(_1008._tag == Maybe__int_Nothing_tag) {
                                                                                                Maybe__int _1008_temp = _1008;
                                                                                                // Case expr:
                                                                                                static String _1034 = "failed to parse %j";
                                                                                                String *_1034_ref = &_1034;
                                                                                                String _1035 = String_copy(_1034_ref);
                                                                                                String_delete(err);
                                                                                                err = _1035;  // String = String
                                                                                                ok = false;  // Bool = Bool
                                                                                            }
                                                                                            else UNHANDLED("time.carp", 798);
                                                                                        } else {
                                                                                            bool _1049 = Char__EQ_(gensym_MINUS_generated1041, 85/*'U'*/);
                                                                                            if (_1049) {
                                                                                                Maybe__int _1056 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                                                                                if(_1056._tag == Maybe__int_Just_tag) {
                                                                                                    Maybe__int _1056_temp = _1056;
                                                                                                    int v = _1056_temp.u.Just.member0;
                                                                                                    // Case expr:
                                                                                                    int _1066 = Int__PLUS_(ipos, 2);
                                                                                                    ipos = _1066;  // Int = Int
                                                                                                    int _1073 = Int__PLUS_(fpos, 2);
                                                                                                    fpos = _1073;  // Int = Int
                                                                                                }
                                                                                                else if(_1056._tag == Maybe__int_Nothing_tag) {
                                                                                                    Maybe__int _1056_temp = _1056;
                                                                                                    // Case expr:
                                                                                                    static String _1082 = "failed to parse %U";
                                                                                                    String *_1082_ref = &_1082;
                                                                                                    String _1083 = String_copy(_1082_ref);
                                                                                                    String_delete(err);
                                                                                                    err = _1083;  // String = String
                                                                                                    ok = false;  // Bool = Bool
                                                                                                }
                                                                                                else UNHANDLED("time.carp", 804);
                                                                                            } else {
                                                                                                bool _1097 = Char__EQ_(gensym_MINUS_generated1041, 87/*'W'*/);
                                                                                                if (_1097) {
                                                                                                    Maybe__int _1104 = Datetime_parse_MINUS_digits(input, ipos, 2);
                                                                                                    if(_1104._tag == Maybe__int_Just_tag) {
                                                                                                        Maybe__int _1104_temp = _1104;
                                                                                                        int v = _1104_temp.u.Just.member0;
                                                                                                        // Case expr:
                                                                                                        int _1114 = Int__PLUS_(ipos, 2);
                                                                                                        ipos = _1114;  // Int = Int
                                                                                                        int _1121 = Int__PLUS_(fpos, 2);
                                                                                                        fpos = _1121;  // Int = Int
                                                                                                    }
                                                                                                    else if(_1104._tag == Maybe__int_Nothing_tag) {
                                                                                                        Maybe__int _1104_temp = _1104;
                                                                                                        // Case expr:
                                                                                                        static String _1130 = "failed to parse %W";
                                                                                                        String *_1130_ref = &_1130;
                                                                                                        String _1131 = String_copy(_1130_ref);
                                                                                                        String_delete(err);
                                                                                                        err = _1131;  // String = String
                                                                                                        ok = false;  // Bool = Bool
                                                                                                    }
                                                                                                    else UNHANDLED("time.carp", 810);
                                                                                                } else {
                                                                                                    bool _1145 = Char__EQ_(gensym_MINUS_generated1041, 122/*'z'*/);
                                                                                                    if (_1145) {
                                                                                                        int _1152 = Int__PLUS_(ipos, 5);
                                                                                                        bool _1154 = Int__GT_(_1152, ilen);
                                                                                                        if (_1154) {
                                                                                                            static String _1159 = "failed to parse %z";
                                                                                                            String *_1159_ref = &_1159;
                                                                                                            String _1160 = String_copy(_1159_ref);
                                                                                                            String_delete(err);
                                                                                                            err = _1160;  // String = String
                                                                                                            ok = false;  // Bool = Bool
                                                                                                        } else {
                                                                                                            /* let */ {
                                                                                                                Char _1173 = String_char_MINUS_at(input, ipos);
                                                                                                                Char sign_MINUS_c = _1173;
                                                                                                                bool _1190;
                                                                                                                bool _1180 = Char__EQ_(sign_MINUS_c, 43/*'+'*/);
                                                                                                                if (_1180) {
                                                                                                                    bool _1183 = true;
                                                                                                                    _1190 = _1183;
                                                                                                                } else {
                                                                                                                    bool _1188 = Char__EQ_(sign_MINUS_c, 45/*'-'*/);
                                                                                                                    bool _1189 = _1188;
                                                                                                                    _1190 = _1189;
                                                                                                                }
                                                                                                                if (_1190) {
                                                                                                                    int _1198 = Int__PLUS_(ipos, 1);
                                                                                                                    Maybe__int _1200 = Datetime_parse_MINUS_digits(input, _1198, 2);
                                                                                                                    if(_1200._tag == Maybe__int_Just_tag) {
                                                                                                                        Maybe__int _1200_temp = _1200;
                                                                                                                        int zh = _1200_temp.u.Just.member0;
                                                                                                                        // Case expr:
                                                                                                                        int _1210 = Int__PLUS_(ipos, 3);
                                                                                                                        Maybe__int _1212 = Datetime_parse_MINUS_digits(input, _1210, 2);
                                                                                                                        if(_1212._tag == Maybe__int_Just_tag) {
                                                                                                                            Maybe__int _1212_temp = _1212;
                                                                                                                            int zm = _1212_temp.u.Just.member0;
                                                                                                                            // Case expr:
                                                                                                                            /* let */ {
                                                                                                                                Long _1229;
                                                                                                                                bool _1222 = Char__EQ_(sign_MINUS_c, 45/*'-'*/);
                                                                                                                                if (_1222) {
                                                                                                                                    Long _1225 = -1l;
                                                                                                                                    _1229 = _1225;
                                                                                                                                } else {
                                                                                                                                    Long _1228 = 1l;
                                                                                                                                    _1229 = _1228;
                                                                                                                                }
                                                                                                                                Long sign_MINUS_mult = _1229;
                                                                                                                                Long _1240 = Long_from_MINUS_int(zh);
                                                                                                                                Long _1242 = Long__MUL_(_1240, 3600l);
                                                                                                                                Long _1246 = Long_from_MINUS_int(zm);
                                                                                                                                Long _1248 = Long__MUL_(_1246, 60l);
                                                                                                                                Long _1249 = Long__PLUS_(_1242, _1248);
                                                                                                                                Long _1250 = Long__MUL_(sign_MINUS_mult, _1249);
                                                                                                                                tz_MINUS_delta = _1250;  // Long = Long
                                                                                                                                has_MINUS_tz = true;  // Bool = Bool
                                                                                                                                int _1261 = Int__PLUS_(ipos, 5);
                                                                                                                                ipos = _1261;  // Int = Int
                                                                                                                                int _1268 = Int__PLUS_(fpos, 2);
                                                                                                                                fpos = _1268;  // Int = Int
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else if(_1212._tag == Maybe__int_Nothing_tag) {
                                                                                                                            Maybe__int _1212_temp = _1212;
                                                                                                                            // Case expr:
                                                                                                                            static String _1278 = "failed to parse %z";
                                                                                                                            String *_1278_ref = &_1278;
                                                                                                                            String _1279 = String_copy(_1278_ref);
                                                                                                                            String_delete(err);
                                                                                                                            err = _1279;  // String = String
                                                                                                                            ok = false;  // Bool = Bool
                                                                                                                        }
                                                                                                                        else UNHANDLED("time.carp", 822);
                                                                                                                    }
                                                                                                                    else if(_1200._tag == Maybe__int_Nothing_tag) {
                                                                                                                        Maybe__int _1200_temp = _1200;
                                                                                                                        // Case expr:
                                                                                                                        static String _1293 = "failed to parse %z";
                                                                                                                        String *_1293_ref = &_1293;
                                                                                                                        String _1294 = String_copy(_1293_ref);
                                                                                                                        String_delete(err);
                                                                                                                        err = _1294;  // String = String
                                                                                                                        ok = false;  // Bool = Bool
                                                                                                                    }
                                                                                                                    else UNHANDLED("time.carp", 820);
                                                                                                                } else {
                                                                                                                    static String _1307 = "failed to parse %z";
                                                                                                                    String *_1307_ref = &_1307;
                                                                                                                    String _1308 = String_copy(_1307_ref);
                                                                                                                    String_delete(err);
                                                                                                                    err = _1308;  // String = String
                                                                                                                    ok = false;  // Bool = Bool
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        bool _1325 = Char__EQ_(gensym_MINUS_generated1041, 90/*'Z'*/);
                                                                                                        if (_1325) {
                                                                                                            /* let */ {
                                                                                                                int n = 0;
                                                                                                                bool _1394;
                                                                                                                int _1338 = Int__PLUS_(ipos, n);
                                                                                                                bool _1340 = Int__LT_(_1338, ilen);
                                                                                                                if (_1340) {
                                                                                                                    bool _1389;
                                                                                                                    /* let */ {
                                                                                                                        int _1349 = Int__PLUS_(ipos, n);
                                                                                                                        Char _1350 = String_char_MINUS_at(input, _1349);
                                                                                                                        Char c = _1350;
                                                                                                                        bool _1388;
                                                                                                                        bool _1367;
                                                                                                                        bool _1357 = _GT__EQ___Char(c, 65/*'A'*/);
                                                                                                                        if (_1357) {
                                                                                                                            bool _1362 = _LT__EQ___Char(c, 90/*'Z'*/);
                                                                                                                            bool _1363 = _1362;
                                                                                                                            _1367 = _1363;
                                                                                                                        } else {
                                                                                                                            bool _1366 = false;
                                                                                                                            _1367 = _1366;
                                                                                                                        }
                                                                                                                        if (_1367) {
                                                                                                                            bool _1370 = true;
                                                                                                                            _1388 = _1370;
                                                                                                                        } else {
                                                                                                                            bool _1386;
                                                                                                                            bool _1376 = _GT__EQ___Char(c, 97/*'a'*/);
                                                                                                                            if (_1376) {
                                                                                                                                bool _1381 = _LT__EQ___Char(c, 122/*'z'*/);
                                                                                                                                bool _1382 = _1381;
                                                                                                                                _1386 = _1382;
                                                                                                                            } else {
                                                                                                                                bool _1385 = false;
                                                                                                                                _1386 = _1385;
                                                                                                                            }
                                                                                                                            bool _1387 = _1386;
                                                                                                                            _1388 = _1387;
                                                                                                                        }
                                                                                                                        _1389 = _1388;
                                                                                                                    }
                                                                                                                    bool _1390 = _1389;
                                                                                                                    _1394 = _1390;
                                                                                                                } else {
                                                                                                                    bool _1393 = false;
                                                                                                                    _1394 = _1393;
                                                                                                                }
                                                                                                                bool _1402 = _1394;
                                                                                                                while (_1402) {
                                                                                                                    int _1400 = Int__PLUS_(n, 1);
                                                                                                                    n = _1400;  // Int = Int
                                                                                                                    bool _1394;
                                                                                                                    int _1338 = Int__PLUS_(ipos, n);
                                                                                                                    bool _1340 = Int__LT_(_1338, ilen);
                                                                                                                    if (_1340) {
                                                                                                                        bool _1389;
                                                                                                                        /* let */ {
                                                                                                                            int _1349 = Int__PLUS_(ipos, n);
                                                                                                                            Char _1350 = String_char_MINUS_at(input, _1349);
                                                                                                                            Char c = _1350;
                                                                                                                            bool _1388;
                                                                                                                            bool _1367;
                                                                                                                            bool _1357 = _GT__EQ___Char(c, 65/*'A'*/);
                                                                                                                            if (_1357) {
                                                                                                                                bool _1362 = _LT__EQ___Char(c, 90/*'Z'*/);
                                                                                                                                bool _1363 = _1362;
                                                                                                                                _1367 = _1363;
                                                                                                                            } else {
                                                                                                                                bool _1366 = false;
                                                                                                                                _1367 = _1366;
                                                                                                                            }
                                                                                                                            if (_1367) {
                                                                                                                                bool _1370 = true;
                                                                                                                                _1388 = _1370;
                                                                                                                            } else {
                                                                                                                                bool _1386;
                                                                                                                                bool _1376 = _GT__EQ___Char(c, 97/*'a'*/);
                                                                                                                                if (_1376) {
                                                                                                                                    bool _1381 = _LT__EQ___Char(c, 122/*'z'*/);
                                                                                                                                    bool _1382 = _1381;
                                                                                                                                    _1386 = _1382;
                                                                                                                                } else {
                                                                                                                                    bool _1385 = false;
                                                                                                                                    _1386 = _1385;
                                                                                                                                }
                                                                                                                                bool _1387 = _1386;
                                                                                                                                _1388 = _1387;
                                                                                                                            }
                                                                                                                            _1389 = _1388;
                                                                                                                        }
                                                                                                                        bool _1390 = _1389;
                                                                                                                        _1394 = _1390;
                                                                                                                    } else {
                                                                                                                        bool _1393 = false;
                                                                                                                        _1394 = _1393;
                                                                                                                    }
                                                                                                                    _1402 = _1394;
                                                                                                                }
                                                                                                                bool _1407 = Int__GT_(n, 0);
                                                                                                                if (_1407) {
                                                                                                                    /* let */ {
                                                                                                                        String _1414 = String_suffix(input, ipos);
                                                                                                                        String sub = _1414;
                                                                                                                        String* _1419 = &sub; // ref
                                                                                                                        String _1421 = String_prefix(_1419, n);
                                                                                                                        String nm = _1421;
                                                                                                                        String_delete(tz_MINUS_nm);
                                                                                                                        tz_MINUS_nm = nm;  // String = String
                                                                                                                        has_MINUS_tz = true;  // Bool = Bool
                                                                                                                        int _1437 = Int__PLUS_(ipos, n);
                                                                                                                        ipos = _1437;  // Int = Int
                                                                                                                        int _1444 = Int__PLUS_(fpos, 2);
                                                                                                                        fpos = _1444;  // Int = Int
                                                                                                                        String_delete(sub);
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    static String _1453 = "failed to parse %Z";
                                                                                                                    String *_1453_ref = &_1453;
                                                                                                                    String _1454 = String_copy(_1453_ref);
                                                                                                                    String_delete(err);
                                                                                                                    err = _1454;  // String = String
                                                                                                                    ok = false;  // Bool = Bool
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            bool _1470 = Char__EQ_(gensym_MINUS_generated1041, 37/*'%'*/);
                                                                                                            if (_1470) {
                                                                                                                bool _1490;
                                                                                                                bool _1477 = Int__LT_(ipos, ilen);
                                                                                                                if (_1477) {
                                                                                                                    Char _1484 = String_char_MINUS_at(input, ipos);
                                                                                                                    bool _1485 = Char__EQ_(37/*'%'*/, _1484);
                                                                                                                    bool _1486 = _1485;
                                                                                                                    _1490 = _1486;
                                                                                                                } else {
                                                                                                                    bool _1489 = false;
                                                                                                                    _1490 = _1489;
                                                                                                                }
                                                                                                                if (_1490) {
                                                                                                                    int _1497 = Int__PLUS_(ipos, 1);
                                                                                                                    ipos = _1497;  // Int = Int
                                                                                                                    int _1504 = Int__PLUS_(fpos, 2);
                                                                                                                    fpos = _1504;  // Int = Int
                                                                                                                } else {
                                                                                                                    static String _1511 = "failed to parse %%";
                                                                                                                    String *_1511_ref = &_1511;
                                                                                                                    String _1512 = String_copy(_1511_ref);
                                                                                                                    String_delete(err);
                                                                                                                    err = _1512;  // String = String
                                                                                                                    ok = false;  // Bool = Bool
                                                                                                                }
                                                                                                            } else {
                                                                                                                Array _1532 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
                                                                                                                static String _1527 = "unknown format specifier: %";
                                                                                                                String *_1527_ref = &_1527;
                                                                                                                String _1528 = String_copy(_1527_ref);
                                                                                                                ((String*)_1532.data)[0] = _1528;
                                                                                                                String _1531 = Char_str(spec);
                                                                                                                ((String*)_1532.data)[1] = _1531;
                                                                                                                Array__String* _1533 = &_1532; // ref
                                                                                                                String _1534 = String_concat(_1533);
                                                                                                                String_delete(err);
                                                                                                                err = _1534;  // String = String
                                                                                                                ok = false;  // Bool = Bool
                                                                                                                Array_delete__String(_1532);
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    bool _1604;
                    bool _1591 = Int__LT_(ipos, ilen);
                    if (_1591) {
                        Char _1598 = String_char_MINUS_at(input, ipos);
                        bool _1599 = Char__EQ_(fc, _1598);
                        bool _1600 = _1599;
                        _1604 = _1600;
                    } else {
                        bool _1603 = false;
                        _1604 = _1603;
                    }
                    if (_1604) {
                        int _1611 = Int__PLUS_(ipos, 1);
                        ipos = _1611;  // Int = Int
                        int _1618 = Int__PLUS_(fpos, 1);
                        fpos = _1618;  // Int = Int
                    } else {
                        Array _1632 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(String) * 2) };
                        static String _1627 = "unexpected character at position ";
                        String *_1627_ref = &_1627;
                        String _1628 = String_copy(_1627_ref);
                        ((String*)_1632.data)[0] = _1628;
                        String _1631 = Int_str(ipos);
                        ((String*)_1632.data)[1] = _1631;
                        Array__String* _1633 = &_1632; // ref
                        String _1634 = String_concat(_1633);
                        String_delete(err);
                        err = _1634;  // String = String
                        ok = false;  // Bool = Bool
                        Array_delete__String(_1632);
                    }
                }
            }
            bool _68;
            if (ok) {
                bool _63 = Int__LT_(fpos, flen);
                bool _64 = _63;
                _68 = _64;
            } else {
                bool _67 = false;
                _68 = _67;
            }
            _1645 = _68;
        }
        Result__Datetime_String _1808;
        if (ok) {
            Result__Datetime_String _1797;
            /* let */ {
                int _1698;
                bool _1655 = Int__EQ_(ampm, 2);
                if (_1655) {
                    int _1671;
                    bool _1661 = Int__LT_(hr, 12);
                    if (_1661) {
                        int _1666 = Int__PLUS_(hr, 12);
                        int _1667 = _1666;
                        _1671 = _1667;
                    } else {
                        int _1670 = hr;
                        _1671 = _1670;
                    }
                    int _1672 = _1671;
                    _1698 = _1672;
                } else {
                    int _1696;
                    bool _1678 = Int__EQ_(ampm, 1);
                    if (_1678) {
                        int _1691;
                        bool _1684 = Int__EQ_(hr, 12);
                        if (_1684) {
                            int _1687 = 0;
                            _1691 = _1687;
                        } else {
                            int _1690 = hr;
                            _1691 = _1690;
                        }
                        int _1692 = _1691;
                        _1696 = _1692;
                    } else {
                        int _1695 = hr;
                        _1696 = _1695;
                    }
                    int _1697 = _1696;
                    _1698 = _1697;
                }
                int final_MINUS_hr = _1698;
                Maybe__int _1714;
                bool _1704 = Int__EQ_(final_MINUS_hr, -1);
                if (_1704) {
                    Maybe__int _1707 = Maybe_Nothing__int();
                    Maybe__int _1708 = _1707;
                    _1714 = _1708;
                } else {
                    Maybe__int _1712 = Maybe_Just__int(final_MINUS_hr);
                    Maybe__int _1713 = _1712;
                    _1714 = _1713;
                }
                Maybe__int hours_MINUS_val = _1714;
                Maybe__int _1730;
                bool _1720 = Int__EQ_(mi, -1);
                if (_1720) {
                    Maybe__int _1723 = Maybe_Nothing__int();
                    Maybe__int _1724 = _1723;
                    _1730 = _1724;
                } else {
                    Maybe__int _1728 = Maybe_Just__int(mi);
                    Maybe__int _1729 = _1728;
                    _1730 = _1729;
                }
                Maybe__int minutes_MINUS_val = _1730;
                Maybe__int _1746;
                bool _1736 = Int__EQ_(sc, -1);
                if (_1736) {
                    Maybe__int _1739 = Maybe_Nothing__int();
                    Maybe__int _1740 = _1739;
                    _1746 = _1740;
                } else {
                    Maybe__int _1744 = Maybe_Just__int(sc);
                    Maybe__int _1745 = _1744;
                    _1746 = _1745;
                }
                Maybe__int seconds_MINUS_val = _1746;
                Maybe__int _1762;
                bool _1752 = Int__EQ_(ns, -1);
                if (_1752) {
                    Maybe__int _1755 = Maybe_Nothing__int();
                    Maybe__int _1756 = _1755;
                    _1762 = _1756;
                } else {
                    Maybe__int _1760 = Maybe_Just__int(ns);
                    Maybe__int _1761 = _1760;
                    _1762 = _1761;
                }
                Maybe__int ns_MINUS_val = _1762;
                Maybe__Timezone _1783;
                if (has_MINUS_tz) {
                    String* _1772 = &tz_MINUS_nm; // ref
                    String _1773 = String_copy(_1772);
                    Timezone _1776 = Timezone_init(_1773, tz_MINUS_delta, false);
                    Maybe__Timezone _1777 = Maybe_Just__Timezone(_1776);
                    Maybe__Timezone _1778 = _1777;
                    _1783 = _1778;
                } else {
                    Maybe__Timezone _1781 = Maybe_Nothing__Timezone();
                    Maybe__Timezone _1782 = _1781;
                    _1783 = _1782;
                }
                Maybe__Timezone tz_MINUS_val = _1783;
                Datetime _1795 = Datetime_init(yr, mo, dy, hours_MINUS_val, minutes_MINUS_val, seconds_MINUS_val, ns_MINUS_val, tz_MINUS_val);
                Result__Datetime_String _1796 = Result_Success__Datetime_String(_1795);
                _1797 = _1796;
            }
            Result__Datetime_String _1798 = _1797;
            _1808 = _1798;
        } else {
            String* _1804 = &err; // ref
            String _1805 = String_copy(_1804);
            Result__Datetime_String _1806 = Result_Error__String_Datetime(_1805);
            Result__Datetime_String _1807 = _1806;
            _1808 = _1807;
        }
        Result__Datetime_String _1809 = _1808;
        _1810 = _1809;
        String_delete(efmt);
        String_delete(err);
        String_delete(tz_MINUS_nm);
    }
    return _1810;
}

int Datetime_to_MINUS_ordinal(Datetime* dt) {
    int* _8 = Datetime_year(dt);
    int _9 = Int_copy(_8);
    int* _13 = Datetime_month(dt);
    int _14 = Int_copy(_13);
    int* _18 = Datetime_day(dt);
    int _19 = Int_copy(_18);
    int _20 = Datetime_ymd2ord(_9, _14, _19);
    return _20;
}

int Datetime_to_MINUS_unix(int y, int m, int d, int hh, int mm, int ss, Long delta) {
    int _71;
    /* let */ {
        Result__Array__int_String _19 = Array_range__int(1970, y, 1);
        Array__int _20 = Result_unsafe_MINUS_from_MINUS_success__Array__int_String(_19);
        Array__int* _21 = &_20; // ref
        int _24 = Datetime_for_MINUS_year(_21, 366, 365);
        int yy = _24;
        int _30 = Int__MUL_(yy, Datetime_DAY);
        Array__int* _37 = &Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH; // ref
        int* _39 = Array_unsafe_MINUS_nth__int(_37, m);
        int _40 = Int_copy(_39);
        int _42 = Int__MUL_(_40, Datetime_DAY);
        int _47 = Int_dec(d);
        int _49 = Int__MUL_(_47, Datetime_DAY);
        int _54 = Int__MUL_(hh, Datetime_HOUR);
        int _59 = Int__MUL_(mm, Datetime_MINUTE);
        int _63 = Long_to_MINUS_int(delta);
        int _65 = Int__PLUS_(_63, ss);
        int _66 = Int__PLUS_(_59, _65);
        int _67 = Int__PLUS_(_54, _66);
        int _68 = Int__PLUS_(_49, _67);
        int _69 = Int__PLUS_(_42, _68);
        int _70 = Int__PLUS_(_30, _69);
        _71 = _70;
        Array_delete__int(_20);
    }
    return _71;
}

int Datetime_to_MINUS_unix_MINUS_timestamp(Datetime* dt) {
    int _64;
    /* let */ {
        Maybe__Timezone* _10 = Datetime_tz(dt);
        Maybe__Timezone _11 = Maybe_copy__Timezone(_10);
        Timezone _13 = Timezone_zero();
        Timezone _14 = Maybe_from__Timezone(_11, _13);
        Timezone tz = _14;
        int* _20 = Datetime_year(dt);
        int _21 = Int_copy(_20);
        int* _25 = Datetime_month(dt);
        int _26 = Int_copy(_25);
        int* _30 = Datetime_day(dt);
        int _31 = Int_copy(_30);
        Maybe__int* _36 = Datetime_hours(dt);
        Maybe__int _37 = Maybe_copy__int(_36);
        int _39 = Maybe_from__int(_37, 0);
        Maybe__int* _44 = Datetime_minutes(dt);
        Maybe__int _45 = Maybe_copy__int(_44);
        int _47 = Maybe_from__int(_45, 0);
        Maybe__int* _52 = Datetime_seconds(dt);
        Maybe__int _53 = Maybe_copy__int(_52);
        int _55 = Maybe_from__int(_53, 0);
        Timezone* _60 = &tz; // ref
        Long* _61 = Timezone_delta(_60);
        Long _62 = Long_copy(_61);
        int _63 = Datetime_to_MINUS_unix(_21, _26, _31, _39, _47, _55, _62);
        _64 = _63;
        Timezone_delete(tz);
    }
    return _64;
}

Maybe__Timezone* Datetime_tz(Datetime* p) { return (&(p->tz)); }

Datetime Datetime_update_MINUS_day(Datetime p, Lambda *updater) {
    p.day = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.day) : ((Fn__int_int)(*updater).callback)(p.day);
    return p;
}


Datetime Datetime_update_MINUS_hours(Datetime p, Lambda *updater) {
    p.hours = (*updater).env ? ((Fn__LambdaEnv_Maybe__int_Maybe__int)(*updater).callback)((*updater).env, p.hours) : ((Fn__Maybe__int_Maybe__int)(*updater).callback)(p.hours);
    return p;
}


Datetime Datetime_update_MINUS_minutes(Datetime p, Lambda *updater) {
    p.minutes = (*updater).env ? ((Fn__LambdaEnv_Maybe__int_Maybe__int)(*updater).callback)((*updater).env, p.minutes) : ((Fn__Maybe__int_Maybe__int)(*updater).callback)(p.minutes);
    return p;
}


Datetime Datetime_update_MINUS_month(Datetime p, Lambda *updater) {
    p.month = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.month) : ((Fn__int_int)(*updater).callback)(p.month);
    return p;
}


Datetime Datetime_update_MINUS_nanoseconds(Datetime p, Lambda *updater) {
    p.nanoseconds = (*updater).env ? ((Fn__LambdaEnv_Maybe__int_Maybe__int)(*updater).callback)((*updater).env, p.nanoseconds) : ((Fn__Maybe__int_Maybe__int)(*updater).callback)(p.nanoseconds);
    return p;
}


Datetime Datetime_update_MINUS_seconds(Datetime p, Lambda *updater) {
    p.seconds = (*updater).env ? ((Fn__LambdaEnv_Maybe__int_Maybe__int)(*updater).callback)((*updater).env, p.seconds) : ((Fn__Maybe__int_Maybe__int)(*updater).callback)(p.seconds);
    return p;
}


Datetime Datetime_update_MINUS_tz(Datetime p, Lambda *updater) {
    p.tz = (*updater).env ? ((Fn__LambdaEnv_Maybe__Timezone_Maybe__Timezone)(*updater).callback)((*updater).env, p.tz) : ((Fn__Maybe__Timezone_Maybe__Timezone)(*updater).callback)(p.tz);
    return p;
}


Datetime Datetime_update_MINUS_year(Datetime p, Lambda *updater) {
    p.year = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.year) : ((Fn__int_int)(*updater).callback)(p.year);
    return p;
}


bool Datetime_utc_QMARK_(Datetime* dt) {
    bool _31;
    Maybe__Timezone* _8 = Datetime_tz(dt);
    bool _9 = Maybe_nothing_QMARK___Timezone(_8);
    if (_9) {
        bool _12 = true;
        _31 = _12;
    } else {
        Timezone* _17 = &Timezone_utc; // ref
        Maybe__Timezone* _23 = Datetime_tz(dt);
        Maybe__Timezone _24 = Maybe_copy__Timezone(_23);
        Timezone _26 = Timezone_zero();
        Timezone _27 = Maybe_from__Timezone(_24, _26);
        Timezone* _28 = &_27; // ref
        bool _29 = Timezone__EQ_(_17, _28);
        bool _30 = _29;
        Timezone_delete(_27);
        _31 = _30;
    }
    return _31;
}

int Datetime_weekday(Datetime* dt) {
    int _8 = Datetime_to_MINUS_ordinal(dt);
    int _10 = Int__PLUS_(_8, 6);
    int _12 = Int_mod(_10, 7);
    return _12;
}

String Datetime_weekday_MINUS_short_MINUS_string(Datetime* dt) {
    String _33;
    /* let */ {
        int _9 = Datetime_to_MINUS_ordinal(dt);
        int _11 = Int_mod(_9, 7);
        int modord = _11;
        Array__String* _17 = &Datetime_WEEKDAY_MINUS_STRINGS; // ref
        int _29;
        bool _22 = Int__EQ_(modord, 0);
        if (_22) {
            int _25 = 7;
            _29 = _25;
        } else {
            int _28 = modord;
            _29 = _28;
        }
        String* _30 = Array_unsafe_MINUS_nth__String(_17, _29);
        String _32 = String_prefix(_30, 3);
        _33 = _32;
    }
    return _33;
}

String Datetime_weekday_MINUS_string(Datetime* dt) {
    String _32;
    /* let */ {
        int _9 = Datetime_to_MINUS_ordinal(dt);
        int _11 = Int_mod(_9, 7);
        int modord = _11;
        Array__String* _17 = &Datetime_WEEKDAY_MINUS_STRINGS; // ref
        int _29;
        bool _22 = Int__EQ_(modord, 0);
        if (_22) {
            int _25 = 7;
            _29 = _25;
        } else {
            int _28 = modord;
            _29 = _28;
        }
        String* _30 = Array_unsafe_MINUS_nth__String(_17, _29);
        String _31 = String_copy(_30);
        _32 = _31;
    }
    return _32;
}

int* Datetime_year(Datetime* p) { return (&(p->year)); }

int Datetime_yearday(Datetime* dt) {
    Array__int* _9 = &Datetime_DAYS_MINUS_BEFORE_MINUS_MONTH; // ref
    int* _13 = Datetime_month(dt);
    int _14 = Int_copy(_13);
    int* _15 = Array_unsafe_MINUS_nth__int(_9, _14);
    int _16 = Int_copy(_15);
    int* _20 = Datetime_day(dt);
    int _21 = Int_copy(_20);
    int _22 = Int__PLUS_(_16, _21);
    return _22;
}

int Datetime_ymd2ord(int year, int month, int day) {
    int _10 = Datetime_days_MINUS_before_MINUS_year(year);
    int _14 = Datetime_days_MINUS_before_MINUS_month(year, month);
    int _15 = Int__PLUS_(_10, _14);
    int _17 = Int__PLUS_(_15, day);
    return _17;
}

Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty_copy(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* pRef) {
    Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'n' : Int */
    return copy;
}

void Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty_delete(Datetime__Lambda__Lambda_from_MINUS_unix_MINUS_timestamp_76_env_69_env_ty* p) {
    /* Ignore non-managed member 'n' : Int */
}

Datetime__Lambda_for_MINUS_year_31_env_ty* Datetime__Lambda_for_MINUS_year_31_env_ty_copy(Datetime__Lambda_for_MINUS_year_31_env_ty* pRef) {
    Datetime__Lambda_for_MINUS_year_31_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'a' : Int */
    /* Ignore non-managed member 'b' : Int */
    return copy;
}

void Datetime__Lambda_for_MINUS_year_31_env_ty_delete(Datetime__Lambda_for_MINUS_year_31_env_ty* p) {
    /* Ignore non-managed member 'a' : Int */
    /* Ignore non-managed member 'b' : Int */
}

Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty_copy(Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* pRef) {
    Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'n' : Int */
    return copy;
}

void Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty_delete(Datetime__Lambda_from_MINUS_unix_MINUS_timestamp_69_env_ty* p) {
    /* Ignore non-managed member 'n' : Int */
}

Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* Datetime__Lambda_strftime__Datetime_MUL__105_env_ty_copy(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* pRef) {
    Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'dt' : (Ref Datetime <t634>) */
    /* Ignore non-managed member 'ln' : Int */
    return copy;
}

void Datetime__Lambda_strftime__Datetime_MUL__105_env_ty_delete(Datetime__Lambda_strftime__Datetime_MUL__105_env_ty* p) {
    /* Ignore non-managed member 'dt' : (Ref Datetime <t634>) */
    /* Ignore non-managed member 'ln' : Int */
}

double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

double Double_blit(double x) {
    double _7 = x; // From the 'the' function.
    return _7;
}

double Double_dec(double x) {
    double _7 = Double__MINUS_(x, 1.0);
    return _7;
}

Maybe__double Double_from_MINUS_string(String* s) {
    Maybe__double _25;
    /* let */ {
        double res = 0.0;
        Maybe__double _24;
        double* _13 = &res; // ref
        bool _14 = Double_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__double _18 = Maybe_Just__double(res);
            Maybe__double _19 = _18;
            _24 = _19;
        } else {
            Maybe__double _22 = Maybe_Nothing__double();
            Maybe__double _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Double_hash(double* k) {
    double _8 = Double_copy(k);
    Long _9 = Double_to_MINUS_bytes(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

double Double_inc(double x) {
    double _7 = Double__PLUS_(1.0, x);
    return _7;
}

bool Double_negative_QMARK_(double a) {
    bool _7 = Double__LT_(a, 0.0);
    return _7;
}

bool Double_positive_QMARK_(double a) {
    bool _7 = Double__GT_(a, 0.0);
    return _7;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_random() {
    double _7 = Double_from_MINUS_int(CARP_INT_MAX);
    double _8 = Double_random_MINUS_between(0.0, _7);
    return _8;
}

double Double_random_MINUS_between(double lower, double upper) {
    double _20;
    /* let */ {
        double _10 = Double__MINUS_(upper, lower);
        double diff = _10;
        double _16 = Random_random();
        double _17 = Double__MUL_(diff, _16);
        double _19 = Double__PLUS_(_17, lower);
        _20 = _19;
    }
    return _20;
}

double Double_sign(double x) {
    double _26;
    bool _8 = Double__GT_(x, 0.0);
    if (_8) {
        double _11 = 1.0;
        _26 = _11;
    } else {
        double _24;
        bool _17 = Double__LT_(x, 0.0);
        if (_17) {
            double _20 = -1.0;
            _24 = _20;
        } else {
            double _23 = 0.0;
            _24 = _23;
        }
        double _25 = _24;
        _26 = _25;
    }
    return _26;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

String DoubleRef_format(String* s, double* x) {
    double _9 = Double_copy(x);
    String _10 = Double_format(s, _9);
    return _10;
}

String DoubleRef_prn(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

String DoubleRef_str(double* x) {
    double _7 = Double_copy(x);
    String _8 = Double_str(_7);
    return _8;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

float Float_blit(float x) {
    float _7 = x; // From the 'the' function.
    return _7;
}

float Float_dec(float x) {
    float _7 = Float__MINUS_(x, 1.0f);
    return _7;
}

Maybe__float Float_from_MINUS_string(String* s) {
    Maybe__float _25;
    /* let */ {
        float res = 0.0f;
        Maybe__float _24;
        float* _13 = &res; // ref
        bool _14 = Float_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__float _18 = Maybe_Just__float(res);
            Maybe__float _19 = _18;
            _24 = _19;
        } else {
            Maybe__float _22 = Maybe_Nothing__float();
            Maybe__float _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Float_hash(float* k) {
    float _7 = Float_copy(k);
    int _8 = Float_to_MINUS_bytes(_7);
    return _8;
}

float Float_inc(float x) {
    float _7 = Float__PLUS_(1.0f, x);
    return _7;
}

bool Float_negative_QMARK_(float a) {
    bool _7 = Float__LT_(a, 0.0f);
    return _7;
}

bool Float_positive_QMARK_(float a) {
    bool _7 = Float__GT_(a, 0.0f);
    return _7;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_random() {
    float _7 = Float_from_MINUS_int(CARP_INT_MAX);
    float _8 = Float_random_MINUS_between(0.0f, _7);
    return _8;
}

float Float_random_MINUS_between(float lower, float upper) {
    float _24;
    /* let */ {
        float _10 = Float__MINUS_(upper, lower);
        float diff = _10;
        double _17 = Double_from_MINUS_float(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        float _21 = Double_to_MINUS_float(_20);
        float _23 = Float__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

float Float_sign(float x) {
    float _26;
    bool _8 = Float__GT_(x, 0.0f);
    if (_8) {
        float _11 = 1.0f;
        _26 = _11;
    } else {
        float _24;
        bool _17 = Float__LT_(x, 0.0f);
        if (_17) {
            float _20 = -1.0f;
            _24 = _20;
        } else {
            float _23 = 0.0f;
            _24 = _23;
        }
        float _25 = _24;
        _26 = _25;
    }
    return _26;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

String FloatRef_format(String* s, float* x) {
    float _9 = Float_copy(x);
    String _10 = Float_format(s, _9);
    return _10;
}

String FloatRef_prn(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

String FloatRef_str(float* x) {
    float _7 = Float_copy(x);
    String _8 = Float_str(_7);
    return _8;
}

void Function_delete__Array__uint8_t_MUL__Result__Uint16_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint32_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Result__Uint64_Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint16 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Array__uint8_t_MUL__Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Datetime_MUL__Datetime_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint32 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Long_Uint64 (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Pair__ColorId_String_Pair__ColorId_String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__PatternMatchResult_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Result__Datetime_String_MUL__Result__Datetime_String_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__String_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__String_MUL__int_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint16_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint32_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__Uint64_MUL__Array__uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__bool_bool_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_MUL__int (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__int_int_bool (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_MUL__String (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__uint8_t_uint8_t (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

void Function_delete__void (Lambda f) {
  if(f.delete) {
      ((void(*)(void*))f.delete)(f.env);
      CARP_FREE(f.env);
  }
}

int Heap_lchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(1, _9);
    return _10;
}

int Heap_parent(int i) {
    int _8 = Int__MINUS_(i, 1);
    int _10 = Int__DIV_(_8, 2);
    return _10;
}

int Heap_rchild(int i) {
    int _9 = Int__MUL_(2, i);
    int _10 = Int__PLUS_(2, _9);
    return _10;
}

void IO_Raw_fclose_BANG_(FILE* file) {
    /* let */ {
        int _8 = fclose(file);
        int _ = _8;
        /* () */
    }
}

void IO_Raw_fflush_BANG_(FILE* file) {
    /* let */ {
        int _8 = fflush(file);
        int _ = _8;
        /* () */
    }
}

FILE* IO_Raw_fopen(String* pathname, String* mode) {
    CChar* _8 = String_cstr(pathname);
    CChar* _11 = String_cstr(mode);
    FILE* _12 = fopen(_8, _11);
    return _12;
}

int IO_Raw_fread(String* file_MINUS_name, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(file_MINUS_name);
    int _14 = fread(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

int IO_Raw_fwrite(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    CChar* _10 = String_cstr(data);
    int _14 = fwrite(_10, item_MINUS_size, items_MINUS_count, file);
    return _14;
}

void IO_Raw_fwrite_BANG_(String* data, int item_MINUS_size, int items_MINUS_count, FILE* file) {
    /* let */ {
        int _14 = IO_Raw_fwrite(data, item_MINUS_size, items_MINUS_count, file);
        int _ = _14;
        /* () */
    }
}

int IO_Raw_unlink(String* file_MINUS_name) {
    CChar* _7 = String_cstr(file_MINUS_name);
    int _8 = unlink(_7);
    return _8;
}

void IO_Raw_unlink_BANG_(String* file_MINUS_name) {
    /* let */ {
        int _8 = IO_Raw_unlink(file_MINUS_name);
        int _ = _8;
        /* () */
    }
}

Result__bool_String IO_append_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "ab";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _1000010 = String_format(_29_ref, _34);
            String* _1000008 = &_1000010; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _1000013 = String_format(_39_ref, file_MINUS_name);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _45 = String_copy(_1000005);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_33);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _1000025 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _1000023 = &_1000025; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _1000028 = Int_format(_89_ref, bytes2write);
                    String* _1000026 = &_1000028; // ref
                    String _1000022 = String_append(_1000023, _1000026);
                    String* _1000020 = &_1000022; // ref
                    String _95 = String_copy(_1000020);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_1000022);
                    String_delete(_1000025);
                    String_delete(_1000028);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

void IO_color(ColorId cid) {
    String _8 = Color_color(cid);
    String* _9 = &_8; // ref
    IO_print(_9);
    String_delete(_8);
}

void IO_colorize(ColorId cid, String* s) {
    String _10 = Color_colorize(cid, s);
    String* _11 = &_10; // ref
    IO_print(_11);
    String_delete(_10);
}

Result__Char_String IO_fgetc(FILE* file) {
    Result__Char_String _43;
    /* let */ {
        int _8 = fgetc(file);
        int _CHAR_ = _8;
        Result__Char_String _42;
        bool _13 = feof(file);
        if (_13) {
            static String _17 = "couldn't read char from file, EOF reached";
            String *_17_ref = &_17;
            String _18 = String_copy(_17_ref);
            Result__Char_String _19 = Result_Error__String_Char(_18);
            Result__Char_String _20 = _19;
            _42 = _20;
        } else {
            Result__Char_String _40;
            bool _25 = ferror(file);
            if (_25) {
                static String _29 = "error while reading char from file";
                String *_29_ref = &_29;
                String _30 = String_copy(_29_ref);
                Result__Char_String _31 = Result_Error__String_Char(_30);
                Result__Char_String _32 = _31;
                _40 = _32;
            } else {
                Char _37 = Char_from_MINUS_int(_CHAR_);
                Result__Char_String _38 = Result_Success__Char_String(_37);
                Result__Char_String _39 = _38;
                _40 = _39;
            }
            Result__Char_String _41 = _40;
            _42 = _41;
        }
        _43 = _42;
    }
    return _43;
}

Maybe__String IO_getenv(String* s) {
    Maybe__String _28;
    /* let */ {
        CChar* _9 = String_cstr(s);
        CChar* _10 = getenv(_9);
        CChar* e = _10;
        Maybe__String _27;
        bool _15 = null_QMARK___CChar(e);
        if (_15) {
            Maybe__String _18 = Maybe_Nothing__String();
            Maybe__String _19 = _18;
            _27 = _19;
        } else {
            String _24 = String_from_MINUS_cstr(e);
            Maybe__String _25 = Maybe_Just__String(_24);
            Maybe__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__FILE_MUL__String IO_open_MINUS_file(String* filename, String* mode) {
    Result__FILE_MUL__String _28;
    /* let */ {
        FILE* _10 = IO_Raw_fopen(filename, mode);
        FILE* ptr = _10;
        Result__FILE_MUL__String _27;
        bool _15 = null_QMARK___FILE(ptr);
        if (_15) {
            String _19 = System_error_MINUS_text();
            Result__FILE_MUL__String _20 = Result_Error__String_FILE_MUL_(_19);
            Result__FILE_MUL__String _21 = _20;
            _27 = _21;
        } else {
            Result__FILE_MUL__String _25 = Result_Success__FILE_MUL__String(ptr);
            Result__FILE_MUL__String _26 = _25;
            _27 = _26;
        }
        _28 = _27;
    }
    return _28;
}

Result__String_String IO_read_MINUS__GT_EOF(String* filename) {
    Result__String_String _66;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String file_QMARK_ = _9;
        Result__String_String _65;
        if(file_QMARK_._tag == Result__FILE_MUL__String_Error_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            String x = _12_temp.u.Error.member0;
            // Case expr:
            Result__String_String _18 = Result_Error__String_String(x);
            _65 = _18;
        }
        else if(file_QMARK_._tag == Result__FILE_MUL__String_Success_tag) {
            Result__FILE_MUL__String _12_temp = file_QMARK_;
            FILE* f = _12_temp.u.Success.member0;
            // Case expr:
            Result__String_String _64;
            /* let */ {
                int _25 = Int_zero();
                int c = _25;
                Array _27 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(uint8_t) * 0) };
                Array__uint8_t r = _27;
                int _36 = fgetc(f);
                c = _36;  // Int = Int
                bool _41 = _DIV__EQ___int(c, EOF);
                bool _42 = _41;
                bool _52 = _42;
                while (_52) {
                    uint8_t _49 = Byte_from_MINUS_int(c);
                    Array__uint8_t _50 = Array_push_MINUS_back__uint8_t(r, _49);
                    r = _50;  // (Array Byte) = (Array Byte)
                    int _36 = fgetc(f);
                    c = _36;  // Int = Int
                    bool _41 = _DIV__EQ___int(c, EOF);
                    bool _42 = _41;
                    _52 = _42;
                }
                IO_Raw_fclose_BANG_(f);
                Array__uint8_t* _60 = &r; // ref
                String _61 = String_from_MINUS_bytes(_60);
                Result__String_String _62 = Result_Success__String_String(_61);
                Result__String_String _63 = _62;
                _64 = _63;
                Array_delete__uint8_t(r);
            }
            _65 = _64;
        }
        else UNHANDLED("IO.carp", 273);
        _66 = _65;
    }
    return _66;
}

Result__String_String IO_read_MINUS_file(String* filename) {
    Result__String_String _176;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        Result__FILE_MUL__String _9 = IO_open_MINUS_file(filename, _8_ref);
        Result__FILE_MUL__String finput_QMARK_ = _9;
        Result__String_String _175;
        Result__FILE_MUL__String* _15 = &finput_QMARK_; // ref
        bool _16 = Result_error_QMARK___FILE_MUL__String(_15);
        if (_16) {
            static String _24 = "Failed to open file='%s', error='";
            String *_24_ref = &_24;
            String _1000010 = String_format(_24_ref, filename);
            String* _1000008 = &_1000010; // ref
            static String _30 = "%s'";
            String *_30_ref = &_30;
            String _34 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(finput_QMARK_);
            String* _35 = &_34; // ref
            String _1000013 = String_format(_30_ref, _35);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _40 = String_copy(_1000005);
            Result__String_String _41 = Result_Error__String_String(_40);
            Result__String_String _42 = _41;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_34);
            _175 = _42;
        } else {
            Result__String_String _173;
            /* let */ {
                FILE* _48 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(finput_QMARK_);
                FILE* finput = _48;
                fseek(finput, 0, SEEK_END);
                int _68;
                /* let */ {
                    int _60 = ftell(finput);
                    int flength = _60;
                    rewind(finput);
                    int _67 = flength;
                    _68 = _67;
                }
                int _69 = _68;
                int length = _69;
                String _74 = String_allocate(length, 48/*'0'*/);
                String buffer = _74;
                Result__String_String _172;
                String* _81 = &buffer; // ref
                bool _82 = String_allocated_QMARK_(_81);
                bool _83 = not(_82);
                if (_83) {
                    IO_Raw_fclose_BANG_(finput);
                    static String _94 = "Failed to open buffer with size=%d from file='";
                    String *_94_ref = &_94;
                    String _1000026 = Int_format(_94_ref, length);
                    String* _1000024 = &_1000026; // ref
                    static String _100 = "%s'";
                    String *_100_ref = &_100;
                    String _1000029 = String_format(_100_ref, filename);
                    String* _1000027 = &_1000029; // ref
                    String _1000023 = String_append(_1000024, _1000027);
                    String* _1000021 = &_1000023; // ref
                    String _106 = String_copy(_1000021);
                    Result__String_String _107 = Result_Error__String_String(_106);
                    Result__String_String _108 = _107;
                    String_delete(_1000023);
                    String_delete(_1000026);
                    String_delete(_1000029);
                    String_delete(buffer);
                    _172 = _108;
                } else {
                    Result__String_String _170;
                    /* let */ {
                        String* _115 = &buffer; // ref
                        int _119 = IO_Raw_fread(_115, 1, length, finput);
                        int bytes_MINUS_read = _119;
                        IO_Raw_fclose_BANG_(finput);
                        Result__String_String _169;
                        bool _130 = Int__EQ_(bytes_MINUS_read, length);
                        bool _131 = not(_130);
                        if (_131) {
                            static String _139 = "Error: file='%s' has length=";
                            String *_139_ref = &_139;
                            String _1000039 = String_format(_139_ref, filename);
                            String* _1000037 = &_1000039; // ref
                            static String _147 = "%d but bytes-read=";
                            String *_147_ref = &_147;
                            String _1000045 = Int_format(_147_ref, length);
                            String* _1000043 = &_1000045; // ref
                            static String _153 = "%d";
                            String *_153_ref = &_153;
                            String _1000048 = Int_format(_153_ref, bytes_MINUS_read);
                            String* _1000046 = &_1000048; // ref
                            String _1000042 = String_append(_1000043, _1000046);
                            String* _1000040 = &_1000042; // ref
                            String _1000036 = String_append(_1000037, _1000040);
                            String* _1000034 = &_1000036; // ref
                            String _161 = String_copy(_1000034);
                            Result__String_String _162 = Result_Error__String_String(_161);
                            Result__String_String _163 = _162;
                            String_delete(_1000036);
                            String_delete(_1000039);
                            String_delete(_1000042);
                            String_delete(_1000045);
                            String_delete(_1000048);
                            String_delete(buffer);
                            _169 = _163;
                        } else {
                            Result__String_String _167 = Result_Success__String_String(buffer);
                            Result__String_String _168 = _167;
                            _169 = _168;
                        }
                        _170 = _169;
                    }
                    Result__String_String _171 = _170;
                    _172 = _171;
                }
                _173 = _172;
            }
            Result__String_String _174 = _173;
            _175 = _174;
        }
        _176 = _175;
    }
    return _176;
}

Result__bool_String IO_write_MINUS_file(String* content, String* file_MINUS_name) {
    Result__bool_String _103;
    /* let */ {
        static String _9 = "wb";
        String *_9_ref = &_9;
        Result__FILE_MUL__String _10 = IO_open_MINUS_file(file_MINUS_name, _9_ref);
        Result__FILE_MUL__String fOut_QMARK_ = _10;
        int _14 = String_length(content);
        int bytes2write = _14;
        Result__bool_String _102;
        Result__FILE_MUL__String* _20 = &fOut_QMARK_; // ref
        bool _21 = Result_error_QMARK___FILE_MUL__String(_20);
        if (_21) {
            static String _29 = "error='%s' opening file='";
            String *_29_ref = &_29;
            String _33 = Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(fOut_QMARK_);
            String* _34 = &_33; // ref
            String _1000010 = String_format(_29_ref, _34);
            String* _1000008 = &_1000010; // ref
            static String _39 = "%s'";
            String *_39_ref = &_39;
            String _1000013 = String_format(_39_ref, file_MINUS_name);
            String* _1000011 = &_1000013; // ref
            String _1000007 = String_append(_1000008, _1000011);
            String* _1000005 = &_1000007; // ref
            String _45 = String_copy(_1000005);
            Result__bool_String _46 = Result_Error__String_bool(_45);
            Result__bool_String _47 = _46;
            String_delete(_1000007);
            String_delete(_1000010);
            String_delete(_1000013);
            String_delete(_33);
            _102 = _47;
        } else {
            Result__bool_String _100;
            /* let */ {
                FILE* _53 = Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(fOut_QMARK_);
                FILE* fOut = _53;
                int _60 = IO_Raw_fwrite(content, 1, bytes2write, fOut);
                int bytes_MINUS_written = _60;
                IO_Raw_fclose_BANG_(fOut);
                Result__bool_String _98;
                bool _70 = Int__EQ_(bytes_MINUS_written, bytes2write);
                if (_70) {
                    Result__bool_String _74 = Result_Success__bool_String(true);
                    Result__bool_String _75 = _74;
                    _98 = _75;
                } else {
                    static String _83 = "only %d of ";
                    String *_83_ref = &_83;
                    String _1000025 = Int_format(_83_ref, bytes_MINUS_written);
                    String* _1000023 = &_1000025; // ref
                    static String _89 = "%d bytes were written";
                    String *_89_ref = &_89;
                    String _1000028 = Int_format(_89_ref, bytes2write);
                    String* _1000026 = &_1000028; // ref
                    String _1000022 = String_append(_1000023, _1000026);
                    String* _1000020 = &_1000022; // ref
                    String _95 = String_copy(_1000020);
                    Result__bool_String _96 = Result_Error__String_bool(_95);
                    Result__bool_String _97 = _96;
                    String_delete(_1000022);
                    String_delete(_1000025);
                    String_delete(_1000028);
                    _98 = _97;
                }
                Result__bool_String _99 = _98;
                _100 = _99;
            }
            Result__bool_String _101 = _100;
            _102 = _101;
        }
        _103 = _102;
    }
    return _103;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

int Int_blit(int x) {
    int _7 = x; // From the 'the' function.
    return _7;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

int Int_from_MINUS_int(int a) {
    return a;
}

Maybe__int Int_from_MINUS_string(String* s) {
    Maybe__int _25;
    /* let */ {
        int res = 0;
        Maybe__int _24;
        int* _13 = &res; // ref
        bool _14 = Int_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__int _18 = Maybe_Just__int(res);
            Maybe__int _19 = _18;
            _24 = _19;
        } else {
            Maybe__int _22 = Maybe_Nothing__int();
            Maybe__int _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Int_hash(int* k) {
    int _8 = Int_copy(k);
    int _9 = _8; // From the 'the' function.
    return _9;
}

bool Int_negative_QMARK_(int a) {
    bool _7 = Int__LT_(a, 0);
    return _7;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_positive_MINUS_mod(int k, int n) {
    int _27;
    /* let */ {
        int _10 = Int_mod(k, n);
        int r = _10;
        int _26;
        bool _16 = Int__GT_(0, r);
        if (_16) {
            int _21 = Int__PLUS_(r, n);
            int _22 = _21;
            _26 = _22;
        } else {
            int _25 = r;
            _26 = _25;
        }
        _27 = _26;
    }
    return _27;
}

bool Int_positive_QMARK_(int a) {
    bool _7 = Int__GT_(a, 0);
    return _7;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = _DIV__EQ___int(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = _DIV__EQ___int(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = _DIV__EQ___int(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_random() {
    int _6 = Int_random_MINUS_between(0, CARP_INT_MAX);
    return _6;
}

int Int_random_MINUS_between(int lower, int upper) {
    int _24;
    /* let */ {
        int _10 = Int__MINUS_(upper, lower);
        int diff = _10;
        double _17 = Double_from_MINUS_int(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        int _21 = Double_to_MINUS_int(_20);
        int _23 = Int__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

int Int_sign(int n) {
    int _26;
    bool _8 = Int__GT_(n, 0);
    if (_8) {
        int _11 = 1;
        _26 = _11;
    } else {
        int _24;
        bool _17 = Int__LT_(n, 0);
        if (_17) {
            int _20 = -1;
            _24 = _20;
        } else {
            int _23 = 0;
            _24 = _23;
        }
        int _25 = _24;
        _26 = _25;
    }
    return _26;
}

int Int_to_MINUS_int(int a) {
    return a;
}

int Int_zero() {
    return 0;
}

Int16 Int16_blit(Int16 x) {
    Int16 _7 = x; // From the 'the' function.
    return _7;
}

int Int16_hash(Int16* k) {
    Int16 _8 = Int16_copy(k);
    Long _9 = Int16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int16_prn(Int16 a) {
    String _6 = Int16_str(a);
    return _6;
}

Int16 Int16_zero() {
    Int16 _5 = Int16_from_MINUS_long(0l);
    return _5;
}

bool Int16Extra__EQ_(Int16* a, Int16* b) {
    Int16 _8 = Int16_copy(a);
    Int16 _11 = Int16_copy(b);
    bool _12 = Int16__EQ_(_8, _11);
    return _12;
}

String Int16Extra_prn(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_prn(_7);
    return _8;
}

String Int16Extra_str(Int16* a) {
    Int16 _7 = Int16_copy(a);
    String _8 = Int16_str(_7);
    return _8;
}

Int32 Int32_blit(Int32 x) {
    Int32 _7 = x; // From the 'the' function.
    return _7;
}

int Int32_hash(Int32* k) {
    Int32 _8 = Int32_copy(k);
    Long _9 = Int32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int32_prn(Int32 a) {
    String _6 = Int32_str(a);
    return _6;
}

Int32 Int32_zero() {
    Int32 _5 = Int32_from_MINUS_long(0l);
    return _5;
}

bool Int32Extra__EQ_(Int32* a, Int32* b) {
    Int32 _8 = Int32_copy(a);
    Int32 _11 = Int32_copy(b);
    bool _12 = Int32__EQ_(_8, _11);
    return _12;
}

String Int32Extra_prn(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_prn(_7);
    return _8;
}

String Int32Extra_str(Int32* a) {
    Int32 _7 = Int32_copy(a);
    String _8 = Int32_str(_7);
    return _8;
}

Int64 Int64_blit(Int64 x) {
    Int64 _7 = x; // From the 'the' function.
    return _7;
}

int Int64_hash(Int64* k) {
    Int64 _8 = Int64_copy(k);
    Long _9 = Int64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int64_prn(Int64 a) {
    String _6 = Int64_str(a);
    return _6;
}

Int64 Int64_zero() {
    Int64 _5 = Int64_from_MINUS_long(0l);
    return _5;
}

bool Int64Extra__EQ_(Int64* a, Int64* b) {
    Int64 _8 = Int64_copy(a);
    Int64 _11 = Int64_copy(b);
    bool _12 = Int64__EQ_(_8, _11);
    return _12;
}

String Int64Extra_prn(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_prn(_7);
    return _8;
}

String Int64Extra_str(Int64* a) {
    Int64 _7 = Int64_copy(a);
    String _8 = Int64_str(_7);
    return _8;
}

Int8 Int8_blit(Int8 x) {
    Int8 _7 = x; // From the 'the' function.
    return _7;
}

int Int8_hash(Int8* k) {
    Int8 _8 = Int8_copy(k);
    Long _9 = Int8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Int8_prn(Int8 a) {
    String _6 = Int8_str(a);
    return _6;
}

Int8 Int8_zero() {
    Int8 _5 = Int8_from_MINUS_long(0l);
    return _5;
}

bool Int8Extra__EQ_(Int8* a, Int8* b) {
    Int8 _8 = Int8_copy(a);
    Int8 _11 = Int8_copy(b);
    bool _12 = Int8__EQ_(_8, _11);
    return _12;
}

String Int8Extra_prn(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_prn(_7);
    return _8;
}

String Int8Extra_str(Int8* a) {
    Int8 _7 = Int8_copy(a);
    String _8 = Int8_str(_7);
    return _8;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

String IntRef_format(String* s, int* x) {
    int _9 = Int_copy(x);
    String _10 = Int_format(s, _9);
    return _10;
}

String IntRef_prn(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

String IntRef_str(int* x) {
    int _7 = Int_copy(x);
    String _8 = Int_str(_7);
    return _8;
}

Long Long_add_MINUS_ref(Long* x, Long* y) {
    Long _8 = Long_copy(x);
    Long _11 = Long_copy(y);
    Long _12 = Long__PLUS_(_8, _11);
    return _12;
}

Long Long_blit(Long x) {
    Long _7 = x; // From the 'the' function.
    return _7;
}

bool Long_even_QMARK_(Long a) {
    Long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

Maybe__Long Long_from_MINUS_string(String* s) {
    Maybe__Long _25;
    /* let */ {
        Long res = 0l;
        Maybe__Long _24;
        Long* _13 = &res; // ref
        bool _14 = Long_from_MINUS_string_MINUS_internal(s, _13);
        if (_14) {
            Maybe__Long _18 = Maybe_Just__Long(res);
            Maybe__Long _19 = _18;
            _24 = _19;
        } else {
            Maybe__Long _22 = Maybe_Nothing__Long();
            Maybe__Long _23 = _22;
            _24 = _23;
        }
        _25 = _24;
    }
    return _25;
}

int Long_hash(Long* k) {
    Long _9 = Long_copy(k);
    Long _10 = _9; // From the 'the' function.
    int _11 = Long_to_MINUS_int(_10);
    return _11;
}

bool Long_negative_QMARK_(Long a) {
    bool _7 = Long__LT_(a, 0l);
    return _7;
}

bool Long_odd_QMARK_(Long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

bool Long_positive_QMARK_(Long a) {
    bool _7 = Long__GT_(a, 0l);
    return _7;
}

String Long_prn(Long x) {
    String _6 = Long_str(x);
    return _6;
}

Long Long_random() {
    Long _7 = Long_from_MINUS_int(CARP_INT_MAX);
    Long _8 = Long_random_MINUS_between(0l, _7);
    return _8;
}

Long Long_random_MINUS_between(Long lower, Long upper) {
    Long _24;
    /* let */ {
        Long _10 = Long__MINUS_(upper, lower);
        Long diff = _10;
        double _17 = Double_from_MINUS_long(diff);
        double _19 = Random_random();
        double _20 = Double__MUL_(_17, _19);
        Long _21 = Double_to_MINUS_long(_20);
        Long _23 = Long__PLUS_(_21, lower);
        _24 = _23;
    }
    return _24;
}

Long Long_sign(Long n) {
    Long _26;
    bool _8 = Long__GT_(n, 0l);
    if (_8) {
        Long _11 = 1l;
        _26 = _11;
    } else {
        Long _24;
        bool _17 = Long__LT_(n, 0l);
        if (_17) {
            Long _20 = -1l;
            _24 = _20;
        } else {
            Long _23 = 0l;
            _24 = _23;
        }
        Long _25 = _24;
        _26 = _25;
    }
    return _26;
}

Long Long_zero() {
    return 0l;
}

bool LongRef__LT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(Long* a, Long* b) {
    Long _8 = Long_copy(a);
    Long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

String LongRef_format(String* s, Long* x) {
    Long _9 = Long_copy(x);
    String _10 = Long_format(s, _9);
    return _10;
}

String LongRef_prn(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

String LongRef_str(Long* x) {
    Long _7 = Long_copy(x);
    String _8 = Long_str(_7);
    return _8;
}

Array__Bucket__ColorId_String* Map_buckets__ColorId_String(Map__ColorId_String* p) { return (&(p->buckets)); }

Map__ColorId_String Map_create__ColorId_String() {
    Lambda _9 = { .callback = (void*)Bucket_empty__ColorId_String, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Bucket.empty__ColorId_String (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Bucket__ColorId_String _11 = Array_repeat__Bucket__ColorId_String(Map_dflt_MINUS_len, _10);
    Map__ColorId_String _12 = Map_init__ColorId_String(0, Map_dflt_MINUS_len, _11);
    return _12;
}

void Map_delete__ColorId_String(Map__ColorId_String p) {
    /* Ignore non-managed member 'len' : Int */
    /* Ignore non-managed member 'n_MINUS_buckets' : Int */
    Array_delete__Bucket__ColorId_String(p.buckets);
}

Map__ColorId_String Map_from_MINUS_array__ColorId_String(Array__Pair__ColorId_String a) {
    Map__ColorId_String _61;
    /* let */ {
        Map__ColorId_String _7 = Map_create__ColorId_String();
        Map__ColorId_String m = _7;
        /* let */ {
            int i = 0;
            Array__Pair__ColorId_String* _20 = &a; // ref
            int _21 = Array_length__Pair__ColorId_String(_20);
            bool _1000008 = Int__LT_(i, _21);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    Array__Pair__ColorId_String* _29 = &a; // ref
                    Pair__ColorId_String* _31 = Array_unsafe_MINUS_nth__Pair__ColorId_String(_29, i);
                    Pair__ColorId_String* e = _31;
                    ColorId* _35 = Pair_a__ColorId_String(e);
                    ColorId* k = _35;
                    String* _39 = Pair_b__ColorId_String(e);
                    String* v = _39;
                    Map__ColorId_String* _44 = &m; // ref
                    Map_put_BANG___ColorId_String(_44, k, v);
                }
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                Array__Pair__ColorId_String* _20 = &a; // ref
                int _21 = Array_length__Pair__ColorId_String(_20);
                bool _1000008 = Int__LT_(i, _21);
                _1000006 = _1000008;
            }
        }
        Map__ColorId_String _60 = m;
        _61 = _60;
    }
    Array_delete__Pair__ColorId_String(a);
    return _61;
}

String Map_get_MINUS_with_MINUS_default__ColorId_String(Map__ColorId_String* m, ColorId* k, String* default_MINUS_value) {
    String _29;
    /* let */ {
        int _11 = Color_hash(k);
        int* _15 = Map_n_MINUS_buckets__ColorId_String(m);
        int _16 = Int_copy(_15);
        int _17 = Int_positive_MINUS_mod(_11, _16);
        int idx = _17;
        Array__Bucket__ColorId_String* _23 = Map_buckets__ColorId_String(m);
        Bucket__ColorId_String* _25 = Array_unsafe_MINUS_nth__Bucket__ColorId_String(_23, idx);
        String _28 = Bucket_get__ColorId_String(_25, k, default_MINUS_value);
        _29 = _28;
    }
    return _29;
}

String Map_get__ColorId_String(Map__ColorId_String* m, ColorId* k) {
    String _10 = String_zero();
    String* _11 = &_10; // ref
    String _12 = Map_get_MINUS_with_MINUS_default__ColorId_String(m, k, _11);
    String_delete(_10);
    return _12;
}

Map__ColorId_String Map_init__ColorId_String(int len, int n_MINUS_buckets, Array__Bucket__ColorId_String buckets) {
    Map__ColorId_String instance;
    instance.len = len;
    instance.n_MINUS_buckets = n_MINUS_buckets;
    instance.buckets = buckets;
    return instance;
}

int* Map_len__ColorId_String(Map__ColorId_String* p) { return (&(p->len)); }

int* Map_n_MINUS_buckets__ColorId_String(Map__ColorId_String* p) { return (&(p->n_MINUS_buckets)); }

void Map_put_BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v) {
    Map_put_MINUS__BANG___ColorId_String(m, k, v);
}

void Map_put_MINUS__BANG___ColorId_String(Map__ColorId_String* m, ColorId* k, String* v) {
    /* let */ {
        int _11 = Color_hash(k);
        int* _15 = Map_n_MINUS_buckets__ColorId_String(m);
        int _16 = Int_copy(_15);
        int _17 = Int_positive_MINUS_mod(_11, _16);
        int idx = _17;
        Array__Bucket__ColorId_String* _21 = Map_buckets__ColorId_String(m);
        Array__Bucket__ColorId_String* b = _21;
        Bucket__ColorId_String* _26 = Array_unsafe_MINUS_nth__Bucket__ColorId_String(b, idx);
        Bucket__ColorId_String* n = _26;
        int* _35 = Map_len__ColorId_String(m);
        int _36 = Int_copy(_35);
        int _37 = Int_inc(_36);
        Map_set_MINUS_len_BANG___ColorId_String(m, _37);
        Bucket_put_BANG___ColorId_String(n, k, v);
    }
}

void Map_set_MINUS_len_BANG___ColorId_String(Map__ColorId_String* pRef, int newValue) {
    /* Ignore non-managed member 'len' : Int */
    pRef->len = newValue;
}


bool Maybe__EQ___int(Maybe__int* a, Maybe__int* b) {
    bool _28;
    if(a->_tag == Maybe__int_Nothing_tag) {
        Maybe__int* _6_temp = a;
        // Case expr:
        bool _11 = Maybe_nothing_QMARK___int(b);
        _28 = _11;
    }
    else if(a->_tag == Maybe__int_Just_tag) {
        Maybe__int* _6_temp = a;
        int* x = &_6_temp->u.Just.member0;
        // Case expr:
        bool _27;
        if(b->_tag == Maybe__int_Nothing_tag) {
            Maybe__int* _16_temp = b;
            // Case expr:
            _27 = false;
        }
        else if(b->_tag == Maybe__int_Just_tag) {
            Maybe__int* _16_temp = b;
            int* y = &_16_temp->u.Just.member0;
            // Case expr:
            bool _26 = IntRef__EQ_(x, y);
            _27 = _26;
        }
        else UNHANDLED("Maybe.carp", 54);
        _28 = _27;
    }
    else UNHANDLED("Maybe.carp", 51);
    return _28;
}

Maybe__Long Maybe_Just__Long(Long member0) {
  Maybe__Long instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Long_Just_tag;
    return instance;
}

Maybe__String Maybe_Just__String(String member0) {
  Maybe__String instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__String_Just_tag;
    return instance;
}

Maybe__Timezone Maybe_Just__Timezone(Timezone member0) {
  Maybe__Timezone instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Timezone_Just_tag;
    return instance;
}

Maybe__Uint16 Maybe_Just__Uint16(Uint16 member0) {
  Maybe__Uint16 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint16_Just_tag;
    return instance;
}

Maybe__Uint32 Maybe_Just__Uint32(Uint32 member0) {
  Maybe__Uint32 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint32_Just_tag;
    return instance;
}

Maybe__Uint64 Maybe_Just__Uint64(Uint64 member0) {
  Maybe__Uint64 instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__Uint64_Just_tag;
    return instance;
}

Maybe__double Maybe_Just__double(double member0) {
  Maybe__double instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__double_Just_tag;
    return instance;
}

Maybe__float Maybe_Just__float(float member0) {
  Maybe__float instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__float_Just_tag;
    return instance;
}

Maybe__int Maybe_Just__int(int member0) {
  Maybe__int instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__int_Just_tag;
    return instance;
}

Maybe__uint8_t Maybe_Just__uint8_t(uint8_t member0) {
  Maybe__uint8_t instance;
    instance.u.Just.member0 = member0;
    instance._tag = Maybe__uint8_t_Just_tag;
    return instance;
}

Maybe__Long Maybe_Nothing__Long() {
  Maybe__Long instance;

    instance._tag = Maybe__Long_Nothing_tag;
    return instance;
}

Maybe__String Maybe_Nothing__String() {
  Maybe__String instance;

    instance._tag = Maybe__String_Nothing_tag;
    return instance;
}

Maybe__Timezone Maybe_Nothing__Timezone() {
  Maybe__Timezone instance;

    instance._tag = Maybe__Timezone_Nothing_tag;
    return instance;
}

Maybe__Uint16 Maybe_Nothing__Uint16() {
  Maybe__Uint16 instance;

    instance._tag = Maybe__Uint16_Nothing_tag;
    return instance;
}

Maybe__Uint32 Maybe_Nothing__Uint32() {
  Maybe__Uint32 instance;

    instance._tag = Maybe__Uint32_Nothing_tag;
    return instance;
}

Maybe__Uint64 Maybe_Nothing__Uint64() {
  Maybe__Uint64 instance;

    instance._tag = Maybe__Uint64_Nothing_tag;
    return instance;
}

Maybe__double Maybe_Nothing__double() {
  Maybe__double instance;

    instance._tag = Maybe__double_Nothing_tag;
    return instance;
}

Maybe__float Maybe_Nothing__float() {
  Maybe__float instance;

    instance._tag = Maybe__float_Nothing_tag;
    return instance;
}

Maybe__int Maybe_Nothing__int() {
  Maybe__int instance;

    instance._tag = Maybe__int_Nothing_tag;
    return instance;
}

Maybe__uint8_t Maybe_Nothing__uint8_t() {
  Maybe__uint8_t instance;

    instance._tag = Maybe__uint8_t_Nothing_tag;
    return instance;
}

Maybe__Timezone Maybe_copy__Timezone(Maybe__Timezone* pRef) {
    Maybe__Timezone copy = *pRef;
    if(pRef->_tag == Maybe__Timezone_Just_tag) {
    copy.u.Just.member0 = Timezone_copy(&(pRef->u.Just.member0));
    }

    else if(pRef->_tag == Maybe__Timezone_Nothing_tag) {

    }

    return copy;
}

Maybe__int Maybe_copy__int(Maybe__int* pRef) {
    Maybe__int copy = *pRef;
    if(pRef->_tag == Maybe__int_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Int */
    }

    else if(pRef->_tag == Maybe__int_Nothing_tag) {

    }

    return copy;
}

void Maybe_delete__Long(Maybe__Long p) {
  if(p._tag == Maybe__Long_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Long */
  }
  else if(p._tag == Maybe__Long_Nothing_tag) {

  }

}

void Maybe_delete__String(Maybe__String p) {
  if(p._tag == Maybe__String_Just_tag) {
    String_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__String_Nothing_tag) {

  }

}

void Maybe_delete__Timezone(Maybe__Timezone p) {
  if(p._tag == Maybe__Timezone_Just_tag) {
    Timezone_delete(p.u.Just.member0);
  }
  else if(p._tag == Maybe__Timezone_Nothing_tag) {

  }

}

void Maybe_delete__Uint16(Maybe__Uint16 p) {
  if(p._tag == Maybe__Uint16_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint16 */
  }
  else if(p._tag == Maybe__Uint16_Nothing_tag) {

  }

}

void Maybe_delete__Uint32(Maybe__Uint32 p) {
  if(p._tag == Maybe__Uint32_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint32 */
  }
  else if(p._tag == Maybe__Uint32_Nothing_tag) {

  }

}

void Maybe_delete__Uint64(Maybe__Uint64 p) {
  if(p._tag == Maybe__Uint64_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Uint64 */
  }
  else if(p._tag == Maybe__Uint64_Nothing_tag) {

  }

}

void Maybe_delete__double(Maybe__double p) {
  if(p._tag == Maybe__double_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Double */
  }
  else if(p._tag == Maybe__double_Nothing_tag) {

  }

}

void Maybe_delete__float(Maybe__float p) {
  if(p._tag == Maybe__float_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Float */
  }
  else if(p._tag == Maybe__float_Nothing_tag) {

  }

}

void Maybe_delete__int(Maybe__int p) {
  if(p._tag == Maybe__int_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Int */
  }
  else if(p._tag == Maybe__int_Nothing_tag) {

  }

}

void Maybe_delete__uint8_t(Maybe__uint8_t p) {
  if(p._tag == Maybe__uint8_t_Just_tag) {
    /* Ignore non-managed member 'u.Just.member0' : Byte */
  }
  else if(p._tag == Maybe__uint8_t_Nothing_tag) {

  }

}

String Maybe_from__String(Maybe__String a, String dflt) {
    String _14;
    if(a._tag == Maybe__String_Nothing_tag) {
        Maybe__String _6_temp = a;
        // Case expr:
        _14 = dflt;
    }
    else if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _6_temp = a;
        String x = _6_temp.u.Just.member0;
        // Case expr:
        _14 = x;
        String_delete(dflt);
    }
    else UNHANDLED("Maybe.carp", 22);
    return _14;
}

Timezone Maybe_from__Timezone(Maybe__Timezone a, Timezone dflt) {
    Timezone _14;
    if(a._tag == Maybe__Timezone_Nothing_tag) {
        Maybe__Timezone _6_temp = a;
        // Case expr:
        _14 = dflt;
    }
    else if(a._tag == Maybe__Timezone_Just_tag) {
        Maybe__Timezone _6_temp = a;
        Timezone x = _6_temp.u.Just.member0;
        // Case expr:
        _14 = x;
        Timezone_delete(dflt);
    }
    else UNHANDLED("Maybe.carp", 22);
    return _14;
}

int Maybe_from__int(Maybe__int a, int dflt) {
    int _14;
    if(a._tag == Maybe__int_Nothing_tag) {
        Maybe__int _6_temp = a;
        // Case expr:
        _14 = dflt;
    }
    else if(a._tag == Maybe__int_Just_tag) {
        Maybe__int _6_temp = a;
        int x = _6_temp.u.Just.member0;
        // Case expr:
        _14 = x;
    }
    else UNHANDLED("Maybe.carp", 22);
    return _14;
}

bool Maybe_nothing_QMARK___Timezone(Maybe__Timezone* a) {
    bool _13;
    if(a->_tag == Maybe__Timezone_Nothing_tag) {
        Maybe__Timezone* _5_temp = a;
        // Case expr:
        _13 = true;
    }
    else if(a->_tag == Maybe__Timezone_Just_tag) {
        Maybe__Timezone* _5_temp = a;
        Timezone* x = &_5_temp->u.Just.member0;
        // Case expr:
        _13 = false;
    }
    else UNHANDLED("Maybe.carp", 45);
    return _13;
}

bool Maybe_nothing_QMARK___int(Maybe__int* a) {
    bool _13;
    if(a->_tag == Maybe__int_Nothing_tag) {
        Maybe__int* _5_temp = a;
        // Case expr:
        _13 = true;
    }
    else if(a->_tag == Maybe__int_Just_tag) {
        Maybe__int* _5_temp = a;
        int* x = &_5_temp->u.Just.member0;
        // Case expr:
        _13 = false;
    }
    else UNHANDLED("Maybe.carp", 45);
    return _13;
}

String Maybe_prn__Timezone(Maybe__Timezone *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == Maybe__Timezone_Just_tag) {
    size += snprintf(NULL, 0, "(%s ", "Just");
  temp = Timezone_prn(&p->u.Just.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Maybe__Timezone_Nothing_tag) {
    size += snprintf(NULL, 0, "(%s ", "Nothing");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == Maybe__Timezone_Just_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Just");
  temp = Timezone_prn(&p->u.Just.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Maybe__Timezone_Nothing_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Nothing");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Maybe_prn__int(Maybe__int *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == Maybe__int_Just_tag) {
    size += snprintf(NULL, 0, "(%s ", "Just");
  temp = Int_prn(p->u.Just.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Maybe__int_Nothing_tag) {
    size += snprintf(NULL, 0, "(%s ", "Nothing");

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == Maybe__int_Just_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Just");
  temp = Int_prn(p->u.Just.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Maybe__int_Nothing_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Nothing");

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

String Maybe_unsafe_MINUS_from__String(Maybe__String a) {
    String _10;
    if(a._tag == Maybe__String_Just_tag) {
        Maybe__String _5_temp = a;
        String x = _5_temp.u.Just.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Maybe.carp", 17);
    return _10;
}

int Maybe_unsafe_MINUS_from__int(Maybe__int a) {
    int _10;
    if(a._tag == Maybe__int_Just_tag) {
        Maybe__int _5_temp = a;
        int x = _5_temp.u.Just.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Maybe.carp", 17);
    return _10;
}

Opaque Opaque_copy(Opaque* pRef) {
    Opaque copy = *pRef;

    return copy;
}

void Opaque_delete(Opaque p) {

}

int Opaque_get_MINUS_tag(Opaque *p) { return p->_tag; }
String Opaque_prn(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

String Opaque_str(Opaque *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;


  return buffer;
}

Array__Uint16* Pair_a__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->a)); }

Array__Uint32* Pair_a__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->a)); }

Array__Uint64* Pair_a__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->a)); }

ColorId* Pair_a__ColorId_String(Pair__ColorId_String* p) { return (&(p->a)); }

int* Pair_b__Array__Uint16_int(Pair__Array__Uint16_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint32_int(Pair__Array__Uint32_int* p) { return (&(p->b)); }

int* Pair_b__Array__Uint64_int(Pair__Array__Uint64_int* p) { return (&(p->b)); }

String* Pair_b__ColorId_String(Pair__ColorId_String* p) { return (&(p->b)); }

void Pair_delete__Array__Uint16_int(Pair__Array__Uint16_int p) {
    Array_delete__Uint16(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint32_int(Pair__Array__Uint32_int p) {
    Array_delete__Uint32(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__Array__Uint64_int(Pair__Array__Uint64_int p) {
    Array_delete__Uint64(p.a);
    /* Ignore non-managed member 'b' : Int */
}

void Pair_delete__ColorId_String(Pair__ColorId_String p) {
    Color_Id_delete(p.a);
    String_delete(p.b);
}

Pair__ColorId_String Pair_init_MINUS_from_MINUS_refs__ColorId_String(ColorId* a_MINUS_val, String* b_MINUS_val) {
    ColorId _1000004 = Color_Id_copy(a_MINUS_val);
    String _1000005 = String_copy(b_MINUS_val);
    Pair__ColorId_String _1000003 = Pair_init__ColorId_String(_1000004, _1000005);
    return _1000003;
}

Pair__Array__Uint16_int Pair_init__Array__Uint16_int(Array__Uint16 a, int b) {
    Pair__Array__Uint16_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint32_int Pair_init__Array__Uint32_int(Array__Uint32 a, int b) {
    Pair__Array__Uint32_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__Array__Uint64_int Pair_init__Array__Uint64_int(Array__Uint64 a, int b) {
    Pair__Array__Uint64_int instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__ColorId_String Pair_init__ColorId_String(ColorId a, String b) {
    Pair__ColorId_String instance;
    instance.a = a;
    instance.b = b;
    return instance;
}

Pair__ColorId_String Pair_set_MINUS_b__ColorId_String(Pair__ColorId_String p, String newValue) {
    String_delete(p.b);
    p.b = newValue;
    return p;
}


int* Pattern_MatchResult_end(PatternMatchResult* p) { return (&(p->end)); }

PatternMatchResult Pattern_MatchResult_init(int start, int end) {
    PatternMatchResult instance;
    instance.start = start;
    instance.end = end;
    return instance;
}

String Pattern_MatchResult_prn(PatternMatchResult *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Pattern.MatchResult");
  temp = Int_prn(p->start); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Pattern.MatchResult");
  temp = Int_prn(p->start);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->end);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

String Pattern_MatchResult_ref_MINUS_str(PatternMatchResult* ref_MINUS_matchres) {
    static String _9 = "(MatchResult start=%d end=";
    String *_9_ref = &_9;
    int* _12 = Pattern_MatchResult_start(ref_MINUS_matchres);
    String _1000007 = IntRef_format(_9_ref, _12);
    String* _1000005 = &_1000007; // ref
    static String _17 = "%d)";
    String *_17_ref = &_17;
    int* _20 = Pattern_MatchResult_end(ref_MINUS_matchres);
    String _1000010 = IntRef_format(_17_ref, _20);
    String* _1000008 = &_1000010; // ref
    String _1000004 = String_append(_1000005, _1000008);
    String* _1000002 = &_1000004; // ref
    String _25 = String_copy(_1000002);
    String_delete(_1000004);
    String_delete(_1000007);
    String_delete(_1000010);
    return _25;
}

PatternMatchResult Pattern_MatchResult_set_MINUS_end(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    p.end = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_end_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'end' : Int */
    pRef->end = newValue;
}


PatternMatchResult Pattern_MatchResult_set_MINUS_start(PatternMatchResult p, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    p.start = newValue;
    return p;
}


void Pattern_MatchResult_set_MINUS_start_BANG_(PatternMatchResult* pRef, int newValue) {
    /* Ignore non-managed member 'start' : Int */
    pRef->start = newValue;
}


int* Pattern_MatchResult_start(PatternMatchResult* p) { return (&(p->start)); }

String Pattern_MatchResult_str(PatternMatchResult matchres) {
    PatternMatchResult* _7 = &matchres; // ref
    String _8 = Pattern_MatchResult_ref_MINUS_str(_7);
    return _8;
}

PatternMatchResult Pattern_MatchResult_update_MINUS_end(PatternMatchResult p, Lambda *updater) {
    p.end = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.end) : ((Fn__int_int)(*updater).callback)(p.end);
    return p;
}


PatternMatchResult Pattern_MatchResult_update_MINUS_start(PatternMatchResult p, Lambda *updater) {
    p.start = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.start) : ((Fn__int_int)(*updater).callback)(p.start);
    return p;
}


int Pattern__Lambda_find_MINUS_all_15_env(PatternMatchResult* m) {
    int* _13 = Pattern_MatchResult_start(m);
    int _14 = Int_copy(_13);
    return _14;
}

String Pattern__Lambda_global_MINUS_match_MINUS_str_16_env(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* _env, PatternMatchResult* m) {
    Maybe__String _14 = Pattern_extract(m, _env->data);
    String _15 = Maybe_unsafe_MINUS_from__String(_14);
    return _15;
}

Maybe__String Pattern_extract(PatternMatchResult* match_MINUS_res, String* data) {
    Maybe__String _30;
    bool _8 = Pattern_non_MINUS_match_QMARK_(match_MINUS_res);
    if (_8) {
        Maybe__String _11 = Maybe_Nothing__String();
        Maybe__String _12 = _11;
        _30 = _12;
    } else {
        int* _20 = Pattern_MatchResult_start(match_MINUS_res);
        int _21 = Int_copy(_20);
        int* _25 = Pattern_MatchResult_end(match_MINUS_res);
        int _26 = Int_copy(_25);
        String _27 = String_slice(data, _21, _26);
        Maybe__String _28 = Maybe_Just__String(_27);
        Maybe__String _29 = _28;
        _30 = _29;
    }
    return _30;
}

int Pattern_find(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    int* _13 = Pattern_MatchResult_start(_12);
    int _14 = Int_copy(_13);
    return _14;
}

Array__int Pattern_find_MINUS_all(Pattern* pattern, String* data) {
    // This lambda captures 0 variables: 
    Lambda _15 = {
      .callback = (void*)Pattern__Lambda_find_MINUS_all_15_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _16 = &_15; // ref
    Array__PatternMatchResult _21 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _22 = &_21; // ref
    Array__int _23 = Array_copy_MINUS_map__PatternMatchResult_int(_16, _22);
    Array_delete__PatternMatchResult(_21);
    Function_delete__PatternMatchResult_MUL__int(_15);
    return _23;
}

Array__PatternMatchResult Pattern_find_MINUS_all_MINUS_matches(Pattern* pattern, String* data) {
    Array__PatternMatchResult _77;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(PatternMatchResult) * 0) };
        Array__PatternMatchResult result = _7;
        int _11 = String_length(data);
        int stop = _11;
        PatternMatchResult _17 = Pattern_match_MINUS_from(pattern, data, 0);
        PatternMatchResult found = _17;
        PatternMatchResult* _23 = &found; // ref
        int* _24 = Pattern_MatchResult_end(_23);
        int _25 = Int_copy(_24);
        int start = _25;
        bool _46;
        bool _33 = _LT__EQ___int(start, stop);
        if (_33) {
            PatternMatchResult* _39 = &found; // ref
            bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
            bool _41 = not(_40);
            bool _42 = _41;
            _46 = _42;
        } else {
            bool _45 = false;
            _46 = _45;
        }
        bool _74 = _46;
        while (_74) {
            Array__PatternMatchResult _53 = Array_push_MINUS_back__PatternMatchResult(result, found);
            result = _53;  // (Array Pattern.MatchResult) = (Array Pattern.MatchResult)
            PatternMatchResult _61 = Pattern_match_MINUS_from(pattern, data, start);
            found = _61;  // Pattern.MatchResult = Pattern.MatchResult
            PatternMatchResult* _69 = &found; // ref
            int* _70 = Pattern_MatchResult_end(_69);
            int _71 = Int_copy(_70);
            start = _71;  // Int = Int
            bool _46;
            bool _33 = _LT__EQ___int(start, stop);
            if (_33) {
                PatternMatchResult* _39 = &found; // ref
                bool _40 = Pattern_non_MINUS_match_QMARK_(_39);
                bool _41 = not(_40);
                bool _42 = _41;
                _46 = _42;
            } else {
                bool _45 = false;
                _46 = _45;
            }
            _74 = _46;
        }
        Array__PatternMatchResult _76 = result;
        _77 = _76;
    }
    return _77;
}

Pattern Pattern_from_MINUS_chars(Array__Char* chars) {
    static String _12 = "[";
    String *_12_ref = &_12;
    String _13 = String_copy(_12_ref);
    String _1000006 = StringCopy_str(_13);
    String* _1000005 = &_1000006; // ref
    String _22 = String_from_MINUS_chars(chars);
    String _1000010 = StringCopy_str(_22);
    String* _1000009 = &_1000010; // ref
    static String _28 = "]";
    String *_28_ref = &_28;
    String _29 = String_copy(_28_ref);
    String _1000012 = StringCopy_str(_29);
    String* _1000011 = &_1000012; // ref
    String _1000008 = String_append(_1000009, _1000011);
    String* _1000007 = &_1000008; // ref
    String _1000004 = String_append(_1000005, _1000007);
    String* _1000003 = &_1000004; // ref
    String _1000002 = String_copy(_1000003);
    String* _37 = &_1000002; // ref
    Pattern _38 = Pattern_init(_37);
    String_delete(_1000002);
    String_delete(_1000004);
    String_delete(_1000006);
    String_delete(_1000008);
    String_delete(_1000010);
    String_delete(_1000012);
    return _38;
}

Array__String Pattern_global_MINUS_match_MINUS_str(Pattern* pattern, String* data) {
    // This lambda captures 1 variables: data
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty *_16_env = CARP_MALLOC(sizeof(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty));
    _16_env->data = data;
    Lambda _16 = {
      .callback = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env,
      .env = _16_env,
      .delete = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete,
      .copy = (void*)Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy
    };
    Lambda* _17 = &_16; // ref
    Array__PatternMatchResult _22 = Pattern_find_MINUS_all_MINUS_matches(pattern, data);
    Array__PatternMatchResult* _23 = &_22; // ref
    Array__String _24 = Array_copy_MINUS_map__PatternMatchResult_String(_17, _23);
    Array_delete__PatternMatchResult(_22);
    Function_delete__PatternMatchResult_MUL__String(_16);
    return _24;
}

PatternMatchResult Pattern_match(Pattern* pattern, String* data) {
    PatternMatchResult _9 = Pattern_match_MINUS_from(pattern, data, 0);
    return _9;
}

String Pattern_match_MINUS_str(Pattern* pattern, String* data) {
    PatternMatchResult _11 = Pattern_match(pattern, data);
    PatternMatchResult* _12 = &_11; // ref
    Maybe__String _14 = Pattern_extract(_12, data);
    static String _16 = "";
    String *_16_ref = &_16;
    String _17 = String_copy(_16_ref);
    String _18 = Maybe_from__String(_14, _17);
    return _18;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = _DIV__EQ___int(_9, -1);
    return _11;
}

bool Pattern_non_MINUS_match_QMARK_(PatternMatchResult* match_MINUS_res) {
    bool _26;
    int* _9 = Pattern_MatchResult_start(match_MINUS_res);
    int _10 = Int_copy(_9);
    bool _12 = Int__LT_(_10, 0);
    if (_12) {
        bool _15 = true;
        _26 = _15;
    } else {
        int* _21 = Pattern_MatchResult_end(match_MINUS_res);
        int _22 = Int_copy(_21);
        bool _24 = Int__LT_(_22, 0);
        bool _25 = _24;
        _26 = _25;
    }
    return _26;
}

Array__String Pattern_split(Pattern* p, String* s) {
    Array__String _180;
    /* let */ {
        Array__int _10 = Pattern_find_MINUS_all(p, s);
        Array__int idx = _10;
        Array__String _15 = Pattern_global_MINUS_match_MINUS_str(p, s);
        Array__String strs = _15;
        Array__int* _20 = &idx; // ref
        int _21 = Array_length__int(_20);
        int lidx = _21;
        int _26 = Int_inc(lidx);
        Array__String _27 = Array_allocate__String(_26);
        Array__String result = _27;
        Array__String* _33 = &result; // ref
        int _58;
        bool _42 = Int__GT_(lidx, 0);
        if (_42) {
            Array__int* _48 = &idx; // ref
            int* _50 = Array_unsafe_MINUS_nth__int(_48, 0);
            int _51 = Int_copy(_50);
            int _52 = _51;
            _58 = _52;
        } else {
            int _56 = String_length(s);
            int _57 = _56;
            _58 = _57;
        }
        String _59 = String_slice(s, 0, _58);
        Array_aset_MINUS_uninitialized_BANG___String(_33, 0, _59);
        /* let */ {
            int i = 0;
            Array__int* _72 = &idx; // ref
            int _73 = Array_length__int(_72);
            int _74 = Int_dec(_73);
            bool _1000011 = Int__LT_(i, _74);
            bool _1000009 = _1000011;
            while (_1000009) {
                /* let */ {
                    Array__String* _83 = &strs; // ref
                    String* _85 = Array_unsafe_MINUS_nth__String(_83, i);
                    int _86 = String_length(_85);
                    int plen = _86;
                    Array__String* _91 = &result; // ref
                    int _94 = Int_inc(i);
                    Array__int* _102 = &idx; // ref
                    int* _104 = Array_unsafe_MINUS_nth__int(_102, i);
                    int _105 = Int_copy(_104);
                    int _107 = Int__PLUS_(_105, plen);
                    Array__int* _112 = &idx; // ref
                    int _115 = Int_inc(i);
                    int* _116 = Array_unsafe_MINUS_nth__int(_112, _115);
                    int _117 = Int_copy(_116);
                    String _118 = String_slice(s, _107, _117);
                    Array_aset_MINUS_uninitialized_BANG___String(_91, _94, _118);
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                Array__int* _72 = &idx; // ref
                int _73 = Array_length__int(_72);
                int _74 = Int_dec(_73);
                bool _1000011 = Int__LT_(i, _74);
                _1000009 = _1000011;
            }
        }
        bool _135 = Int__GT_(lidx, 0);
        if (_135) {
            /* let */ {
                Array__String* _143 = &strs; // ref
                int _146 = Int_dec(lidx);
                String* _147 = Array_unsafe_MINUS_nth__String(_143, _146);
                int _148 = String_length(_147);
                int plen = _148;
                Array__String* _153 = &result; // ref
                Array__int* _162 = &idx; // ref
                int _165 = Int_dec(lidx);
                int* _166 = Array_unsafe_MINUS_nth__int(_162, _165);
                int _167 = Int_copy(_166);
                int _169 = Int__PLUS_(_167, plen);
                String _170 = String_suffix(s, _169);
                Array_aset_MINUS_uninitialized_BANG___String(_153, lidx, _170);
            }
        } else {
            /* () */
        }
        Array__String _179 = result;
        _180 = _179;
        Array_delete__String(strs);
        Array_delete__int(idx);
    }
    return _180;
}

Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_copy(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* pRef) {
    Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* copy = CARP_MALLOC(sizeof(*pRef));
    *copy = *pRef;
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
    return copy;
}

void Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty_delete(Pattern__Lambda_global_MINUS_match_MINUS_str_16_env_ty* p) {
    /* Ignore non-managed member 'data' : (Ref String <r19>) */
}

int * Pointer_address__int(int * a) { return a; }
 bool Pointer_eq__CChar(CChar *p1, CChar *p2) { return p1 == p2; }
 bool Pointer_eq__FILE(FILE *p1, FILE *p2) { return p1 == p2; }
bool Random_gen_MINUS_seed_MINUS_at_MINUS_startup_QMARK_() {
    return Random__;
}

double Random_random() {
    double _11 = Double__MUL_(Random_s, Random_a);
    double _13 = Double__PLUS_(_11, Random_c);
    double _15 = Double_mod(_13, Random_m);
    Random_s = _15;  // Double = Double
    double _20 = Double__DIV_(Random_s, Random_m);
    double _21 = _20;
    return _21;
}

void Random_seed() {
    Uint64 _7 = System_nanotime();
    double _8 = Double_from_MINUS_uint64(_7);
    Random_s = _8;  // Double = Double
}

void Random_seed_MINUS_from(double new_MINUS_seed) {
    Random_s = new_MINUS_seed;  // Double = Double
}

bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

bool Result__EQ___Datetime_String(Result__Datetime_String* a, Result__Datetime_String* b) {
    bool _41;
    if(a->_tag == Result__Datetime_String_Success_tag) {
        Result__Datetime_String* _6_temp = a;
        Datetime* x = &_6_temp->u.Success.member0;
        // Case expr:
        bool _23;
        if(b->_tag == Result__Datetime_String_Error_tag) {
            Result__Datetime_String* _11_temp = b;
            String* wildcard_13 = &_11_temp->u.Error.member0;
            // Case expr:
            _23 = false;
        }
        else if(b->_tag == Result__Datetime_String_Success_tag) {
            Result__Datetime_String* _11_temp = b;
            Datetime* y = &_11_temp->u.Success.member0;
            // Case expr:
            bool _22 = Datetime__EQ_(x, y);
            _23 = _22;
        }
        else UNHANDLED("Result.carp", 147);
        _41 = _23;
    }
    else if(a->_tag == Result__Datetime_String_Error_tag) {
        Result__Datetime_String* _6_temp = a;
        String* x = &_6_temp->u.Error.member0;
        // Case expr:
        bool _40;
        if(b->_tag == Result__Datetime_String_Success_tag) {
            Result__Datetime_String* _28_temp = b;
            Datetime* wildcard_30 = &_28_temp->u.Success.member0;
            // Case expr:
            _40 = false;
        }
        else if(b->_tag == Result__Datetime_String_Error_tag) {
            Result__Datetime_String* _28_temp = b;
            String* y = &_28_temp->u.Error.member0;
            // Case expr:
            bool _39 = String__EQ_(x, y);
            _40 = _39;
        }
        else UNHANDLED("Result.carp", 151);
        _41 = _40;
    }
    else UNHANDLED("Result.carp", 145);
    return _41;
}

Result__Uint16_Array__uint8_t Result_Error__Array__uint8_t_Uint16(Array__uint8_t member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Error__Array__uint8_t_Uint32(Array__uint8_t member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Error_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Error__Array__uint8_t_Uint64(Array__uint8_t member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Error_tag;
    return instance;
}

Result__Array__int_String Result_Error__String_Array__int(String member0) {
  Result__Array__int_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__int_String_Error_tag;
    return instance;
}

Result__Char_String Result_Error__String_Char(String member0) {
  Result__Char_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Char_String_Error_tag;
    return instance;
}

Result__Datetime_String Result_Error__String_Datetime(String member0) {
  Result__Datetime_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Datetime_String_Error_tag;
    return instance;
}

Result__FILE_MUL__String Result_Error__String_FILE_MUL_(String member0) {
  Result__FILE_MUL__String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Error_tag;
    return instance;
}

Result__String_String Result_Error__String_String(String member0) {
  Result__String_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__String_String_Error_tag;
    return instance;
}

Result__bool_String Result_Error__String_bool(String member0) {
  Result__bool_String instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__bool_String_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Error__int_Array__Uint16(int member0) {
  Result__Array__Uint16_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Error_tag;
    return instance;
}

Result__Array__Uint32_int Result_Error__int_Array__Uint32(int member0) {
  Result__Array__Uint32_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Error_tag;
    return instance;
}

Result__Array__Uint64_int Result_Error__int_Array__Uint64(int member0) {
  Result__Array__Uint64_int instance;
    instance.u.Error.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Error_tag;
    return instance;
}

Result__Array__Uint16_int Result_Success__Array__Uint16_int(Array__Uint16 member0) {
  Result__Array__Uint16_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint16_int_Success_tag;
    return instance;
}

Result__Array__Uint32_int Result_Success__Array__Uint32_int(Array__Uint32 member0) {
  Result__Array__Uint32_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint32_int_Success_tag;
    return instance;
}

Result__Array__Uint64_int Result_Success__Array__Uint64_int(Array__Uint64 member0) {
  Result__Array__Uint64_int instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__Uint64_int_Success_tag;
    return instance;
}

Result__Array__int_String Result_Success__Array__int_String(Array__int member0) {
  Result__Array__int_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Array__int_String_Success_tag;
    return instance;
}

Result__Char_String Result_Success__Char_String(Char member0) {
  Result__Char_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Char_String_Success_tag;
    return instance;
}

Result__Datetime_String Result_Success__Datetime_String(Datetime member0) {
  Result__Datetime_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Datetime_String_Success_tag;
    return instance;
}

Result__FILE_MUL__String Result_Success__FILE_MUL__String(FILE* member0) {
  Result__FILE_MUL__String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__FILE_MUL__String_Success_tag;
    return instance;
}

Result__String_String Result_Success__String_String(String member0) {
  Result__String_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__String_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_Success__Uint16_Array__uint8_t(Uint16 member0) {
  Result__Uint16_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint16_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint32_Array__uint8_t Result_Success__Uint32_Array__uint8_t(Uint32 member0) {
  Result__Uint32_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint32_Array__uint8_t_Success_tag;
    return instance;
}

Result__Uint64_Array__uint8_t Result_Success__Uint64_Array__uint8_t(Uint64 member0) {
  Result__Uint64_Array__uint8_t instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__Uint64_Array__uint8_t_Success_tag;
    return instance;
}

Result__bool_String Result_Success__bool_String(bool member0) {
  Result__bool_String instance;
    instance.u.Success.member0 = member0;
    instance._tag = Result__bool_String_Success_tag;
    return instance;
}

Result__Uint16_Array__uint8_t Result_copy__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* pRef) {
    Result__Uint16_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
    }

    else if(pRef->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint32_Array__uint8_t Result_copy__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* pRef) {
    Result__Uint32_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
    }

    else if(pRef->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

Result__Uint64_Array__uint8_t Result_copy__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* pRef) {
    Result__Uint64_Array__uint8_t copy = *pRef;
    if(pRef->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
    }

    else if(pRef->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
    copy.u.Error.member0 = Array_copy__uint8_t(&(pRef->u.Error.member0));
    }

    return copy;
}

void Result_delete__Array__Uint16_int(Result__Array__Uint16_int p) {
  if(p._tag == Result__Array__Uint16_int_Success_tag) {
    Array_delete__Uint16(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint16_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint32_int(Result__Array__Uint32_int p) {
  if(p._tag == Result__Array__Uint32_int_Success_tag) {
    Array_delete__Uint32(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint32_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__Uint64_int(Result__Array__Uint64_int p) {
  if(p._tag == Result__Array__Uint64_int_Success_tag) {
    Array_delete__Uint64(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__Uint64_int_Error_tag) {
    /* Ignore non-managed member 'u.Error.member0' : Int */
  }

}

void Result_delete__Array__int_String(Result__Array__int_String p) {
  if(p._tag == Result__Array__int_String_Success_tag) {
    Array_delete__int(p.u.Success.member0);
  }
  else if(p._tag == Result__Array__int_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__Char_String(Result__Char_String p) {
  if(p._tag == Result__Char_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Char */
  }
  else if(p._tag == Result__Char_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__Datetime_String(Result__Datetime_String p) {
  if(p._tag == Result__Datetime_String_Success_tag) {
    Datetime_delete(p.u.Success.member0);
  }
  else if(p._tag == Result__Datetime_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__FILE_MUL__String(Result__FILE_MUL__String p) {
  if(p._tag == Result__FILE_MUL__String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : (Ptr FILE) */
  }
  else if(p._tag == Result__FILE_MUL__String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__String_String(Result__String_String p) {
  if(p._tag == Result__String_String_Success_tag) {
    String_delete(p.u.Success.member0);
  }
  else if(p._tag == Result__String_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

void Result_delete__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t p) {
  if(p._tag == Result__Uint16_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint16 */
  }
  else if(p._tag == Result__Uint16_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t p) {
  if(p._tag == Result__Uint32_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint32 */
  }
  else if(p._tag == Result__Uint32_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t p) {
  if(p._tag == Result__Uint64_Array__uint8_t_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Uint64 */
  }
  else if(p._tag == Result__Uint64_Array__uint8_t_Error_tag) {
    Array_delete__uint8_t(p.u.Error.member0);
  }

}

void Result_delete__bool_String(Result__bool_String p) {
  if(p._tag == Result__bool_String_Success_tag) {
    /* Ignore non-managed member 'u.Success.member0' : Bool */
  }
  else if(p._tag == Result__bool_String_Error_tag) {
    String_delete(p.u.Error.member0);
  }

}

bool Result_error_QMARK___Datetime_String(Result__Datetime_String* a) {
    bool _14;
    if(a->_tag == Result__Datetime_String_Error_tag) {
        Result__Datetime_String* _5_temp = a;
        String* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Datetime_String_Success_tag) {
        Result__Datetime_String* _5_temp = a;
        Datetime* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___FILE_MUL__String(Result__FILE_MUL__String* a) {
    bool _14;
    if(a->_tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        String* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String* _5_temp = a;
        FILE** wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

bool Result_error_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = true;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = false;
    }
    else UNHANDLED("Result.carp", 98);
    return _14;
}

Array__uint8_t Result_from_MINUS_error__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Uint16 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Uint32 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

Array__uint8_t Result_from_MINUS_error__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a, Array__uint8_t dflt) {
    Array__uint8_t _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Uint64 wildcard_8 = _6_temp.u.Success.member0;
        // Case expr:
        _15 = dflt;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _6_temp = a;
        Array__uint8_t x = _6_temp.u.Error.member0;
        // Case expr:
        _15 = x;
        Array_delete__uint8_t(dflt);
    }
    else UNHANDLED("Result.carp", 74);
    return _15;
}

String Result_str__Datetime_String(Result__Datetime_String *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = 1;
  if(p->_tag == Result__Datetime_String_Success_tag) {
    size += snprintf(NULL, 0, "(%s ", "Success");
  temp = Datetime_prn(&p->u.Success.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }
  if(p->_tag == Result__Datetime_String_Error_tag) {
    size += snprintf(NULL, 0, "(%s ", "Error");
  temp = String_prn(&p->u.Error.member0); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  if(p->_tag == Result__Datetime_String_Success_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Success");
  temp = Datetime_prn(&p->u.Success.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }
  if(p->_tag == Result__Datetime_String_Error_tag) {
    bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Error");
  temp = String_prn(&p->u.Error.member0);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

    bufferPtr--;
    snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  }

  return buffer;
}

bool Result_success_QMARK___Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t* _5_temp = a;
        Uint16* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t* _5_temp = a;
        Uint32* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

bool Result_success_QMARK___Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t* a) {
    bool _14;
    if(a->_tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Array__uint8_t* wildcard_7 = &_5_temp->u.Error.member0;
        // Case expr:
        _14 = false;
    }
    else if(a->_tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t* _5_temp = a;
        Uint64* wildcard_11 = &_5_temp->u.Success.member0;
        // Case expr:
        _14 = true;
    }
    else UNHANDLED("Result.carp", 90);
    return _14;
}

String Result_unsafe_MINUS_from_MINUS_error__FILE_MUL__String(Result__FILE_MUL__String a) {
    String _10;
    if(a._tag == Result__FILE_MUL__String_Error_tag) {
        Result__FILE_MUL__String _5_temp = a;
        String x = _5_temp.u.Error.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 69);
    return _10;
}

Array__int Result_unsafe_MINUS_from_MINUS_success__Array__int_String(Result__Array__int_String a) {
    Array__int _10;
    if(a._tag == Result__Array__int_String_Success_tag) {
        Result__Array__int_String _5_temp = a;
        Array__int x = _5_temp.u.Success.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 58);
    return _10;
}

Datetime Result_unsafe_MINUS_from_MINUS_success__Datetime_String(Result__Datetime_String a) {
    Datetime _10;
    if(a._tag == Result__Datetime_String_Success_tag) {
        Result__Datetime_String _5_temp = a;
        Datetime x = _5_temp.u.Success.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 58);
    return _10;
}

FILE* Result_unsafe_MINUS_from_MINUS_success__FILE_MUL__String(Result__FILE_MUL__String a) {
    FILE* _10;
    if(a._tag == Result__FILE_MUL__String_Success_tag) {
        Result__FILE_MUL__String _5_temp = a;
        FILE* x = _5_temp.u.Success.member0;
        // Case expr:
        _10 = x;
    }
    else UNHANDLED("Result.carp", 58);
    return _10;
}

Uint16 Result_unwrap_MINUS_or_MINUS_zero__Uint16_Array__uint8_t(Result__Uint16_Array__uint8_t a) {
    Uint16 _15;
    if(a._tag == Result__Uint16_Array__uint8_t_Success_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Uint16 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint16_Array__uint8_t_Error_tag) {
        Result__Uint16_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint16 _14 = Uint16_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint32 Result_unwrap_MINUS_or_MINUS_zero__Uint32_Array__uint8_t(Result__Uint32_Array__uint8_t a) {
    Uint32 _15;
    if(a._tag == Result__Uint32_Array__uint8_t_Success_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Uint32 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint32_Array__uint8_t_Error_tag) {
        Result__Uint32_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint32 _14 = Uint32_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

Uint64 Result_unwrap_MINUS_or_MINUS_zero__Uint64_Array__uint8_t(Result__Uint64_Array__uint8_t a) {
    Uint64 _15;
    if(a._tag == Result__Uint64_Array__uint8_t_Success_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Uint64 x = _5_temp.u.Success.member0;
        // Case expr:
        _15 = x;
    }
    else if(a._tag == Result__Uint64_Array__uint8_t_Error_tag) {
        Result__Uint64_Array__uint8_t _5_temp = a;
        Array__uint8_t wildcard_11 = _5_temp.u.Error.member0;
        // Case expr:
        Uint64 _14 = Uint64_zero();
        _15 = _14;
        Array_delete__uint8_t(wildcard_11);
    }
    else UNHANDLED("Result.carp", 38);
    return _15;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_lower_14_env(uint8_t c) {
    uint8_t _13 = tolower(c);
    return _13;
}

uint8_t String__Lambda_ascii_MINUS_to_MINUS_upper_14_env(uint8_t c) {
    uint8_t _13 = toupper(c);
    return _13;
}

bool String__Lambda_words_14_env(String* s) {
    bool _12 = String_empty_QMARK_(s);
    bool _13 = not(_12);
    return _13;
}

bool String_allocated_QMARK_(String* s) {
    CChar* _8 = String_cstr(s);
    bool _9 = null_QMARK___CChar(_8);
    bool _10 = not(_9);
    return _10;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_ascii_MINUS_to_MINUS_lower(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_lower_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_ascii_MINUS_to_MINUS_upper(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_ascii_MINUS_to_MINUS_upper_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array__uint8_t _18 = String_to_MINUS_bytes(s);
    Array__uint8_t _19 = Array_endo_MINUS_map__uint8_t(_15, _18);
    Array__uint8_t* _20 = &_19; // ref
    String _21 = String_from_MINUS_bytes(_20);
    Array_delete__uint8_t(_19);
    Function_delete__uint8_t_uint8_t(_14);
    return _21;
}

String String_chomp(String* s) {
    static String _5 = "\\r$";
    String *_5_ref = &_5;
    static String _8 = "\\n$";
    String *_8_ref = &_8;
    static String _10 = "";
    String *_10_ref = &_10;
    String _12 = Pattern_substitute(_8_ref, s, _10_ref, 1);
    String* _13 = &_12; // ref
    static String _14 = "";
    String *_14_ref = &_14;
    String _16 = Pattern_substitute(_5_ref, _13, _14_ref, 1);
    String_delete(_12);
    return _16;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

String String_concat(Array__String* strings) {
    String _70;
    /* let */ {
        int j = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        int _15 = String_sum_MINUS_length(strings);
        String _17 = String_allocate(_15, 32/*' '*/);
        String result = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _35 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _35;
                    int _39 = String_length(str);
                    int len = _39;
                    String* _45 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_45, j, str);
                    int _54 = Int__PLUS_(j, len);
                    j = _54;  // Int = Int
                }
                int _1000016 = Int__PLUS_(i, 1);
                i = _1000016;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _69 = result;
        _70 = _69;
    }
    return _70;
}

bool String_contains_MINUS_string_QMARK_(String* s, String* needle) {
    int _9 = String_index_MINUS_of_MINUS_string(s, needle);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

bool String_contains_QMARK_(String* s, Char c) {
    int _9 = String_index_MINUS_of(s, c);
    bool _11 = Int__GT_(_9, -1);
    return _11;
}

int String_count_MINUS_char(String* s, Char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_length(s);
            bool _1000008 = Int__LT_(i, _19);
            bool _1000006 = _1000008;
            while (_1000006) {
                Char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _1000017 = Int__PLUS_(i, 1);
                i = _1000017;  // Int = Int
                int _19 = String_length(s);
                bool _1000008 = Int__LT_(i, _19);
                _1000006 = _1000008;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_length(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    bool _38;
    /* let */ {
        int _9 = String_length(s);
        int ls = _9;
        int _13 = String_length(sub);
        int lsub = _13;
        bool _37;
        bool _19 = _GT__EQ___int(ls, lsub);
        if (_19) {
            int _29 = Int__MINUS_(ls, lsub);
            String _30 = String_suffix(s, _29);
            String* _31 = &_30; // ref
            bool _32 = String__EQ_(sub, _31);
            bool _33 = _32;
            String_delete(_30);
            _37 = _33;
        } else {
            bool _36 = false;
            _37 = _36;
        }
        _38 = _37;
    }
    return _38;
}

int String_hash(String* k) {
    int _50;
    /* let */ {
        int h = 5381;
        /* let */ {
            int x = 0;
            int _18 = String_length(k);
            bool _1000008 = Int__LT_(x, _18);
            bool _1000006 = _1000008;
            while (_1000006) {
                int _27 = Int__MUL_(h, 33);
                Char _32 = String_char_MINUS_at(k, x);
                int _33 = Char_to_MINUS_int(_32);
                int _34 = Int__PLUS_(_27, _33);
                h = _34;  // Int = Int
                int _1000014 = Int__PLUS_(x, 1);
                x = _1000014;  // Int = Int
                int _18 = String_length(k);
                bool _1000008 = Int__LT_(x, _18);
                _1000006 = _1000008;
            }
        }
        int _48 = Int_abs(h);
        int _49 = _48;
        _50 = _49;
    }
    return _50;
}

Char String_head(String* s) {
    Char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

int String_index_MINUS_of(String* s, Char c) {
    Array _9 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_9.data)[0] = c;
    Array__Char* _10 = &_9; // ref
    int _12 = String_index_MINUS_of_MINUS_any_MINUS_from(s, _10, -1);
    Array_delete__Char(_9);
    return _12;
}

int String_index_MINUS_of_MINUS_from(String* s, Char c, int i) {
    Array _10 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_10.data)[0] = c;
    Array__Char* _11 = &_10; // ref
    int _13 = String_index_MINUS_of_MINUS_any_MINUS_from(s, _11, i);
    Array_delete__Char(_10);
    return _13;
}

String String_join(String* sep, Array__String* strings) {
    String _116;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int num_MINUS_seps = _19;
        int _23 = String_length(sep);
        int sep_MINUS_length = _23;
        int _28 = Int__MUL_(num_MINUS_seps, sep_MINUS_length);
        int seps_MINUS_size = _28;
        int _35 = String_sum_MINUS_length(strings);
        int _36 = Int__PLUS_(seps_MINUS_size, _35);
        String _38 = String_allocate(_36, 32/*' '*/);
        String result = _38;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _56 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _56;
                    int _60 = String_length(str);
                    int len = _60;
                    bool _67 = Int__GT_(i, 0);
                    if (_67) {
                        String* _72 = &result; // ref
                        String_string_MINUS_set_MINUS_at_BANG_(_72, j, sep);
                        int _81 = Int__PLUS_(j, sep_MINUS_length);
                        j = _81;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _91 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_91, j, str);
                    int _100 = Int__PLUS_(j, len);
                    j = _100;  // Int = Int
                }
                int _1000020 = Int__PLUS_(i, 1);
                i = _1000020;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _115 = result;
        _116 = _115;
    }
    return _116;
}

String String_join_MINUS_with_MINUS_char(Char sep, Array__String* strings) {
    String _107;
    /* let */ {
        int j = 0;
        int _11 = Array_length__String(strings);
        int lstrings = _11;
        int _18 = Int__MINUS_(lstrings, 1);
        int _19 = max__int(0, _18);
        int sep_MINUS_length = _19;
        int _26 = String_sum_MINUS_length(strings);
        int _27 = Int__PLUS_(sep_MINUS_length, _26);
        String _29 = String_allocate(_27, 32/*' '*/);
        String result = _29;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                /* let */ {
                    String* _47 = Array_unsafe_MINUS_nth__String(strings, i);
                    String* str = _47;
                    int _51 = String_length(str);
                    int len = _51;
                    bool _58 = Int__GT_(i, 0);
                    if (_58) {
                        String* _63 = &result; // ref
                        String_string_MINUS_set_BANG_(_63, j, sep);
                        int _72 = Int__PLUS_(j, 1);
                        j = _72;  // Int = Int
                    } else {
                        /* () */
                    }
                    String* _82 = &result; // ref
                    String_string_MINUS_set_MINUS_at_BANG_(_82, j, str);
                    int _91 = Int__PLUS_(j, len);
                    j = _91;  // Int = Int
                }
                int _1000020 = Int__PLUS_(i, 1);
                i = _1000020;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        String _106 = result;
        _107 = _106;
    }
    return _107;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(Char) * 1) };
    ((Char*)_8.data)[0] = '\n';
    Array__Char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__Char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _26 = &pad; // ref
        Array__Char _27 = Array_replicate__Char(x, _26);
        Array__Char* _28 = &_27; // ref
        String _29 = String_from_MINUS_chars(_28);
        String* _30 = &_29; // ref
        String _32 = String_append(_30, s);
        _33 = _32;
        Array_delete__Char(_27);
        String_delete(_29);
    }
    return _33;
}

String String_pad_MINUS_right(int len, Char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_length(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        Char* _27 = &pad; // ref
        Array__Char _28 = Array_replicate__Char(x, _27);
        Array__Char* _29 = &_28; // ref
        String _30 = String_from_MINUS_chars(_29);
        String* _31 = &_30; // ref
        String _32 = String_append(s, _31);
        _33 = _32;
        Array_delete__Char(_28);
        String_delete(_30);
    }
    return _33;
}

String String_prefix(String* s, int a) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_prefix__Array__Char(_12, a);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

String String_random_MINUS_sized(int n) {
    Lambda _9 = { .callback = (void*)Char_random, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Char.random (LookupGlobal CarpLand AFunction)
    Lambda* _10 = &_9; // ref
    Array__Char _11 = Array_repeat__Char(n, _10);
    Array__Char* _12 = &_11; // ref
    String _13 = String_from_MINUS_chars(_12);
    Array_delete__Char(_11);
    return _13;
}

String String_repeat(int n, String* inpt) {
    String _52;
    /* let */ {
        int _9 = String_length(inpt);
        int l = _9;
        int _15 = Int__MUL_(n, l);
        String _17 = String_allocate(_15, 48/*'0'*/);
        String str = _17;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, n);
            bool _1000006 = _1000008;
            while (_1000006) {
                String* _33 = &str; // ref
                int _37 = Int__MUL_(i, l);
                String_string_MINUS_set_MINUS_at_BANG_(_33, _37, inpt);
                int _1000013 = Int__PLUS_(i, 1);
                i = _1000013;  // Int = Int
                bool _1000008 = Int__LT_(i, n);
                _1000006 = _1000008;
            }
        }
        String _51 = str;
        _52 = _51;
    }
    return _52;
}

String String_reverse(String* s) {
    Array__Char _9 = String_chars(s);
    Array__Char _10 = Array_reverse__Char(_9);
    Array__Char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__Char(_10);
    return _12;
}

String String_slice(String* s, int a, int b) {
    Array__Char _12 = String_chars(s);
    Array__Char* _13 = &_12; // ref
    Array__Char _16 = Array_slice__Char(_13, a, b);
    Array__Char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__Char(_12);
    Array_delete__Char(_16);
    return _18;
}

Array__String String_split_MINUS_by(String* s, Array__Char* separators) {
    Array__String _62;
    /* let */ {
        Array _7 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String result = _7;
        int start = 0;
        int _15 = String_index_MINUS_of_MINUS_any_MINUS_from(s, separators, -1);
        int idx = _15;
        bool _22 = _DIV__EQ___int(idx, -1);
        bool _50 = _22;
        while (_50) {
            String _32 = String_byte_MINUS_slice(s, start, idx);
            Array__String _33 = Array_push_MINUS_back__String(result, _32);
            result = _33;  // (Array String) = (Array String)
            int _39 = Int_inc(idx);
            start = _39;  // Int = Int
            int _47 = String_index_MINUS_of_MINUS_any_MINUS_from(s, separators, idx);
            idx = _47;  // Int = Int
            bool _22 = _DIV__EQ___int(idx, -1);
            _50 = _22;
        }
        int _58 = String_length(s);
        String _59 = String_byte_MINUS_slice(s, start, _58);
        Array__String _60 = Array_push_MINUS_back__String(result, _59);
        Array__String _61 = _60;
        _62 = _61;
    }
    return _62;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    bool _33;
    /* let */ {
        int _9 = String_length(sub);
        int ls = _9;
        bool _32;
        int _15 = String_length(s);
        bool _17 = _GT__EQ___int(_15, ls);
        if (_17) {
            String _25 = String_prefix(s, ls);
            String* _26 = &_25; // ref
            bool _27 = String__EQ_(sub, _26);
            bool _28 = _27;
            String_delete(_25);
            _32 = _28;
        } else {
            bool _31 = false;
            _32 = _31;
        }
        _33 = _32;
    }
    return _33;
}

String String_suffix(String* s, int b) {
    Array__Char _11 = String_chars(s);
    Array__Char* _12 = &_11; // ref
    Array__Char _14 = Array_suffix__Char(_12, b);
    Array__Char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__Char(_11);
    Array_delete__Char(_14);
    return _16;
}

int String_sum_MINUS_length(Array__String* strings) {
    int _47;
    /* let */ {
        int sum = 0;
        int _10 = Array_length__String(strings);
        int lstrings = _10;
        /* let */ {
            int i = 0;
            bool _1000008 = Int__LT_(i, lstrings);
            bool _1000006 = _1000008;
            while (_1000006) {
                String* _31 = Array_unsafe_MINUS_nth__String(strings, i);
                int _32 = String_length(_31);
                int _33 = Int__PLUS_(sum, _32);
                sum = _33;  // Int = Int
                int _1000014 = Int__PLUS_(i, 1);
                i = _1000014;  // Int = Int
                bool _1000008 = Int__LT_(i, lstrings);
                _1000006 = _1000008;
            }
        }
        int _46 = sum;
        _47 = _46;
    }
    return _47;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    // This lambda captures 0 variables: 
    Lambda _14 = {
      .callback = (void*)String__Lambda_words_14_env,
      .env = NULL,
      .delete = (void*)NULL,
      .copy = (void*)NULL
    };
    Lambda* _15 = &_14; // ref
    Array _22 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(Char) * 3) };
    ((Char*)_22.data)[0] = '\t';
    ((Char*)_22.data)[1] = 32/*' '*/;
    ((Char*)_22.data)[2] = '\n';
    Array__Char* _23 = &_22; // ref
    Array__String _24 = String_split_MINUS_by(s, _23);
    Array__String _25 = Array_endo_MINUS_filter__String(_15, _24);
    Array_delete__Char(_22);
    Function_delete__String_MUL__bool(_14);
    return _25;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__LT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__LT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__GT_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__GT_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

String StringCopy_prn(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_prn(_10);
    String_delete(_9);
    return _11;
}

String StringCopy_str(String s) {
    String _9 = s; // From the 'the' function.
    String* _10 = &_9; // ref
    String _11 = String_str(_10);
    String_delete(_9);
    return _11;
}

String System_error_MINUS_text() {
    String _5 = System_strerror(errno);
    return _5;
}

void System_exit__void(int code) { exit(code); }
String System_strerror(int error_MINUS_no) {
    CChar* _7 = strerror(error_MINUS_no);
    String _8 = String_from_MINUS_cstr(_7);
    return _8;
}

TM TM_init(int tm_sec, int tm_min, int tm_hour, int tm_mday, int tm_mon, int tm_year, int tm_wday, int tm_yday, int tm_isdst, String tm_zone) {
    TM instance;
    instance.tm_sec = tm_sec;
    instance.tm_min = tm_min;
    instance.tm_hour = tm_hour;
    instance.tm_mday = tm_mday;
    instance.tm_mon = tm_mon;
    instance.tm_year = tm_year;
    instance.tm_wday = tm_wday;
    instance.tm_yday = tm_yday;
    instance.tm_isdst = tm_isdst;
    instance.tm_zone = tm_zone;
    return instance;
}

String TM_prn(TM *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "TM");
  temp = Int_prn(p->tm_sec); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_min); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_hour); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mday); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mon); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_year); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_wday); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_yday); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_isdst); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = String_prn(&p->tm_zone); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "TM");
  temp = Int_prn(p->tm_sec);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_min);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_hour);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mday);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mon);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_year);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_wday);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_yday);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_isdst);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = String_prn(&p->tm_zone);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TM TM_set_MINUS_tm_hour(TM p, int newValue) {
    /* Ignore non-managed member 'tm_hour' : Int */
    p.tm_hour = newValue;
    return p;
}


void TM_set_MINUS_tm_hour_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_hour' : Int */
    pRef->tm_hour = newValue;
}


TM TM_set_MINUS_tm_isdst(TM p, int newValue) {
    /* Ignore non-managed member 'tm_isdst' : Int */
    p.tm_isdst = newValue;
    return p;
}


void TM_set_MINUS_tm_isdst_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_isdst' : Int */
    pRef->tm_isdst = newValue;
}


TM TM_set_MINUS_tm_mday(TM p, int newValue) {
    /* Ignore non-managed member 'tm_mday' : Int */
    p.tm_mday = newValue;
    return p;
}


void TM_set_MINUS_tm_mday_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_mday' : Int */
    pRef->tm_mday = newValue;
}


TM TM_set_MINUS_tm_min(TM p, int newValue) {
    /* Ignore non-managed member 'tm_min' : Int */
    p.tm_min = newValue;
    return p;
}


void TM_set_MINUS_tm_min_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_min' : Int */
    pRef->tm_min = newValue;
}


TM TM_set_MINUS_tm_mon(TM p, int newValue) {
    /* Ignore non-managed member 'tm_mon' : Int */
    p.tm_mon = newValue;
    return p;
}


void TM_set_MINUS_tm_mon_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_mon' : Int */
    pRef->tm_mon = newValue;
}


TM TM_set_MINUS_tm_sec(TM p, int newValue) {
    /* Ignore non-managed member 'tm_sec' : Int */
    p.tm_sec = newValue;
    return p;
}


void TM_set_MINUS_tm_sec_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_sec' : Int */
    pRef->tm_sec = newValue;
}


TM TM_set_MINUS_tm_wday(TM p, int newValue) {
    /* Ignore non-managed member 'tm_wday' : Int */
    p.tm_wday = newValue;
    return p;
}


void TM_set_MINUS_tm_wday_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_wday' : Int */
    pRef->tm_wday = newValue;
}


TM TM_set_MINUS_tm_yday(TM p, int newValue) {
    /* Ignore non-managed member 'tm_yday' : Int */
    p.tm_yday = newValue;
    return p;
}


void TM_set_MINUS_tm_yday_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_yday' : Int */
    pRef->tm_yday = newValue;
}


TM TM_set_MINUS_tm_year(TM p, int newValue) {
    /* Ignore non-managed member 'tm_year' : Int */
    p.tm_year = newValue;
    return p;
}


void TM_set_MINUS_tm_year_BANG_(TM* pRef, int newValue) {
    /* Ignore non-managed member 'tm_year' : Int */
    pRef->tm_year = newValue;
}


TM TM_set_MINUS_tm_zone(TM p, String newValue) {
    String_delete(p.tm_zone);
    p.tm_zone = newValue;
    return p;
}


void TM_set_MINUS_tm_zone_BANG_(TM* pRef, String newValue) {
    String_delete(pRef->tm_zone);
    pRef->tm_zone = newValue;
}


String TM_str(TM *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "TM");
  temp = Int_prn(p->tm_sec); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_min); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_hour); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mday); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mon); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_year); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_wday); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_yday); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_isdst); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = String_prn(&p->tm_zone); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "TM");
  temp = Int_prn(p->tm_sec);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_min);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_hour);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mday);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_mon);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_year);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_wday);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_yday);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->tm_isdst);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = String_prn(&p->tm_zone);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

int* TM_tm_hour(TM* p) { return (&(p->tm_hour)); }

int* TM_tm_isdst(TM* p) { return (&(p->tm_isdst)); }

int* TM_tm_mday(TM* p) { return (&(p->tm_mday)); }

int* TM_tm_min(TM* p) { return (&(p->tm_min)); }

int* TM_tm_mon(TM* p) { return (&(p->tm_mon)); }

int* TM_tm_sec(TM* p) { return (&(p->tm_sec)); }

int* TM_tm_wday(TM* p) { return (&(p->tm_wday)); }

int* TM_tm_yday(TM* p) { return (&(p->tm_yday)); }

int* TM_tm_year(TM* p) { return (&(p->tm_year)); }

String* TM_tm_zone(TM* p) { return (&(p->tm_zone)); }

TM TM_update_MINUS_tm_hour(TM p, Lambda *updater) {
    p.tm_hour = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_hour) : ((Fn__int_int)(*updater).callback)(p.tm_hour);
    return p;
}


TM TM_update_MINUS_tm_isdst(TM p, Lambda *updater) {
    p.tm_isdst = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_isdst) : ((Fn__int_int)(*updater).callback)(p.tm_isdst);
    return p;
}


TM TM_update_MINUS_tm_mday(TM p, Lambda *updater) {
    p.tm_mday = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_mday) : ((Fn__int_int)(*updater).callback)(p.tm_mday);
    return p;
}


TM TM_update_MINUS_tm_min(TM p, Lambda *updater) {
    p.tm_min = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_min) : ((Fn__int_int)(*updater).callback)(p.tm_min);
    return p;
}


TM TM_update_MINUS_tm_mon(TM p, Lambda *updater) {
    p.tm_mon = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_mon) : ((Fn__int_int)(*updater).callback)(p.tm_mon);
    return p;
}


TM TM_update_MINUS_tm_sec(TM p, Lambda *updater) {
    p.tm_sec = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_sec) : ((Fn__int_int)(*updater).callback)(p.tm_sec);
    return p;
}


TM TM_update_MINUS_tm_wday(TM p, Lambda *updater) {
    p.tm_wday = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_wday) : ((Fn__int_int)(*updater).callback)(p.tm_wday);
    return p;
}


TM TM_update_MINUS_tm_yday(TM p, Lambda *updater) {
    p.tm_yday = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_yday) : ((Fn__int_int)(*updater).callback)(p.tm_yday);
    return p;
}


TM TM_update_MINUS_tm_year(TM p, Lambda *updater) {
    p.tm_year = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.tm_year) : ((Fn__int_int)(*updater).callback)(p.tm_year);
    return p;
}


TM TM_update_MINUS_tm_zone(TM p, Lambda *updater) {
    p.tm_zone = (*updater).env ? ((Fn__LambdaEnv_String_String)(*updater).callback)((*updater).env, p.tm_zone) : ((Fn__String_String)(*updater).callback)(p.tm_zone);
    return p;
}


TestState Test_State_copy(TestState* pRef) {
    TestState copy = *pRef;
    /* Ignore non-managed member 'passed' : Int */
    /* Ignore non-managed member 'failed' : Int */
    return copy;
}

void Test_State_delete(TestState p) {
    /* Ignore non-managed member 'passed' : Int */
    /* Ignore non-managed member 'failed' : Int */
}

int* Test_State_failed(TestState* p) { return (&(p->failed)); }

TestState Test_State_init(int passed, int failed) {
    TestState instance;
    instance.passed = passed;
    instance.failed = failed;
    return instance;
}

int* Test_State_passed(TestState* p) { return (&(p->passed)); }

String Test_State_prn(TestState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Test.State");
  temp = Int_prn(p->passed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Test.State");
  temp = Int_prn(p->passed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TestState Test_State_set_MINUS_failed(TestState p, int newValue) {
    /* Ignore non-managed member 'failed' : Int */
    p.failed = newValue;
    return p;
}


void Test_State_set_MINUS_failed_BANG_(TestState* pRef, int newValue) {
    /* Ignore non-managed member 'failed' : Int */
    pRef->failed = newValue;
}


TestState Test_State_set_MINUS_passed(TestState p, int newValue) {
    /* Ignore non-managed member 'passed' : Int */
    p.passed = newValue;
    return p;
}


void Test_State_set_MINUS_passed_BANG_(TestState* pRef, int newValue) {
    /* Ignore non-managed member 'passed' : Int */
    pRef->passed = newValue;
}


String Test_State_str(TestState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Test.State");
  temp = Int_prn(p->passed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Test.State");
  temp = Int_prn(p->passed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->failed);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

TestState Test_State_update_MINUS_failed(TestState p, Lambda *updater) {
    p.failed = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.failed) : ((Fn__int_int)(*updater).callback)(p.failed);
    return p;
}


TestState Test_State_update_MINUS_passed(TestState p, Lambda *updater) {
    p.passed = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.passed) : ((Fn__int_int)(*updater).callback)(p.passed);
    return p;
}


TestState Test_assert_MINUS_equal__Datetime_MUL__String(TestState* state, Datetime* x, Datetime* y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Datetime__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Datetime.= (LookupGlobal CarpLand AFunction)
    TestState _14 = Test_handler__Datetime_MUL__Datetime_MUL__String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(TestState* state, Result__Datetime_String* x, Result__Datetime_String* y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Result__EQ___Datetime_String, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Result.=__Datetime_String (LookupGlobal CarpLand AFunction)
    TestState _14 = Test_handler__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_equal__String_MUL__String(TestState* state, String* x, String* y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)String__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym String.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__String_MUL__String_MUL__String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_equal__bool_String(TestState* state, bool x, bool y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Bool__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Bool.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__bool_bool_String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_equal__int_String(TestState* state, int x, int y, String* descr) {
    static String _12 = "value";
    String *_12_ref = &_12;
    Lambda _13 = { .callback = (void*)Int__EQ_, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.= (LookupGlobal ExternalCode AFunction)
    TestState _14 = Test_handler__int_int_String_String(state, x, y, descr, _12_ref, _13);
    return _14;
}

TestState Test_assert_MINUS_false__String(TestState* state, bool x, String* descr) {
    TestState _11 = Test_assert_MINUS_equal__bool_String(state, false, x, descr);
    return _11;
}

TestState Test_assert_MINUS_true__String(TestState* state, bool x, String* descr) {
    TestState _11 = Test_assert_MINUS_equal__bool_String(state, true, x, descr);
    return _11;
}

TestState Test_display_MINUS_test__Datetime_MUL__Datetime_MUL__String_String(TestState* state, Datetime* expected, Datetime* actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _1000008 = StringCopy_str(_23);
        String* _1000007 = &_1000008; // ref
        String _32 = String_copy(descr);
        String _1000012 = StringCopy_str(_32);
        String* _1000011 = &_1000012; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _1000014 = StringCopy_str(_39);
        String* _1000013 = &_1000014; // ref
        String _1000010 = String_append(_1000011, _1000013);
        String* _1000009 = &_1000010; // ref
        String _1000006 = String_append(_1000007, _1000009);
        String* _1000005 = &_1000006; // ref
        String _1000004 = String_copy(_1000005);
        String* _47 = &_1000004; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_1000004);
        String_delete(_1000006);
        String_delete(_1000008);
        String_delete(_1000010);
        String_delete(_1000012);
        String_delete(_1000014);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _1000020 = StringCopy_str(_72);
        String* _1000019 = &_1000020; // ref
        String _81 = String_copy(descr);
        String _1000024 = StringCopy_str(_81);
        String* _1000023 = &_1000024; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _1000026 = StringCopy_str(_88);
        String* _1000025 = &_1000026; // ref
        String _1000022 = String_append(_1000023, _1000025);
        String* _1000021 = &_1000022; // ref
        String _1000018 = String_append(_1000019, _1000021);
        String* _1000017 = &_1000018; // ref
        String _1000016 = String_copy(_1000017);
        String* _96 = &_1000016; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _1000031 = StringCopy_str(_107);
        String* _1000030 = &_1000031; // ref
        String _116 = String_copy(what);
        String _1000035 = StringCopy_str(_116);
        String* _1000034 = &_1000035; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _1000037 = StringCopy_str(_123);
        String* _1000036 = &_1000037; // ref
        String _1000033 = String_append(_1000034, _1000036);
        String* _1000032 = &_1000033; // ref
        String _1000029 = String_append(_1000030, _1000032);
        String* _1000028 = &_1000029; // ref
        String _1000027 = String_copy(_1000028);
        String* _131 = &_1000027; // ref
        IO_print(_131);
        String _137 = Datetime_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _1000042 = StringCopy_str(_149);
        String* _1000041 = &_1000042; // ref
        String _158 = Datetime_str(actual);
        String _1000046 = StringCopy_str(_158);
        String* _1000045 = &_1000046; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _1000048 = StringCopy_str(_165);
        String* _1000047 = &_1000048; // ref
        String _1000044 = String_append(_1000045, _1000047);
        String* _1000043 = &_1000044; // ref
        String _1000040 = String_append(_1000041, _1000043);
        String* _1000039 = &_1000040; // ref
        String _1000038 = String_copy(_1000039);
        String* _173 = &_1000038; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_1000016);
        String_delete(_1000018);
        String_delete(_1000020);
        String_delete(_1000022);
        String_delete(_1000024);
        String_delete(_1000026);
        String_delete(_1000027);
        String_delete(_1000029);
        String_delete(_1000031);
        String_delete(_1000033);
        String_delete(_1000035);
        String_delete(_1000037);
        String_delete(_1000038);
        String_delete(_1000040);
        String_delete(_1000042);
        String_delete(_1000044);
        String_delete(_1000046);
        String_delete(_1000048);
        String_delete(_137);
        _188 = _187;
    }
    return _188;
}

TestState Test_display_MINUS_test__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_String(TestState* state, Result__Datetime_String* expected, Result__Datetime_String* actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _1000008 = StringCopy_str(_23);
        String* _1000007 = &_1000008; // ref
        String _32 = String_copy(descr);
        String _1000012 = StringCopy_str(_32);
        String* _1000011 = &_1000012; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _1000014 = StringCopy_str(_39);
        String* _1000013 = &_1000014; // ref
        String _1000010 = String_append(_1000011, _1000013);
        String* _1000009 = &_1000010; // ref
        String _1000006 = String_append(_1000007, _1000009);
        String* _1000005 = &_1000006; // ref
        String _1000004 = String_copy(_1000005);
        String* _47 = &_1000004; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_1000004);
        String_delete(_1000006);
        String_delete(_1000008);
        String_delete(_1000010);
        String_delete(_1000012);
        String_delete(_1000014);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _1000020 = StringCopy_str(_72);
        String* _1000019 = &_1000020; // ref
        String _81 = String_copy(descr);
        String _1000024 = StringCopy_str(_81);
        String* _1000023 = &_1000024; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _1000026 = StringCopy_str(_88);
        String* _1000025 = &_1000026; // ref
        String _1000022 = String_append(_1000023, _1000025);
        String* _1000021 = &_1000022; // ref
        String _1000018 = String_append(_1000019, _1000021);
        String* _1000017 = &_1000018; // ref
        String _1000016 = String_copy(_1000017);
        String* _96 = &_1000016; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _1000031 = StringCopy_str(_107);
        String* _1000030 = &_1000031; // ref
        String _116 = String_copy(what);
        String _1000035 = StringCopy_str(_116);
        String* _1000034 = &_1000035; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _1000037 = StringCopy_str(_123);
        String* _1000036 = &_1000037; // ref
        String _1000033 = String_append(_1000034, _1000036);
        String* _1000032 = &_1000033; // ref
        String _1000029 = String_append(_1000030, _1000032);
        String* _1000028 = &_1000029; // ref
        String _1000027 = String_copy(_1000028);
        String* _131 = &_1000027; // ref
        IO_print(_131);
        String _137 = Result_str__Datetime_String(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _1000042 = StringCopy_str(_149);
        String* _1000041 = &_1000042; // ref
        String _158 = Result_str__Datetime_String(actual);
        String _1000046 = StringCopy_str(_158);
        String* _1000045 = &_1000046; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _1000048 = StringCopy_str(_165);
        String* _1000047 = &_1000048; // ref
        String _1000044 = String_append(_1000045, _1000047);
        String* _1000043 = &_1000044; // ref
        String _1000040 = String_append(_1000041, _1000043);
        String* _1000039 = &_1000040; // ref
        String _1000038 = String_copy(_1000039);
        String* _173 = &_1000038; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_1000016);
        String_delete(_1000018);
        String_delete(_1000020);
        String_delete(_1000022);
        String_delete(_1000024);
        String_delete(_1000026);
        String_delete(_1000027);
        String_delete(_1000029);
        String_delete(_1000031);
        String_delete(_1000033);
        String_delete(_1000035);
        String_delete(_1000037);
        String_delete(_1000038);
        String_delete(_1000040);
        String_delete(_1000042);
        String_delete(_1000044);
        String_delete(_1000046);
        String_delete(_1000048);
        String_delete(_137);
        _188 = _187;
    }
    return _188;
}

TestState Test_display_MINUS_test__String_MUL__String_MUL__String_String(TestState* state, String* expected, String* actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _1000008 = StringCopy_str(_23);
        String* _1000007 = &_1000008; // ref
        String _32 = String_copy(descr);
        String _1000012 = StringCopy_str(_32);
        String* _1000011 = &_1000012; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _1000014 = StringCopy_str(_39);
        String* _1000013 = &_1000014; // ref
        String _1000010 = String_append(_1000011, _1000013);
        String* _1000009 = &_1000010; // ref
        String _1000006 = String_append(_1000007, _1000009);
        String* _1000005 = &_1000006; // ref
        String _1000004 = String_copy(_1000005);
        String* _47 = &_1000004; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_1000004);
        String_delete(_1000006);
        String_delete(_1000008);
        String_delete(_1000010);
        String_delete(_1000012);
        String_delete(_1000014);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _1000020 = StringCopy_str(_72);
        String* _1000019 = &_1000020; // ref
        String _81 = String_copy(descr);
        String _1000024 = StringCopy_str(_81);
        String* _1000023 = &_1000024; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _1000026 = StringCopy_str(_88);
        String* _1000025 = &_1000026; // ref
        String _1000022 = String_append(_1000023, _1000025);
        String* _1000021 = &_1000022; // ref
        String _1000018 = String_append(_1000019, _1000021);
        String* _1000017 = &_1000018; // ref
        String _1000016 = String_copy(_1000017);
        String* _96 = &_1000016; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _1000031 = StringCopy_str(_107);
        String* _1000030 = &_1000031; // ref
        String _116 = String_copy(what);
        String _1000035 = StringCopy_str(_116);
        String* _1000034 = &_1000035; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _1000037 = StringCopy_str(_123);
        String* _1000036 = &_1000037; // ref
        String _1000033 = String_append(_1000034, _1000036);
        String* _1000032 = &_1000033; // ref
        String _1000029 = String_append(_1000030, _1000032);
        String* _1000028 = &_1000029; // ref
        String _1000027 = String_copy(_1000028);
        String* _131 = &_1000027; // ref
        IO_print(_131);
        String _137 = String_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _1000042 = StringCopy_str(_149);
        String* _1000041 = &_1000042; // ref
        String _158 = String_str(actual);
        String _1000046 = StringCopy_str(_158);
        String* _1000045 = &_1000046; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _1000048 = StringCopy_str(_165);
        String* _1000047 = &_1000048; // ref
        String _1000044 = String_append(_1000045, _1000047);
        String* _1000043 = &_1000044; // ref
        String _1000040 = String_append(_1000041, _1000043);
        String* _1000039 = &_1000040; // ref
        String _1000038 = String_copy(_1000039);
        String* _173 = &_1000038; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_1000016);
        String_delete(_1000018);
        String_delete(_1000020);
        String_delete(_1000022);
        String_delete(_1000024);
        String_delete(_1000026);
        String_delete(_1000027);
        String_delete(_1000029);
        String_delete(_1000031);
        String_delete(_1000033);
        String_delete(_1000035);
        String_delete(_1000037);
        String_delete(_1000038);
        String_delete(_1000040);
        String_delete(_1000042);
        String_delete(_1000044);
        String_delete(_1000046);
        String_delete(_1000048);
        String_delete(_137);
        _188 = _187;
    }
    return _188;
}

TestState Test_display_MINUS_test__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _1000008 = StringCopy_str(_23);
        String* _1000007 = &_1000008; // ref
        String _32 = String_copy(descr);
        String _1000012 = StringCopy_str(_32);
        String* _1000011 = &_1000012; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _1000014 = StringCopy_str(_39);
        String* _1000013 = &_1000014; // ref
        String _1000010 = String_append(_1000011, _1000013);
        String* _1000009 = &_1000010; // ref
        String _1000006 = String_append(_1000007, _1000009);
        String* _1000005 = &_1000006; // ref
        String _1000004 = String_copy(_1000005);
        String* _47 = &_1000004; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_1000004);
        String_delete(_1000006);
        String_delete(_1000008);
        String_delete(_1000010);
        String_delete(_1000012);
        String_delete(_1000014);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _1000020 = StringCopy_str(_72);
        String* _1000019 = &_1000020; // ref
        String _81 = String_copy(descr);
        String _1000024 = StringCopy_str(_81);
        String* _1000023 = &_1000024; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _1000026 = StringCopy_str(_88);
        String* _1000025 = &_1000026; // ref
        String _1000022 = String_append(_1000023, _1000025);
        String* _1000021 = &_1000022; // ref
        String _1000018 = String_append(_1000019, _1000021);
        String* _1000017 = &_1000018; // ref
        String _1000016 = String_copy(_1000017);
        String* _96 = &_1000016; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _1000031 = StringCopy_str(_107);
        String* _1000030 = &_1000031; // ref
        String _116 = String_copy(what);
        String _1000035 = StringCopy_str(_116);
        String* _1000034 = &_1000035; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _1000037 = StringCopy_str(_123);
        String* _1000036 = &_1000037; // ref
        String _1000033 = String_append(_1000034, _1000036);
        String* _1000032 = &_1000033; // ref
        String _1000029 = String_append(_1000030, _1000032);
        String* _1000028 = &_1000029; // ref
        String _1000027 = String_copy(_1000028);
        String* _131 = &_1000027; // ref
        IO_print(_131);
        String _137 = Bool_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _1000042 = StringCopy_str(_149);
        String* _1000041 = &_1000042; // ref
        String _158 = Bool_str(actual);
        String _1000046 = StringCopy_str(_158);
        String* _1000045 = &_1000046; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _1000048 = StringCopy_str(_165);
        String* _1000047 = &_1000048; // ref
        String _1000044 = String_append(_1000045, _1000047);
        String* _1000043 = &_1000044; // ref
        String _1000040 = String_append(_1000041, _1000043);
        String* _1000039 = &_1000040; // ref
        String _1000038 = String_copy(_1000039);
        String* _173 = &_1000038; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_1000016);
        String_delete(_1000018);
        String_delete(_1000020);
        String_delete(_1000022);
        String_delete(_1000024);
        String_delete(_1000026);
        String_delete(_1000027);
        String_delete(_1000029);
        String_delete(_1000031);
        String_delete(_1000033);
        String_delete(_1000035);
        String_delete(_1000037);
        String_delete(_1000038);
        String_delete(_1000040);
        String_delete(_1000042);
        String_delete(_1000044);
        String_delete(_1000046);
        String_delete(_1000048);
        String_delete(_137);
        _188 = _187;
    }
    return _188;
}

TestState Test_display_MINUS_test__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, bool is_MINUS_success) {
    TestState _188;
    if (is_MINUS_success) {
        ColorId _14 = Color_Id_Green();
        static String _22 = "Test '";
        String *_22_ref = &_22;
        String _23 = String_copy(_22_ref);
        String _1000008 = StringCopy_str(_23);
        String* _1000007 = &_1000008; // ref
        String _32 = String_copy(descr);
        String _1000012 = StringCopy_str(_32);
        String* _1000011 = &_1000012; // ref
        static String _38 = "' passed\n";
        String *_38_ref = &_38;
        String _39 = String_copy(_38_ref);
        String _1000014 = StringCopy_str(_39);
        String* _1000013 = &_1000014; // ref
        String _1000010 = String_append(_1000011, _1000013);
        String* _1000009 = &_1000010; // ref
        String _1000006 = String_append(_1000007, _1000009);
        String* _1000005 = &_1000006; // ref
        String _1000004 = String_copy(_1000005);
        String* _47 = &_1000004; // ref
        IO_colorize(_14, _47);
        TestState _52 = Test_State_copy(state);
        Lambda _54 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _55 = &_54; // ref
        TestState _56 = Test_State_update_MINUS_passed(_52, _55);
        TestState _57 = _56;
        String_delete(_1000004);
        String_delete(_1000006);
        String_delete(_1000008);
        String_delete(_1000010);
        String_delete(_1000012);
        String_delete(_1000014);
        _188 = _57;
    } else {
        ColorId _61 = Color_Id_Red();
        IO_color(_61);
        static String _71 = "Test '";
        String *_71_ref = &_71;
        String _72 = String_copy(_71_ref);
        String _1000020 = StringCopy_str(_72);
        String* _1000019 = &_1000020; // ref
        String _81 = String_copy(descr);
        String _1000024 = StringCopy_str(_81);
        String* _1000023 = &_1000024; // ref
        static String _87 = "' failed:";
        String *_87_ref = &_87;
        String _88 = String_copy(_87_ref);
        String _1000026 = StringCopy_str(_88);
        String* _1000025 = &_1000026; // ref
        String _1000022 = String_append(_1000023, _1000025);
        String* _1000021 = &_1000022; // ref
        String _1000018 = String_append(_1000019, _1000021);
        String* _1000017 = &_1000018; // ref
        String _1000016 = String_copy(_1000017);
        String* _96 = &_1000016; // ref
        IO_println(_96);
        static String _106 = "\tExpected ";
        String *_106_ref = &_106;
        String _107 = String_copy(_106_ref);
        String _1000031 = StringCopy_str(_107);
        String* _1000030 = &_1000031; // ref
        String _116 = String_copy(what);
        String _1000035 = StringCopy_str(_116);
        String* _1000034 = &_1000035; // ref
        static String _122 = ": '";
        String *_122_ref = &_122;
        String _123 = String_copy(_122_ref);
        String _1000037 = StringCopy_str(_123);
        String* _1000036 = &_1000037; // ref
        String _1000033 = String_append(_1000034, _1000036);
        String* _1000032 = &_1000033; // ref
        String _1000029 = String_append(_1000030, _1000032);
        String* _1000028 = &_1000029; // ref
        String _1000027 = String_copy(_1000028);
        String* _131 = &_1000027; // ref
        IO_print(_131);
        String _137 = Int_str(expected);
        String* _138 = &_137; // ref
        IO_print(_138);
        static String _148 = "', actual value: '";
        String *_148_ref = &_148;
        String _149 = String_copy(_148_ref);
        String _1000042 = StringCopy_str(_149);
        String* _1000041 = &_1000042; // ref
        String _158 = Int_str(actual);
        String _1000046 = StringCopy_str(_158);
        String* _1000045 = &_1000046; // ref
        static String _164 = "'";
        String *_164_ref = &_164;
        String _165 = String_copy(_164_ref);
        String _1000048 = StringCopy_str(_165);
        String* _1000047 = &_1000048; // ref
        String _1000044 = String_append(_1000045, _1000047);
        String* _1000043 = &_1000044; // ref
        String _1000040 = String_append(_1000041, _1000043);
        String* _1000039 = &_1000040; // ref
        String _1000038 = String_copy(_1000039);
        String* _173 = &_1000038; // ref
        IO_println(_173);
        ColorId _177 = Color_Id_Reset();
        IO_color(_177);
        TestState _182 = Test_State_copy(state);
        Lambda _184 = { .callback = (void*)Int_inc, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Int.inc (LookupGlobal ExternalCode AFunction)
        Lambda* _185 = &_184; // ref
        TestState _186 = Test_State_update_MINUS_failed(_182, _185);
        TestState _187 = _186;
        String_delete(_1000016);
        String_delete(_1000018);
        String_delete(_1000020);
        String_delete(_1000022);
        String_delete(_1000024);
        String_delete(_1000026);
        String_delete(_1000027);
        String_delete(_1000029);
        String_delete(_1000031);
        String_delete(_1000033);
        String_delete(_1000035);
        String_delete(_1000037);
        String_delete(_1000038);
        String_delete(_1000040);
        String_delete(_1000042);
        String_delete(_1000044);
        String_delete(_1000046);
        String_delete(_1000048);
        String_delete(_137);
        _188 = _187;
    }
    return _188;
}

void Test_handle_MINUS_signal__void(int x) {
    System_exit__void(x);
}

TestState Test_handler__Datetime_MUL__Datetime_MUL__String_String(TestState* state, Datetime* expected, Datetime* actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, Datetime*, Datetime*))op.callback)(op.env, expected, actual) : ((bool(*)(Datetime*, Datetime*))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__Datetime_MUL__Datetime_MUL__String_String(state, expected, actual, descr, what, _18);
    Function_delete__Datetime_MUL__Datetime_MUL__bool(op);
    return _19;
}

TestState Test_handler__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_String(TestState* state, Result__Datetime_String* expected, Result__Datetime_String* actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, Result__Datetime_String*, Result__Datetime_String*))op.callback)(op.env, expected, actual) : ((bool(*)(Result__Datetime_String*, Result__Datetime_String*))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__Result__Datetime_String_MUL__Result__Datetime_String_MUL__String_String(state, expected, actual, descr, what, _18);
    Function_delete__Result__Datetime_String_MUL__Result__Datetime_String_MUL__bool(op);
    return _19;
}

TestState Test_handler__String_MUL__String_MUL__String_String(TestState* state, String* expected, String* actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, String*, String*))op.callback)(op.env, expected, actual) : ((bool(*)(String*, String*))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__String_MUL__String_MUL__String_String(state, expected, actual, descr, what, _18);
    Function_delete__String_MUL__String_MUL__bool(op);
    return _19;
}

TestState Test_handler__bool_bool_String_String(TestState* state, bool expected, bool actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, bool, bool))op.callback)(op.env, expected, actual) : ((bool(*)(bool, bool))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__bool_bool_String_String(state, expected, actual, descr, what, _18);
    Function_delete__bool_bool_bool(op);
    return _19;
}

TestState Test_handler__int_int_String_String(TestState* state, int expected, int actual, String* descr, String* what, Lambda op) {
    bool _18 = op.env ? ((bool(*)(LambdaEnv, int, int))op.callback)(op.env, expected, actual) : ((bool(*)(int, int))op.callback)(expected, actual);
    TestState _19 = Test_display_MINUS_test__int_int_String_String(state, expected, actual, descr, what, _18);
    Function_delete__int_int_bool(op);
    return _19;
}

void Test_print_MINUS_test_MINUS_results(TestState* state) {
    /* let */ {
        int* _9 = Test_State_passed(state);
        int _10 = Int_copy(_9);
        int passed = _10;
        int* _15 = Test_State_failed(state);
        int _16 = Int_copy(_15);
        int failed = _16;
        static String _20 = "Results:";
        String *_20_ref = &_20;
        IO_println(_20_ref);
        int _27 = Int__PLUS_(passed, failed);
        bool _29 = Int__GT_(_27, 0);
        if (_29) {
            ColorId _33 = Color_Id_Green();
            IO_color(_33);
            bool _39 = Int__GT_(passed, 0);
            if (_39) {
                static String _44 = "\t|";
                String *_44_ref = &_44;
                String _49 = String_allocate(passed, 61/*'='*/);
                String* _50 = &_49; // ref
                String _51 = String_append(_44_ref, _50);
                String* _52 = &_51; // ref
                IO_print(_52);
                String_delete(_49);
                String_delete(_51);
            } else {
                /* () */
            }
            bool _63 = Int__EQ_(failed, 0);
            if (_63) {
                static String _66 = "|";
                String *_66_ref = &_66;
                IO_print(_66_ref);
            } else {
                /* () */
            }
            ColorId _75 = Color_Id_Red();
            IO_color(_75);
            bool _81 = Int__EQ_(passed, 0);
            if (_81) {
                static String _84 = "\t|";
                String *_84_ref = &_84;
                IO_print(_84_ref);
            } else {
                /* () */
            }
            bool _95 = Int__GT_(failed, 0);
            if (_95) {
                String _104 = String_allocate(failed, 61/*'='*/);
                String* _105 = &_104; // ref
                static String _106 = "|";
                String *_106_ref = &_106;
                String _107 = String_append(_105, _106_ref);
                String* _108 = &_107; // ref
                IO_print(_108);
                String_delete(_104);
                String_delete(_107);
            } else {
                /* () */
            }
            static String _116 = "";
            String *_116_ref = &_116;
            IO_println(_116_ref);
        } else {
            /* () */
        }
        ColorId _125 = Color_Id_Green();
        IO_color(_125);
        static String _128 = "\tPassed: ";
        String *_128_ref = &_128;
        IO_print(_128_ref);
        String _134 = Int_str(passed);
        String* _135 = &_134; // ref
        IO_print(_135);
        ColorId _139 = Color_Id_Red();
        IO_color(_139);
        static String _142 = "\tFailed: ";
        String *_142_ref = &_142;
        IO_print(_142_ref);
        String _148 = Int_str(failed);
        String* _149 = &_148; // ref
        IO_println(_149);
        ColorId _153 = Color_Id_Reset();
        IO_color(_153);
        String_delete(_134);
        String_delete(_148);
    }
}

TestState Test_reset(TestState state) {
    TestState _8 = Test_State_set_MINUS_passed(state, 0);
    TestState _10 = Test_State_set_MINUS_failed(_8, 0);
    return _10;
}

int Test_run_MINUS_child(Lambda x) {
    int _39;
    /* let */ {
        int _7 = fork();
        int pid = _7;
        int status = 0;
        int _38;
        bool _15 = Int__EQ_(pid, 0);
        if (_15) {
            x.env ? ((void(*)(LambdaEnv))x.callback)(x.env) : ((void(*)())x.callback)();
            int _20 = 0;
            _38 = _20;
        } else {
            /* let */ {
                int* _28 = &status; // ref
                int* _29 = Pointer_address__int(_28);
                int _30 = wait(_29);
                int _ = _30;
                /* () */
            }
            int _36 = WEXITSTATUS(status);
            int _37 = _36;
            _38 = _37;
        }
        _39 = _38;
    }
    Function_delete__void(x);
    return _39;
}

int Test_run_MINUS_child_MINUS_signals(Lambda x) {
    int _59;
    /* let */ {
        int _7 = fork();
        int pid = _7;
        int status = 0;
        int _58;
        bool _15 = Int__EQ_(pid, 0);
        if (_15) {
            Lambda _19 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGABRT, _19.callback);
            Lambda _23 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGFPE, _23.callback);
            Lambda _27 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGILL, _27.callback);
            Lambda _31 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGSEGV, _31.callback);
            Lambda _35 = { .callback = (void*)Test_handle_MINUS_signal__void, .env = NULL, .delete = NULL, .copy = NULL }; //Sym Test.handle-signal__void (LookupGlobal CarpLand AFunction)
            signal(SIGTERM, _35.callback);
            x.env ? ((void(*)(LambdaEnv))x.callback)(x.env) : ((void(*)())x.callback)();
            int _40 = 0;
            _58 = _40;
        } else {
            /* let */ {
                int* _48 = &status; // ref
                int* _49 = Pointer_address__int(_48);
                int _50 = wait(_49);
                int _ = _50;
                /* () */
            }
            int _56 = WEXITSTATUS(status);
            int _57 = _56;
            _58 = _57;
        }
        _59 = _58;
    }
    Function_delete__void(x);
    return _59;
}

Datetime Timedelta_add(Datetime* dt, Timedelta* delta) {
    int* _10 = Timedelta_seconds_MINUS_(delta);
    int _11 = Int_copy(_10);
    Datetime _12 = Datetime_add_MINUS_seconds(dt, _11);
    return _12;
}

Timedelta Timedelta_copy(Timedelta* pRef) {
    Timedelta copy = *pRef;
    /* Ignore non-managed member 'seconds_MINUS_' : Int */
    return copy;
}

Timedelta Timedelta_days(int n) {
    int _8 = Int__MUL_(n, 24);
    Timedelta _9 = Timedelta_hours(_8);
    return _9;
}

void Timedelta_delete(Timedelta p) {
    /* Ignore non-managed member 'seconds_MINUS_' : Int */
}

Timedelta Timedelta_hours(int n) {
    int _8 = Int__MUL_(n, 60);
    Timedelta _9 = Timedelta_minutes(_8);
    return _9;
}

Timedelta Timedelta_init(int seconds_MINUS_) {
    Timedelta instance;
    instance.seconds_MINUS_ = seconds_MINUS_;
    return instance;
}

Timedelta Timedelta_minutes(int n) {
    int _8 = Int__MUL_(n, 60);
    Timedelta _9 = Timedelta_seconds(_8);
    return _9;
}

String Timedelta_prn(Timedelta *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Timedelta");
  temp = Int_prn(p->seconds_MINUS_); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Timedelta");
  temp = Int_prn(p->seconds_MINUS_);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Timedelta Timedelta_seconds(int n) {
    Timedelta _6 = Timedelta_init(n);
    return _6;
}

int* Timedelta_seconds_MINUS_(Timedelta* p) { return (&(p->seconds_MINUS_)); }

Timedelta Timedelta_set_MINUS_seconds_MINUS_(Timedelta p, int newValue) {
    /* Ignore non-managed member 'seconds_MINUS_' : Int */
    p.seconds_MINUS_ = newValue;
    return p;
}


void Timedelta_set_MINUS_seconds_MINUS__BANG_(Timedelta* pRef, int newValue) {
    /* Ignore non-managed member 'seconds_MINUS_' : Int */
    pRef->seconds_MINUS_ = newValue;
}


String Timedelta_str(Timedelta *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Timedelta");
  temp = Int_prn(p->seconds_MINUS_); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Timedelta");
  temp = Int_prn(p->seconds_MINUS_);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Datetime Timedelta_sub(Datetime* dt, Timedelta* delta) {
    int* _11 = Timedelta_seconds_MINUS_(delta);
    int _12 = Int_copy(_11);
    int _13 = Int_neg(_12);
    Datetime _14 = Datetime_add_MINUS_seconds(dt, _13);
    return _14;
}

Timedelta Timedelta_update_MINUS_seconds_MINUS_(Timedelta p, Lambda *updater) {
    p.seconds_MINUS_ = (*updater).env ? ((Fn__LambdaEnv_int_int)(*updater).callback)((*updater).env, p.seconds_MINUS_) : ((Fn__int_int)(*updater).callback)(p.seconds_MINUS_);
    return p;
}


Timedelta Timedelta_weeks(int n) {
    int _8 = Int__MUL_(n, 7);
    Timedelta _9 = Timedelta_days(_8);
    return _9;
}

bool Timezone__EQ_(Timezone* o1, Timezone* o2) {
    bool _50;
    bool* _9 = Timezone_dst_QMARK_(o1);
    bool* _12 = Timezone_dst_QMARK_(o2);
    bool _13 = RefBool__EQ_(_9, _12);
    if (_13) {
        bool _45;
        Long* _19 = Timezone_delta(o1);
        Long* _22 = Timezone_delta(o2);
        bool _23 = LongRef__EQ_(_19, _22);
        if (_23) {
            bool _40;
            String* _29 = Timezone_name(o1);
            String* _32 = Timezone_name(o2);
            bool _33 = String__EQ_(_29, _32);
            if (_33) {
                bool _36 = true;
                _40 = _36;
            } else {
                bool _39 = false;
                _40 = _39;
            }
            bool _41 = _40;
            _45 = _41;
        } else {
            bool _44 = false;
            _45 = _44;
        }
        bool _46 = _45;
        _50 = _46;
    } else {
        bool _49 = false;
        _50 = _49;
    }
    return _50;
}

Timezone Timezone_copy(Timezone* pRef) {
    Timezone copy = *pRef;
    copy.name = String_copy(&(pRef->name));
    /* Ignore non-managed member 'delta' : Long */
    /* Ignore non-managed member 'dst_QMARK_' : Bool */
    return copy;
}

void Timezone_delete(Timezone p) {
    String_delete(p.name);
    /* Ignore non-managed member 'delta' : Long */
    /* Ignore non-managed member 'dst_QMARK_' : Bool */
}

Long* Timezone_delta(Timezone* p) { return (&(p->delta)); }

bool* Timezone_dst_QMARK_(Timezone* p) { return (&(p->dst_QMARK_)); }

Timezone Timezone_init(String name, Long delta, bool dst_QMARK_) {
    Timezone instance;
    instance.name = name;
    instance.delta = delta;
    instance.dst_QMARK_ = dst_QMARK_;
    return instance;
}

String* Timezone_name(Timezone* p) { return (&(p->name)); }

String Timezone_prn(Timezone *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Timezone");
  temp = String_prn(&p->name); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Long_prn(p->delta); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->dst_QMARK_); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Timezone");
  temp = String_prn(&p->name);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Long_prn(p->delta);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->dst_QMARK_);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Timezone Timezone_set_MINUS_delta(Timezone p, Long newValue) {
    /* Ignore non-managed member 'delta' : Long */
    p.delta = newValue;
    return p;
}


void Timezone_set_MINUS_delta_BANG_(Timezone* pRef, Long newValue) {
    /* Ignore non-managed member 'delta' : Long */
    pRef->delta = newValue;
}


Timezone Timezone_set_MINUS_dst_QMARK_(Timezone p, bool newValue) {
    /* Ignore non-managed member 'dst_QMARK_' : Bool */
    p.dst_QMARK_ = newValue;
    return p;
}


void Timezone_set_MINUS_dst_QMARK__BANG_(Timezone* pRef, bool newValue) {
    /* Ignore non-managed member 'dst_QMARK_' : Bool */
    pRef->dst_QMARK_ = newValue;
}


Timezone Timezone_set_MINUS_name(Timezone p, String newValue) {
    String_delete(p.name);
    p.name = newValue;
    return p;
}


void Timezone_set_MINUS_name_BANG_(Timezone* pRef, String newValue) {
    String_delete(pRef->name);
    pRef->name = newValue;
}


String Timezone_str(Timezone *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Timezone");
  temp = String_prn(&p->name); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Long_prn(p->delta); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->dst_QMARK_); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  bufferPtr += snprintf(bufferPtr, size - (bufferPtr - buffer), "(%s ", "Timezone");
  temp = String_prn(&p->name);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Long_prn(p->delta);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->dst_QMARK_);
  tempsize = snprintf(bufferPtr, size - (bufferPtr - buffer), "%s ", temp);
  bufferPtr += tempsize;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size - (bufferPtr - buffer), ")");
  return buffer;
}

Timezone Timezone_update_MINUS_delta(Timezone p, Lambda *updater) {
    p.delta = (*updater).env ? ((Fn__LambdaEnv_Long_Long)(*updater).callback)((*updater).env, p.delta) : ((Fn__Long_Long)(*updater).callback)(p.delta);
    return p;
}


Timezone Timezone_update_MINUS_dst_QMARK_(Timezone p, Lambda *updater) {
    p.dst_QMARK_ = (*updater).env ? ((Fn__LambdaEnv_bool_bool)(*updater).callback)((*updater).env, p.dst_QMARK_) : ((Fn__bool_bool)(*updater).callback)(p.dst_QMARK_);
    return p;
}


Timezone Timezone_update_MINUS_name(Timezone p, Lambda *updater) {
    p.name = (*updater).env ? ((Fn__LambdaEnv_String_String)(*updater).callback)((*updater).env, p.name) : ((Fn__String_String)(*updater).callback)(p.name);
    return p;
}


Timezone Timezone_zero() {
    String _5 = String_zero();
    Long _7 = Long_zero();
    bool _9 = Bool_zero();
    Timezone _10 = Timezone_init(_5, _7, _9);
    return _10;
}

Uint16 Uint16_blit(Uint16 x) {
    Uint16 _7 = x; // From the 'the' function.
    return _7;
}

int Uint16_hash(Uint16* k) {
    Uint16 _8 = Uint16_copy(k);
    Long _9 = Uint16_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint16_prn(Uint16 a) {
    String _6 = Uint16_str(a);
    return _6;
}

Uint16 Uint16_zero() {
    Uint16 _5 = Uint16_from_MINUS_long(0l);
    return _5;
}

bool Uint16Extra__EQ_(Uint16* a, Uint16* b) {
    Uint16 _8 = Uint16_copy(a);
    Uint16 _11 = Uint16_copy(b);
    bool _12 = Uint16__EQ_(_8, _11);
    return _12;
}

String Uint16Extra_prn(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_prn(_7);
    return _8;
}

String Uint16Extra_str(Uint16* a) {
    Uint16 _7 = Uint16_copy(a);
    String _8 = Uint16_str(_7);
    return _8;
}

Uint32 Uint32_blit(Uint32 x) {
    Uint32 _7 = x; // From the 'the' function.
    return _7;
}

int Uint32_hash(Uint32* k) {
    Uint32 _8 = Uint32_copy(k);
    Long _9 = Uint32_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint32_prn(Uint32 a) {
    String _6 = Uint32_str(a);
    return _6;
}

Uint32 Uint32_zero() {
    Uint32 _5 = Uint32_from_MINUS_long(0l);
    return _5;
}

bool Uint32Extra__EQ_(Uint32* a, Uint32* b) {
    Uint32 _8 = Uint32_copy(a);
    Uint32 _11 = Uint32_copy(b);
    bool _12 = Uint32__EQ_(_8, _11);
    return _12;
}

String Uint32Extra_prn(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_prn(_7);
    return _8;
}

String Uint32Extra_str(Uint32* a) {
    Uint32 _7 = Uint32_copy(a);
    String _8 = Uint32_str(_7);
    return _8;
}

Uint64 Uint64_blit(Uint64 x) {
    Uint64 _7 = x; // From the 'the' function.
    return _7;
}

int Uint64_hash(Uint64* k) {
    Uint64 _8 = Uint64_copy(k);
    Long _9 = Uint64_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint64_prn(Uint64 a) {
    String _6 = Uint64_str(a);
    return _6;
}

Uint64 Uint64_zero() {
    Uint64 _5 = Uint64_from_MINUS_long(0l);
    return _5;
}

bool Uint64Extra__EQ_(Uint64* a, Uint64* b) {
    Uint64 _8 = Uint64_copy(a);
    Uint64 _11 = Uint64_copy(b);
    bool _12 = Uint64__EQ_(_8, _11);
    return _12;
}

String Uint64Extra_prn(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_prn(_7);
    return _8;
}

String Uint64Extra_str(Uint64* a) {
    Uint64 _7 = Uint64_copy(a);
    String _8 = Uint64_str(_7);
    return _8;
}

Uint8 Uint8_blit(Uint8 x) {
    Uint8 _7 = x; // From the 'the' function.
    return _7;
}

int Uint8_hash(Uint8* k) {
    Uint8 _8 = Uint8_copy(k);
    Long _9 = Uint8_to_MINUS_long(_8);
    int _10 = Long_to_MINUS_int(_9);
    return _10;
}

String Uint8_prn(Uint8 a) {
    String _6 = Uint8_str(a);
    return _6;
}

Uint8 Uint8_zero() {
    Uint8 _5 = Uint8_from_MINUS_long(0l);
    return _5;
}

bool Uint8Extra__EQ_(Uint8* a, Uint8* b) {
    Uint8 _8 = Uint8_copy(a);
    Uint8 _11 = Uint8_copy(b);
    bool _12 = Uint8__EQ_(_8, _11);
    return _12;
}

String Uint8Extra_prn(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_prn(_7);
    return _8;
}

String Uint8Extra_str(Uint8* a) {
    Uint8 _7 = Uint8_copy(a);
    String _8 = Uint8_str(_7);
    return _8;
}

bool Unit__EQ_() {
    return true;
}

void Unit_copy() {
    /* () */
}

String Unit_prn() {
    static String _5 = "()";
    String *_5_ref = &_5;
    String _6 = String_copy(_5_ref);
    return _6;
}

void Unit_zero() {
    /* () */
}

bool UnitRef__EQ_() {
    return true;
}

int id__int(int x) {
    return x;
}

int main(int argc, char** argv) {
    carp_init_globals(argc, argv);
    int _1000003;
    /* let */ {
        TestState _1000006 = Test_State_init(0, 0);
        TestState* _1000005 = &_1000006; // ref
        TestState* test = _1000005;
        Datetime _26 = Datetime_date(2024, 3, 15);
        Datetime* _27 = &_26; // ref
        int* _28 = Datetime_year(_27);
        int _29 = Int_copy(_28);
        static String _30 = "date creates correct year";
        String *_30_ref = &_30;
        TestState _31 = Test_assert_MINUS_equal__int_String(test, 2024, _29, _30_ref);
        TestState* _1000011 = &_31; // ref
        test = _1000011;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _47 = Datetime_date(2024, 3, 15);
        Datetime* _48 = &_47; // ref
        int* _49 = Datetime_month(_48);
        int _50 = Int_copy(_49);
        static String _51 = "date creates correct month";
        String *_51_ref = &_51;
        TestState _52 = Test_assert_MINUS_equal__int_String(test, 3, _50, _51_ref);
        TestState* _1000014 = &_52; // ref
        test = _1000014;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _68 = Datetime_date(2024, 3, 15);
        Datetime* _69 = &_68; // ref
        int* _70 = Datetime_day(_69);
        int _71 = Int_copy(_70);
        static String _72 = "date creates correct day";
        String *_72_ref = &_72;
        TestState _73 = Test_assert_MINUS_equal__int_String(test, 15, _71, _72_ref);
        TestState* _1000017 = &_73; // ref
        test = _1000017;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _88 = Datetime_date(2024, 3, 15);
        Datetime* _89 = &_88; // ref
        Maybe__int* _90 = Datetime_hours(_89);
        bool _91 = Maybe_nothing_QMARK___int(_90);
        static String _92 = "date has no hours";
        String *_92_ref = &_92;
        TestState _93 = Test_assert_MINUS_true__String(test, _91, _92_ref);
        TestState* _1000020 = &_93; // ref
        test = _1000020;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _108 = Datetime_date(2024, 3, 15);
        Datetime* _109 = &_108; // ref
        Maybe__int* _110 = Datetime_minutes(_109);
        bool _111 = Maybe_nothing_QMARK___int(_110);
        static String _112 = "date has no minutes";
        String *_112_ref = &_112;
        TestState _113 = Test_assert_MINUS_true__String(test, _111, _112_ref);
        TestState* _1000023 = &_113; // ref
        test = _1000023;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _128 = Datetime_date(2024, 3, 15);
        Datetime* _129 = &_128; // ref
        Maybe__int* _130 = Datetime_seconds(_129);
        bool _131 = Maybe_nothing_QMARK___int(_130);
        static String _132 = "date has no seconds";
        String *_132_ref = &_132;
        TestState _133 = Test_assert_MINUS_true__String(test, _131, _132_ref);
        TestState* _1000026 = &_133; // ref
        test = _1000026;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _147 = Datetime_date(2000, 1, 1);
        Datetime* _148 = &_147; // ref
        bool _149 = Datetime_leap_QMARK_(_148);
        static String _150 = "2000 is a leap year";
        String *_150_ref = &_150;
        TestState _151 = Test_assert_MINUS_true__String(test, _149, _150_ref);
        TestState* _1000029 = &_151; // ref
        test = _1000029;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _165 = Datetime_date(2024, 1, 1);
        Datetime* _166 = &_165; // ref
        bool _167 = Datetime_leap_QMARK_(_166);
        static String _168 = "2024 is a leap year";
        String *_168_ref = &_168;
        TestState _169 = Test_assert_MINUS_true__String(test, _167, _168_ref);
        TestState* _1000032 = &_169; // ref
        test = _1000032;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _183 = Datetime_date(1900, 1, 1);
        Datetime* _184 = &_183; // ref
        bool _185 = Datetime_leap_QMARK_(_184);
        static String _186 = "1900 is not a leap year";
        String *_186_ref = &_186;
        TestState _187 = Test_assert_MINUS_false__String(test, _185, _186_ref);
        TestState* _1000035 = &_187; // ref
        test = _1000035;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _201 = Datetime_date(2023, 1, 1);
        Datetime* _202 = &_201; // ref
        bool _203 = Datetime_leap_QMARK_(_202);
        static String _204 = "2023 is not a leap year";
        String *_204_ref = &_204;
        TestState _205 = Test_assert_MINUS_false__String(test, _203, _204_ref);
        TestState* _1000038 = &_205; // ref
        test = _1000038;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _220 = Datetime_date(1, 1, 1);
        Datetime* _221 = &_220; // ref
        int _222 = Datetime_to_MINUS_ordinal(_221);
        static String _223 = "ordinal of 0001-01-01 is 1";
        String *_223_ref = &_223;
        TestState _224 = Test_assert_MINUS_equal__int_String(test, 1, _222, _223_ref);
        TestState* _1000041 = &_224; // ref
        test = _1000041;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _239 = Datetime_date(2000, 1, 1);
        Datetime* _240 = &_239; // ref
        int _241 = Datetime_to_MINUS_ordinal(_240);
        static String _242 = "ordinal of 2000-01-01";
        String *_242_ref = &_242;
        TestState _243 = Test_assert_MINUS_equal__int_String(test, 730120, _241, _242_ref);
        TestState* _1000044 = &_243; // ref
        test = _1000044;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _256 = Datetime_date(2000, 1, 1);
        Datetime* _257 = &_256; // ref
        Datetime _261 = Datetime_from_MINUS_ordinal__int(730120);
        Datetime* _262 = &_261; // ref
        static String _263 = "from-ordinal roundtrips with 2000-01-01";
        String *_263_ref = &_263;
        TestState _264 = Test_assert_MINUS_equal__Datetime_MUL__String(test, _257, _262, _263_ref);
        TestState* _1000047 = &_264; // ref
        test = _1000047;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _277 = Datetime_date(1, 1, 1);
        Datetime* _278 = &_277; // ref
        Datetime _282 = Datetime_from_MINUS_ordinal__int(1);
        Datetime* _283 = &_282; // ref
        static String _284 = "from-ordinal of 1 is 0001-01-01";
        String *_284_ref = &_284;
        TestState _285 = Test_assert_MINUS_equal__Datetime_MUL__String(test, _278, _283, _284_ref);
        TestState* _1000050 = &_285; // ref
        test = _1000050;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _300 = Datetime_date(2024, 3, 15);
        Datetime* _301 = &_300; // ref
        int _302 = Datetime_weekday(_301);
        static String _303 = "2024-03-15 is weekday 4 (Friday)";
        String *_303_ref = &_303;
        TestState _304 = Test_assert_MINUS_equal__int_String(test, 4, _302, _303_ref);
        TestState* _1000053 = &_304; // ref
        test = _1000053;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _319 = Datetime_date(2024, 3, 15);
        Datetime* _320 = &_319; // ref
        int _321 = Datetime_isoweekday(_320);
        static String _322 = "2024-03-15 is isoweekday 5 (Friday)";
        String *_322_ref = &_322;
        TestState _323 = Test_assert_MINUS_equal__int_String(test, 5, _321, _322_ref);
        TestState* _1000056 = &_323; // ref
        test = _1000056;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _338 = Datetime_date(2024, 3, 18);
        Datetime* _339 = &_338; // ref
        int _340 = Datetime_weekday(_339);
        static String _341 = "2024-03-18 is weekday 0 (Monday)";
        String *_341_ref = &_341;
        TestState _342 = Test_assert_MINUS_equal__int_String(test, 0, _340, _341_ref);
        TestState* _1000059 = &_342; // ref
        test = _1000059;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _357 = Datetime_date(2024, 3, 18);
        Datetime* _358 = &_357; // ref
        int _359 = Datetime_isoweekday(_358);
        static String _360 = "2024-03-18 is isoweekday 1 (Monday)";
        String *_360_ref = &_360;
        TestState _361 = Test_assert_MINUS_equal__int_String(test, 1, _359, _360_ref);
        TestState* _1000062 = &_361; // ref
        test = _1000062;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _376 = Datetime_date(2024, 1, 1);
        Datetime* _377 = &_376; // ref
        int _378 = Datetime_yearday(_377);
        static String _379 = "Jan 1 is yearday 1";
        String *_379_ref = &_379;
        TestState _380 = Test_assert_MINUS_equal__int_String(test, 1, _378, _379_ref);
        TestState* _1000065 = &_380; // ref
        test = _1000065;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _395 = Datetime_date(2024, 2, 29);
        Datetime* _396 = &_395; // ref
        int _397 = Datetime_yearday(_396);
        static String _398 = "Feb 29 in leap year is yearday 60";
        String *_398_ref = &_398;
        TestState _399 = Test_assert_MINUS_equal__int_String(test, 60, _397, _398_ref);
        TestState* _1000068 = &_399; // ref
        test = _1000068;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _414 = Datetime_date(2023, 12, 31);
        Datetime* _415 = &_414; // ref
        int _416 = Datetime_yearday(_415);
        static String _417 = "Dec 31 in non-leap year is yearday 365";
        String *_417_ref = &_417;
        TestState _418 = Test_assert_MINUS_equal__int_String(test, 365, _416, _417_ref);
        TestState* _1000071 = &_418; // ref
        test = _1000071;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _428 = "Friday";
        String *_428_ref = &_428;
        String _429 = String_copy(_428_ref);
        String* _430 = &_429; // ref
        Datetime _438 = Datetime_date(2024, 3, 15);
        Datetime* _439 = &_438; // ref
        String _440 = Datetime_weekday_MINUS_string(_439);
        String* _441 = &_440; // ref
        static String _442 = "weekday-string of Friday";
        String *_442_ref = &_442;
        TestState _443 = Test_assert_MINUS_equal__String_MUL__String(test, _430, _441, _442_ref);
        TestState* _1000074 = &_443; // ref
        test = _1000074;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _453 = "Fri";
        String *_453_ref = &_453;
        String _454 = String_copy(_453_ref);
        String* _455 = &_454; // ref
        Datetime _463 = Datetime_date(2024, 3, 15);
        Datetime* _464 = &_463; // ref
        String _465 = Datetime_weekday_MINUS_short_MINUS_string(_464);
        String* _466 = &_465; // ref
        static String _467 = "weekday-short-string of Friday";
        String *_467_ref = &_467;
        TestState _468 = Test_assert_MINUS_equal__String_MUL__String(test, _455, _466, _467_ref);
        TestState* _1000077 = &_468; // ref
        test = _1000077;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _478 = "Monday";
        String *_478_ref = &_478;
        String _479 = String_copy(_478_ref);
        String* _480 = &_479; // ref
        Datetime _488 = Datetime_date(2024, 3, 18);
        Datetime* _489 = &_488; // ref
        String _490 = Datetime_weekday_MINUS_string(_489);
        String* _491 = &_490; // ref
        static String _492 = "weekday-string of Monday";
        String *_492_ref = &_492;
        TestState _493 = Test_assert_MINUS_equal__String_MUL__String(test, _480, _491, _492_ref);
        TestState* _1000080 = &_493; // ref
        test = _1000080;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _503 = "March";
        String *_503_ref = &_503;
        String _504 = String_copy(_503_ref);
        String* _505 = &_504; // ref
        Datetime _513 = Datetime_date(2024, 3, 15);
        Datetime* _514 = &_513; // ref
        String _515 = Datetime_month_MINUS_string(_514);
        String* _516 = &_515; // ref
        static String _517 = "month-string of March";
        String *_517_ref = &_517;
        TestState _518 = Test_assert_MINUS_equal__String_MUL__String(test, _505, _516, _517_ref);
        TestState* _1000083 = &_518; // ref
        test = _1000083;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _528 = "Mar";
        String *_528_ref = &_528;
        String _529 = String_copy(_528_ref);
        String* _530 = &_529; // ref
        Datetime _538 = Datetime_date(2024, 3, 15);
        Datetime* _539 = &_538; // ref
        String _540 = Datetime_month_MINUS_short_MINUS_string(_539);
        String* _541 = &_540; // ref
        static String _542 = "month-short-string of March";
        String *_542_ref = &_542;
        TestState _543 = Test_assert_MINUS_equal__String_MUL__String(test, _530, _541, _542_ref);
        TestState* _1000086 = &_543; // ref
        test = _1000086;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _553 = "January";
        String *_553_ref = &_553;
        String _554 = String_copy(_553_ref);
        String* _555 = &_554; // ref
        Datetime _563 = Datetime_date(2024, 1, 1);
        Datetime* _564 = &_563; // ref
        String _565 = Datetime_month_MINUS_string(_564);
        String* _566 = &_565; // ref
        static String _567 = "month-string of January";
        String *_567_ref = &_567;
        TestState _568 = Test_assert_MINUS_equal__String_MUL__String(test, _555, _566, _567_ref);
        TestState* _1000089 = &_568; // ref
        test = _1000089;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _578 = "December";
        String *_578_ref = &_578;
        String _579 = String_copy(_578_ref);
        String* _580 = &_579; // ref
        Datetime _588 = Datetime_date(2024, 12, 25);
        Datetime* _589 = &_588; // ref
        String _590 = Datetime_month_MINUS_string(_589);
        String* _591 = &_590; // ref
        static String _592 = "month-string of December";
        String *_592_ref = &_592;
        TestState _593 = Test_assert_MINUS_equal__String_MUL__String(test, _580, _591, _592_ref);
        TestState* _1000092 = &_593; // ref
        test = _1000092;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _603 = "2024-03-15";
        String *_603_ref = &_603;
        String _604 = String_copy(_603_ref);
        String* _605 = &_604; // ref
        Datetime _613 = Datetime_date(2024, 3, 15);
        Datetime* _614 = &_613; // ref
        String _615 = Datetime_isoformat(_614);
        String* _616 = &_615; // ref
        static String _617 = "isoformat of 2024-03-15";
        String *_617_ref = &_617;
        TestState _618 = Test_assert_MINUS_equal__String_MUL__String(test, _605, _616, _617_ref);
        TestState* _1000095 = &_618; // ref
        test = _1000095;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _628 = "0001-01-01";
        String *_628_ref = &_628;
        String _629 = String_copy(_628_ref);
        String* _630 = &_629; // ref
        Datetime _638 = Datetime_date(1, 1, 1);
        Datetime* _639 = &_638; // ref
        String _640 = Datetime_isoformat(_639);
        String* _641 = &_640; // ref
        static String _642 = "isoformat zero-pads year";
        String *_642_ref = &_642;
        TestState _643 = Test_assert_MINUS_equal__String_MUL__String(test, _630, _641, _642_ref);
        TestState* _1000098 = &_643; // ref
        test = _1000098;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _653 = "00:00:00";
        String *_653_ref = &_653;
        String _654 = String_copy(_653_ref);
        String* _655 = &_654; // ref
        Datetime _663 = Datetime_date(2024, 3, 15);
        Datetime* _664 = &_663; // ref
        String _665 = Datetime_isotime(_664);
        String* _666 = &_665; // ref
        static String _667 = "isotime defaults to 00:00:00 for date-only";
        String *_667_ref = &_667;
        TestState _668 = Test_assert_MINUS_equal__String_MUL__String(test, _655, _666, _667_ref);
        TestState* _1000101 = &_668; // ref
        test = _1000101;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _678 = "14:30:45";
        String *_678_ref = &_678;
        String _679 = String_copy(_678_ref);
        String* _680 = &_679; // ref
        Maybe__int _690 = Maybe_Just__int(14);
        Maybe__int _693 = Maybe_Just__int(30);
        Maybe__int _696 = Maybe_Just__int(45);
        Maybe__int _698 = Maybe_Nothing__int();
        Maybe__Timezone _700 = Maybe_Nothing__Timezone();
        Datetime _701 = Datetime_init(2024, 3, 15, _690, _693, _696, _698, _700);
        Datetime* _702 = &_701; // ref
        String _703 = Datetime_isotime(_702);
        String* _704 = &_703; // ref
        static String _705 = "isotime with explicit time";
        String *_705_ref = &_705;
        TestState _706 = Test_assert_MINUS_equal__String_MUL__String(test, _680, _704, _705_ref);
        TestState* _1000104 = &_706; // ref
        test = _1000104;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _720 = Datetime_date(2024, 3, 15);
        Datetime* _721 = &_720; // ref
        bool _722 = Datetime_utc_QMARK_(_721);
        static String _723 = "date with no timezone is utc";
        String *_723_ref = &_723;
        TestState _724 = Test_assert_MINUS_true__String(test, _722, _723_ref);
        TestState* _1000107 = &_724; // ref
        test = _1000107;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _739 = Maybe_Nothing__int();
        Maybe__int _741 = Maybe_Nothing__int();
        Maybe__int _743 = Maybe_Nothing__int();
        Maybe__int _745 = Maybe_Nothing__int();
        Timezone* _750 = &Timezone_utc; // ref
        Timezone _751 = Timezone_copy(_750);
        Maybe__Timezone _752 = Maybe_Just__Timezone(_751);
        Datetime _753 = Datetime_init(2024, 3, 15, _739, _741, _743, _745, _752);
        Datetime* _754 = &_753; // ref
        bool _755 = Datetime_utc_QMARK_(_754);
        static String _756 = "date with UTC timezone is utc";
        String *_756_ref = &_756;
        TestState _757 = Test_assert_MINUS_true__String(test, _755, _756_ref);
        TestState* _1000110 = &_757; // ref
        test = _1000110;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _772 = Maybe_Nothing__int();
        Maybe__int _774 = Maybe_Nothing__int();
        Maybe__int _776 = Maybe_Nothing__int();
        Maybe__int _778 = Maybe_Nothing__int();
        static String _782 = "EST";
        String *_782_ref = &_782;
        String _783 = String_copy(_782_ref);
        Timezone _786 = Timezone_init(_783, -18000l, false);
        Maybe__Timezone _787 = Maybe_Just__Timezone(_786);
        Datetime _788 = Datetime_init(2024, 3, 15, _772, _774, _776, _778, _787);
        Datetime* _789 = &_788; // ref
        bool _790 = Datetime_utc_QMARK_(_789);
        static String _791 = "date with non-UTC timezone is not utc";
        String *_791_ref = &_791;
        TestState _792 = Test_assert_MINUS_false__String(test, _790, _791_ref);
        TestState* _1000113 = &_792; // ref
        test = _1000113;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _806 = Datetime_date(2024, 3, 15);
        Datetime* _807 = &_806; // ref
        Datetime _813 = Datetime_date(2024, 3, 15);
        Datetime* _814 = &_813; // ref
        bool _815 = Datetime__EQ_(_807, _814);
        static String _816 = "equal dates are equal";
        String *_816_ref = &_816;
        TestState _817 = Test_assert_MINUS_true__String(test, _815, _816_ref);
        TestState* _1000116 = &_817; // ref
        test = _1000116;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _831 = Datetime_date(2024, 3, 15);
        Datetime* _832 = &_831; // ref
        Datetime _838 = Datetime_date(2024, 3, 16);
        Datetime* _839 = &_838; // ref
        bool _840 = Datetime__EQ_(_832, _839);
        static String _841 = "different dates are not equal";
        String *_841_ref = &_841;
        TestState _842 = Test_assert_MINUS_false__String(test, _840, _841_ref);
        TestState* _1000119 = &_842; // ref
        test = _1000119;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _852 = "00:00:30";
        String *_852_ref = &_852;
        String _853 = String_copy(_852_ref);
        String* _854 = &_853; // ref
        Maybe__int _866 = Maybe_Just__int(0);
        Maybe__int _869 = Maybe_Just__int(0);
        Maybe__int _872 = Maybe_Just__int(0);
        Maybe__int _874 = Maybe_Nothing__int();
        Maybe__Timezone _876 = Maybe_Nothing__Timezone();
        Datetime _877 = Datetime_init(2024, 1, 1, _866, _869, _872, _874, _876);
        Datetime* _878 = &_877; // ref
        Datetime _880 = Datetime_add_MINUS_seconds(_878, 30);
        Datetime* _881 = &_880; // ref
        String _882 = Datetime_isotime(_881);
        String* _883 = &_882; // ref
        static String _884 = "add 30 seconds";
        String *_884_ref = &_884;
        TestState _885 = Test_assert_MINUS_equal__String_MUL__String(test, _854, _883, _884_ref);
        TestState* _1000122 = &_885; // ref
        test = _1000122;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _895 = "00:01:00";
        String *_895_ref = &_895;
        String _896 = String_copy(_895_ref);
        String* _897 = &_896; // ref
        Maybe__int _909 = Maybe_Just__int(0);
        Maybe__int _912 = Maybe_Just__int(0);
        Maybe__int _915 = Maybe_Just__int(30);
        Maybe__int _917 = Maybe_Nothing__int();
        Maybe__Timezone _919 = Maybe_Nothing__Timezone();
        Datetime _920 = Datetime_init(2024, 1, 1, _909, _912, _915, _917, _919);
        Datetime* _921 = &_920; // ref
        Datetime _923 = Datetime_add_MINUS_seconds(_921, 30);
        Datetime* _924 = &_923; // ref
        String _925 = Datetime_isotime(_924);
        String* _926 = &_925; // ref
        static String _927 = "add 30 seconds wraps to next minute";
        String *_927_ref = &_927;
        TestState _928 = Test_assert_MINUS_equal__String_MUL__String(test, _897, _926, _927_ref);
        TestState* _1000125 = &_928; // ref
        test = _1000125;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _938 = "01:00:00";
        String *_938_ref = &_938;
        String _939 = String_copy(_938_ref);
        String* _940 = &_939; // ref
        Maybe__int _952 = Maybe_Just__int(0);
        Maybe__int _955 = Maybe_Just__int(0);
        Maybe__int _958 = Maybe_Just__int(0);
        Maybe__int _960 = Maybe_Nothing__int();
        Maybe__Timezone _962 = Maybe_Nothing__Timezone();
        Datetime _963 = Datetime_init(2024, 1, 1, _952, _955, _958, _960, _962);
        Datetime* _964 = &_963; // ref
        Datetime _966 = Datetime_add_MINUS_seconds(_964, 3600);
        Datetime* _967 = &_966; // ref
        String _968 = Datetime_isotime(_967);
        String* _969 = &_968; // ref
        static String _970 = "add 3600 seconds is one hour";
        String *_970_ref = &_970;
        TestState _971 = Test_assert_MINUS_equal__String_MUL__String(test, _940, _969, _970_ref);
        TestState* _1000128 = &_971; // ref
        test = _1000128;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _981 = "2024-03-15";
        String *_981_ref = &_981;
        String _982 = String_copy(_981_ref);
        String* _983 = &_982; // ref
        Datetime _991 = Datetime_date(2024, 3, 15);
        Datetime* _992 = &_991; // ref
        static String _993 = "%Y-%m-%d";
        String *_993_ref = &_993;
        String _994 = Datetime_strftime__Datetime_MUL_(_992, _993_ref);
        String* _995 = &_994; // ref
        static String _996 = "strftime %Y-%m-%d";
        String *_996_ref = &_996;
        TestState _997 = Test_assert_MINUS_equal__String_MUL__String(test, _983, _995, _996_ref);
        TestState* _1000131 = &_997; // ref
        test = _1000131;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1007 = "Fri";
        String *_1007_ref = &_1007;
        String _1008 = String_copy(_1007_ref);
        String* _1009 = &_1008; // ref
        Datetime _1017 = Datetime_date(2024, 3, 15);
        Datetime* _1018 = &_1017; // ref
        static String _1019 = "%a";
        String *_1019_ref = &_1019;
        String _1020 = Datetime_strftime__Datetime_MUL_(_1018, _1019_ref);
        String* _1021 = &_1020; // ref
        static String _1022 = "strftime %a abbreviated weekday";
        String *_1022_ref = &_1022;
        TestState _1023 = Test_assert_MINUS_equal__String_MUL__String(test, _1009, _1021, _1022_ref);
        TestState* _1000134 = &_1023; // ref
        test = _1000134;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1033 = "Friday";
        String *_1033_ref = &_1033;
        String _1034 = String_copy(_1033_ref);
        String* _1035 = &_1034; // ref
        Datetime _1043 = Datetime_date(2024, 3, 15);
        Datetime* _1044 = &_1043; // ref
        static String _1045 = "%A";
        String *_1045_ref = &_1045;
        String _1046 = Datetime_strftime__Datetime_MUL_(_1044, _1045_ref);
        String* _1047 = &_1046; // ref
        static String _1048 = "strftime %A full weekday";
        String *_1048_ref = &_1048;
        TestState _1049 = Test_assert_MINUS_equal__String_MUL__String(test, _1035, _1047, _1048_ref);
        TestState* _1000137 = &_1049; // ref
        test = _1000137;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1059 = "Mar";
        String *_1059_ref = &_1059;
        String _1060 = String_copy(_1059_ref);
        String* _1061 = &_1060; // ref
        Datetime _1069 = Datetime_date(2024, 3, 15);
        Datetime* _1070 = &_1069; // ref
        static String _1071 = "%b";
        String *_1071_ref = &_1071;
        String _1072 = Datetime_strftime__Datetime_MUL_(_1070, _1071_ref);
        String* _1073 = &_1072; // ref
        static String _1074 = "strftime %b abbreviated month";
        String *_1074_ref = &_1074;
        TestState _1075 = Test_assert_MINUS_equal__String_MUL__String(test, _1061, _1073, _1074_ref);
        TestState* _1000140 = &_1075; // ref
        test = _1000140;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1085 = "March";
        String *_1085_ref = &_1085;
        String _1086 = String_copy(_1085_ref);
        String* _1087 = &_1086; // ref
        Datetime _1095 = Datetime_date(2024, 3, 15);
        Datetime* _1096 = &_1095; // ref
        static String _1097 = "%B";
        String *_1097_ref = &_1097;
        String _1098 = Datetime_strftime__Datetime_MUL_(_1096, _1097_ref);
        String* _1099 = &_1098; // ref
        static String _1100 = "strftime %B full month";
        String *_1100_ref = &_1100;
        TestState _1101 = Test_assert_MINUS_equal__String_MUL__String(test, _1087, _1099, _1100_ref);
        TestState* _1000143 = &_1101; // ref
        test = _1000143;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1115 = Datetime_date(2024, 3, 16);
        Datetime* _1116 = &_1115; // ref
        Datetime _1122 = Datetime_date(2024, 3, 15);
        Datetime* _1123 = &_1122; // ref
        bool _1124 = Datetime__GT_(_1116, _1123);
        static String _1125 = "later date is greater";
        String *_1125_ref = &_1125;
        TestState _1126 = Test_assert_MINUS_true__String(test, _1124, _1125_ref);
        TestState* _1000146 = &_1126; // ref
        test = _1000146;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1140 = Datetime_date(2024, 3, 14);
        Datetime* _1141 = &_1140; // ref
        Datetime _1147 = Datetime_date(2024, 3, 15);
        Datetime* _1148 = &_1147; // ref
        bool _1149 = Datetime__LT_(_1141, _1148);
        static String _1150 = "earlier date is less";
        String *_1150_ref = &_1150;
        TestState _1151 = Test_assert_MINUS_true__String(test, _1149, _1150_ref);
        TestState* _1000149 = &_1151; // ref
        test = _1000149;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1161 = "00:05:00";
        String *_1161_ref = &_1161;
        String _1162 = String_copy(_1161_ref);
        String* _1163 = &_1162; // ref
        Maybe__int _1175 = Maybe_Just__int(0);
        Maybe__int _1178 = Maybe_Just__int(0);
        Maybe__int _1181 = Maybe_Just__int(0);
        Maybe__int _1183 = Maybe_Nothing__int();
        Maybe__Timezone _1185 = Maybe_Nothing__Timezone();
        Datetime _1186 = Datetime_init(2024, 1, 1, _1175, _1178, _1181, _1183, _1185);
        Datetime* _1187 = &_1186; // ref
        Timedelta _1191 = Timedelta_minutes(5);
        Timedelta* _1192 = &_1191; // ref
        Datetime _1193 = Timedelta_add(_1187, _1192);
        Datetime* _1194 = &_1193; // ref
        String _1195 = Datetime_isotime(_1194);
        String* _1196 = &_1195; // ref
        static String _1197 = "Timedelta.add 5 minutes";
        String *_1197_ref = &_1197;
        TestState _1198 = Test_assert_MINUS_equal__String_MUL__String(test, _1163, _1196, _1197_ref);
        TestState* _1000152 = &_1198; // ref
        test = _1000152;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1208 = "02:00:00";
        String *_1208_ref = &_1208;
        String _1209 = String_copy(_1208_ref);
        String* _1210 = &_1209; // ref
        Maybe__int _1222 = Maybe_Just__int(0);
        Maybe__int _1225 = Maybe_Just__int(0);
        Maybe__int _1228 = Maybe_Just__int(0);
        Maybe__int _1230 = Maybe_Nothing__int();
        Maybe__Timezone _1232 = Maybe_Nothing__Timezone();
        Datetime _1233 = Datetime_init(2024, 1, 1, _1222, _1225, _1228, _1230, _1232);
        Datetime* _1234 = &_1233; // ref
        Timedelta _1238 = Timedelta_hours(2);
        Timedelta* _1239 = &_1238; // ref
        Datetime _1240 = Timedelta_add(_1234, _1239);
        Datetime* _1241 = &_1240; // ref
        String _1242 = Datetime_isotime(_1241);
        String* _1243 = &_1242; // ref
        static String _1244 = "Timedelta.add 2 hours";
        String *_1244_ref = &_1244;
        TestState _1245 = Test_assert_MINUS_equal__String_MUL__String(test, _1210, _1243, _1244_ref);
        TestState* _1000155 = &_1245; // ref
        test = _1000155;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _1265 = Maybe_Just__int(0);
        Maybe__int _1268 = Maybe_Just__int(0);
        Maybe__int _1271 = Maybe_Just__int(0);
        Maybe__int _1273 = Maybe_Nothing__int();
        Maybe__Timezone _1275 = Maybe_Nothing__Timezone();
        Datetime _1276 = Datetime_init(2024, 1, 1, _1265, _1268, _1271, _1273, _1275);
        Datetime* _1277 = &_1276; // ref
        Timedelta _1281 = Timedelta_days(1);
        Timedelta* _1282 = &_1281; // ref
        Datetime _1283 = Timedelta_add(_1277, _1282);
        Datetime* _1284 = &_1283; // ref
        int* _1285 = Datetime_day(_1284);
        int _1286 = Int_copy(_1285);
        static String _1287 = "Timedelta.add 1 day advances the day";
        String *_1287_ref = &_1287;
        TestState _1288 = Test_assert_MINUS_equal__int_String(test, 2, _1286, _1287_ref);
        TestState* _1000158 = &_1288; // ref
        test = _1000158;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1298 = "23:54:59";
        String *_1298_ref = &_1298;
        String _1299 = String_copy(_1298_ref);
        String* _1300 = &_1299; // ref
        Maybe__int _1312 = Maybe_Just__int(0);
        Maybe__int _1315 = Maybe_Just__int(0);
        Maybe__int _1318 = Maybe_Just__int(0);
        Maybe__int _1320 = Maybe_Nothing__int();
        Maybe__Timezone _1322 = Maybe_Nothing__Timezone();
        Datetime _1323 = Datetime_init(2024, 1, 2, _1312, _1315, _1318, _1320, _1322);
        Datetime* _1324 = &_1323; // ref
        Timedelta _1328 = Timedelta_minutes(5);
        Timedelta* _1329 = &_1328; // ref
        Datetime _1330 = Timedelta_sub(_1324, _1329);
        Datetime* _1331 = &_1330; // ref
        String _1332 = Datetime_isotime(_1331);
        String* _1333 = &_1332; // ref
        static String _1334 = "Timedelta.sub 5 minutes wraps back (off-by-one bug)";
        String *_1334_ref = &_1334;
        TestState _1335 = Test_assert_MINUS_equal__String_MUL__String(test, _1300, _1333, _1334_ref);
        TestState* _1000161 = &_1335; // ref
        test = _1000161;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1349 = Datetime_date(2024, 3, 15);
        Result__Datetime_String _1350 = Result_Success__Datetime_String(_1349);
        Result__Datetime_String* _1351 = &_1350; // ref
        static String _1354 = "2024-03-15";
        String *_1354_ref = &_1354;
        static String _1355 = "%Y-%m-%d";
        String *_1355_ref = &_1355;
        Result__Datetime_String _1356 = Datetime_strptime(_1354_ref, _1355_ref);
        Result__Datetime_String* _1357 = &_1356; // ref
        static String _1358 = "strptime parses %Y-%m-%d";
        String *_1358_ref = &_1358;
        TestState _1359 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1351, _1357, _1358_ref);
        TestState* _1000164 = &_1359; // ref
        test = _1000164;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _1375 = Maybe_Just__int(14);
        Maybe__int _1378 = Maybe_Just__int(30);
        Maybe__int _1381 = Maybe_Just__int(45);
        Maybe__int _1383 = Maybe_Nothing__int();
        Maybe__Timezone _1385 = Maybe_Nothing__Timezone();
        Datetime _1386 = Datetime_init(2024, 3, 15, _1375, _1378, _1381, _1383, _1385);
        Result__Datetime_String _1387 = Result_Success__Datetime_String(_1386);
        Result__Datetime_String* _1388 = &_1387; // ref
        static String _1391 = "2024-03-15 14:30:45";
        String *_1391_ref = &_1391;
        static String _1392 = "%Y-%m-%d %H:%M:%S";
        String *_1392_ref = &_1392;
        Result__Datetime_String _1393 = Datetime_strptime(_1391_ref, _1392_ref);
        Result__Datetime_String* _1394 = &_1393; // ref
        static String _1395 = "strptime parses date and time";
        String *_1395_ref = &_1395;
        TestState _1396 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1388, _1394, _1395_ref);
        TestState* _1000167 = &_1396; // ref
        test = _1000167;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1410 = "24-03-15";
        String *_1410_ref = &_1410;
        static String _1411 = "%y-%m-%d";
        String *_1411_ref = &_1411;
        Result__Datetime_String _1412 = Datetime_strptime(_1410_ref, _1411_ref);
        Datetime _1413 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1412);
        Datetime* _1414 = &_1413; // ref
        int* _1415 = Datetime_year(_1414);
        int _1416 = Int_copy(_1415);
        static String _1417 = "strptime %y parses 24 as 2024";
        String *_1417_ref = &_1417;
        TestState _1418 = Test_assert_MINUS_equal__int_String(test, 2024, _1416, _1417_ref);
        TestState* _1000170 = &_1418; // ref
        test = _1000170;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1432 = "99-01-01";
        String *_1432_ref = &_1432;
        static String _1433 = "%y-%m-%d";
        String *_1433_ref = &_1433;
        Result__Datetime_String _1434 = Datetime_strptime(_1432_ref, _1433_ref);
        Datetime _1435 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1434);
        Datetime* _1436 = &_1435; // ref
        int* _1437 = Datetime_year(_1436);
        int _1438 = Int_copy(_1437);
        static String _1439 = "strptime %y parses 99 as 1999";
        String *_1439_ref = &_1439;
        TestState _1440 = Test_assert_MINUS_equal__int_String(test, 1999, _1438, _1439_ref);
        TestState* _1000173 = &_1440; // ref
        test = _1000173;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1454 = "15 Mar 2024";
        String *_1454_ref = &_1454;
        static String _1455 = "%d %b %Y";
        String *_1455_ref = &_1455;
        Result__Datetime_String _1456 = Datetime_strptime(_1454_ref, _1455_ref);
        Datetime _1457 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1456);
        Datetime* _1458 = &_1457; // ref
        int* _1459 = Datetime_month(_1458);
        int _1460 = Int_copy(_1459);
        static String _1461 = "strptime %b parses abbreviated month";
        String *_1461_ref = &_1461;
        TestState _1462 = Test_assert_MINUS_equal__int_String(test, 3, _1460, _1461_ref);
        TestState* _1000176 = &_1462; // ref
        test = _1000176;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1476 = "March 15, 2024";
        String *_1476_ref = &_1476;
        static String _1477 = "%B %d, %Y";
        String *_1477_ref = &_1477;
        Result__Datetime_String _1478 = Datetime_strptime(_1476_ref, _1477_ref);
        Datetime _1479 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1478);
        Datetime* _1480 = &_1479; // ref
        int* _1481 = Datetime_month(_1480);
        int _1482 = Int_copy(_1481);
        static String _1483 = "strptime %B parses full month name";
        String *_1483_ref = &_1483;
        TestState _1484 = Test_assert_MINUS_equal__int_String(test, 3, _1482, _1483_ref);
        TestState* _1000179 = &_1484; // ref
        test = _1000179;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1499 = "02:30 PM";
        String *_1499_ref = &_1499;
        static String _1500 = "%I:%M %p";
        String *_1500_ref = &_1500;
        Result__Datetime_String _1501 = Datetime_strptime(_1499_ref, _1500_ref);
        Datetime _1502 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1501);
        Datetime* _1503 = &_1502; // ref
        Maybe__int* _1504 = Datetime_hours(_1503);
        Maybe__int _1505 = Maybe_copy__int(_1504);
        int _1507 = Maybe_from__int(_1505, 0);
        static String _1508 = "strptime %I %p parses 02 PM as 14";
        String *_1508_ref = &_1508;
        TestState _1509 = Test_assert_MINUS_equal__int_String(test, 14, _1507, _1508_ref);
        TestState* _1000182 = &_1509; // ref
        test = _1000182;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1524 = "02:30 AM";
        String *_1524_ref = &_1524;
        static String _1525 = "%I:%M %p";
        String *_1525_ref = &_1525;
        Result__Datetime_String _1526 = Datetime_strptime(_1524_ref, _1525_ref);
        Datetime _1527 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1526);
        Datetime* _1528 = &_1527; // ref
        Maybe__int* _1529 = Datetime_hours(_1528);
        Maybe__int _1530 = Maybe_copy__int(_1529);
        int _1532 = Maybe_from__int(_1530, 0);
        static String _1533 = "strptime %I %p parses 02 AM as 2";
        String *_1533_ref = &_1533;
        TestState _1534 = Test_assert_MINUS_equal__int_String(test, 2, _1532, _1533_ref);
        TestState* _1000185 = &_1534; // ref
        test = _1000185;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1549 = "12:00 AM";
        String *_1549_ref = &_1549;
        static String _1550 = "%I:%M %p";
        String *_1550_ref = &_1550;
        Result__Datetime_String _1551 = Datetime_strptime(_1549_ref, _1550_ref);
        Datetime _1552 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1551);
        Datetime* _1553 = &_1552; // ref
        Maybe__int* _1554 = Datetime_hours(_1553);
        Maybe__int _1555 = Maybe_copy__int(_1554);
        int _1557 = Maybe_from__int(_1555, -1);
        static String _1558 = "strptime %I %p parses 12 AM as 0";
        String *_1558_ref = &_1558;
        TestState _1559 = Test_assert_MINUS_equal__int_String(test, 0, _1557, _1558_ref);
        TestState* _1000188 = &_1559; // ref
        test = _1000188;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1574 = "12:00 PM";
        String *_1574_ref = &_1574;
        static String _1575 = "%I:%M %p";
        String *_1575_ref = &_1575;
        Result__Datetime_String _1576 = Datetime_strptime(_1574_ref, _1575_ref);
        Datetime _1577 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1576);
        Datetime* _1578 = &_1577; // ref
        Maybe__int* _1579 = Datetime_hours(_1578);
        Maybe__int _1580 = Maybe_copy__int(_1579);
        int _1582 = Maybe_from__int(_1580, -1);
        static String _1583 = "strptime %I %p parses 12 PM as 12";
        String *_1583_ref = &_1583;
        TestState _1584 = Test_assert_MINUS_equal__int_String(test, 12, _1582, _1583_ref);
        TestState* _1000191 = &_1584; // ref
        test = _1000191;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1599 = "14:30:00.123456789";
        String *_1599_ref = &_1599;
        static String _1600 = "%H:%M:%S.%n";
        String *_1600_ref = &_1600;
        Result__Datetime_String _1601 = Datetime_strptime(_1599_ref, _1600_ref);
        Datetime _1602 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1601);
        Datetime* _1603 = &_1602; // ref
        Maybe__int* _1604 = Datetime_nanoseconds(_1603);
        Maybe__int _1605 = Maybe_copy__int(_1604);
        int _1607 = Maybe_from__int(_1605, 0);
        static String _1608 = "strptime %n parses nanoseconds";
        String *_1608_ref = &_1608;
        TestState _1609 = Test_assert_MINUS_equal__int_String(test, 123456789, _1607, _1608_ref);
        TestState* _1000194 = &_1609; // ref
        test = _1000194;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        bool _1646;
        /* let */ {
            static String _1621 = "2024-03-15 14:30:00 +0530";
            String *_1621_ref = &_1621;
            static String _1622 = "%Y-%m-%d %H:%M:%S %z";
            String *_1622_ref = &_1622;
            Result__Datetime_String _1623 = Datetime_strptime(_1621_ref, _1622_ref);
            Datetime _1624 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1623);
            Datetime dt = _1624;
            Datetime* _1636 = &dt; // ref
            Maybe__Timezone* _1637 = Datetime_tz(_1636);
            Maybe__Timezone _1638 = Maybe_copy__Timezone(_1637);
            Timezone _1640 = Timezone_zero();
            Timezone _1641 = Maybe_from__Timezone(_1638, _1640);
            Timezone* _1642 = &_1641; // ref
            Long* _1643 = Timezone_delta(_1642);
            Long _1644 = Long_copy(_1643);
            bool _1645 = Long__EQ_(19800l, _1644);
            _1646 = _1645;
            Datetime_delete(dt);
            Timezone_delete(_1641);
        }
        static String _1647 = "strptime %z parses +0530 offset";
        String *_1647_ref = &_1647;
        TestState _1648 = Test_assert_MINUS_true__String(test, _1646, _1647_ref);
        TestState* _1000197 = &_1648; // ref
        test = _1000197;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        bool _1685;
        /* let */ {
            static String _1660 = "2024-03-15 14:30:00 -0800";
            String *_1660_ref = &_1660;
            static String _1661 = "%Y-%m-%d %H:%M:%S %z";
            String *_1661_ref = &_1661;
            Result__Datetime_String _1662 = Datetime_strptime(_1660_ref, _1661_ref);
            Datetime _1663 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1662);
            Datetime dt = _1663;
            Datetime* _1675 = &dt; // ref
            Maybe__Timezone* _1676 = Datetime_tz(_1675);
            Maybe__Timezone _1677 = Maybe_copy__Timezone(_1676);
            Timezone _1679 = Timezone_zero();
            Timezone _1680 = Maybe_from__Timezone(_1677, _1679);
            Timezone* _1681 = &_1680; // ref
            Long* _1682 = Timezone_delta(_1681);
            Long _1683 = Long_copy(_1682);
            bool _1684 = Long__EQ_(-28800l, _1683);
            _1685 = _1684;
            Datetime_delete(dt);
            Timezone_delete(_1680);
        }
        static String _1686 = "strptime %z parses -0800 offset";
        String *_1686_ref = &_1686;
        TestState _1687 = Test_assert_MINUS_true__String(test, _1685, _1686_ref);
        TestState* _1000201 = &_1687; // ref
        test = _1000201;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        bool _1722;
        /* let */ {
            static String _1699 = "2024-03-15 UTC";
            String *_1699_ref = &_1699;
            static String _1700 = "%Y-%m-%d %Z";
            String *_1700_ref = &_1700;
            Result__Datetime_String _1701 = Datetime_strptime(_1699_ref, _1700_ref);
            Datetime _1702 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1701);
            Datetime dt = _1702;
            static String _1705 = "UTC";
            String *_1705_ref = &_1705;
            Datetime* _1713 = &dt; // ref
            Maybe__Timezone* _1714 = Datetime_tz(_1713);
            Maybe__Timezone _1715 = Maybe_copy__Timezone(_1714);
            Timezone _1717 = Timezone_zero();
            Timezone _1718 = Maybe_from__Timezone(_1715, _1717);
            Timezone* _1719 = &_1718; // ref
            String* _1720 = Timezone_name(_1719);
            bool _1721 = String__EQ_(_1705_ref, _1720);
            _1722 = _1721;
            Datetime_delete(dt);
            Timezone_delete(_1718);
        }
        static String _1723 = "strptime %Z parses timezone name";
        String *_1723_ref = &_1723;
        TestState _1724 = Test_assert_MINUS_true__String(test, _1722, _1723_ref);
        TestState* _1000205 = &_1724; // ref
        test = _1000205;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1738 = Datetime_date(2024, 3, 15);
        Result__Datetime_String _1739 = Result_Success__Datetime_String(_1738);
        Result__Datetime_String* _1740 = &_1739; // ref
        static String _1743 = "Fri 2024-03-15";
        String *_1743_ref = &_1743;
        static String _1744 = "%a %Y-%m-%d";
        String *_1744_ref = &_1744;
        Result__Datetime_String _1745 = Datetime_strptime(_1743_ref, _1744_ref);
        Result__Datetime_String* _1746 = &_1745; // ref
        static String _1747 = "strptime %a parses and discards abbreviated weekday";
        String *_1747_ref = &_1747;
        TestState _1748 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1740, _1746, _1747_ref);
        TestState* _1000209 = &_1748; // ref
        test = _1000209;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1762 = Datetime_date(2024, 3, 15);
        Result__Datetime_String _1763 = Result_Success__Datetime_String(_1762);
        Result__Datetime_String* _1764 = &_1763; // ref
        static String _1767 = "Friday 2024-03-15";
        String *_1767_ref = &_1767;
        static String _1768 = "%A %Y-%m-%d";
        String *_1768_ref = &_1768;
        Result__Datetime_String _1769 = Datetime_strptime(_1767_ref, _1768_ref);
        Result__Datetime_String* _1770 = &_1769; // ref
        static String _1771 = "strptime %A parses and discards full weekday";
        String *_1771_ref = &_1771;
        TestState _1772 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1764, _1770, _1771_ref);
        TestState* _1000212 = &_1772; // ref
        test = _1000212;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1786 = Datetime_date(2024, 3, 15);
        Result__Datetime_String _1787 = Result_Success__Datetime_String(_1786);
        Result__Datetime_String* _1788 = &_1787; // ref
        static String _1791 = "100% 2024-03-15";
        String *_1791_ref = &_1791;
        static String _1792 = "100%% %Y-%m-%d";
        String *_1792_ref = &_1792;
        Result__Datetime_String _1793 = Datetime_strptime(_1791_ref, _1792_ref);
        Result__Datetime_String* _1794 = &_1793; // ref
        static String _1795 = "strptime %% matches literal percent";
        String *_1795_ref = &_1795;
        TestState _1796 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1788, _1794, _1795_ref);
        TestState* _1000215 = &_1796; // ref
        test = _1000215;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _1810 = Datetime_date(2024, 3, 15);
        Result__Datetime_String _1811 = Result_Success__Datetime_String(_1810);
        Result__Datetime_String* _1812 = &_1811; // ref
        static String _1815 = "2024-03-15";
        String *_1815_ref = &_1815;
        static String _1816 = "%x";
        String *_1816_ref = &_1816;
        Result__Datetime_String _1817 = Datetime_strptime(_1815_ref, _1816_ref);
        Result__Datetime_String* _1818 = &_1817; // ref
        static String _1819 = "strptime %x parses ISO date";
        String *_1819_ref = &_1819;
        TestState _1820 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1812, _1818, _1819_ref);
        TestState* _1000218 = &_1820; // ref
        test = _1000218;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1835 = "14:30:45";
        String *_1835_ref = &_1835;
        static String _1836 = "%X";
        String *_1836_ref = &_1836;
        Result__Datetime_String _1837 = Datetime_strptime(_1835_ref, _1836_ref);
        Datetime _1838 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1837);
        Datetime* _1839 = &_1838; // ref
        Maybe__int* _1840 = Datetime_hours(_1839);
        Maybe__int _1841 = Maybe_copy__int(_1840);
        int _1843 = Maybe_from__int(_1841, 0);
        static String _1844 = "strptime %X parses ISO time hours";
        String *_1844_ref = &_1844;
        TestState _1845 = Test_assert_MINUS_equal__int_String(test, 14, _1843, _1844_ref);
        TestState* _1000221 = &_1845; // ref
        test = _1000221;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1860 = "14:30:45";
        String *_1860_ref = &_1860;
        static String _1861 = "%X";
        String *_1861_ref = &_1861;
        Result__Datetime_String _1862 = Datetime_strptime(_1860_ref, _1861_ref);
        Datetime _1863 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1862);
        Datetime* _1864 = &_1863; // ref
        Maybe__int* _1865 = Datetime_minutes(_1864);
        Maybe__int _1866 = Maybe_copy__int(_1865);
        int _1868 = Maybe_from__int(_1866, 0);
        static String _1869 = "strptime %X parses ISO time minutes";
        String *_1869_ref = &_1869;
        TestState _1870 = Test_assert_MINUS_equal__int_String(test, 30, _1868, _1869_ref);
        TestState* _1000224 = &_1870; // ref
        test = _1000224;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _1885 = "14:30:45";
        String *_1885_ref = &_1885;
        static String _1886 = "%X";
        String *_1886_ref = &_1886;
        Result__Datetime_String _1887 = Datetime_strptime(_1885_ref, _1886_ref);
        Datetime _1888 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1887);
        Datetime* _1889 = &_1888; // ref
        Maybe__int* _1890 = Datetime_seconds(_1889);
        Maybe__int _1891 = Maybe_copy__int(_1890);
        int _1893 = Maybe_from__int(_1891, 0);
        static String _1894 = "strptime %X parses ISO time seconds";
        String *_1894_ref = &_1894;
        TestState _1895 = Test_assert_MINUS_equal__int_String(test, 45, _1893, _1894_ref);
        TestState* _1000227 = &_1895; // ref
        test = _1000227;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _1911 = Maybe_Just__int(14);
        Maybe__int _1914 = Maybe_Just__int(30);
        Maybe__int _1917 = Maybe_Just__int(45);
        Maybe__int _1919 = Maybe_Nothing__int();
        Maybe__Timezone _1921 = Maybe_Nothing__Timezone();
        Datetime _1922 = Datetime_init(2024, 3, 15, _1911, _1914, _1917, _1919, _1921);
        Result__Datetime_String _1923 = Result_Success__Datetime_String(_1922);
        Result__Datetime_String* _1924 = &_1923; // ref
        static String _1927 = "Fri Mar 15 14:30:45 2024";
        String *_1927_ref = &_1927;
        static String _1928 = "%c";
        String *_1928_ref = &_1928;
        Result__Datetime_String _1929 = Datetime_strptime(_1927_ref, _1928_ref);
        Result__Datetime_String* _1930 = &_1929; // ref
        static String _1931 = "strptime %c parses locale datetime";
        String *_1931_ref = &_1931;
        TestState _1932 = Test_assert_MINUS_equal__Result__Datetime_String_MUL__String(test, _1924, _1930, _1931_ref);
        TestState* _1000230 = &_1932; // ref
        test = _1000230;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _1947 = Maybe_Just__int(14);
        Maybe__int _1950 = Maybe_Just__int(30);
        Maybe__int _1953 = Maybe_Just__int(45);
        Maybe__int _1955 = Maybe_Nothing__int();
        Maybe__Timezone _1957 = Maybe_Nothing__Timezone();
        Datetime _1958 = Datetime_init(2024, 3, 15, _1947, _1950, _1953, _1955, _1957);
        Datetime* _1959 = &_1958; // ref
        Maybe__int _1972 = Maybe_Just__int(14);
        Maybe__int _1975 = Maybe_Just__int(30);
        Maybe__int _1978 = Maybe_Just__int(45);
        Maybe__int _1980 = Maybe_Nothing__int();
        Maybe__Timezone _1982 = Maybe_Nothing__Timezone();
        Datetime _1983 = Datetime_init(2024, 3, 15, _1972, _1975, _1978, _1980, _1982);
        Datetime* _1984 = &_1983; // ref
        static String _1985 = "%c";
        String *_1985_ref = &_1985;
        String _1986 = Datetime_strftime__Datetime_MUL_(_1984, _1985_ref);
        String* _1987 = &_1986; // ref
        static String _1988 = "%c";
        String *_1988_ref = &_1988;
        Result__Datetime_String _1989 = Datetime_strptime(_1987, _1988_ref);
        Datetime _1990 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_1989);
        Datetime* _1991 = &_1990; // ref
        static String _1992 = "strptime %c roundtrips with strftime";
        String *_1992_ref = &_1992;
        TestState _1993 = Test_assert_MINUS_equal__Datetime_MUL__String(test, _1959, _1991, _1992_ref);
        TestState* _1000233 = &_1993; // ref
        test = _1000233;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _2004 = "not-a-date";
        String *_2004_ref = &_2004;
        static String _2005 = "%Y-%m-%d";
        String *_2005_ref = &_2005;
        Result__Datetime_String _2006 = Datetime_strptime(_2004_ref, _2005_ref);
        Result__Datetime_String* _2007 = &_2006; // ref
        bool _2008 = Result_error_QMARK___Datetime_String(_2007);
        static String _2009 = "strptime returns error on bad input";
        String *_2009_ref = &_2009;
        TestState _2010 = Test_assert_MINUS_true__String(test, _2008, _2009_ref);
        TestState* _1000236 = &_2010; // ref
        test = _1000236;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        static String _2021 = "2024-03-15";
        String *_2021_ref = &_2021;
        static String _2022 = "%Y/%m/%d";
        String *_2022_ref = &_2022;
        Result__Datetime_String _2023 = Datetime_strptime(_2021_ref, _2022_ref);
        Result__Datetime_String* _2024 = &_2023; // ref
        bool _2025 = Result_error_QMARK___Datetime_String(_2024);
        static String _2026 = "strptime returns error on format mismatch";
        String *_2026_ref = &_2026;
        TestState _2027 = Test_assert_MINUS_true__String(test, _2025, _2026_ref);
        TestState* _1000239 = &_2027; // ref
        test = _1000239;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Datetime _2040 = Datetime_date(2024, 3, 15);
        Datetime* _2041 = &_2040; // ref
        Datetime _2052 = Datetime_date(2024, 3, 15);
        Datetime* _2053 = &_2052; // ref
        static String _2054 = "%Y-%m-%d";
        String *_2054_ref = &_2054;
        String _2055 = Datetime_strftime__Datetime_MUL_(_2053, _2054_ref);
        String* _2056 = &_2055; // ref
        static String _2057 = "%Y-%m-%d";
        String *_2057_ref = &_2057;
        Result__Datetime_String _2058 = Datetime_strptime(_2056, _2057_ref);
        Datetime _2059 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_2058);
        Datetime* _2060 = &_2059; // ref
        static String _2061 = "strptime roundtrips with strftime for date";
        String *_2061_ref = &_2061;
        TestState _2062 = Test_assert_MINUS_equal__Datetime_MUL__String(test, _2041, _2060, _2061_ref);
        TestState* _1000242 = &_2062; // ref
        test = _1000242;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Maybe__int _2077 = Maybe_Just__int(14);
        Maybe__int _2080 = Maybe_Just__int(30);
        Maybe__int _2083 = Maybe_Just__int(45);
        Maybe__int _2085 = Maybe_Nothing__int();
        Maybe__Timezone _2087 = Maybe_Nothing__Timezone();
        Datetime _2088 = Datetime_init(2024, 3, 15, _2077, _2080, _2083, _2085, _2087);
        Datetime* _2089 = &_2088; // ref
        Maybe__int _2102 = Maybe_Just__int(14);
        Maybe__int _2105 = Maybe_Just__int(30);
        Maybe__int _2108 = Maybe_Just__int(45);
        Maybe__int _2110 = Maybe_Nothing__int();
        Maybe__Timezone _2112 = Maybe_Nothing__Timezone();
        Datetime _2113 = Datetime_init(2024, 3, 15, _2102, _2105, _2108, _2110, _2112);
        Datetime* _2114 = &_2113; // ref
        static String _2115 = "%Y-%m-%d %H:%M:%S";
        String *_2115_ref = &_2115;
        String _2116 = Datetime_strftime__Datetime_MUL_(_2114, _2115_ref);
        String* _2117 = &_2116; // ref
        static String _2118 = "%Y-%m-%d %H:%M:%S";
        String *_2118_ref = &_2118;
        Result__Datetime_String _2119 = Datetime_strptime(_2117, _2118_ref);
        Datetime _2120 = Result_unsafe_MINUS_from_MINUS_success__Datetime_String(_2119);
        Datetime* _2121 = &_2120; // ref
        static String _2122 = "strptime roundtrips with strftime for datetime";
        String *_2122_ref = &_2122;
        TestState _2123 = Test_assert_MINUS_equal__Datetime_MUL__String(test, _2089, _2121, _2122_ref);
        TestState* _1000245 = &_2123; // ref
        test = _1000245;  // (Ref Test.State r1550) = (Ref Test.State r1550)
        Test_print_MINUS_test_MINUS_results(test);
        int* _1000248 = Test_State_failed(test);
        int _1000247 = Int_copy(_1000248);
        int _1000007 = _1000247;
        _1000003 = _1000007;
        Datetime_delete(_1017);
        Datetime_delete(_1043);
        Datetime_delete(_1069);
        Datetime_delete(_108);
        Datetime_delete(_1095);
        Datetime_delete(_1115);
        Datetime_delete(_1122);
        Datetime_delete(_1140);
        Datetime_delete(_1147);
        Datetime_delete(_1186);
        Datetime_delete(_1193);
        Datetime_delete(_1233);
        Datetime_delete(_1240);
        Datetime_delete(_1276);
        Datetime_delete(_128);
        Datetime_delete(_1283);
        Datetime_delete(_1323);
        Datetime_delete(_1330);
        Datetime_delete(_1413);
        Datetime_delete(_1435);
        Datetime_delete(_1457);
        Datetime_delete(_147);
        Datetime_delete(_1479);
        Datetime_delete(_1502);
        Datetime_delete(_1527);
        Datetime_delete(_1552);
        Datetime_delete(_1577);
        Datetime_delete(_1602);
        Datetime_delete(_165);
        Datetime_delete(_183);
        Datetime_delete(_1838);
        Datetime_delete(_1863);
        Datetime_delete(_1888);
        Datetime_delete(_1958);
        Datetime_delete(_1983);
        Datetime_delete(_1990);
        Datetime_delete(_201);
        Datetime_delete(_2040);
        Datetime_delete(_2052);
        Datetime_delete(_2059);
        Datetime_delete(_2088);
        Datetime_delete(_2113);
        Datetime_delete(_2120);
        Datetime_delete(_220);
        Datetime_delete(_239);
        Datetime_delete(_256);
        Datetime_delete(_26);
        Datetime_delete(_261);
        Datetime_delete(_277);
        Datetime_delete(_282);
        Datetime_delete(_300);
        Datetime_delete(_319);
        Datetime_delete(_338);
        Datetime_delete(_357);
        Datetime_delete(_376);
        Datetime_delete(_395);
        Datetime_delete(_414);
        Datetime_delete(_438);
        Datetime_delete(_463);
        Datetime_delete(_47);
        Datetime_delete(_488);
        Datetime_delete(_513);
        Datetime_delete(_538);
        Datetime_delete(_563);
        Datetime_delete(_588);
        Datetime_delete(_613);
        Datetime_delete(_638);
        Datetime_delete(_663);
        Datetime_delete(_68);
        Datetime_delete(_701);
        Datetime_delete(_720);
        Datetime_delete(_753);
        Datetime_delete(_788);
        Datetime_delete(_806);
        Datetime_delete(_813);
        Datetime_delete(_831);
        Datetime_delete(_838);
        Datetime_delete(_877);
        Datetime_delete(_88);
        Datetime_delete(_880);
        Datetime_delete(_920);
        Datetime_delete(_923);
        Datetime_delete(_963);
        Datetime_delete(_966);
        Datetime_delete(_991);
        Result_delete__Datetime_String(_1350);
        Result_delete__Datetime_String(_1356);
        Result_delete__Datetime_String(_1387);
        Result_delete__Datetime_String(_1393);
        Result_delete__Datetime_String(_1739);
        Result_delete__Datetime_String(_1745);
        Result_delete__Datetime_String(_1763);
        Result_delete__Datetime_String(_1769);
        Result_delete__Datetime_String(_1787);
        Result_delete__Datetime_String(_1793);
        Result_delete__Datetime_String(_1811);
        Result_delete__Datetime_String(_1817);
        Result_delete__Datetime_String(_1923);
        Result_delete__Datetime_String(_1929);
        Result_delete__Datetime_String(_2006);
        Result_delete__Datetime_String(_2023);
        String_delete(_1008);
        String_delete(_1020);
        String_delete(_1034);
        String_delete(_1046);
        String_delete(_1060);
        String_delete(_1072);
        String_delete(_1086);
        String_delete(_1098);
        String_delete(_1162);
        String_delete(_1195);
        String_delete(_1209);
        String_delete(_1242);
        String_delete(_1299);
        String_delete(_1332);
        String_delete(_1986);
        String_delete(_2055);
        String_delete(_2116);
        String_delete(_429);
        String_delete(_440);
        String_delete(_454);
        String_delete(_465);
        String_delete(_479);
        String_delete(_490);
        String_delete(_504);
        String_delete(_515);
        String_delete(_529);
        String_delete(_540);
        String_delete(_554);
        String_delete(_565);
        String_delete(_579);
        String_delete(_590);
        String_delete(_604);
        String_delete(_615);
        String_delete(_629);
        String_delete(_640);
        String_delete(_654);
        String_delete(_665);
        String_delete(_679);
        String_delete(_703);
        String_delete(_853);
        String_delete(_882);
        String_delete(_896);
        String_delete(_925);
        String_delete(_939);
        String_delete(_968);
        String_delete(_982);
        String_delete(_994);
        Test_State_delete(_1000006);
        Test_State_delete(_1023);
        Test_State_delete(_1049);
        Test_State_delete(_1075);
        Test_State_delete(_1101);
        Test_State_delete(_1126);
        Test_State_delete(_113);
        Test_State_delete(_1151);
        Test_State_delete(_1198);
        Test_State_delete(_1245);
        Test_State_delete(_1288);
        Test_State_delete(_133);
        Test_State_delete(_1335);
        Test_State_delete(_1359);
        Test_State_delete(_1396);
        Test_State_delete(_1418);
        Test_State_delete(_1440);
        Test_State_delete(_1462);
        Test_State_delete(_1484);
        Test_State_delete(_1509);
        Test_State_delete(_151);
        Test_State_delete(_1534);
        Test_State_delete(_1559);
        Test_State_delete(_1584);
        Test_State_delete(_1609);
        Test_State_delete(_1648);
        Test_State_delete(_1687);
        Test_State_delete(_169);
        Test_State_delete(_1724);
        Test_State_delete(_1748);
        Test_State_delete(_1772);
        Test_State_delete(_1796);
        Test_State_delete(_1820);
        Test_State_delete(_1845);
        Test_State_delete(_187);
        Test_State_delete(_1870);
        Test_State_delete(_1895);
        Test_State_delete(_1932);
        Test_State_delete(_1993);
        Test_State_delete(_2010);
        Test_State_delete(_2027);
        Test_State_delete(_205);
        Test_State_delete(_2062);
        Test_State_delete(_2123);
        Test_State_delete(_224);
        Test_State_delete(_243);
        Test_State_delete(_264);
        Test_State_delete(_285);
        Test_State_delete(_304);
        Test_State_delete(_31);
        Test_State_delete(_323);
        Test_State_delete(_342);
        Test_State_delete(_361);
        Test_State_delete(_380);
        Test_State_delete(_399);
        Test_State_delete(_418);
        Test_State_delete(_443);
        Test_State_delete(_468);
        Test_State_delete(_493);
        Test_State_delete(_518);
        Test_State_delete(_52);
        Test_State_delete(_543);
        Test_State_delete(_568);
        Test_State_delete(_593);
        Test_State_delete(_618);
        Test_State_delete(_643);
        Test_State_delete(_668);
        Test_State_delete(_706);
        Test_State_delete(_724);
        Test_State_delete(_73);
        Test_State_delete(_757);
        Test_State_delete(_792);
        Test_State_delete(_817);
        Test_State_delete(_842);
        Test_State_delete(_885);
        Test_State_delete(_928);
        Test_State_delete(_93);
        Test_State_delete(_971);
        Test_State_delete(_997);
        Timedelta_delete(_1191);
        Timedelta_delete(_1238);
        Timedelta_delete(_1281);
        Timedelta_delete(_1328);
    }
    return _1000003;
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

int min__int(int a, int b) {
    int _16;
    bool _9 = Int__LT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

bool neg_QMARK___int(int x) {
    int _7 = Int_zero();
    bool _8 = Int__LT_(x, _7);
    return _8;
}

bool not(bool a) {
    bool _6 = Bool_not(a);
    return _6;
}

bool null_QMARK___CChar(CChar* p) {
    CChar* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__CChar(NULL, _11);
    return _12;
}

bool null_QMARK___FILE(FILE* p) {
    FILE* _11 = p; // From the 'the' function.
    bool _12 = Pointer_eq__FILE(NULL, _11);
    return _12;
}

