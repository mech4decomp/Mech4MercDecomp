/*
 * FUN_10003890 (9 B) - set vtable 0x10021240.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10003890(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0x10021240
        ret
    }
}
