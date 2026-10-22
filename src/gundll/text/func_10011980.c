/*
 * FUN_10011980 (172 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then FUN_1002c540(obj, g_10075060, 0x10049df4, &local, arg1); on success
 * stores +0x24=arg1, +0x28=local.  On failure frees via FUN_1002c810 when
 * local is non-null.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);   /* rel32 call */
extern void __cdecl FUN_1002c540(void);   /* rel32 call */
extern void __cdecl FUN_1002c810(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10011980(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_119a1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_119a1:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_11a08
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x10]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049df4
        push    edx
        push    eax
        call    FUN_1002c540
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_119ee
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_119ee:
        test    esi, esi
        jl      L_11a08
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_11a08:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_11a24
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002c810
L_11a24:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
