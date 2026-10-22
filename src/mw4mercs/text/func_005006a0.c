/*
 * FUN_005006A0 (53 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* External function */
extern void __cdecl FUN_00500540(void *a, void *b, void *c);

/* IAT entry: sprintf (0x0076B420) */
extern void *g_iat_76b420;

__declspec(naked) void func_005006a0(void)
{
    __asm {
        mov eax, [esp+0x08]
        mov ecx, [esp+0x0C]
        sub esp, 0x20
        push eax
        push ecx
        lea edx, [esp+0x08]
        push 0x00776270
        push edx
        call dword ptr [g_iat_76b420]
        mov eax, [esp+0x40]
        mov edx, [esp+0x34]
        push eax
        lea ecx, [esp+0x14]
        push ecx
        push edx
        call FUN_00500540
        add esp, 0x3C
        ret
    }
}
