/*
 * FUN_10012C20 (172 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xC112000E; else calls FUN_1001ca20, then FUN_1002c540 with
 * (obj, g_10075060, 0x10049df4, &local, &arg1slot).  On success stores
 * +0x1c/+0x20.  On failure frees via FUN_1002c810.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);
extern void __cdecl FUN_1002c540(void);
extern void __cdecl FUN_1002c810(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10012C20(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_12c41
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_12c41:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_12ca8
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
        jne     L_12c8e
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x1c], ecx
        mov     dword ptr [edi + 0x20], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_12c8e:
        test    esi, esi
        jl      L_12ca8
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x1c], ecx
        mov     dword ptr [edi + 0x20], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_12ca8:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_12cc4
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002c810
L_12cc4:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
