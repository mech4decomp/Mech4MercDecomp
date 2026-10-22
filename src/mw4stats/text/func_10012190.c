/*
 * FUN_10012190 (38 B, __fastcall, ECX = this) - Critical-section-guarded
 * accessor. Returns the value at ((this+0x24)->+0x9c), or 0 if this+0x24
 * is null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */

__declspec(naked) unsigned int __cdecl FUN_10012190(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        push    esi
        xor     edi, edi
        call    dword ptr [g_10021048]      /* EnterCriticalSection */
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      L_121AA
        mov     edi, dword ptr [eax + 0x9c]
    L_121AA:
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
