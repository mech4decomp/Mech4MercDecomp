/*
 * FUN_006E3BF0 (83 B) — .text data block containing 2 sub-functions:
 *   [0x6E3BF0] __cdecl (3 args, RET): loops count times calling FUN_006E2B60
 *             on pairs of pointers.
 *   [0x6E3C20] __cdecl (1 arg, RET): hash-style string fold (x*33 + c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006E2B60(void);

__declspec(naked) void FUN_006E3BF0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        je      loc_6e3c1d
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        lea     ebx, [eax + 1]
loc_6e3c09:
        push    edi
        mov     ecx, esi
        call    FUN_006E2B60
        add     esi, 4
        add     edi, 4
        dec     ebx
        jne     loc_6e3c09
        pop     edi
        pop     esi
        pop     ebx
loc_6e3c1d:
        ret
        nop
        nop
        mov     edx, dword ptr [esp + 4]
        mov     cl, byte ptr [edx]
        xor     eax, eax
        test    cl, cl
        je      loc_6e3c42
        push    esi
loc_6e3c2d:
        mov     esi, eax
        shl     esi, 5
        add     esi, eax
        movsx   eax, cl
        mov     cl, byte ptr [edx + 1]
        add     eax, esi
        inc     edx
        test    cl, cl
        jne     loc_6e3c2d
        pop     esi
loc_6e3c42:
        ret
    }
}
