/*
 * FUN_10012260 (49 B) - __stdcall, RET 0xC.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3) and on success sets this->+4=1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_10012260(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_12275
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_12275:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_1228d
        mov     byte ptr [esi + 4], 1
L_1228d:
        pop     esi
        ret     0xc
    }
}
