/*
 * FUN_10013db0 (51 B) — __stdcall, RET 0xC.
 * If this+0xc != 0 return 0xc112000d; else call FUN_1001c760(arg2,this)
 * and, if >= 0, set this+0x4=1 and this+0x20=arg3.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10013db0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L1
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
    L1:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L2
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x20], ecx
    L2:
        pop     esi
        ret     0xc
    }
}
