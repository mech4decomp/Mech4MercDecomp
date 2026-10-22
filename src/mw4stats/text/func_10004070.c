/*
 * FUN_10004070 (50 B, __fastcall) - locks +0x28, returns [EAX+0x98] if
 * non-null else 0.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10004070 (50 B, __fastcall, ECX = this) - Critical-section-guarded
 * accessor. Returns the sub-object pointer at (this+0x28)->+0x98, or 0
 * if this+0x28 is null.
 */

extern void *g_10021048; /* IAT: LeaveCriticalSection */
extern void *g_10021044; /* IAT: EnterCriticalSection */

__declspec(naked) void __cdecl FUN_10004070(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    esi
        call    dword ptr [g_10021048]
        mov     eax, dword ptr [esi+0x28]
        test    eax, eax
        jz      L_04094
        mov     edi, dword ptr [eax+0x98]
        push    esi
        call    dword ptr [g_10021044]
        mov     eax, edi
        pop     edi
        pop     esi
        ret
L_04094:
        push    esi
        xor     edi, edi
        call    dword ptr [g_10021044]
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
