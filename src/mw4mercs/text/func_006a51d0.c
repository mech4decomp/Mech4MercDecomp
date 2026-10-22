/*
 * FUN_006a51d0 (71 B) — Virtual dispatch + state check.
 *
 * __cdecl (one pointer param). Calls a virtual method (offset 0x34) on
 * param, then FUN_00415230(DAT_007f1f84). If that returns 1, re-dispatches
 * the virtual method and checks a nested state (offset 0x99c -> 0xe0 -> 0x14
 * == 6). Returns 1 on success, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415230(int param);

extern int DAT_007f1f84;

__declspec(naked) int __cdecl FUN_006a51d0(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [DAT_007f1f84]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_fail
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0x99c]
        test    eax, eax
        jz      l_fail
        mov     eax, dword ptr [eax + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x6
        jnz     l_fail
        pop     edi
        mov     al, 0x1
        pop     esi
        ret
    l_fail:
        pop     edi
        xor     al, al
        pop     esi
        ret
    }
}
