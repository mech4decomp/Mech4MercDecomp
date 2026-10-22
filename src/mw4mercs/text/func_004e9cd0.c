/*
 * FUN_004e9cd0 (44 B) — __thiscall. MLR/Adept core: calls FUN_004e9d00,
 * then computes a hashed object pointer from globals 0x7dab44/0x7dab40 and
 * passes it to FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e9d00(void);
extern void __cdecl FUN_004179b0(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_004e9cd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004e9d00
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        push    esi
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        xor     ecx, 0x85739531
        add     ecx, 0x184
        call    FUN_004179b0
        pop     esi
        ret
    }
}
