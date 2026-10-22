/*
 * FUN_10033290 (90 B) - __cdecl.  Hotpatch-prologue function (jmp to body
 * + NOP pad).  Resets timer globals (g_10075480/84/90/94 = 0), records
 * timeGetTime() into g_10075488, and calls two IAT fn-ptrs (g_100490b0,
 * g_100490b4) passing addresses of g_10075470 / g_10075478.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075480;
extern unsigned int g_10075484;
extern unsigned int g_10075488;
extern unsigned int g_10075490;
extern unsigned int g_10075494;
extern double g_10075470;
extern double g_10075478;
extern void *g_10049204;   /* IAT: timeGetTime */
extern void *g_100490b0;   /* IAT fn ptr */
extern void *g_100490b4;   /* IAT fn ptr */

__declspec(naked) void FUN_10033290(void)
{
    __asm {
        __emit 0xE9   /* jmp L_body -> E9 0B 00 00 00; MSVC6 emits short EB for near target */
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    L_body:
        mov     dword ptr [g_10075480], 0
        mov     dword ptr [g_10075484], 0
        call    dword ptr [g_10049204]
        push    0x10075470
        mov     dword ptr [g_10075488], eax
        mov     dword ptr [g_10075490], 0
        mov     dword ptr [g_10075494], 0
        call    dword ptr [g_100490b0]
        push    0x10075478
        call    dword ptr [g_100490b4]
        ret
    }
}
