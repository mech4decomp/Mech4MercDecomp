/*
 * FUN_100414d9 (56 B) — __cdecl. Loops over chars calling FUN_10041473.
 */

extern void __cdecl FUN_10041473(void);

__declspec(naked) void __cdecl FUN_100414d9(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        mov     eax, ebx
        dec     ebx
        push    esi
        push    edi
        test    eax, eax
        jle     L_ret
        mov     edi, dword ptr [esp+0x1c]
        mov     esi, dword ptr [esp+0x10]
L_loop:
        movsx   eax, byte ptr [esi]
        push    edi
        inc     esi
        push    dword ptr [esp+0x1c]
        push    eax
        call    FUN_10041473
        add     esp, 0xc
        cmp     dword ptr [edi], -1
        jz      L_ret
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jg      L_loop
L_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
