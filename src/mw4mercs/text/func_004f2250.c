/*
 * FUN_004f2250 (102 B) -- MLR/Adept shared lookup-or-construct helper
 * (__cdecl, 2 stack params). Reads two u16 fields from param_2 into a local
 * u32, reads values from param_1's stream via virtual calls [vtbl+0x20] and
 * [vtbl+0x1c], then if (param_2 & 1) calls FUN_004f33c0(&local) and returns
 * its result; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f33c0(void);

__declspec(naked) void func_004f2250(void)
{
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     ax, word ptr [edi + 0x14]
        mov     cx, word ptr [edi + 0x16]
        mov     word ptr [esp + 0x8], ax
        push    4
        lea     eax, [esp + 0x10]
        mov     word ptr [esp + 0xe], cx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    8
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
        test    byte ptr [esp + 0x18], 1
        jnz     l_a3
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 8
        ret
    l_a3:
        mov     ecx, dword ptr [edi + 0x50]
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_004f33c0
        pop     edi
        pop     esi
        add     esp, 8
        ret
    }
}
