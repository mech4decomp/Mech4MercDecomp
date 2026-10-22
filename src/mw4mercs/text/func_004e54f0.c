/*
 * FUN_004e54f0 (87 B) — MLR/Adept state-engine subsystem shutdown (__cdecl).
 * Optionally calls FUN_0040eda0/FUN_00411d10, then frees the object stored
 * at g_007dc740 and clears the pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b4354;
extern int   g_007dc740;
extern void  FUN_0040eda0(void);
extern void  FUN_00411d10(void);
extern void  FUN_004e5570(void);
extern void  FUN_004084e0(void);

__declspec(naked) void FUN_004e54f0(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0x4]
        test    ecx, ecx
        jz      L_4e5515
        push    0x76d9ec
        call    FUN_0040eda0
        mov     ecx, dword ptr [g_007b4354]
        push    ecx
        push    0x773fe0
        mov     ecx, eax
        call    FUN_00411d10
    L_4e5515:
        mov     eax, dword ptr [g_007dc740]
        push    esi
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_4e553f
        mov     ecx, esi
        call    FUN_004e5570
        push    esi
        call    FUN_004084e0
        mov     edx, dword ptr [g_007dc740]
        add     esp, 0x4
        mov     dword ptr [edx], 0x0
        pop     esi
        ret
    L_4e553f:
        mov     dword ptr [eax], 0x0
        pop     esi
        ret
    }
}
