/*
 * FUN_5e02fc31 (37 B) — iterate a count of (key,value) pairs on the stack,
 * calling the install callback for each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_5e02e230(void);

__declspec(naked) void FUN_5e02fc31(void)
{
    __asm {
        push edi
        mov edi, dword ptr [esp+0xc]
        test edi, edi
        jle L_fc54
        push esi
        lea esi, [esp+0x10]
L_fc3f:
        push dword ptr [esi+4]
        add esi, 4
        push dword ptr [esp+0x10]
        call FUN_5e02e230
        pop ecx
        dec edi
        pop ecx
        jnz L_fc3f
        pop esi
L_fc54:
        pop edi
        ret
    }
}
