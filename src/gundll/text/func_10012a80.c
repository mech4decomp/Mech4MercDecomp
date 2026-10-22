/*
 * FUN_10012A80 (28 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xC112000E; else tail-jumps to FUN_1001c8d0(this).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);   /* rel32 tail jmp */

__declspec(naked) void __stdcall FUN_10012A80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jne     L_12a93
        mov     eax, 0xc112000e
        ret     4
L_12a93:
        mov     dword ptr [esp + 4], eax
        jmp     FUN_1001c8d0
    }
}
