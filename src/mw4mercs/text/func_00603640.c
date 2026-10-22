/*
 * FUN_00603640 (39 B) — destroys the object stored in global 0x007f26c0
 * (calls its dtor then frees it) and nulls the global. Mirrors FUN_006034e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26c0;
extern void __cdecl FUN_004dd340(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_00603640(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f26c0]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     dword ptr [g_007f26c0], 0x0
        pop     esi
        ret
    }
}
