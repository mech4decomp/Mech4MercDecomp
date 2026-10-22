/*
 * FUN_10034ca0 (29 B) - __stdcall, RET 0x4.  Walks arg1->+0x20 -> vtable
 * +8 -> object; returns obj+0x18 if non-null else 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10034ca0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [ecx]
        add     eax, 8
        mov     eax, dword ptr [eax]
        test    eax, eax
        je      L_b8
        add     eax, 0x18
        ret     4
    L_b8:
        xor     eax, eax
        ret     4
    }
}
