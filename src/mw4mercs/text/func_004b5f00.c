/*
 * FUN_004b5f00 (115 B) — MLR LightElement subsystem init (__cdecl).
 * Creates a "Light" object via FUN_006f4710, allocates a 0x18-byte
 * element via FUN_004084d0, initializes it via FUN_004151c0, stores the
 * vtable pointer 0x4b6100 at +0x14, and registers a "Disable Lighting"
 * console command via FUN_0070f090.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da9e8;
extern int g_007daa10;
extern int g_007dab18;
extern int g_007daa14;
extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_004b5f00(void)
{
    __asm {
        mov     eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0x0
        push    0x76ff50
        call    FUN_006f4710
        push    0x18
        mov     dword ptr [g_007daa10], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_5F4F
        mov     ecx, dword ptr [g_007dab18]
        push    ecx
        push    0x7707e4
        push    0x8e
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4b6100
        mov     dword ptr [g_007daa14], esi
        jmp     L_5F59
    L_5F4F:
        mov     dword ptr [g_007daa14], 0x0
    L_5F59:
        push    0x0
        push    0x0
        push    0x4b5f90
        push    0x4b5f80
        push    0x7707b8
        call    FUN_0070f090
        pop     esi
        ret
    }
}
