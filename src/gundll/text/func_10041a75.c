/*
 * FUN_10041a75 (73 B) — __cdecl.
 * Bitmap range check: tests bit (param_2%0x20) of word param_2/0x20, then
 * verifies the following words up to index 3 are zero. Returns 1 if clear.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10041a75(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    0x20
        cdq
        pop     ecx
        idiv    ecx
        push    0x1f
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x10]
        cdq
        idiv    ecx
        pop     ecx
        mov     eax, dword ptr [esp + 0x8]
        sub     ecx, edx
        or      edx, 0xffffffff
        shl     edx, cl
        not     edx
        test    dword ptr [eax + esi*4], edx
        jnz     ret0
        inc     esi
        cmp     esi, 0x3
        jge     ret1
        lea     eax, [eax + esi*4]
    loop1:
        cmp     dword ptr [eax], 0
        jnz     ret0
        inc     esi
        add     eax, 0x4
        cmp     esi, 0x3
        jl      loop1
    ret1:
        push    0x1
        pop     eax
        pop     esi
        ret
    ret0:
        xor     eax, eax
        pop     esi
        ret
    }
}
