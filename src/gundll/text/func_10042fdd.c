/*
 * FUN_10042FDD (27 B) - __cdecl.  Wrapper: FUN_10042ff8(0, arg4, arg3,
 * arg2, arg1).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10042ff8(void);

__declspec(naked) void FUN_10042FDD(void)
{
    __asm {
        push    0
        push    dword ptr [esp + 0x14]
        push    dword ptr [esp + 0x14]
        push    dword ptr [esp + 0x14]
        push    dword ptr [esp + 0x14]
        call    FUN_10042ff8
        add     esp, 0x14
        ret
    }
}
