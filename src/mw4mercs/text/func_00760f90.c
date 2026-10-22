/*
 * FUN_00760f90 (87 B) — __cdecl, no params.
 *
 * Loads CdaC21BA.dll via the IAT, then initializes a driver handle
 * (FUN_00761090 / FUN_007611a0). Returns 0x195 on any failure, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_LoadLibraryA)(const char *);
extern int g_008bd2f8;
extern int g_008bd2f4;
extern void __cdecl FUN_00761090(void);
extern void __cdecl FUN_007611a0(void);
extern void __cdecl FUN_00761140(void);

__declspec(naked) void __cdecl FUN_00760f90(void)
{
    __asm {
        push    0x7b793c
        call    dword ptr [g_LoadLibraryA]
        test    eax, eax
        mov     dword ptr [g_008bd2f8], eax
        jnz     L1
        mov     eax, 0x195
        ret
L1:
        push    0x0
        push    0x0
        call    FUN_00761090
        add     esp, 0x8
        cmp     eax, 0x50
        jz      L2
        mov     eax, 0x195
        ret
L2:
        push    0x0
        push    0x7b793c
        call    FUN_007611a0
        add     esp, 0x8
        mov     dword ptr [g_008bd2f4], eax
        test    eax, eax
        jnz     L3
        call    FUN_00761140
        mov     eax, 0x195
        ret
L3:
        xor     eax, eax
        ret
    }
}
