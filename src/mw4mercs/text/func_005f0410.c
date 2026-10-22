/*
 * FUN_005f0410 (30 B) — __thiscall destructor. Calls FUN_004dd1c0 on this,
 * and if the flag param (bit 0) is set, frees this via FUN_004084e0.
 * Returns this in EAX. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd1c0(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void *FUN_005f0410(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
