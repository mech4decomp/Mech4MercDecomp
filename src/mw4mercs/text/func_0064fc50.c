/*
 * FUN_0064FC50 (33 B) — __cdecl.
 *
 * Calls FUN_00650120(&DAT_007f3254, &DAT_0080da24[DAT_008058c0]) and stores
 * the result into *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008058c0;
extern int g_0080da24[];
extern int __cdecl FUN_00650120(void *a, int *b);

__declspec(naked) void FUN_0064fc50(void)
{
    __asm {
        mov     eax, dword ptr [g_008058c0]
        lea     ecx, [eax*4 + g_0080da24]
        push    ecx
        push    0x7f3254
        call    FUN_00650120
        mov     edx, dword ptr [esp + 0xc]
        add     esp, 0x8
        mov     dword ptr [edx], eax
        ret
    }
}
