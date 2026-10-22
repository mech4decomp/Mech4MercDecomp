/*
 * FUN_00422450 (52 B) — MLRTexture factory. Allocates a 0x14-byte
 * object (FUN_004084d0), constructs it via FUN_004151c0 with the
 * class name "MidLevelRenderer::MLRTexture" (0x76dda0), and stores
 * the result in global 0x007b95c8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_007b95c8;
extern void FUN_004084d0(void);
extern void FUN_004151c0(void);

__declspec(naked) void FUN_00422450(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L79
        mov     ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x76dda0
        push    0x78
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b95c8], eax
        ret
L79:
        mov     dword ptr [g_007b95c8], 0x0
        ret
    }
}
