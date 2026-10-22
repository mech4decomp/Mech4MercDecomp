/*
 * FUN_10012040 (50 B, __fastcall, ECX = this) - Critical-section-guarded
 * accessor. Returns the sub-object pointer at (this+0x28)->+0x9c, or 0
 * if this+0x28 is null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * CFLAGS: /O2
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */

__declspec(naked) void * __cdecl FUN_10012040(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    esi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_12064
        mov     edi, dword ptr [eax + 0x9c]
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    L_12064:
        push    esi
        xor     edi, edi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
