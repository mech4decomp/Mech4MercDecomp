/*
 * FUN_100347e0 (32 B) - __stdcall, RET 0x4.  Makes a virtual call
 * through [edx+0x40] (5 args) on the object graph rooted at arg1 and
 * returns its result.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100347e0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        push    0x80000000
        push    0
        push    0
        push    ecx
        push    eax
        call    dword ptr [edx + 0x40]
        ret     4
    }
}
