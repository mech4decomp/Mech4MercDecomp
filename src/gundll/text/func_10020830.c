/*
 * FUN_10020830 (51 B) - __stdcall, RET 0xc (3 args).  Registration helper:
 * if this->obj(+0xc) is non-zero returns 0xC112000D; else calls
 * FUN_1001c760(this, arg2); on success stores arg3 into this->+0x20 and
 * sets this->+4=1.  Returns HRESULT.  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10020830(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_20845
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_20845:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_2085f
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], ecx
L_2085f:
        pop     esi
        ret     0xc
    }
}
