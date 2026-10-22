/*
 * FUN_00707f50 (35 B) — gosScript high-resolution counter: returns RDTSC
 * when a flag is set, otherwise QueryPerformanceCounter into a global.
 * Returns a 64-bit value in EDX:EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858a94;
extern int g_00858ae8;
extern int g_00858aec;
extern void *g_0076b220;   /* IAT: QueryPerformanceCounter */

__declspec(naked) void FUN_00707f50(void)
{
    __asm {
        mov     eax, dword ptr [g_00858a94]
        test    eax, eax
        jz      L1
        rdtsc
        ret
        __emit 0xEB   /* __emit: dead-code jmp (rel8=0x17) to a target past the function end; compiler artifact with no label target */
        __emit 0x17
    L1:
        push    offset g_00858ae8
        call    dword ptr [g_0076b220]
        mov     eax, dword ptr [g_00858ae8]
        mov     edx, dword ptr [g_00858aec]
        ret
    }
}
