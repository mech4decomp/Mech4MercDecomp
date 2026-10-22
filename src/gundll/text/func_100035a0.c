/*
 * FUN_100035a0 (152 B) - __stdcall, RET 0xc. Object registration/init
 * routine with an SEH frame: validates the 0x34 handle, calls FUN_1000f020,
 * tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000efb0(void);   /* rel32 call */
extern void __cdecl FUN_1000f020(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_1000f110(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100035a0(void)
{
    __asm {
        push    -1
        push    0x10046bf8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_1000efb0
        mov     edi, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [edi + 0x34]
        test    eax, eax
        mov     dword ptr [esp + 0x34], 0
        jnz     L_35dd
        mov     esi, 0xc1120405
        jmp     L_3612
L_35dd:
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        jnz     L_35ec
        mov     esi, 0x80070057
        jmp     L_3612
L_35ec:
        push    eax
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_1000f020
        mov     esi, eax
        test    esi, esi
        jl      L_3612
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -8
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_3612:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_1000f110
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0xc
    }
}
