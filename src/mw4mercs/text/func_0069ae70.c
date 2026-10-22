/*
 * FUN_0069ae70 (28 B) — HUD dispatcher: if a global equals param_1, tail-jump
 * to FUN_00649150; otherwise call FUN_00562f40(param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058ac;   /* DAT_008058ac */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_00562f40(void);

__declspec(naked) void FUN_0069ae70(void)
{
    __asm {
        mov     eax, dword ptr [g_008058ac]
        cmp     eax, dword ptr [esp + 0x4]
        jnz     L80
        jmp     FUN_00649150
L80:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    FUN_00562f40
        pop     ecx
        ret
    }
}
