/*
 * FUN_004168c0 (30 B) — DB item/pool destructor helper (__thiscall, one
 * stack arg). Calls FUN_004165b0; if the arg's bit 0 is set, frees this
 * via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004168c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004165b0
        test    byte ptr [esp + 8], 1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
