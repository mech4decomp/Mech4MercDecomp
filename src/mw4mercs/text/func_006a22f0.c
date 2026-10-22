/*
 * FUN_006a22f0 (71 B) — Virtual dispatch chain on param_1's vtable.
 *
 * Calls vtable[0xd4]; if it returns 0, return 0. Then vtable[0x114]; if 0,
 * return 0. Then vtable[0x118]; if it returns 1, call vtable[0x8c] and
 * return 0 if that returns 0. Otherwise return 1.
 *
 * __cdecl, RET. Returns AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __cdecl FUN_006a22f0(int *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xd4]
        test    al, al
        jnz     L_305
        pop     esi
        ret
    L_305:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        test    al, al
        jnz     L_315
        pop     esi
        ret
    L_315:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x118]
        cmp     al, 0x1
        jnz     L_333
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8c]
        test    al, al
        jnz     L_333
        pop     esi
        ret
    L_333:
        mov     al, 0x1
        pop     esi
        ret
    }
}
