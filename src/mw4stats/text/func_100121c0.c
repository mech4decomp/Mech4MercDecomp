/*
 * FUN_100121c0 (50 B, __thiscall, RET 0x8) - Validates via FUN_100122b0;
 * if valid, stores param_1 into the object at (this+0x20) under a critical
 * section and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * if valid, stores arg1 into the object at (this+0x20) under a critical
 * section and returns 1, else 0.
 * CFLAGS: /O2
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_100122b0(void);

__declspec(naked) unsigned int __cdecl FUN_100121c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_100122b0
        test    al, al
        jnz     L_121D5
        pop     esi
        ret     0x8
    L_121D5:
        push    esi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     ecx, dword ptr [esi + 0x20]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        mov     dword ptr [ecx], edx
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     al, 0x1
        pop     esi
        ret     0x8
    }
}
