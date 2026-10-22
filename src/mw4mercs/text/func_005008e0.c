/*
 * FUN_005008E0 (74 B) — __thiscall constructor-like method
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c10;              /* 0x007B8C10 */
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412570(void);

__declspec(naked) void func_005008e0(void)
{
    __asm {
        mov eax, dword ptr [DAT_007b8c10]
        push esi
        mov esi, ecx
        push eax
        call FUN_00415180
        mov ecx, [esp+0x0C]
        xor eax, eax
        push ecx
        lea ecx, [esi+0x14]
        mov [esi+0x08], eax
        mov [esi+0x0C], eax
        mov dword ptr [esi], 0x0076CD9C
        call FUN_00412570
        mov eax, [esp+0x10]
        mov edx, [esp+0x08]
        mov ecx, [esp+0x14]
        mov [esi+0x18], eax
        mov dword ptr [esi], 0x00776278
        mov [esi+0x10], edx
        mov [esi+0x1C], ecx
        mov eax, esi
        pop esi
        ret 0x10
    }
}
