/*
 * FUN_0068a0d0 (21 B) — __fastcall helper. Pushes [ecx+0x20], calls
 * FUN_004db100, then _ftol (FUN_0075db4a).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004db100(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0068a0d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x20]
        mov     ecx, dword ptr [esp+0x4]
        push    eax
        call    FUN_004db100
        call    FUN_0075db4a
        ret     4
    }
}
