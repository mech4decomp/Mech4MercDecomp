/*
 * func_005c4bd0 - FUN_005c4bd0
 * __fastcall predicate. Walks a linked structure and returns a boolean
 * based on several field checks.
 */
__declspec(naked) char func_005c4bd0()
{
    __asm {
        mov     eax, [ecx + 0x170]
        mov     edx, [eax + 0x410]
        sub     edx, [eax + 0x40c]
        sar     edx, 2
        jz      L1
        mov     eax, [eax + 0x40c]
        mov     eax, [eax]
        test    eax, eax
        jz      L1
        mov     dl, [ecx + 0x2f2]
        mov     eax, 1
        cmp     dl, al
        jnz     L1
        mov     dl, [ecx + 0x2f9]
        test    dl, dl
        jnz     L1
        mov     ecx, [ecx + 0x364]
        test    ecx, ecx
        jz      L2
        cmp     [ecx + 8], eax
        jnz     L2
    L1:
        xor     al, al
    L2:
        ret
    }
}
