/*
 * FUN_100123B0 (63 B) - __stdcall, RET 0x14.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3) and on success sets this->+4=1 and
 * stores +0x24/+0x28 from arg4/arg5.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_100123B0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_123c5
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
L_123c5:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_123eb
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
        mov     dword ptr [esi + 0x28], ecx
L_123eb:
        pop     esi
        ret     0x14
    }
}
