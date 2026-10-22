/*
 * FUN_10043A80 (27 B) - __cdecl.  Wrapper: FUN_100439fa(0, arg3, arg2,
 * arg1); return arg4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100439fa(void);

__declspec(naked) void FUN_10043A80(void)
{
    __asm {
        push    0
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        push    dword ptr [esp + 0x10]
        call    FUN_100439fa
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x10
        ret
    }
}
