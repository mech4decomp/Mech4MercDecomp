/*
 * FUN_10007C20 (15 B) - __thiscall, RET.  Destructor: if this->field_0x04 is
 * non-null, destroys it via IAT 0x10049058 (CryptDestroyHash-family).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049058;   /* IAT: crypto routine (CryptDestroyHash-family) */

__declspec(naked) void __fastcall FUN_10007C20(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        je      L_7c2e
        push    eax
        call    dword ptr [g_10049058]
L_7c2e:
        ret
    }
}
