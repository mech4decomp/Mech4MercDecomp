/*
 * FUN_00707a70 (179 B) — __cdecl timer/performance-frequency init.
 *
 * Queries timer device caps (timeGetDevCaps), begins a timer period
 * (timeBeginPeriod), reads the performance counter frequency
 * (QueryPerformanceFrequency), and stores a scaled 64-bit value into
 * DAT_00858b58/5c. Ends with a tail jump to FUN_00707990.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858af0;   /* DAT_00858af0 */
extern int g_858af4;   /* DAT_00858af4 */
extern int g_858b48;   /* DAT_00858b48 */
extern int g_858b4c;   /* DAT_00858b4c */
extern int g_858a94;   /* DAT_00858a94 */
extern float g_8b2728; /* 0x008b2728 */
extern float g_786dc8; /* 0x00786dc8 */
extern int g_858b58;   /* DAT_00858b58 */
extern int g_858b5c;   /* DAT_00858b5c */
extern int g_858a54;   /* DAT_00858a54 */

extern int (__stdcall *g_76b5c4)(void);  /* IAT timeGetDevCaps */
extern int (__stdcall *g_76b5d0)(void);  /* IAT timeBeginPeriod */
extern int (__stdcall *g_76b224)(void);  /* IAT QueryPerformanceFrequency */

extern int __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0075db4a(void);  /* _ftol */
extern int __cdecl FUN_00707f50(void);
extern void __cdecl FUN_00707990(void);

__declspec(naked) void __cdecl FUN_00707a70(void)
{
    __asm {
        xor     eax, eax
        push    0x8
        mov     dword ptr [g_858af0], eax
        push    0x858af0
        mov     dword ptr [g_858af4], eax
        call    dword ptr [g_76b5c4]
        test    eax, eax
        jz      caps_ok
        push    0x7a140c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      caps_ok
        int     3
caps_ok:
        mov     ecx, dword ptr [g_858af0]
        push    ecx
        call    dword ptr [g_76b5d0]
        push    0x858b48
        call    dword ptr [g_76b224]
        mov     edx, dword ptr [g_858b48]
        or      edx, dword ptr [g_858b4c]
        jnz     freq_ok
        push    0x7a13e4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      freq_ok
        int     3
freq_ok:
        mov     eax, dword ptr [g_858a94]
        test    eax, eax
        jz      use_freq
        fld     dword ptr [g_8b2728]
        fmul    dword ptr [g_786dc8]
        call    FUN_0075db4a
        mov     dword ptr [g_858b58], eax
        mov     dword ptr [g_858b5c], edx
        jmp     store_done
use_freq:
        mov     eax, dword ptr [g_858b48]
        mov     ecx, dword ptr [g_858b4c]
        mov     dword ptr [g_858b58], eax
        mov     dword ptr [g_858b5c], ecx
store_done:
        call    FUN_00707f50
        mov     dword ptr [g_858a54], eax
        jmp     FUN_00707990
    }
}
