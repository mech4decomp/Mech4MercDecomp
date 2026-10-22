/*
 * FUN_004f9b40 (45 B) — __thiscall destructor. Sets vtable ptr
 * 0x775b3c, calls FUN_004fa060, FUN_004de060, sub-object dtor at
 * this+0x2b0 (FUN_0041fc90), and FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc6b4;

extern void FUN_004fa060(void);
extern void FUN_004de060(void);
extern void FUN_0041fc90(void);
extern void FUN_004d9db0(void);

__declspec(naked) void FUN_004f9b40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x775b3c
        call    FUN_004fa060
        mov     ecx, dword ptr [g_007dc6b4]
        call    FUN_004de060
        lea     ecx, [esi + 0x2b0]
        call    FUN_0041fc90
        mov     ecx, esi
        call    FUN_004d9db0
        pop     esi
        ret
    }
}
