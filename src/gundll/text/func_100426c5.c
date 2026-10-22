/*
 * FUN_100426C5 (36 B) - __cdecl.  Lock-guarded global swap:
 * FUN_10039b19(9); old = g_10075724; g_10075724 = arg1;
 * FUN_10039b7a(9); return old.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039b19(void);
extern void __cdecl FUN_10039b7a(void);
extern void *g_10075724;   /* A1 absolute load of DAT_10075724 */

__declspec(naked) void FUN_100426C5(void)
{
    __asm {
        push    esi
        push    9
        call    FUN_10039b19
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, dword ptr [g_10075724]
        push    9
        mov     dword ptr [g_10075724], eax
        call    FUN_10039b7a
        pop     ecx
        mov     eax, esi
        pop     ecx
        pop     esi
        ret
    }
}
