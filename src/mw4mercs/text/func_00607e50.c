/*
 * FUN_00607e50 (39 B) — teardown: if the global archive/stream pointer
 * (0x007f27c8) is non-null, release it via FUN_006e2080 (thiscall) and
 * free it via FUN_004084e0, then null the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27c8;
extern void __cdecl FUN_006e2080(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00607e50(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f27c8]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_006e2080
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     dword ptr [g_007f27c8], 0
        pop     esi
        ret
    }
}
