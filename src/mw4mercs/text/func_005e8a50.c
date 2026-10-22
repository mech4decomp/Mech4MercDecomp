/*
 * FUN_005e8a50 (36 B) - Constructor: sets vtable ptr 0x7895d8, calls
 * FUN_00501470, optionally deletes via FUN_004084e0 if (param & 1).
 *
 * __thiscall (ECX = this), 1 stack param (byte), RET 4. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501470(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005e8a50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x7895D8
        call    FUN_00501470
        test    byte ptr [esp + 0x8], 1
        jz      L_005e8a6e
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_005e8a6e:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
