/*
 * FUN_10006bc0 (136 B) - __stdcall, RET 0x8.
 * SEH-guarded wrapper: initializes a local object (FUN_10019630), then if
 * param_1+0x24 is nonzero calls FUN_10019690 and FUN_10001970, returning the
 * result (or 0xc1120405 when the field is zero). Cleans up via FUN_100196e0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10019630(void);       /* rel32 call */
extern void __cdecl FUN_10019690(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10001970(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_100196e0(void);       /* rel32 call */

__declspec(naked) void __stdcall FUN_10006bc0(void)
{
    __asm {
        push    -1
        push    0x10047118
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x20
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10019630
        mov     edi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        mov     dword ptr [esp + 0x30], 0x0
        jnz     L_6bfd
        mov     esi, 0xc1120405
        jmp     L_6c22
    L_6bfd:
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_10019690
        mov     esi, eax
        test    esi, esi
        jl      L_6c22
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -0x18
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_6c22:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x30], 0xffffffff
        call    FUN_100196e0
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x2c
        ret     0x8
    }
}
