/*
 * MW4Stats.dll - FUN_10004210 (0x10004210, 67 B, __fastcall)
 * EnterCriticalSection(this); deref chain at +0x28/+0x9c; if non-null
 * return *(this+0x98) else 0; LeaveCriticalSection(this).
 * Transcribed from MW4Stats.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10004210 (67 B, __fastcall, ECX = this) - Critical-section-guarded
 * accessor. Locks this; reads this->f28; if non-null replaces it with
 * this->f28->f9c; stores back; if the result is non-null returns
 * result->f98 else 0; unlocks and returns.
 * CFLAGS: /G6 /O2 (B17-prologue twin of 10004070; /G6 flips the callee-saved
 * reg-save order per the DOCTRINE). @ /O2 it is 94.55% (ref `56 57 8B F1`
 * vs obj `56 8B F1 57`); /G6 /O2 resolves to 100.00%.
 */
extern void *g_10021048; /* IAT: EnterCriticalSection */
extern void *g_10021044; /* IAT: LeaveCriticalSection */

__declspec(naked) void __cdecl FUN_10004210(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        push    esi
        call    dword ptr [g_10021048]
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L1
        mov     eax, dword ptr [eax + 0x9c]
        jmp     L2
L1:
        xor     eax, eax
L2:
        test    eax, eax
        mov     dword ptr [esi + 0x28], eax
        jz      L3
        mov     edi, dword ptr [eax + 0x98]
        push    esi
        call    dword ptr [g_10021044]
        mov     eax, edi
        pop     edi
        pop     esi
        ret
L3:
        push    esi
        xor     edi, edi
        call    dword ptr [g_10021044]
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
