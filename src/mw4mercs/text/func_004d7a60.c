/*
 * FUN_004d7a60 (74 B) — GameSpy Heartbeat Port getter. Reads the configured
 * heartbeat port via FUN_00708930; if it comes back 0, defaults to 0x6cfc
 * (27804) via FUN_007089b0. Returns the port.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_007089b0(void);

__declspec(naked) void FUN_004d7a60(void)
{
    __asm {
        sub     esp, 8
        push    0
        lea     eax, [esp+8]
        push    eax
        lea     ecx, [esp+8]
        push    ecx
        push    0x772f7c
        mov     dword ptr [esp+0x14], 4
        call    FUN_00708930
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jnz     done
        push    4
        lea     edx, [esp+4]
        push    edx
        push    0x772f7c
        mov     dword ptr [esp+0xc], 0x6cfc
        call    FUN_007089b0
done:
        __emit 0x8B  /* mov eax,[esp+0] — MSVC6 drops the 00 disp byte (8B 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        add     esp, 8
        ret
    }
}
