/*
 * FUN_5e0147b0 (1026 B) — DirectDraw caps/format matrix computation (FPU).
 *
 * __cdecl, no params. Heavy FPU stack math + color-channel packing.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a588;
extern int g_5e77a5c8;
extern int g_5e77a5a8;
extern int g_5e77a584;
extern int g_5e77a5c4;
extern int g_5e77a5a4;
extern int g_5e77a5d4;
extern int g_5e77a5b4;
extern int g_5e77a594;
extern float g_5e03628c;
extern float g_5e035aa4;
extern float g_5e0384e8;
extern float g_5e77a5ac;
extern float g_5e77a5cc;
extern float g_5e77a58c;
extern float g_5e77a530;
extern float g_5e77a534;
extern int g_5e77a6b4;
extern int g_5e77a6e0;
extern int g_5e77a6f0;
extern int g_5e77a6e4;
extern int g_5e77a6f4;
extern int g_5e77a6e8;
extern int g_5e77a6f8;
extern int g_5e77a580;
extern int g_5e77a80c;
extern int g_5e77a7e4;
extern int g_5e77a7f4;
extern int g_5e77a804;
extern int g_5e77a7ec;
extern int g_5e77a7fc;
extern int g_5e77a814;
extern int g_5e77a6dc;
extern int g_5e77a6ec;
extern char g_5e77a5d5;
extern char g_5e77a5b5;
extern char g_5e77a595;
extern char g_5e77a5d6;
extern char g_5e77a5b6;
extern char g_5e77a596;

__declspec(naked) void __cdecl FUN_5e0147b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        mov     ecx, dword ptr [g_5e77a588]
        mov     eax, dword ptr [g_5e77a5c8]
        sub     ecx, eax
        mov     edx, dword ptr [g_5e77a5a8]
        mov     dword ptr [ebp - 0x20], ecx
        sub     edx, eax
        fild    dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [g_5e77a584]
        mov     eax, dword ptr [g_5e77a5c4]
        mov     dword ptr [ebp - 0x20], edx
        sub     ecx, eax
        fmul    dword ptr [g_5e03628c]
        mov     edx, dword ptr [g_5e77a5a4]
        push    ebx
        sub     edx, eax
        mov     eax, dword ptr [g_5e77a5d4]
        and     eax, 0xff
        push    esi
        fstp    dword ptr [ebp - 4]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], ecx
        mov     ecx, dword ptr [g_5e77a5b4]
        and     ecx, 0xff
        fmul    dword ptr [g_5e03628c]
        sub     ecx, eax
        fstp    dword ptr [ebp - 8]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], edx
        mov     edx, dword ptr [g_5e77a594]
        and     edx, 0xff
        fmul    dword ptr [g_5e03628c]
        sub     edx, eax
        fstp    dword ptr [ebp - 0x10]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], ecx
        fmul    dword ptr [g_5e03628c]
        fst     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 8]
        fsubp   st(1), st(0)
        fdivr   dword ptr [g_5e035aa4]
        fst     dword ptr [ebp - 0xc]
        fchs
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [g_5e77a5ac]
        fsub    dword ptr [g_5e77a5cc]
        fld     dword ptr [g_5e77a58c]
        fsub    dword ptr [g_5e77a5cc]
        fld     st(1)
        fmul    dword ptr [ebp - 4]
        fld     st(1)
        fmul    dword ptr [ebp - 8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [g_5e77a530]
        fxch
        fmul    dword ptr [ebp - 0x10]
        fxch
        fmul    dword ptr [ebp - 0x14]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [g_5e77a534]
        fild    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x20], edx
        fstp    dword ptr [ebp - 0x1c]
        fild    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x14]
        mov     dword ptr [g_5e77a6e0], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     eax, dword ptr [g_5e77a6e0]
        mov     ecx, dword ptr [g_5e77a6b4]
        test    eax, eax
        mov     dword ptr [g_5e77a6f0], ecx
        jge     L_1491b
        add     eax, 0x3fff
    L_1491b:
        mov     bl, byte ptr [g_5e77a580]
        push    edi
        sar     eax, 0xe
        test    bl, 0x2
        mov     dword ptr [g_5e77a80c], eax
        jnz     L_14ace
        xor     ecx, ecx
        xor     edx, edx
        mov     cl, byte ptr [g_5e77a5d5]
        mov     dl, byte ptr [g_5e77a5b5]
        sub     edx, ecx
        mov     dword ptr [ebp - 0x24], edx
        xor     edx, edx
        fild    dword ptr [ebp - 0x24]
        mov     dl, byte ptr [g_5e77a595]
        sub     edx, ecx
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e4], ecx
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     esi, dword ptr [g_5e77a6e4]
        mov     edx, dword ptr [g_5e77a6b4]
        test    esi, esi
        mov     dword ptr [g_5e77a6f4], edx
        jge     L_149cf
        add     esi, 0x3fff
    L_149cf:
        xor     ecx, ecx
        xor     edx, edx
        mov     cl, byte ptr [g_5e77a5d6]
        mov     dl, byte ptr [g_5e77a5b6]
        sub     edx, ecx
        mov     dword ptr [ebp - 0x24], edx
        xor     edx, edx
        fild    dword ptr [ebp - 0x24]
        mov     dl, byte ptr [g_5e77a596]
        sub     edx, ecx
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        sar     esi, 0xe
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6e8], ecx
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     ecx, dword ptr [g_5e77a6e8]
        mov     edx, dword ptr [g_5e77a6b4]
        test    ecx, ecx
        mov     dword ptr [g_5e77a6f8], edx
        jge     L_14a6e
        add     ecx, 0x3fff
    L_14a6e:
        sar     ecx, 0xe
        mov     edi, ecx
        and     eax, 0x3ff
        and     edi, 0x3ff
        mov     edx, edi
        shl     edx, 0x14
        or      edx, eax
        mov     dword ptr [g_5e77a7e4], edx
        mov     edx, esi
        and     edx, 0x3ff
        mov     ebx, edx
        shl     ebx, 0xb
        or      ebx, eax
        mov     dword ptr [g_5e77a7f4], ebx
        mov     ebx, ecx
        shl     ebx, 0xb
        or      ebx, edx
        shl     ebx, 0xb
        or      ebx, eax
        mov     dword ptr [g_5e77a804], ebx
        mov     bl, byte ptr [g_5e77a580]
        test    bl, 0x10
        jnz     L_14ad4
        shl     edx, 0xa
        mov     dword ptr [g_5e77a7ec], edx
        mov     dword ptr [g_5e77a7fc], edi
        jmp     L_14ad4
    L_14ace:
        mov     esi, dword ptr [ebp - 0x24]
        mov     ecx, dword ptr [ebp - 0x24]
    L_14ad4:
        test    bl, 0x10
        pop     edi
        jz      L_14bac
        mov     eax, dword ptr [g_5e77a5d4]
        mov     edx, dword ptr [g_5e77a5b4]
        shr     eax, 0x18
        shr     edx, 0x18
        sub     edx, eax
        mov     dword ptr [ebp - 0x24], edx
        mov     edx, dword ptr [g_5e77a594]
        fild    dword ptr [ebp - 0x24]
        shr     edx, 0x18
        sub     edx, eax
        fstp    dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x24], edx
        fild    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 8]
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x14]
        mov     eax, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6dc], eax
        fsubp   st(1), st(0)
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x24]
        fld     dword ptr [ebp - 0x24]
        fmul    dword ptr [g_5e0384e8]
        fistp   dword ptr [g_5e77a6b4]
        mov     edx, dword ptr [g_5e77a6b4]
        mov     dword ptr [g_5e77a6ec], edx
        mov     edx, dword ptr [g_5e77a6dc]
        test    edx, edx
        mov     eax, edx
        jge     L_14b7c
        lea     eax, [edx + 0x3fff]
    L_14b7c:
        sar     eax, 0xe
        and     eax, 0x3ff
        and     esi, 0x3ff
        shl     eax, 0xb
        or      esi, eax
        and     ecx, 0x3ff
        shl     esi, 0xa
        or      ecx, eax
        mov     dword ptr [g_5e77a7ec], esi
        mov     dword ptr [g_5e77a814], edx
        mov     dword ptr [g_5e77a7fc], ecx
    L_14bac:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
