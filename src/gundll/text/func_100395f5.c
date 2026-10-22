/*
 * FUN_100395f5 (78 B) - __stdcall. Fragment (uses EBP/ESI/EDI set up by
 * caller). Copies locals into a struct, checks an SEH-style exception
 * record, and conditionally calls FUN_10039831.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10038512(void);   /* rel32 call */
extern void __cdecl FUN_100378d6(void);   /* rel32 call */
extern void __cdecl FUN_10039831(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100395f5(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [esi - 4], eax
        call    FUN_10038512
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     dword ptr [eax + 0x6c], ecx
        call    FUN_10038512
        mov     ecx, dword ptr [ebp - 0x20]
        mov     dword ptr [eax + 0x70], ecx
        cmp     dword ptr [edi], 0xe06d7363
        jnz     L_642
        cmp     dword ptr [edi + 0x10], 3
        jnz     L_642
        cmp     dword ptr [edi + 0x14], 0x19930520
        jnz     L_642
        cmp     dword ptr [ebp - 0x24], 0
        jnz     L_642
        cmp     dword ptr [ebp - 0x2c], 0
        jz      L_642
        call    FUN_100378d6
        push    eax
        push    edi
        call    FUN_10039831
        pop     ecx
        pop     ecx
L_642:
        ret
    }
}
