/*
 * FUN_004ee810 (65 B) — cdecl factory. Allocates a 0x178-byte object,
 * constructs it (FUN_004c1730) and returns it, or NULL on alloc failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007daaec;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern int g_007daaf0;
extern void __cdecl FUN_004c1730(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004ee810(void)
{
    __asm {
        mov     eax, dword ptr [g_007daaec]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x178
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_004ee846
        mov     ecx, dword ptr [g_007daaf0]
        push    ecx
        mov     ecx, eax
        call    FUN_004c1730
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_004ee846:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
