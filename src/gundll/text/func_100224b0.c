/*
 * FUN_100224b0 (58 B) - __stdcall, RET 0x10 (4 args).  Object init: if
 * this+0xc != 0 return 0xc112000d; else call FUN_1001c760(arg2, this); on
 * success set this+4=1 and store arg3/arg4 into this+0x20/0x24.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100224b0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi+0xc]
        test    eax, eax
        je      L_c5
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
L_c5:
        mov     eax, dword ptr [esp+0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_e6
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x14]
        mov     byte ptr [esi+4], 1
        mov     dword ptr [esi+0x20], ecx
        mov     dword ptr [esi+0x24], edx
L_e6:
        pop     esi
        ret     0x10
    }
}
