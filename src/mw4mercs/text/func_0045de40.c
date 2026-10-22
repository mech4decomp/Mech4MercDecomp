/*
 * FUN_0045de40 (1227 B) — MLR_I_L_DeT_PMesh __thiscall lightmap build.
 * Transforms tube vertices through the light matrix, writes lightmap
 * texels, and updates the index/vertex streams. Falls back to
 * FUN_00465370 when the stream is not initialized.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9574;
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
extern int __cdecl FUN_00491cd0(void);
extern int __cdecl FUN_00421f00(int);
extern void __cdecl FUN_00465370(void);

__declspec(naked) void FUN_0045de40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0xb0]
        test    eax, eax
        jz      L20
        mov     ecx, dword ptr [eax+0x4]
        test    ecx, ecx
        jz      L20
        mov     eax, dword ptr [g_007b9574]
        test    eax, eax
        ja      L20
        mov     eax, dword ptr [ebx+0x24]
        and     eax, 0x3fff
        push    esi
        push    edi
        mov     byte ptr [ebp+0x17], 0x0
        mov     dword ptr [ebp-0x10], 0x0
        mov     dword ptr [ebp-0x14], 0x0
        jz      L5
        test    eax, eax
        jle     L5
        mov     ecx, dword ptr [g_007da848]
        mov     esi, dword ptr [ecx+eax*4+0x24]
        test    esi, esi
        jz      L5
        mov     edx, dword ptr [esi]
        push    0x0
        mov     ecx, esi
        call    dword ptr [edx+0x4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L1
        mov     dword ptr [g_007da864], 0x1
        jmp     L4
L1:
        cmp     eax, 0x80
        jl      L2
        mov     dword ptr [g_007da864], 0x2
        jmp     L4
L2:
        cmp     eax, 0x40
        jl      L3
        mov     dword ptr [g_007da864], 0x4
        jmp     L4
L3:
        cmp     eax, 0x20
        jl      L3b
        mov     dword ptr [g_007da864], 0x8
        jmp     L4
L3b:
        cmp     eax, 0x10
        jl      L3c
        mov     dword ptr [g_007da864], 0x10
        jmp     L4
L3c:
        xor     ecx, ecx
        cmp     eax, 0x8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_007da864], ecx
L4:
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jnz     L4b
        mov     esi, dword ptr [esi+0x28]
        test    esi, esi
        jz      L4b
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     byte ptr [ebp+0x17], 0x1
        mov     dword ptr [ebp-0x10], edx
        mov     dword ptr [ebp-0x14], eax
L5:
        mov     edi, dword ptr [ebx+0x18]
        cmp     edi, 0x100
        mov     ecx, dword ptr [ebx+0x64]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0xc], edi
        jle     L6
        mov     dword ptr [ebp-0xc], 0x100
        mov     edi, dword ptr [ebp-0xc]
L6:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jz      L7
        mov     edx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [edx+0x30]
        jmp     L8
L4b:
        mov     byte ptr [ebp+0x17], 0x0
        jmp     L5
L7:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx+0x10]
        shl     eax, 0x5
        add     eax, edx
L8:
        cmp     word ptr [ebx+0x56], 0x0
        mov     dword ptr [ebx+0x44], eax
        mov     word ptr [ebx+0xa], 0x0
        jnz     L9
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax+0x98]
L9:
        xor     esi, esi
        cmp     edi, esi
        mov     dword ptr [ebp-0x4], esi
        jle     L12
        mov     dword ptr [ebp-0x8], esi
L10:
        mov     ecx, dword ptr [g_007da600]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx+esi], 0x0
        jnz     L10b
        inc     dword ptr [ebp-0x4]
        jmp     L11
L10b:
        mov     edx, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [g_007da5f4]
        mov     eax, esi
        sub     eax, edx
        mov     edx, dword ptr [ebx+0x1c]
        mov     word ptr [ecx+esi*2], ax
        mov     ecx, dword ptr [ebx+0x14]
        mov     eax, dword ptr [ebp-0x8]
        add     eax, ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        lea     edi, [edx+esi*8]
        mov     edx, dword ptr [ebx+0x44]
        mov     dword ptr [ebp-0x20], eax
        shl     ecx, 0x5
        add     ecx, edx
        mov     dword ptr [ebp-0x1c], ecx
        mov     edx, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [eax]
        fld     dword ptr [eax+0x4]
        fld     dword ptr [eax+0x8]
        mov     eax, dword ptr [ebp-0x1c]
        fld     dword ptr [edx+0x34]
        fmul    st(0), st(2)
        fld     dword ptr [edx+0x38]
        fmul    st(0), st(2)
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax+0x4]
        fadd    dword ptr [edx+0x2c]
        fld     dword ptr [edx+0x20]
        fmul    st(0), st(5)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    st(0), st(4)
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    st(0), st(3)
        fxch
        fstp    dword ptr [eax+0x8]
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
        fmul    dword ptr [ecx+0x8]
        fstp    dword ptr [ecx+0x8]
        fld     st(0)
        fmul    dword ptr [g_007da87c]
        fmul    dword ptr [ecx]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [edi]
        mov     dword ptr [ecx+0x18], edx
        fmul    dword ptr [g_007da878]
        fmul    dword ptr [ecx+0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx+0x4]
        mov     eax, dword ptr [edi+0x4]
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0x44]
        mov     edx, dword ptr [edx+esi*4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        shl     eax, 0x5
        mov     dword ptr [eax+ecx+0x10], edx
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L10c
        mov     edx, dword ptr [ebx+0x14]
        mov     eax, dword ptr [ebp-0x8]
        add     eax, edx
        push    eax
        call    FUN_00421f00
        mov     edx, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 0x5
        mov     byte ptr [ecx+edx+0x17], al
L10c:
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L10d
        mov     ecx, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x10]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        xor     edx, edx
        shl     eax, 0x5
        fadd    dword ptr [eax+ecx+0x18]
        lea     eax, [eax+ecx+0x18]
        fstp    dword ptr [eax]
        mov     dx, word ptr [ebx+0xa]
        mov     eax, dword ptr [ebx+0x44]
        fld     dword ptr [ebp-0x14]
        shl     edx, 0x5
        fadd    dword ptr [edx+eax+0x1c]
        lea     eax, [edx+eax+0x1c]
        fstp    dword ptr [eax]
L10d:
        inc     word ptr [ebx+0xa]
        mov     edi, dword ptr [ebp-0xc]
L11:
        mov     ecx, dword ptr [ebp-0x8]
        inc     esi
        add     ecx, 0xc
        cmp     esi, edi
        mov     dword ptr [ebp-0x8], ecx
        jl      L10
L12:
        mov     esi, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        shl     ecx, 0x5
        lea     edi, [esi+ecx]
        mov     edx, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        xor     edx, edx
        rep     movsb
        mov     dx, word ptr [ebx+0xa]
        and     edx, 0xffff
        jle     L13
        mov     eax, dword ptr [ebx+0x44]
        mov     ecx, edx
        shl     ecx, 0x5
        lea     ecx, [ecx+eax+0x1c]
        add     eax, 0x1c
        mov     esi, edx
L12b:
        fld     dword ptr [eax-0x4]
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
        jnz     L12b
L13:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L14
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx]
        add     edx, edx
        add     eax, edx
        mov     edx, dword ptr [ecx+0xc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ecx+0x28]
        lea     eax, [eax+edx*2]
        mov     dword ptr [ebp+0x14], eax
L14c:
        mov     edx, dword ptr [ebp-0x18]
        xor     esi, esi
        xor     edi, edi
        cmp     edx, esi
        mov     dword ptr [ebx+0x50], eax
        mov     word ptr [ebx+0x54], si
        mov     dword ptr [ebp-0x14], esi
        mov     dword ptr [ebp+0x10], esi
        jle     L16
        mov     ecx, dword ptr [g_007da5e8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp-0x20], edx
L14d:
        mov     ecx, dword ptr [ebx+0x60]
        movzx   cx, byte ptr [ecx+esi]
        mov     edx, dword ptr [ebp-0x20]
        cmp     byte ptr [edx+esi], 0x0
        mov     dword ptr [ebp-0x4], ecx
        jz      L15
        mov     edx, ecx
        and     edx, 0xffff
        dec     edx
        cmp     edx, 0x1
        jle     L15
        mov     esi, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [ebx+0x48]
        add     ecx, esi
        dec     edx
        lea     eax, [eax+edi*2]
        mov     dword ptr [ebp-0x1c], ecx
        lea     esi, [ecx+0x1]
        mov     dword ptr [ebp+0x8], edx
        jmp     L14b_entry
L14:
        mov     eax, dword ptr [ebp+0xc]
        mov     eax, dword ptr [eax+0x48]
        mov     ecx, dword ptr [ebp+0xc]
        mov     dword ptr [ebp+0x14], eax
        jmp     L14c
L14b:
        mov     ecx, dword ptr [ebp-0x1c]
L14b_entry:
        xor     edx, edx
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [g_007da5f4]
        add     eax, 0x2
        inc     edi
        add     eax, 0x2
        add     eax, 0x2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-0x6], dx
        xor     edx, edx
        mov     dl, byte ptr [esi+0x1]
        inc     edi
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-0x4], dx
        xor     edx, edx
        mov     dl, byte ptr [esi]
        inc     edi
        inc     esi
        mov     cx, word ptr [ecx+edx*2]
        mov     word ptr [eax-0x2], cx
        dec     dword ptr [ebp+0x8]
        jnz     L14b
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp+0x14]
        mov     esi, dword ptr [ebp-0x14]
L15:
        mov     edx, dword ptr [ebp+0x10]
        and     ecx, 0xffff
        add     edx, ecx
        mov     ecx, dword ptr [ebp-0x18]
        inc     esi
        cmp     esi, ecx
        mov     dword ptr [ebp+0x10], edx
        mov     dword ptr [ebp-0x14], esi
        jl      L14d
        mov     ecx, dword ptr [ebp+0xc]
L16:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [ebx+0x54], di
        jnz     L17
        mov     eax, dword ptr [ecx+0xc]
        and     edi, 0xffff
        add     eax, edi
        mov     dword ptr [ecx+0xc], eax
L17:
        cmp     word ptr [ebx+0xa], 0x0
        pop     edi
        setnz   dl
        pop     esi
        mov     byte ptr [ebx+0x10], dl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L20:
        mov     eax, dword ptr [ebp+0x18]
        mov     ecx, dword ptr [ebp+0x14]
        mov     edx, dword ptr [ebp+0x10]
        push    eax
        mov     eax, dword ptr [ebp+0xc]
        push    ecx
        mov     ecx, dword ptr [ebp+0x8]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_00465370
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
