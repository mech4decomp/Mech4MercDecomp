/*
 * FUN_10004fc0 (18 B) - __fastcall. Calls FUN_10003890, sets vtable
 * 0x1002125c, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003890(void);

__declspec(naked) void * __cdecl FUN_10004fc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003890
        mov     dword ptr [esi], 0x1002125c
        mov     eax, esi
        pop     esi
        ret
    }
}
