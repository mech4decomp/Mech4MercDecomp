/*
 * FUN_004efdb0 (58 B) — Adept::LightComponent sub-object factory.
 * Allocates 0x194 bytes via FUN_004084d0 and constructs through
 * FUN_004b6090; returns the object or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b6090(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_007daa10;   /* DAT_007daa10 */

__declspec(naked) void FUN_004efdb0(void)
{
    __asm {
        mov     eax, dword ptr [g_007daa10]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x194
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      Lddf
        mov     ecx, eax
        call    FUN_004b6090
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
Lddf:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
