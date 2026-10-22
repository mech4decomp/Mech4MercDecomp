/*
 * FUN_1002AEA0 (49 B) - __stdcall, RET 0xC (3 args).
 * COM-style initializer. If this->+0xc != 0 return 0xc112000d; else call
 * FUN_1001c8b0(this,arg2,arg3); if >=0 set this->+0x4=1. Returns the
 * HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c8b0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1002AEA0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_aeb5
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
    L_aeb5:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_aecd
        mov     byte ptr [esi + 4], 0x1
    L_aecd:
        pop     esi
        ret     0xc
    }
}
