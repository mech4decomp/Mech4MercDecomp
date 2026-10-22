/*
 * FUN_005e2ef0 (30 B) — __thiscall destructor wrapper.
 *
 * Calls FUN_005e2f10 (this), then if (param & 1) frees this via
 * FUN_004084e0. Returns this.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005e2f10(void *this);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005e2ef0(void *this, unsigned int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e2f10
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
