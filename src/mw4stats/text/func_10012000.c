/*
 * FUN_10012000 (50 B, __fastcall, ECX = this) - Frees the buffer at
 * this+0x4 (if this+0x10 != 0 and buffer non-null) and clears
 * this+0x4/0x14/0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10012000 (50 B) -- __fastcall cleanup/free helper:
 * if (f10 > 0 && f4) IAT free(f4);  f4 = f14 = f10 = 0.
 * Note: f10 is unsigned int compared with '> 0' (JBE form), f4 is a pointer
 * (JZ form) -- mixed comparison types. Same shape as FUN_100011a0.
 */

extern void *g_100210ec;   /* IAT: free */

__declspec(naked) void __cdecl FUN_10012000(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jbe     L_1201b
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_1201b
        push    eax
        call    dword ptr [g_100210ec]      /* free */
        add     esp, 4
    L_1201b:
        mov     dword ptr [esi + 0x4], 0
        mov     dword ptr [esi + 0x14], 0
        mov     dword ptr [esi + 0x10], 0
        pop     esi
        ret
    }
}
