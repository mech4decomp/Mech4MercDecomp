/*
 * FUN_00743E60 (54 B) — __stdcall; copies 8 dwords from arg1 into a slot in a
 * 0x20-byte-strided table at g_8abe58+0x6e8 indexed by g_8b2620, then returns
 * (g_8b2620 < 0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8b2620;
extern char g_8abe58;

__declspec(naked) void __stdcall FUN_00743E60(void)
{
    __asm {
        mov     eax, dword ptr [g_8b2620]
        mov     edx, dword ptr [g_8abe58]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     ecx, eax
        shl     ecx, 5
        push    edi
        inc     eax
        lea     edi, [ecx + edx + 0x6e8]
        mov     ecx, 8
        cmp     eax, 0x10
        rep movsd
        mov     dword ptr [g_8b2620], eax
        sbb     eax, eax
        pop     edi
        neg     eax
        pop     esi
        ret     8
    }
}
