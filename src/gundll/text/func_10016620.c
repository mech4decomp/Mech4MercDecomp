/*
 * FUN_10016620 (49 B) - __stdcall, RET 0xc.  If this->obj(+0xc) is non-null
 * returns 0xC112000D; else calls FUN_1001c8b0(this, arg2, arg3); on success
 * (>=0) sets this->+4 = 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_10016620(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L_35
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_35:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_4d
        mov     byte ptr [esi + 4], 1
L_4d:
        pop     esi
        ret     0xc
    }
}
