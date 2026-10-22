/*
 * FUN_1003b43f (81 B) - __cdecl. Dispatches on arg2 (0x65/0x45/0x66) to
 * one of FUN_1003b2b0 / FUN_1003b3ac / FUN_1003b18d. (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003b2b0(void);   /* rel32 call */
extern void __cdecl FUN_1003b3ac(void);   /* rel32 call */
extern void __cdecl func_1003b18d(void);  /* rel32 call */

__declspec(naked) void __cdecl FUN_1003b43f(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp + 0x10], 0x65
        je      L_47a
        cmp     dword ptr [ebp + 0x10], 0x45
        je      L_47a
        cmp     dword ptr [ebp + 0x10], 0x66
        jne     L_467
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_1003b2b0
        add     esp, 0xc
        pop     ebp
        ret
L_467:
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    FUN_1003b3ac
        jmp     L_48b
L_47a:
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    func_1003b18d
L_48b:
        add     esp, 0x10
        pop     ebp
        ret
    }
}
