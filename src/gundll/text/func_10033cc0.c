/*
 * FUN_10033cc0 (28 B) - __fastcall. If *(param_1+0xc) != 0, call
 * FUN_10033ad0 and return *(short*)(ecx+0x10) - (short)result; else 0.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10033ad0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10033cc0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jz      L_ret0
        call    FUN_10033ad0
        mov     cx, word ptr [ecx + 0x10]
        sub     cx, ax
        xor     eax, eax
        mov     ax, cx
        ret
L_ret0:
        xor     eax, eax
        ret
    }
}
