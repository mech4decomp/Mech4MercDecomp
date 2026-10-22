/*
 * FUN_0071f2d0 (49 B) — builds/returns a string constant pointer
 * (g_87d330) via a small chain of helper calls and one IAT call.
 *
 * __cdecl (RET), no stack cleanup of own args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006fbc80(void *a, int b);
extern void __stdcall FUN_0071ddf0(void *a);
extern void *g_76b420;
extern char g_8aab68[];
extern char g_7a4994[];
extern char g_87d330[];

__declspec(naked) char * __cdecl FUN_0071f2d0(void)
{
    __asm {
        push    0x0
        push    offset g_8aab68
        call    FUN_006fbc80
        push    eax
        call    FUN_0071ddf0
        push    eax
        push    offset g_8aab68
        push    offset g_7a4994
        push    offset g_87d330
        call    dword ptr [g_76b420]
        add     esp, 0x10
        mov     eax, offset g_87d330
        ret
    }
}
