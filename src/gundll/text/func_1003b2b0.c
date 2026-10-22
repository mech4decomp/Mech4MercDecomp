/*
 * FUN_1003b2b0 (85 B) - __cdecl.
 * Loads a double from arg1, calls FUN_10041f80, then FUN_10041f09 and
 * FUN_1003b305 with computed args. Returns arg3.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10041f80(void);   /* rel32 call */
extern void __cdecl FUN_10041f09(void);   /* rel32 call */
extern void __cdecl FUN_1003b305(void);   /* rel32 call */

__declspec(naked) void FUN_1003b2b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x28
        lea     eax, [ebp - 0x28]
        push    esi
        push    eax
        lea     eax, [ebp - 0x10]
        push    eax
        mov     eax, dword ptr [ebp + 0x8]
        push    ecx
        push    ecx
        fld     qword ptr [eax]
        fstp    qword ptr [esp]
        call    FUN_10041f80
        mov     esi, dword ptr [ebp + 0x10]
        lea     eax, [ebp - 0x10]
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        add     eax, esi
        push    eax
        xor     eax, eax
        cmp     dword ptr [ebp - 0x10], 0x2d
        setz    al
        add     eax, dword ptr [ebp + 0xc]
        push    eax
        call    FUN_10041f09
        lea     eax, [ebp - 0x10]
        push    0
        push    eax
        push    esi
        push    dword ptr [ebp + 0xc]
        call    FUN_1003b305
        mov     eax, dword ptr [ebp + 0xc]
        add     esp, 0x2c
        pop     esi
        leave
        ret
    }
}
