/*
 * FUN_004e1b60 (76 B) — MLR/Adept application core shutdown (cdecl).
 * Applies "LoadRadius" graphics option and frees the global Adept::Map.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007b4350;
extern int g_007dc700;

__declspec(naked) void FUN_004e1b60(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        test    ecx, ecx
        jz      L_1b85
        push    0x76d9ec
        call    FUN_0040eda0
        mov     ecx, dword ptr [g_007b4350]
        push    ecx
        push    0x773ca4
        mov     ecx, eax
        call    FUN_00411d10
L_1b85:
        push    esi
        mov     esi, dword ptr [g_007dc700]
        test    esi, esi
        jz      L_1ba0
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_1ba0:
        mov     dword ptr [g_007dc700], 0
        pop     esi
        ret
    }
}
