/*
 * FUN_10031270 (23 B) - __stdcall, RET 0x8.  Virtual call: arg1->+0xc is an
 * object whose vtable[+0x14] is called with (arg1->+0xc, arg2, 4).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031270(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        push    4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        ret     0x8
    }
}
