/*
 * FUN_006E4230 (755 B) — __cdecl, RET 0xC (3 stack args). Switch dispatch
 * on [esp+4]-0x1000 via a jump table at 0x6E4524. Cases 0/1 return string
 * addresses; the main case copies a string into a 0x800 buffer, builds
 * several strings via FUN_0072D830, and calls FUN_006E4210 to decide a
 * return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0072D830(void);
extern void __cdecl FUN_006E4210(void);
extern unsigned long g_7dd268;
extern unsigned long g_841768;

__declspec(naked) void func_006E4230(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x800
        add     eax, 0xffffefff
        cmp     eax, 0x14
        push    esi
        push    edi
        ja      L_4516
        __emit  0xFF            /* jmp dword ptr [eax*4+0x6e4524]: MSVC6 re-bases SIB dispatch via EBX */
        __emit  0x24
        __emit  0x85
        __emit  0x24
        __emit  0x45
        __emit  0x6E
        __emit  0x00
        pop     edi
        mov     eax, 0x76b768
        pop     esi
        add     esp, 0x800
        ret     0xc
        pop     edi
        mov     eax, 0x778370
        pop     esi
        add     esp, 0x800
        ret     0xc
        mov     esi, dword ptr [esp + 0x810]
        test    esi, esi
        je      L_4516
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        test    ecx, ecx
        jle     L_4516
        cmp     ecx, 0x800
        jge     L_4516
        inc     ecx
        push    ebx
        push    ecx
        call    FUN_004084D0
        mov     ecx, dword ptr [g_7dd268]
        mov     edx, eax
        mov     dword ptr [ecx + 0x40968], edx
        or      ecx, 0xffffffff
        mov     edi, esi
        add     esp, 4
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [g_841768]
        push    0x18a0
        push    ecx
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [g_7dd268]
        mov     edi, dword ptr [eax + 0x40968]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x77a078
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [g_841768]
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        push    0x18a1
        push    eax
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x794da8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [g_841768]
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        push    0x18a2
        and     ecx, 3
        push    eax
        rep     movsb
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x77a078
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        push    0x18a3
        mov     eax, dword ptr [g_841768]
        push    eax
        call    FUN_0072D830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, 0x77a078
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        lea     edx, [esp + 0xc]
        mov     edi, edx
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        push    1
        mov     ecx, ebx
        and     ecx, 3
        lea     eax, [esp + 0x10]
        push    eax
        rep     movsb
        mov     ecx, dword ptr [g_841768]
        push    0x189d
        push    ecx
        call    FUN_0072D830
        push    eax
        call    FUN_006E4210
        add     esp, 0xc
        cmp     eax, 1
        pop     ebx
        jne     L_44f0
        mov     edx, dword ptr [g_7dd268]
        lea     eax, [edx + 0x40964]
        mov     dword ptr [eax], 1
        mov     eax, dword ptr [eax]
        neg     eax
        sbb     eax, eax
        pop     edi
        and     eax, 0x76b768
        pop     esi
        add     esp, 0x800
        ret     0xc
L_44f0:
        mov     eax, dword ptr [g_7dd268]
        add     eax, 0x40964
        mov     dword ptr [eax], 0
        mov     eax, dword ptr [eax]
        neg     eax
        sbb     eax, eax
        pop     edi
        and     eax, 0x76b768
        pop     esi
        add     esp, 0x800
        ret     0xc
L_4516:
        pop     edi
        xor     eax, eax
        pop     esi
        add     esp, 0x800
        ret     0xc
    }
}
