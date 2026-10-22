/*
 * FUN_00422040 (52 B) — MLR movie-texture factory: allocates a
 * "MidLevelRenderer::MLRMovieTexture" object (via FUN_004151c0) and
 * stores it in g_007b95b8, or stores 0 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95c8;
extern int g_007b95b8;
extern char g_0076dd68[];
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_00422040(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L422069
        mov     ecx, dword ptr [g_007b95c8]
        push    ecx
        push    offset g_0076dd68
        push    0x79
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b95b8], eax
        ret
L422069:
        mov     dword ptr [g_007b95b8], 0x0
        ret
    }
}
