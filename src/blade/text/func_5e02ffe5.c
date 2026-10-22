/*
 * ___add_12 (94 B) - compiler-generated EH stack-unwind helper
 * (statically-linked CRT inside blade.dll). Adds two 96-bit (3x32)
 * values with carry propagation via FUN_5e02ffc4.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02ffc4(void);

__declspec(naked) void ___add_12(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        mov     edi, dword ptr [esp+0x10]
        push    esi
        push    dword ptr [edi]
        push    dword ptr [esi]
        call    FUN_5e02ffc4
        add     esp, 0xc
        test    eax, eax
        jz      L1
        lea     eax, [esi+4]
        push    eax
        push    1
        push    dword ptr [eax]
        call    FUN_5e02ffc4
        add     esp, 0xc
        test    eax, eax
        jz      L1
        inc     dword ptr [esi+8]
    L1:
        lea     eax, [esi+4]
        push    eax
        push    dword ptr [edi+4]
        push    dword ptr [eax]
        call    FUN_5e02ffc4
        add     esp, 0xc
        test    eax, eax
        jz      L2
        inc     dword ptr [esi+8]
    L2:
        lea     eax, [esi+8]
        push    eax
        push    dword ptr [edi+8]
        push    dword ptr [eax]
        call    FUN_5e02ffc4
        add     esp, 0xc
        pop     edi
        pop     esi
        ret
    }
}
