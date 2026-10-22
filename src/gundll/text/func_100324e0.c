/*
 * FUN_100324E0 (16 B) - __thiscall, RET 0x4.  Returns (arg1->+4 != this->+0x1c).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_100324E0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 4]
        cmp     edx, dword ptr [ecx + 0x1c]
        setne   al
        ret     0x4
    }
}
