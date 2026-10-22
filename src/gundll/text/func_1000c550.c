/*
 * FUN_1000C550 (38 B) - __stdcall, RET 0x4.  Critical-section guarded
 * object release: EnterCriticalSection(this+0x24), calls FUN_1000c590
 * (release), LeaveCriticalSection(this+0x24), returns the release result.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049068;              /* IAT: EnterCriticalSection */
extern void *g_10049064;              /* IAT: LeaveCriticalSection */
extern void __cdecl FUN_1000c590(void); /* rel32 call (release) */

__declspec(naked) void __stdcall FUN_1000C550(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     esi, [edi + 0x24]
        push    esi
        call    dword ptr [g_10049068]
        push    edi
        call    FUN_1000c590
        push    esi
        mov     edi, eax
        call    dword ptr [g_10049064]
        mov     eax, edi
        pop     edi
        pop     esi
        ret     4
    }
}
