/*
 * FUN_10035CE0 (18 B) - __stdcall, RET 0x4.  Returns 1 if
 * arg0->field+0x1c >= arg0->field+0x20, else 0 (signed compare via
 * neg/sbb/inc idiom).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10035CE0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x1c]
        sub     eax, dword ptr [ecx + 0x20]
        neg     eax
        sbb     eax, eax
        inc     eax
        ret     0x4
    }
}
