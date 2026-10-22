/*
 * FUN_10030160 (23 B) - __stdcall, RET 0x8.  Calls arg1->+0xc vtable[6]
 * (arg1->+0xc, arg2, 2) and returns its result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030160(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        push    2
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
        ret     0x8
    }
}
