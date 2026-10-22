/*
 * FUN_10006d90 (165 B) - __stdcall, RET 0x18.
 * SEH-guarded wrapper: initializes a local object (FUN_10019c50), then if
 * param_1+0x24 is nonzero calls FUN_10019cd0 (defaulting param_5 to
 * 0x10055024 when null) and FUN_10001970, returning the result (or
 * 0xc1120405 when the field is zero). Cleans up via FUN_10019e70.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10019c50(void);       /* rel32 call */
extern void __cdecl FUN_10019cd0(void);       /* rel32 call, 6 args */
extern void __cdecl FUN_10001970(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10019e70(void);       /* rel32 call */

__declspec(naked) void __stdcall FUN_10006d90(void)
{
    __asm {
        push    -1
        push    0x10047178
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x30
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10019c50
        mov     edi, dword ptr [esp + 0x48]
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        mov     dword ptr [esp + 0x40], 0x0
        jnz     L_6dcd
        mov     esi, 0xc1120405
        jmp     L_6e0f
    L_6dcd:
        mov     eax, dword ptr [esp + 0x58]
        test    eax, eax
        jnz     L_6dda
        mov     eax, 0x10055024
    L_6dda:
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x4c]
        push    eax
        mov     eax, dword ptr [esp + 0x58]
        push    eax
        mov     eax, dword ptr [esp + 0x64]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_10019cd0
        mov     esi, eax
        test    esi, esi
        jl      L_6e0f
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -0x18
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_6e0f:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x40], 0xffffffff
        call    FUN_10019e70
        mov     ecx, dword ptr [esp + 0x38]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x3c
        ret     0x18
    }
}
