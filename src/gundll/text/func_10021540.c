/*
 * FUN_10021540 (70 B) - __stdcall, RET 0x18.  If this->obj(+0xc) is
 * non-null returns 0xC112000D; else calls FUN_1001c8b0(this, arg2, arg3);
 * on success sets this->+4=1 and stores arg4/arg5/arg6 into +0x24/+0x28/
 * +0x2c.  Returns the HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10021540(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_1555
        mov     eax, 0xc112000d
        pop     esi
        ret     0x18
L_1555:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_1582
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x28], ecx
        mov     dword ptr [esi + 0x2c], edx
L_1582:
        pop     esi
        ret     0x18
    }
}
