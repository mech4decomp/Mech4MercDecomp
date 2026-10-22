/*
 * FUN_00429a60 (52 B) — __cdecl singleton ctor for MLRShadowLight: allocates
 * a 0x14-byte object, constructs it via FUN_004151c0(0x73, "MidLevelRenderer::MLRShadowLight", ...),
 * stores the result in g_007b96b4 (or 0 on alloc failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6a4;
extern int g_007b96b4;
extern void * __cdecl FUN_004084d0(unsigned int);
extern int __cdecl FUN_004151c0(int, const char *, int);

__declspec(naked) void FUN_00429a60(void)
{
    __asm {
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_429a89
        mov     ecx, dword ptr [g_007da6a4]
        push    ecx
        push    0x76dff4
        push    0x73
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b96b4], eax
        ret
L_429a89:
        mov     dword ptr [g_007b96b4], 0
        ret
    }
}
