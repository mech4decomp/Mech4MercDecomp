/*
 * FUN_0048bd40 (77 B) — MLR clipper subsystem init. Allocates an
 * MLRClipper object (FUN_004151c0) and registers an immediate-draw
 * library via FUN_0070f090.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);
extern int g_007b8c08;
extern int g_007da834;

__declspec(naked) void FUN_0048bd40(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_bd6a
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76fe9c
        push    0x42
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007da834], eax
        jmp     L_bd74
L_bd6a:
        mov     dword ptr [g_007da834], 0x0
L_bd74:
        push    0x0
        push    0x0
        push    0x48bda0
        push    0x48bd90
        push    0x76fe7c
        call    FUN_0070f090
        ret
    }
}
