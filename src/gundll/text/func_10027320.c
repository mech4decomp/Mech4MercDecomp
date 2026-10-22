/*
 * FUN_10027320 (51 B) - __stdcall, RET 0xc.  COM-style registration helper:
 * if this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c760(this, arg2), and on success sets this->+4 = 1 and stores
 * arg3 into this->+0x20.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10027320(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_7335
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_7335:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_734f
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], ecx
L_734f:
        pop     esi
        ret     0xc
    }
}
