/*
 * FUN_006a63c0 (55 B) — 4-arg __cdecl. Dispatches virtual methods on
 * param_1 (object pointer passed on stack): if param_4 low byte is 0,
 * call vtable[0xd0](param_3); if it returns 1, return 0. Otherwise
 * call vtable[0x8](param_3, param_4, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_006a63c0(void *param_1, int param_2, int param_3, int param_4)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        test    bl, bl
        push    esi
        mov     esi, dword ptr [esp + 0x0C]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        jnz     L_else
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0xD0]
        cmp     al, 1
        jnz     L_else
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
L_else:
        mov     edx, dword ptr [esi]
        push    0
        push    ebx
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
