/*
 * FUN_1001b700 (53 B) — __thiscall, RET 0x8.
 * Calls FUN_1003802e(local, 0x10050c10, arg2) then
 * FUN_1001b280(this, arg1, local).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003802e(void);
extern void __cdecl FUN_1001b280(void);

__declspec(naked) void FUN_1001b700(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0x40
        push    esi
        push    eax
        mov     esi, ecx
        lea     ecx, [esp + 0x8]
        push    0x10050c10
        push    ecx
        call    FUN_1003802e
        mov     eax, dword ptr [esp + 0x54]
        add     esp, 0xc
        lea     edx, [esp + 0x4]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_1001b280
        pop     esi
        add     esp, 0x40
        ret     0x8
    }
}
