/*
 * FUN_10034D60 (23 B) - __stdcall, RET 0x8.  Loads a member object from
 * this->field+0xc (a vtable object), then calls its virtual method at
 * vtable[5] (+0x14) with (arg1, 1).  (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10034D60(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [eax]
        push    1
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        ret     0x8
    }
}
