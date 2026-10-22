/*
 * FUN_00461b20 (1197 B) — MLR mesh geometry build (__thiscall, RET 0x14).
 * Builds vertex/index buffers for a mesh: transforms vertices through a
 * matrix (FPU), computes lightmap UVs, and fills index buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da848;
extern int g_007da864;
extern int g_007da600;
extern int g_007da5f4;
extern int g_007da5e8;
extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;

extern void __cdecl FUN_00465370(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_00421f00(void);

__declspec(naked) void FUN_00461b20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0xa4]
        test    eax, eax
        jnz     L_1b55
        mov     eax, dword ptr [ebp+0x18]
        mov     ecx, dword ptr [ebp+0x14]
        mov     edx, dword ptr [ebp+0x10]
        push    eax
        mov     eax, dword ptr [ebp+0xc]
        push    ecx
        mov     ecx, dword ptr [ebp+8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_00465370
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_1b55:
        mov     eax, dword ptr [ebx+0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp+0x17], 0
        mov     dword ptr [ebp-0x10], 0
        mov     dword ptr [ebp-0x14], 0
        jz      L_1c2d
        test    eax, eax
        jle     L_1c2d
        mov     edx, dword ptr [g_007da848]
        mov     esi, dword ptr [edx+eax*4+0x24]
        test    esi, esi
        jz      L_1c2d
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax+4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_1bb4
        mov     dword ptr [g_007da864], 1
        jmp     L_1c0f
L_1bb4:
        cmp     eax, 0x80
        jl      L_1bc7
        mov     dword ptr [g_007da864], 2
        jmp     L_1c0f
L_1bc7:
        cmp     eax, 0x40
        jl      L_1bd8
        mov     dword ptr [g_007da864], 4
        jmp     L_1c0f
L_1bd8:
        cmp     eax, 0x20
        jl      L_1be9
        mov     dword ptr [g_007da864], 8
        jmp     L_1c0f
L_1be9:
        cmp     eax, 0x10
        jl      L_1bfa
        mov     dword ptr [g_007da864], 0x10
        jmp     L_1c0f
L_1bfa:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L_1c0f:
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jnz     L_1c5a
        mov     esi, dword ptr [esi+0x28]
        test    esi, esi
        jz      L_1c5a
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     byte ptr [ebp+0x17], 1
        mov     dword ptr [ebp-0x10], edx
        mov     dword ptr [ebp-0x14], eax
L_1c2d:
        mov     edi, dword ptr [ebx+0x18]
        cmp     edi, 0x100
        mov     ecx, dword ptr [ebx+0x64]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0xc], edi
        jle     L_1c4b
        mov     dword ptr [ebp-0xc], 0x100
        mov     edi, dword ptr [ebp-0xc]
L_1c4b:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jz      L_1c60
        mov     edx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [edx+0x30]
        jmp     L_1c6d
L_1c5a:
        mov     byte ptr [ebp+0x17], 0
        jmp     L_1c2d
L_1c60:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx+0x10]
        shl     eax, 5
        add     eax, edx
L_1c6d:
        cmp     word ptr [ebx+0x56], 0
        mov     dword ptr [ebx+0x44], eax
        mov     word ptr [ebx+0xa], 0
        jnz     L_1c87
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x98]
L_1c87:
        xor     esi, esi
        cmp     edi, esi
        mov     dword ptr [ebp-4], esi
        jle     L_1e42
        mov     dword ptr [ebp-8], esi
L_1c97:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx+esi], 0
        jnz     L_1cad
        inc     dword ptr [ebp-4]
        jmp     L_1e30
L_1cad:
        mov     edx, dword ptr [ebp-4]
        mov     ecx, dword ptr [g_007da5f4]
        mov     eax, esi
        sub     eax, edx
        mov     edx, dword ptr [ebx+0x1c]
        mov     word ptr [ecx+esi*2], ax
        mov     ecx, dword ptr [ebx+0x14]
        mov     eax, dword ptr [ebp-8]
        add     eax, ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        mov     dword ptr [ebp-0x20], eax
        mov     eax, dword ptr [ebx+0x44]
        lea     edi, [edx+esi*8]
        shl     ecx, 5
        add     ecx, eax
        mov     dword ptr [ebp-0x1c], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x1c]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x30]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+0xc]
        fadd    dword ptr [edx+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+8]
        fmul    st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax+8]
        fadd    dword ptr [edx+0xc]
        fld     dword ptr [edx]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ecx+0xc]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [g_007da87c]
        fmul    dword ptr [ecx]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [edi]
        mov     dword ptr [ecx+0x18], edx
        fmul    dword ptr [ecx+4]
        xor     edx, edx
        mov     dx, word ptr [ebx+0xa]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        shl     edx, 5
        fstp    dword ptr [ecx+4]
        mov     eax, dword ptr [edi+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [ebx+0xa0]
        mov     ecx, dword ptr [ecx+esi*4]
        mov     eax, dword ptr [ebx+0x44]
        mov     dword ptr [edx+eax+0x10], ecx
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_1df0
        mov     eax, dword ptr [ebx+0x14]
        mov     edx, dword ptr [ebp-8]
        add     edx, eax
        push    edx
        call    FUN_00421f00
        mov     edx, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 5
        mov     byte ptr [ecx+edx+0x17], al
L_1df0:
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L_1e29
        mov     ecx, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x10]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        xor     edx, edx
        shl     eax, 5
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx+0xa]
        mov     eax, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x14]
        shl     edx, 5
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L_1e29:
        inc     word ptr [ebx+0xa]
        mov     edi, dword ptr [ebp-0xc]
L_1e30:
        mov     ecx, dword ptr [ebp-8]
        inc     esi
        add     ecx, 0xc
        cmp     esi, edi
        mov     dword ptr [ebp-8], ecx
        jl      L_1c97
L_1e42:
        mov     esi, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 5
        lea     edi, [esi+ecx]
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        xor     edx, edx
        rep movsb
        mov     dx, word ptr [ebx+0xa]
        and     edx, 0xffff
        jle     L_1eab
        mov     eax, dword ptr [ebx+0x44]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx+eax+0x1c]
        add     eax, 0x1c
        mov     esi, edx
L_1e7e:
        fld     dword ptr [eax-4]
        add     eax, 0x20
        fmul    dword ptr [ebx+0x98]
        add     ecx, 0x20
        dec     esi
        fadd    dword ptr [ebx+0x90]
        fstp    dword ptr [ecx-0x24]
        fld     dword ptr [eax-0x20]
        fmul    dword ptr [ebx+0x9c]
        fadd    dword ptr [ebx+0x94]
        fstp    dword ptr [ecx-0x20]
        jnz     L_1e7e
L_1eab:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_1f29
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx]
        add     edx, edx
        add     eax, edx
        mov     edx, dword ptr [ecx+0xc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ecx+0x28]
        lea     eax, [eax+edx*2]
        mov     dword ptr [ebp+0x14], eax
L_1ec9:
        mov     edx, dword ptr [ebp-0x18]
        xor     esi, esi
        xor     edi, edi
        cmp     edx, esi
        mov     dword ptr [ebx+0x50], eax
        mov     word ptr [ebx+0x54], si
        mov     dword ptr [ebp-0x14], esi
        mov     dword ptr [ebp+8], esi
        jle     L_1fa0
L_1ee5:
        mov     ecx, dword ptr [g_007da5e8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp-0x20], edx
L_1ef0:
        mov     ecx, dword ptr [ebx+0x60]
        movzx   cx, byte ptr [ecx+esi]
        mov     edx, dword ptr [ebp-0x20]
        cmp     byte ptr [edx+esi], 0
        mov     dword ptr [ebp-4], ecx
        jz      L_1f80
        mov     edx, ecx
        and     edx, 0xffff
        dec     edx
        cmp     edx, 1
        jle     L_1f80
        mov     esi, dword ptr [ebp+8]
        mov     ecx, dword ptr [ebx+0x48]
        add     ecx, esi
        dec     edx
        lea     eax, [eax+edi*2]
        mov     dword ptr [ebp-0x1c], ecx
        lea     esi, [ecx+1]
        mov     dword ptr [ebp+0x10], edx
        jmp     L_1f3a
L_1f29:
        mov     eax, dword ptr [ebp+0xc]
        mov     eax, dword ptr [eax+0x48]
        mov     ecx, dword ptr [ebp+0xc]
        mov     dword ptr [ebp+0x14], eax
        jmp     L_1ec9
L_1f37:
        mov     ecx, dword ptr [ebp-0x1c]
L_1f3a:
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [g_007da5f4]
        add     eax, 2
        inc     edi
        add     eax, 2
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-6], dx
        xor     edx, edx
        mov     dl, byte ptr [esi+1]
        inc     edi
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-4], dx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        inc     edi
        inc     esi
        mov     cx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], cx
        dec     dword ptr [ebp+0x10]
        jnz     L_1f37
        mov     ecx, dword ptr [ebp-4]
        mov     eax, dword ptr [ebp+0x14]
        mov     esi, dword ptr [ebp-0x14]
L_1f80:
        mov     edx, dword ptr [ebp+8]
        and     ecx, 0xffff
        add     edx, ecx
        mov     ecx, dword ptr [ebp-0x18]
        inc     esi
        cmp     esi, ecx
        mov     dword ptr [ebp+8], edx
        mov     dword ptr [ebp-0x14], esi
        jl      L_1ef0
        mov     ecx, dword ptr [ebp+0xc]
L_1fa0:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [ebx+0x54], di
        jnz     L_1fb9
        mov     eax, dword ptr [ecx+0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [ecx+0xc], eax
L_1fb9:
        cmp     word ptr [ebx+0xa], 0
        pop     edi
        setnz   dl
        pop     esi
        mov     byte ptr [ebx+0x10], dl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
