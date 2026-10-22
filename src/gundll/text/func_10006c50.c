/*
 * FUN_10006c50 (141 B) - __stdcall, RET 0xc.
 * SEH-guarded wrapper: initializes a local object (FUN_10019760), then if
 * param_1+0x24 is nonzero calls FUN_100197d0 and FUN_10001970, returning the
 * result (or 0xc1120405 when the field is zero). Cleans up via FUN_10019880.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10019760(void);       /* rel32 call */
extern void __cdecl FUN_100197d0(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10001970(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_10019880(void);       /* rel32 call */

__declspec(naked) void __stdcall FUN_10006c50(void)
{
    __asm {
        push    -1
        push    0x10047138
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10019760
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0x0
        jnz     L_6c8d
        mov     esi, 0xc1120405
        jmp     L_6cb7
    L_6c8d:
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_100197d0
        mov     esi, eax
        test    esi, esi
        jl      L_6cb7
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0x18
        push    edi
        call    FUN_10001970
        mov     esi, eax
    L_6cb7:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10019880
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0xc
    }
}
