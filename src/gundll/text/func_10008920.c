/*
 * FUN_10008920 (17 B) - __fastcall. Sets vtable pointer 0x10049608 at
 * [ECX], then calls FUN_10001d60([ECX+4]).
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10008920(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        push    eax
        mov     dword ptr [ecx], 0x10049608
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
