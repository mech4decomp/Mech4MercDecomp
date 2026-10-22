/*
 * FUN_100366C0 (16 B) - __thiscall, RET 0x4.  Returns 1 if
 * arg0->field+4 != this->field+0x1c, else 0 (setne).  (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_100366C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 4]
        cmp     edx, dword ptr [ecx + 0x1c]
        setne   al
        ret     0x4
    }
}
