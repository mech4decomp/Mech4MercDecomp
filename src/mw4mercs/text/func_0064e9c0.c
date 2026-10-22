/*
 * FUN_0064e9c0 (40 B) — __cdecl, 3 stack params.
 *
 * memmove(param3, param1, (param2-param1)>>2 * 4); returns
 * param3 + size. IAT call through 0x0076b28c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b28c;   /* IAT 0x0076b28c (memmove) */

__declspec(naked) void __stdcall FUN_0064e9c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        sub     esi, eax
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        sar     esi, 0x2
        shl     esi, 0x2
        push    esi
        push    eax
        push    edi
        call    dword ptr [g_76b28c]
        add     esp, 0xc
        lea     eax, [esi + edi*0x1]
        pop     edi
        pop     esi
        ret
    }
}
