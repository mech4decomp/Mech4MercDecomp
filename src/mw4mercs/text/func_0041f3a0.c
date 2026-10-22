/*
 * FUN_0041f3a0 (44 B) — __thiscall bool writer: appends "true" or
 * "false" (based on param_1) through FUN_00412780, sets a flag byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_76d170[];
extern char g_str_76d834[];
extern void __cdecl FUN_00412780(void);

__declspec(naked) void FUN_0041f3a0(void)
{
    __asm {
        mov     al, byte ptr [esp+0x4]
        push    esi
        test    al, al
        mov     esi, ecx
        mov     eax, offset g_str_76d170
        jnz     L_41f3b5
        mov     eax, offset g_str_76d834
L_41f3b5:
        push    eax
        lea     ecx, [esi+0x18]
        call    FUN_00412780
        mov     eax, dword ptr [esi+0x10]
        mov     ecx, dword ptr [eax+0x10]
        mov     byte ptr [ecx+0x4], 0x1
        pop     esi
        ret     0x4
    }
}
