/*
 * FUN_005af0b0 (30 B) — __thiscall destructor wrapper. Calls FUN_005af0a0
 * (base ctor), then if (param & 1) calls FUN_004084e0(this) to free.
 * Returns this in EAX. RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005af0a0(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005af0b0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005af0a0
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
