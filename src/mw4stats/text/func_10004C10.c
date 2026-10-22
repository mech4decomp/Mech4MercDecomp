/*
 * FUN_10004c10 (19 B) - __fastcall. Forwards to FUN_10004c30, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10004c30(void);

__declspec(naked) void * __cdecl FUN_10004c10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_10004c30
        mov     eax, esi
        pop     esi
        ret     4
    }
}
