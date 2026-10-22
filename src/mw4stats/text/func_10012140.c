/*
 * FUN_10012140 (72 B, __thiscall) - Critical-section-guarded lookup of a list
 * node matching param_1. Returns the value at (node+0x9c), or 0 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021048;   /* IAT: EnterCriticalSection */
extern void *g_10021044;   /* IAT: LeaveCriticalSection */

__declspec(naked) int __cdecl FUN_10012140(void)
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
        jz      L_1217A
        mov     ecx, dword ptr [esp + 0xc]
    L_12158:
        cmp     dword ptr [eax], ecx
        jz      L_12174
        mov     eax, dword ptr [eax + 0xa0]
        test    eax, eax
        jnz     L_12158
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    L_12174:
        mov     edi, dword ptr [eax + 0x9c]
    L_1217A:
        push    esi
        call    dword ptr [g_10021044]      /* LeaveCriticalSection */
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
