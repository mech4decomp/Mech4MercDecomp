/*
 * FUN_1002a1a0 (89 B) - __stdcall, RET 0x10 (4 args). Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001ca10(this, arg2), then FUN_10001dd0(arg3). On success stores
 * +0x1c (the arg3 result) and +0x20 (arg4) and +4=1, returns 0. If arg3
 * duplication fails returns 0x8007000E.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca10(void);
extern void __stdcall FUN_10001dd0(void);

__declspec(naked) void __stdcall FUN_1002a1a0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_a1b7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
L_a1b7:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L_a1f4
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_a1e2
        test    edi, edi
        je      L_a1e2
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
L_a1e2:
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x1c], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], edx
        mov     eax, ecx
L_a1f4:
        pop     edi
        pop     esi
        ret     0x10
    }
}
