/*
 * FUN_1000398a (194 B, __cdecl) — trim unused pages from the string-table
 * arenas: VirtualFree free 0x1000-byte blocks, and free whole arenas that
 * have no live entries. param_1 (EBP+8) is a budget counter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_1000398a (194 B) -- __cdecl. Trim unused pages from the
 * string-table arenas: VirtualFree (MEM_DECOMMIT) 0x1000-byte blocks whose
 * 8-byte slot holds the 0xf0 sentinel, and free whole arenas whose block
 * table has no live entries. param_1 is a budget counter.
 */

extern int   g_10006344;
extern int   g_10008c04;
extern void *g_10005070;   /* IAT: VirtualFree */
extern void __cdecl FUN_10003934(void);

__declspec(naked) void FUN_1000398a(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [g_10006344]
        push    edi
L_3997:
        cmp     dword ptr [esi + 0x10], -1
        jz      L_3a35
        and     dword ptr [ebp - 4], 0
        lea     edi, [esi + 0x2010]
        mov     ebx, 0x3ff000
L_39b0:
        cmp     dword ptr [edi], 0xf0
        jnz     L_39f1
        mov     eax, ebx
        push    0x4000
        add     eax, dword ptr [esi + 0x10]
        push    0x1000
        push    eax
        call    dword ptr [g_10005070]
        test    eax, eax
        jz      L_39f1
        or      dword ptr [edi], 0xffffffff
        dec     dword ptr [g_10008c04]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_39e6
        cmp     eax, edi
        jbe     L_39e9
L_39e6:
        mov     dword ptr [esi + 0xc], edi
L_39e9:
        inc     dword ptr [ebp - 4]
        dec     dword ptr [ebp + 8]
        jz      L_39fe
L_39f1:
        sub     ebx, 0x1000
        sub     edi, 8
        test    ebx, ebx
        jge     L_39b0
L_39fe:
        cmp     dword ptr [ebp - 4], 0
        mov     ecx, esi
        mov     esi, dword ptr [esi + 4]
        jz      L_3a35
        cmp     dword ptr [ecx + 0x18], -1
        jnz     L_3a35
        push    1
        lea     eax, [ecx + 0x20]
        pop     edx
L_3a15:
        cmp     dword ptr [eax], -1
        jnz     L_3a26
        inc     edx
        add     eax, 8
        cmp     edx, 0x400
        jl      L_3a15
L_3a26:
        cmp     edx, 0x400
        jnz     L_3a35
        push    ecx
        call    FUN_10003934
        pop     ecx
L_3a35:
        cmp     esi, dword ptr [g_10006344]
        jz      L_3a47
        cmp     dword ptr [ebp + 8], 0
        jg      L_3997
L_3a47:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
