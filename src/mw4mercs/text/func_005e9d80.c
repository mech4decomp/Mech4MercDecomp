/*
 * FUN_005e9d80 (36 B) — __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501470(void *param);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005e9d80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x789760
        call    FUN_00501470
        test    byte ptr [esp + 0x8], 0x1
        jz      L_9D9E
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_9D9E:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
