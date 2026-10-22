/*
 * FUN_10017cd0 (49 B) - __stdcall, RET 0xC.  Object-registration helper.
 * If this->+0xc is non-zero, returns error 0xc112000d.  Otherwise calls
 * FUN_1001c8b0(this, arg2, arg3); on success (>=0) sets this->+4 = 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_10017cd0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      short L_skip
        mov     eax, 0xc112000d
        pop     esi
        ret     0xc
L_skip:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      short L_done
        mov     byte ptr [esi + 0x4], 1
L_done:
        pop     esi
        ret     0xc
    }
}
