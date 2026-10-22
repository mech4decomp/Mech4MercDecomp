/*
 * FUN_10023D80 (51 B) - __stdcall, RET 0xc.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001c760(this, arg2); on success sets
 * this->+4 = 1 and this->+0x20 = arg3.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);

__declspec(naked) void __stdcall FUN_10023D80(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_d95
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_d95:
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L_daf
        mov     ecx, dword ptr [esp + 0x10]
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x20], ecx
L_daf:
        pop     esi
        ret     0xc
    }
}
