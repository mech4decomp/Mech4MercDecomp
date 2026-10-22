/*
 * FUN_004AF300 (62 B) — cleanup: frees global at 0x007da9f4, calls FUN_006f4850 on
 * global at 0x007da9f0, then zeroes both.
 *
 * __cdecl, no params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415200(int this);
extern void __stdcall FUN_004084e0(int ptr);
extern void __stdcall FUN_006f4850(int ptr, int flags);

extern int DAT_007da9f4;
extern int DAT_007da9f0;

__declspec(naked) void FUN_004af300(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da9f4]
        test    esi, esi
        jz      l_free_second
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_free_second:
        mov     eax, dword ptr [DAT_007da9f0]
        push    0x1
        push    eax
        mov     dword ptr [DAT_007da9f4], 0
        call    FUN_006f4850
        mov     dword ptr [DAT_007da9f0], 0
        pop     esi
        ret
    }
}
