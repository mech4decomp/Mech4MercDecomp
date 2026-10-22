/*
 * FUN_00742910 (83 B) — Retry loop calling FUN_00741640 until success,
 * then Sleep(200). Uses a stack local (local_4) and a global flag.
 *
 * __cdecl (no args, RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aaae4;
extern char g_0087dd0a;
extern void __cdecl FUN_00741640(void);
extern void *g_0076b0d8;

__declspec(naked) void __cdecl FUN_00742910(void)
{
    __asm {
        push    ecx
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref needs C7 44 24 00 */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_start:
        mov     ecx, dword ptr [g_008aaae4]
        push    0
        lea     eax, [esp + 4]
        push    eax
        push    1
        push    0
        push    0
        push    ecx
        mov     byte ptr [g_0087dd0a], 1
        call    FUN_00741640
        test    eax, eax
        mov     byte ptr [g_0087dd0a], 0
        jl      L_fail
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
        test    eax, eax
        jz      L_done
        jmp     L_start
L_fail:
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref needs C7 44 24 00 */
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_done:
        push    0xc8
        call    dword ptr [g_0076b0d8]
        pop     ecx
        ret
    }
}
