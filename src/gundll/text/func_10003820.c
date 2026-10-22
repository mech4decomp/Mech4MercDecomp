/*
 * FUN_10003820 (141 B) - __stdcall, RET 0xc. Object registration/init
 * routine with an SEH frame: validates the 0x30 handle, calls FUN_10013ae0,
 * tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10013a70(void);   /* rel32 call */
extern void __cdecl FUN_10013ae0(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10013b90(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10003820(void)
{
    __asm {
        push    -1
        push    0x10046c78
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10013a70
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0
        jnz     L_385d
        mov     esi, 0xc1120405
        jmp     L_3887
L_385d:
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_10013ae0
        mov     esi, eax
        test    esi, esi
        jl      L_3887
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_3887:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10013b90
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0xc
    }
}
