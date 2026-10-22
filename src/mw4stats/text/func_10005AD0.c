/*
 * FUN_10005ad0 (9 B) - __fastcall. Sets vtable 0x100211f4, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_10005ad0(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0x100211f4
        ret
    }
}
