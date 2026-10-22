/*
 * FUN_10028950 (28 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xC112000E; else tail-jumps to FUN_1001c8d0(this).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);

__declspec(naked) void __stdcall FUN_10028950(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_go
        mov     eax, 0xc112000e
        ret     0x4
L_go:
        mov     dword ptr [esp + 0x4], eax
        jmp     FUN_1001c8d0
    }
}
