/*
 * FUN_10030350 (23 B) - __stdcall, RET 0x8.  Dispatches through an object
 * vtable: loads obj->field_0xc, calls vtable[0x18/4] with (obj, arg1, 1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10030350(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        push    1
        push    edx
        push    eax
        call    dword ptr [ecx + 0x18]
        ret     8
    }
}
