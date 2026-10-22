/*
 * FUN_00754230 (472 B) — Texture size adjustment (power-of-two clamping).
 *
 * __thiscall (ECX = this), RET 4 (one stack param param_2).
 * Reads width/height words from this, optionally halves them (font.tga
 * special-case via _stricmp at IAT 0x0076b2ac), then clamps to
 * power-of-two bounds using the DAT_00859fxx limits.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8b2888;
extern unsigned char g_859f84;
extern int g_859fb8;
extern int g_859fb0;
extern int g_859fa8;
extern int g_859fac;
extern int g_859fa4;
extern int (__cdecl *g_76b2ac)(const char *, const char *);

__declspec(naked) unsigned short __stdcall FUN_00754230(void *param_1, char param_2)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_8b2888]
        push    ebx
        push    esi
        xor     esi, esi
        mov     si, word ptr [ecx]
        xor     ebx, ebx
        test    eax, eax
        mov     bx, word ptr [ecx + 2]
        push    edi
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0xc], ebx
        jz      L_c5
        cmp     si, 0x10
        jbe     L_c5
        cmp     bx, 0x10
        jbe     L_c5
        test    byte ptr [ecx + 6], 0x40
        jz      L_aa
        cmp     eax, 2
        jle     L_c5
        mov     edx, dword ptr [ecx + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 8
        jc      L_9e
        or      ecx, 0xffffffff
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        lea     eax, [ecx + edx*1 - 8]
        push    0x7adbc8
        push    eax
        call    dword ptr [g_76b2ac]
        add     esp, 8
        test    eax, eax
        jz      L_c5
    L_9e:
        shr     word ptr [esp + 0x10], 1
        shr     word ptr [esp + 0xc], 1
        jmp     L_bd
    L_aa:
        cmp     eax, 2
        jle     L_b0
        dec     eax
    L_b0:
        mov     cx, ax
        shr     word ptr [esp + 0x10], cl
        shr     word ptr [esp + 0xc], cl
    L_bd:
        mov     ebx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [esp + 0x10]
    L_c5:
        test    byte ptr [g_859f84], 0x20
        jz      L_ea
        mov     cx, word ptr [esp + 0xc]
        cmp     word ptr [esp + 0x10], cx
        jbe     L_e2
        mov     ebx, esi
        mov     dword ptr [esp + 0xc], ebx
        jmp     L_5e
    L_e2:
        mov     esi, ebx
        mov     dword ptr [esp + 0x10], esi
        jmp     L_5e
    L_ea:
        mov     eax, dword ptr [g_859fb8]
        test    eax, eax
        jz      L_5e
        mov     dx, word ptr [esp + 0x10]
        cmp     word ptr [esp + 0xc], dx
        jnc     L_30
        mov     edi, ebx
        and     edi, 0xffff
        imul    edi, eax
        mov     ecx, esi
        and     ecx, 0xffff
        cmp     ecx, edi
        jbe     L_2b
    L_16:
        shl     ebx, 1
        mov     edi, ebx
        and     edi, 0xffff
        imul    edi, eax
        cmp     ecx, edi
        mov     dword ptr [esp + 0xc], ebx
        ja      L_16
    L_2b:
        cmp     word ptr [esp + 0xc], dx
    L_30:
        jbe     L_5e
        mov     edx, esi
        and     edx, 0xffff
        imul    edx, eax
        mov     ecx, ebx
        and     ecx, 0xffff
        cmp     ecx, edx
        jbe     L_5e
    L_49:
        shl     esi, 1
        mov     edx, esi
        and     edx, 0xffff
        imul    edx, eax
        cmp     ecx, edx
        mov     dword ptr [esp + 0x10], esi
        ja      L_49
    L_5e:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_b7
        mov     eax, dword ptr [g_859fb0]
        test    eax, eax
        jz      L_86
    L_6f:
        mov     ecx, ebx
        and     ecx, 0xffff
        cmp     ecx, eax
        jbe     L_86
        shr     word ptr [esp + 0xc], 1
        mov     ebx, dword ptr [esp + 0xc]
        jmp     L_6f
    L_86:
        mov     eax, dword ptr [g_859fa8]
        mov     edx, ebx
        and     edx, 0xffff
        cmp     edx, eax
        jnc     L_a9
    L_97:
        shl     ebx, 1
        mov     ecx, ebx
        and     ecx, 0xffff
        cmp     ecx, eax
        mov     dword ptr [esp + 0xc], ebx
        jc      L_97
    L_a9:
        mov     ax, word ptr [esp + 0xc]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
    L_b7:
        mov     eax, dword ptr [g_859fac]
        test    eax, eax
        jz      L_d7
    L_c0:
        mov     edx, esi
        and     edx, 0xffff
        cmp     edx, eax
        jbe     L_d7
        shr     word ptr [esp + 0x10], 1
        mov     esi, dword ptr [esp + 0x10]
        jmp     L_c0
    L_d7:
        mov     eax, dword ptr [g_859fa4]
        mov     ecx, esi
        and     ecx, 0xffff
        cmp     ecx, eax
        jnc     L_fa
    L_e8:
        shl     esi, 1
        mov     edx, esi
        and     edx, 0xffff
        cmp     edx, eax
        mov     dword ptr [esp + 0x10], esi
        jc      L_e8
    L_fa:
        mov     ax, word ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     4
    }
}
