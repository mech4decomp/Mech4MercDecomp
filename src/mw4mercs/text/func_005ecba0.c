/*
 * FUN_005ecba0 (30 B) — scalar deleting destructor, __thiscall (ECX = this),
 * RET 4 (one stack param: flags).
 *
 * Calls destructor FUN_0041fc90, then if (flags & 1) calls operator delete
 * FUN_004084e0(this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_005ecba0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
