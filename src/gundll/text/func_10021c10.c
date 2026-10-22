/*
 * FUN_10021C10 (56 B) - __stdcall, RET 0x10.  If this->obj(+0xc) is
 * non-null returns 0xC112000D; else calls FUN_1001c8b0(this, arg2, arg3);
 * on success sets this->+4=1 and stores arg4 into +0x24.  Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10021C10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_1c25
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
L_1c25:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_1c44
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], edx
L_1c44:
        pop     esi
        ret     0x10
    }
}
