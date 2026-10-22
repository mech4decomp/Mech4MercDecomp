/*
 * FUN_004FCCD0 (803 B) — NameTable validation/rebuild. Iterates up to
 * 0x12 tables; for the "active" table indices (0,1,2,5,6,8,0xc,0xd)
 * validates each entry against the contents file, logs errors via
 * FUN_006fabf0 (assert), and rebuilds the entry array (alloc via
 * FUN_004084d0, copy via FUN_004fc100/FUN_004fc170). Returns 1 if no
 * errors were logged.
 *
 * __fastcall (ECX = this), no stack params, returns uint.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern int  __cdecl FUN_006fabf0(const char *, ...);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004084e0(void);
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004fc100(void);
extern void __cdecl FUN_004fc170(void);

__declspec(naked) void __fastcall FUN_004fccd0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     dword ptr [ebp - 0xc], ecx
        mov     byte ptr [ebp - 1], 0
        mov     dword ptr [ebp - 0x14], ebx
    l_cce5:
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [eax + ebx*8 + 0x14]
        xor     esi, esi
        cmp     ebx, esi
        mov     dword ptr [ebp - 0x10], ecx
        jz      l_cd1c
        cmp     ebx, 0xc
        jz      l_cd1c
        cmp     ebx, 1
        jz      l_cd1c
        cmp     ebx, 2
        jz      l_cd1c
        cmp     ebx, 5
        jz      l_cd1c
        cmp     ebx, 6
        jz      l_cd1c
        cmp     ebx, 8
        jz      l_cd1c
        cmp     ebx, 0xd
        /* __emit: MSVC6 miscomputes rel32 for branch crossing call relocs */
        _emit 0x0F
        _emit 0x85
        _emit 0xBD
        _emit 0x02
        _emit 0x00
        _emit 0x00
    l_cd1c:
        cmp     ecx, esi
        mov     dword ptr [ebp - 8], esi
        /* __emit: MSVC6 miscomputes rel32 for branch crossing call relocs */
        _emit 0x0F
        _emit 0x8E
        _emit 0xB2
        _emit 0x02
        _emit 0x00
        _emit 0x00
        lea     eax, [ecx*8 + 0]
        sub     eax, ecx
        lea     edx, [ecx - 1]
        shl     eax, 2
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x28], eax
    l_cd3f:
        cmp     ebx, 1
        jnz     l_cd4c
        test    esi, esi
        /* __emit: MSVC6 miscomputes rel32 for branch crossing call relocs */
        _emit 0x0F
        _emit 0x84
        _emit 0x72
        _emit 0x02
        _emit 0x00
        _emit 0x00
    l_cd4c:
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [eax + ebx*8 + 0x10]
        mov     edi, dword ptr [esi + ecx + 0x14]
        add     esi, ecx
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        /* __emit: MSVC6 miscomputes rel32 for branch crossing call relocs */
        _emit 0x0F
        _emit 0x85
        _emit 0xFB
        _emit 0x01
        _emit 0x00
        _emit 0x00
        mov     esi, dword ptr [esi + 0x10]
        test    esi, esi
        jz      l_cd89
        mov     edi, dword ptr [ebp - 8]
        push    edi
        push    ebx
        push    esi
        push    0x775f98
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        jz      l_cda3
        int     3
        jmp     l_cda3
    l_cd89:
        mov     edx, dword ptr [ebp - 8]
        push    edx
        push    ebx
        push    0x775f30
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      l_cda0
        int     3
    l_cda0:
        mov     edi, dword ptr [ebp - 8]
    l_cda3:
        cmp     edi, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edi
        /* __emit: MSVC6 miscomputes rel32 for branch crossing call relocs */
        _emit 0x0F
        _emit 0x8D
        _emit 0x99
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [eax + ebx*8 + 0x10]
        mov     edx, dword ptr [ebp - 0x18]
        lea     esi, [edx + ecx + 0x30]
        mov     dword ptr [ebp - 0x1c], 0
    l_cdbd:
        mov     edi, dword ptr [esi]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_ce19
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edi, eax
        lea     eax, [esi - 4]
        push    eax
        lea     ecx, [ebp - 0x1c]
        call    FUN_00412740
        mov     ecx, dword ptr [ebp - 0x1c]
        push    ecx
        lea     ecx, [esi - 0x20]
        call    FUN_00412780
        mov     ebx, dword ptr [esi - 0x1c]
        mov     ecx, ebx
        call    FUN_0041fcb0
        test    edi, edi
        jz      l_ce16
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     edx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x24]
        shl     edx, 0x18
        add     edx, eax
        mov     dword ptr [edi + 0x30], edx
    l_ce16:
        mov     ebx, dword ptr [ebp - 0x14]
    l_ce19:
        mov     eax, dword ptr [ebp - 0x1c]
        test    eax, eax
        jz      l_ce33
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ce33
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_ce33:
        mov     eax, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0x20]
        inc     eax
        add     esi, 0x1c
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x24], eax
        /* __emit: MSVC6 miscomputes backward rel32 across call relocs */
        _emit 0x0F
        _emit 0x8C
        _emit 0x75
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
    l_ce48:
        mov     eax, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [edi + ebx*8 + 0x14]
        lea     esi, [eax - 1]
        cmp     esi, ecx
        lea     eax, [edi + ebx*8 + 0x14]
        mov     dword ptr [ebp - 0x24], eax
        jz      l_cf37
        test    esi, esi
        jbe     l_cf18
        mov     ecx, dword ptr [ebp - 0x28]
        add     ecx, -0x18
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_cea8
        lea     ebx, [eax + 4]
        mov     dword ptr [eax], esi
        lea     eax, [esi - 1]
        test    eax, eax
        mov     edi, ebx
        jl      l_ce9d
        lea     esi, [eax + 1]
    l_ce90:
        mov     ecx, edi
        call    FUN_004fc100
        add     edi, 0x1c
        dec     esi
        jnz     l_ce90
    l_ce9d:
        mov     edi, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x1c], ebx
        mov     ebx, dword ptr [ebp - 0x14]
        jmp     l_ceaf
    l_cea8:
        mov     dword ptr [ebp - 0x1c], 0
    l_ceaf:
        mov     ecx, dword ptr [edi + ebx*8 + 0x10]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x2c], ecx
        jz      l_cf0f
        mov     edx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x24]
        mov     eax, dword ptr [eax]
        dec     edx
        cmp     edx, eax
        jnc     l_cec9
        mov     eax, edx
    l_cec9:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      l_cf05
        mov     esi, dword ptr [ebp - 0x1c]
        lea     edx, [eax*8 + 0]
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        sub     edx, eax
        lea     esi, [esi + edx*4]
        sub     ebx, ecx
        lea     edi, [eax + 1]
    l_cee9:
        lea     eax, [ebx + esi]
        push    eax
        mov     ecx, esi
        call    FUN_004fc170
        dec     edi
        sub     esi, 0x1c
        test    edi, edi
        ja      l_cee9
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     ebx, dword ptr [ebp - 0x14]
        mov     edi, dword ptr [ebp - 0xc]
    l_cf05:
        test    ecx, ecx
        jz      l_cf0f
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
    l_cf0f:
        mov     eax, dword ptr [ebp - 0x1c]
        mov     dword ptr [edi + ebx*8 + 0x10], eax
        jmp     l_cf2e
    l_cf18:
        mov     ecx, dword ptr [edi + ebx*8 + 0x10]
        test    ecx, ecx
        jz      l_cf26
        mov     edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
    l_cf26:
        mov     dword ptr [edi + ebx*8 + 0x10], 0
    l_cf2e:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x24]
        dec     eax
        mov     dword ptr [ecx], eax
    l_cf37:
        mov     eax, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 0x28]
        mov     esi, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 0x18]
        dec     eax
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, 0x1c
        sub     edi, eax
        dec     esi
        dec     edx
        sub     ecx, eax
        mov     dword ptr [ebp - 0x28], edi
        mov     dword ptr [ebp - 0x20], esi
        mov     dword ptr [ebp - 8], edx
        mov     dword ptr [ebp - 0x18], ecx
        jmp     l_cfba
    l_cf63:
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x30]
        mov     edx, eax
        sar     edx, 0x18
        cmp     edx, ebx
        jnz     l_cf82
        mov     ecx, dword ptr [ebp - 8]
        and     eax, 0xffffff
        cmp     eax, ecx
        /* __emit: MSVC6 miscomputes short rel8 for branch crossing call relocs */
        _emit 0x74
        _emit 0x3C
    l_cf82:
        mov     esi, dword ptr [esi + 0x10]
        test    esi, esi
        jz      l_cfa3
        mov     eax, dword ptr [ebp - 8]
        push    eax
        push    ebx
        push    esi
        push    0x775ef8
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        /* __emit: MSVC6 miscomputes short rel8 for branch crossing call relocs */
        _emit 0x74
        _emit 0x1A
        int     3
        jmp     l_cfba
    l_cfa3:
        mov     ecx, dword ptr [ebp - 8]
        push    ecx
        push    ebx
        push    0x775ec0
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      l_cfba
        int     3
    l_cfba:
        mov     byte ptr [ebp - 1], 1
    l_cfbe:
        mov     eax, dword ptr [ebp - 8]
        mov     esi, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x10]
        inc     eax
        add     esi, 0x1c
        cmp     eax, ecx
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 0x18], esi
        /* __emit: MSVC6 miscomputes backward rel32 across call relocs */
        _emit 0x0F
        _emit 0x8C
        _emit 0x66
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
    l_cfd9:
        inc     ebx
        cmp     ebx, 0x12
        mov     dword ptr [ebp - 0x14], ebx
        /* __emit: MSVC6 miscomputes backward rel32 across call relocs */
        _emit 0x0F
        _emit 0x8C
        _emit 0xFF
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        mov     cl, byte ptr [ebp - 1]
        pop     edi
        xor     eax, eax
        test    cl, cl
        pop     esi
        setz    al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
