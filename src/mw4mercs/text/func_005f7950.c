/*
 * FUN_005f7950 (39 B) — cleanup/teardown helper.
 *
 * If global g_7f268c is non-null, calls FUN_00501b40 (thiscall) and
 * FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *param);

extern int g_7f268c;

__declspec(naked) void __stdcall FUN_005f7950(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_7f268c]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     dword ptr [g_7f268c], 0
        pop     esi
        ret
    }
}
