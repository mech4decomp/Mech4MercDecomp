/*
 * FUN_100031e0 (136 B) - __stdcall, RET 0x8. Object registration/init
 * routine with an SEH frame: validates the 0x34 handle, builds a
 * sub-object via FUN_1000e1d0, tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000e170(void);   /* rel32 call */
extern void __cdecl FUN_1000e1d0(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_1000e220(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100031e0(void)
{
    __asm {
        push    -1
        push    0x10046b78
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    esi
        push    edi
        lea     ecx, [esp + 8]
        call    FUN_1000e170
        mov     edi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [edi + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x30], 0
        jnz     L_21d
        mov     esi, 0xc1120405
        jmp     L_242
L_21d:
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_1000e1d0
        mov     esi, eax
        test    esi, esi
        jl      L_242
        lea     edx, [esp + 8]
        push    edx
        add     edi, -8
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_242:
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0x30], 0xffffffff
        call    FUN_1000e220
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     8
    }
}
