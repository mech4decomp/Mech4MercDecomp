/*
 * FUN_00422490 (39 B) — MLRTexture dtor/factory teardown. If the global
 * texture (0x007b95c8) is non-null, calls its dtor FUN_00415200 and
 * frees it (FUN_004084e0), then nulls the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95c8;
extern void FUN_00415200(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_00422490(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b95c8]
        test    esi, esi
        jz      LAB
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
LAB:
        mov     dword ptr [g_007b95c8], 0x0
        pop     esi
        ret
    }
}
