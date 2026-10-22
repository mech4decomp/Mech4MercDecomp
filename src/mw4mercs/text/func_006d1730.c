/*
 * FUN_006D1730 (583 B) — Nested-loop processing over a 2D grid of
 * per-cell buffers (realloc + fill via FUN_006d16d0 / FUN_00448d80 /
 * FUN_00448e40).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_840008;                       /* DAT_00840008 (heap context) */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_006d16d0(int a, void *b, void *c);
extern void __fastcall FUN_00448d80(void *this, int a);
extern void __fastcall FUN_00448e40(void *this);

__declspec(naked) void __stdcall FUN_006d1730(void)
{
    __asm {
        sub     esp, 0x2c
        mov     eax, dword ptr [g_840008]
        push    ebp
        push    esi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x2c], esi
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x38]
        mov     cl, byte ptr [eax + 0x150]
        mov     al, byte ptr [eax + 0x151]
        mov     byte ptr [esp + 0x20], al
        mov     byte ptr [esp + 0xc], al
        mov     eax, dword ptr [esp + 0x3c]
        mov     byte ptr [esp + 0x14], cl
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [esp + 0x10], al
        and     eax, 0xff
        and     edx, 0xff
        lea     ebp, [edx + eax]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x2c], ebp
        jge     L_6d196a
        mov     edx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0xc]
        and     edx, 0xff
        push    ebx
        and     ecx, 0xff
        push    edi
        lea     edi, [ecx + edx]
        mov     dword ptr [esp + 0x38], edx
        mov     dword ptr [esp + 0x2c], edi
L_6d17a9:
        cmp     edx, edi
        mov     cl, byte ptr [esp + 0x48]
        mov     byte ptr [esp + 0x14], cl
        jge     L_6d1953
        mov     ecx, eax
        imul    ecx, dword ptr [esi]
        mov     eax, edx
        mov     edx, dword ptr [esi + 0x7c]
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x24], edx
        jmp     L_6d17d1
L_6d17cd:
        mov     ecx, dword ptr [esp + 0x20]
L_6d17d1:
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x24]
        lea     esi, [eax + ecx*8]
        mov     dword ptr [esp + 0x10], 0
        mov     edi, dword ptr [esi + 4]
        cmp     edi, 0x20
        jz      L_6d183a
        push    0x80
        call    FUN_004084d0
        mov     ebx, dword ptr [esi]
        add     esp, 4
        test    ebx, ebx
        mov     ebp, eax
        jz      L_6d1831
        cmp     edi, 0x20
        mov     ecx, 0x20
        ja      L_6d180b
        mov     ecx, edi
L_6d180b:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        jz      L_6d1828
        mov     edx, ebx
        lea     eax, [ebp + ecx*4]
        sub     edx, ebp
        inc     ecx
L_6d181b:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6d181b
L_6d1828:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_6d1831:
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 4], 0x20
L_6d183a:
        mov     edx, dword ptr [esp + 0x28]
        xor     ecx, ecx
        mov     cl, byte ptr [esp + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        sub     cl, byte ptr [esp + 0x48]
        and     edx, 0xff
        xor     eax, eax
        mov     al, byte ptr [esp + 0x18]
        push    esi
        and     ecx, 0xff
        imul    ecx, edx
        sub     al, byte ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x48]
        and     eax, 0xff
        add     ecx, eax
        mov     eax, dword ptr [edx + 0x144]
        mov     ecx, dword ptr [eax + ecx*4]
        mov     edx, dword ptr [ecx + 0x14c]
        push    edx
        call    FUN_006d16d0
        mov     eax, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esi + 4]
        add     esp, 0xc
        cmp     eax, edi
        mov     dword ptr [esp + 0x1c], eax
        jz      L_6d1903
        test    eax, eax
        jbe     L_6d18e7
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        mov     ebx, dword ptr [esi]
        add     esp, 4
        test    ebx, ebx
        mov     ebp, eax
        jz      L_6d18e3
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, edi
        jnc     L_6d18bb
        mov     edi, eax
L_6d18bb:
        mov     ecx, edi
        dec     edi
        test    ecx, ecx
        jz      L_6d18da
        mov     edx, ebx
        lea     eax, [ebp + edi*4]
        sub     edx, ebp
        lea     ecx, [edi + 1]
L_6d18cd:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6d18cd
L_6d18da:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_6d18e3:
        mov     dword ptr [esi], ebp
        jmp     L_6d18f8
L_6d18e7:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_6d18f8:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [esp + 0x10]
L_6d1903:
        xor     edi, edi
        test    eax, eax
        jle     L_6d1928
L_6d1909:
        mov     ecx, dword ptr [esi]
        mov     ecx, dword ptr [ecx + edi*4]
        push    0
        call    FUN_00448d80
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [edx + edi*4]
        call    FUN_00448e40
        mov     eax, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        jl      L_6d1909
L_6d1928:
        mov     bl, byte ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x2c]
        inc     bl
        mov     byte ptr [esp + 0x14], bl
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xff
        cmp     eax, edi
        jl      L_6d17cd
        mov     esi, dword ptr [esp + 0x30]
        mov     ebp, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x38]
L_6d1953:
        inc     byte ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x18]
        and     eax, 0xff
        cmp     eax, ebp
        jl      L_6d17a9
        pop     edi
        pop     ebx
L_6d196a:
        call    FUN_006f49a0
        pop     esi
        pop     ebp
        add     esp, 0x2c
        ret     0xc
    }
}
