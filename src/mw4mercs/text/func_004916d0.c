/*
 * FUN_004916d0 (709 B) — MLR __thiscall (RET 0xC): decodes a packed
 * material/texture state word and pushes a series of (key,value) pairs
 * into a render-state setter (FUN_00713cc0). Handles alpha state,
 * filter state, and multi-texture combiner setup.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076fe60[];
extern char g_0076fe48[];
extern char g_007da85c[];
extern char g_007da86c;

extern void __cdecl FUN_00713cc0(void);
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004916d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp+0x8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi]
        mov     eax, esi
        and     eax, 0x3fff
        jz      L_491701
        test    eax, eax
        jle     L_491701
        mov     eax, dword ptr [ebx+eax*4+0x24]
        test    eax, eax
        jz      L_491701
        mov     edx, dword ptr [eax]
        push    0x0
        mov     ecx, eax
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [eax+0x1c]
        push    eax
        jmp     L_491703
L_491701:
        push    0x0
L_491703:
        push    0x1
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x1c000
        cmp     eax, 0xc000
        ja      L_491757
        jz      L_4917ac
        test    eax, eax
        jz      L_49174a
        cmp     eax, 0x4000
        jz      L_49173d
        cmp     eax, 0x8000
        jnz     L_49176c
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x5
        jmp     L_4917a5
L_49173d:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x2
        jmp     L_4917a5
L_49174a:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x1
        jmp     L_4917a5
L_491757:
        cmp     eax, 0x10000
        jz      L_49179a
        cmp     eax, 0x14000
        jz      L_49178d
        cmp     eax, 0x18000
        jz      L_491780
L_49176c:
        push    offset g_0076fe60
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4917ac
        int     3
        jmp     L_4917ac
L_491780:
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x1
        jmp     L_4917a5
L_49178d:
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x4
        jmp     L_4917a5
L_49179a:
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x3
L_4917a5:
        push    0xd
        call    FUN_00713cc0
L_4917ac:
        mov     eax, dword ptr [edi]
        and     eax, 0x60000
        jz      L_4917df
        cmp     eax, 0x20000
        jz      L_4917db
        cmp     eax, 0x40000
        jz      L_4917d7
        push    offset g_0076fe48
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4917e8
        int     3
        jmp     L_4917e8
L_4917d7:
        push    0x3
        jmp     L_4917e1
L_4917db:
        push    0x2
        jmp     L_4917e1
L_4917df:
        push    0x1
L_4917e1:
        push    0x4
        call    FUN_00713cc0
L_4917e8:
        mov     esi, dword ptr [edi]
        mov     ecx, esi
        and     ecx, 0x400000
        push    ecx
        push    0xa
        call    FUN_00713cc0
        test    esi, 0x1000000
        jz      L_49180f
        lea     edx, [ebp+0x8]
        mov     dword ptr [ebp+0x8], 0xffffff
        push    edx
        jmp     L_491811
L_49180f:
        push    0x0
L_491811:
        push    0xc
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x800000
        push    eax
        push    0x8
        call    FUN_00713cc0
        test    esi, 0x180000
        jz      L_491836
        push    offset g_007da85c
        jmp     L_491838
L_491836:
        push    0x0
L_491838:
        push    0x12
        call    FUN_00713cc0
        mov     ecx, esi
        and     ecx, 0x20000000
        neg     ecx
        sbb     ecx, ecx
        add     ecx, 0x2
        push    ecx
        push    0xf
        call    FUN_00713cc0
        mov     edx, esi
        shr     edx, 0x1a
        and     edx, 0x1
        push    edx
        push    0x6
        call    FUN_00713cc0
        mov     eax, esi
        and     eax, 0x10000000
        push    eax
        push    0x9
        call    FUN_00713cc0
        test    esi, 0x200000
        mov     ecx, 0x0
        setnz   cl
        inc     ecx
        push    ecx
        push    0xe
        call    FUN_00713cc0
        mov     edx, esi
        shr     edx, 0x1b
        and     edx, 0x1
        push    edx
        push    0x5
        call    FUN_00713cc0
        test    esi, 0x40000000
        jz      L_491980
        and     esi, 0x3fff
        jle     L_491980
        mov     edi, dword ptr [ebx+esi*4+0x24]
        test    edi, edi
        jz      L_491980
        mov     eax, dword ptr [ebp+0xc]
        and     eax, 0x3fff
        jle     L_491980
        mov     esi, dword ptr [ebx+eax*4+0x24]
        test    esi, esi
        jz      L_491980
        mov     cl, byte ptr [g_007da86c]
        test    cl, 0x20
        jle     L_491943
        mov     eax, dword ptr [ebp+0x10]
        and     eax, 0x3fff
        jle     L_491943
        mov     ebx, dword ptr [ebx+eax*4+0x24]
        test    ebx, ebx
        jz      L_491943
        mov     eax, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     ecx, dword ptr [eax+0x1c]
        push    ecx
        push    0x1
        call    FUN_00713cc0
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [eax+0x1c]
        push    eax
        push    0x2
        call    FUN_00713cc0
        mov     edx, dword ptr [ebx]
        push    0x0
        mov     ecx, ebx
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [eax+0x1c]
        push    eax
        push    0x3
        call    FUN_00713cc0
        push    0x4
        push    0x1c
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_491943:
        test    cl, 0x40
        jle     L_491992
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [eax+0x1c]
        push    eax
        push    0x1
        call    FUN_00713cc0
        mov     edx, dword ptr [edi]
        push    0x0
        mov     ecx, edi
        call    dword ptr [edx+0x4]
        mov     eax, dword ptr [eax+0x1c]
        push    eax
        push    0x2
        call    FUN_00713cc0
        push    0x5
        push    0x1c
        call    FUN_00713cc0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
L_491980:
        push    0x0
        push    0x1c
        call    FUN_00713cc0
        push    0x0
        push    0x3
        call    FUN_00713cc0
L_491992:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
