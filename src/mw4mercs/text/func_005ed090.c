/*
 * FUN_005ed090 (30 B) — scalar deleting destructor, __thiscall (ECX = this),
 * RET 4 (one stack param: flags).
 *
 * Calls destructor FUN_005ed0b0, then if (flags & 1) calls operator delete
 * FUN_004084e0(this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005ed0b0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __fastcall FUN_005ed090(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005ed0b0
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
