/*
 * FUN_10003aa3 (69 B, __cdecl) — accumulate a byte into a string-table
 * counter slot; when the slot reaches 0xf0 and the global counter hits
 * 0x20, flush via FUN_1000398a(0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10003aa3 (69 B) -- __cdecl. Accumulate a byte into the
 * string-table counter slot for (block offset b within arena a); when the
 * slot reaches 0xf0 and the global flush counter hits 0x20, flush via
 */

extern int g_10008c04;
extern void __cdecl FUN_1000398a(int);

__declspec(naked) void FUN_10003aa3(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        sub     ecx, dword ptr [eax + 0x10]
        sar     ecx, 0xc
        lea     eax, [eax + ecx*8 + 0x18]
        mov     ecx, dword ptr [esp + 0xc]
        movzx   edx, byte ptr [ecx]
        add     dword ptr [eax], edx
        and     byte ptr [ecx], 0
        cmp     dword ptr [eax], 0xf0
        mov     dword ptr [eax + 4], 0xf1
        jnz     L_3ae7
        inc     dword ptr [g_10008c04]
        cmp     dword ptr [g_10008c04], 0x20
        jnz     L_3ae7
        push    0x10
        call    FUN_1000398a
        pop     ecx
L_3ae7:
        ret
    }
}
