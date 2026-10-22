/*
 * FUN_10045d90 (131 B) — __cdecl.
 * Closes a handle (via IAT CloseHandle/GetLastError), clears a flag in
 * the 0x10076aa0 table, and reports failure via FUN_1004270a.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10043e8f(void);
extern void __cdecl FUN_10043e10(void);
extern void __cdecl FUN_1004270a(void);
extern void *g_10049098;   /* IAT: CloseHandle */
extern void *g_100490e4;   /* IAT: GetLastError */

__declspec(naked) void __cdecl FUN_10045d90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        push    esi
        call    FUN_10043e8f
        cmp     eax, -1
        pop     ecx
        jz      loc_5dde
        cmp     esi, 0x1
        jz      loc_5dac
        cmp     esi, 0x2
        jnz     loc_5dc2
    loc_5dac:
        push    0x2
        call    FUN_10043e8f
        push    0x1
        mov     edi, eax
        call    FUN_10043e8f
        pop     ecx
        cmp     eax, edi
        pop     ecx
        jz      loc_5dde
    loc_5dc2:
        push    esi
        call    FUN_10043e8f
        pop     ecx
        push    eax
        call    dword ptr [g_10049098]
        test    eax, eax
        jnz     loc_5dde
        call    dword ptr [g_100490e4]
        mov     edi, eax
        jmp     loc_5de0
    loc_5dde:
        xor     edi, edi
    loc_5de0:
        push    esi
        call    FUN_10043e10
        mov     eax, esi
        and     esi, 0x1f
        sar     eax, 0x5
        pop     ecx
        mov     eax, dword ptr [eax*4 + 0x10076aa0]
        lea     ecx, [esi + esi*8]
        and     byte ptr [eax + ecx*4 + 0x4], 0x0
        test    edi, edi
        jz      loc_5e0e
        push    edi
        call    FUN_1004270a
        pop     ecx
        or      eax, 0xffffffff
        jmp     loc_5e10
    loc_5e0e:
        xor     eax, eax
    loc_5e10:
        pop     edi
        pop     esi
        ret
    }
}
