/*
 * FUN_005e8fa0 (30 B) - Constructor: calls FUN_005e8fc0 (thiscall), then
 * optionally deletes via FUN_004084e0 if (param & 1).
 *
 * __thiscall (ECX = this), 1 stack param (byte), RET 4. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e8fc0(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005e8fa0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e8fc0
        test    byte ptr [esp + 0x8], 1
        jz      L_005e8fb8
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_005e8fb8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
