/*
 * FUN_10031190 (29 B) - __stdcall, RET 0x4.  Reads a function pointer from
 * this->+0x24 -> vtable[+8] and returns it + 0x18, else NULL.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031190(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [ecx]
        add     eax, 8
        mov     eax, dword ptr [eax]
        test    eax, eax
        je      short L1
        add     eax, 0x18
        ret     0x4
L1:
        xor     eax, eax
        ret     0x4
    }
}
