/*
 * FUN_10022c50 (72 B) - __stdcall, RET 0x18 (6 args).  Object init: if
 * this+0xc != 0 return 0xc112000d; else call FUN_1001c760(arg2, this); on
 * success set this+4=1 and store arg3..arg6 into this+0x20..+0x2c.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10022c50(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        je      L_c65
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
L_c65:
        mov     eax, dword ptr [esp+0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_c94
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x14]
        mov     dword ptr [esi+0x20], ecx
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [esi+0x24], edx
        mov     edx, dword ptr [esp+0x1c]
        mov     byte ptr [esi+4], 1
        mov     dword ptr [esi+0x28], ecx
        mov     dword ptr [esi+0x2c], edx
L_c94:
        pop     esi
        ret     0x18
    }
}
