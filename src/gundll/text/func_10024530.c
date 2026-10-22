/*
 * FUN_10024530 (65 B) - __stdcall, RET 0x14.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001c760(this, arg2); on success stores
 * arg3/arg4/arg5 into this->+0x20/+0x24/+0x28 and sets this->+4 = 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10024530(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_4545
        mov     eax, 0xc112000d
        pop     esi
        ret     0x14
L_4545:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_456d
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
        mov     dword ptr [esi + 0x28], ecx
L_456d:
        pop     esi
        ret     0x14
    }
}
