/*
 * FUN_10003940 (141 B) - __stdcall, RET 0xc. Object registration/init
 * routine with an SEH frame: validates the 0x30 handle, calls FUN_10013db0,
 * tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10013d40(void);   /* rel32 call */
extern void __cdecl FUN_10013db0(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10013e60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10003940(void)
{
    __asm {
        push    -1
        push    0x10046cb8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10013d40
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0
        jnz     L_397d
        mov     esi, 0xc1120405
        jmp     L_39a7
L_397d:
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_10013db0
        mov     esi, eax
        test    esi, esi
        jl      L_39a7
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_39a7:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10013e60
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0xc
    }
}
