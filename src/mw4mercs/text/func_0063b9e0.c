/*
 * FUN_0063b9e0 (1001 B) — __thiscall. Large ABL/game-logic init routine:
 * builds a 4x4 matrix (identity + -1.0 fill), computes FPU-scaled values,
 * allocates a 0x164-byte object, loops over a list, and dispatches virtual
 * calls. Heavy FPU + stack-frame usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_00858944;
extern float g_0076e2bc;
extern float g_0078f170;
extern float g_0076d064;
extern float g_0076c5b0;
extern int   g_007daa48;
extern int   g_007daa38;
extern int   g_007da848;
extern int   g_007f2d24;

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b9f50(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004ba320(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_004c8a50(void);
extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void FUN_0063b9e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xd0
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi+0x10]
        mov     ecx, edi
        mov     dword ptr [esp+0x24], esi
        mov     dword ptr [esp+0x30], edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_ba22
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_ba1b
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
    L_ba1b:
        mov     ecx, edi
        call    FUN_0041fcb0
    L_ba22:
        fild    dword ptr [g_00858944]
        mov     eax, dword ptr [g_00858944]
        and     eax, 0x800000ff
        fld     dword ptr [g_0076e2bc]
        fdiv    st(0), st(1)
        fstp    dword ptr [esp+0x18]
        jns     L_ba47
        dec     eax
        or      eax, 0xffffff00
        inc     eax
    L_ba47:
        fmul    dword ptr [g_0078f170]
        mov     dword ptr [esp+0x3c], eax
        fadd    dword ptr [g_0076d064]
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_007daa48]
        push    ecx
        mov     dword ptr [esi+0x18], eax
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_ba8f
        mov     edx, dword ptr [esi+0x18]
        push    edx
        mov     ecx, eax
        call    FUN_004b9f50
        mov     dword ptr [esp+0x14], eax
        jmp     L_ba93
    L_ba8f:
        mov     dword ptr [esp+0x14], ebx
    L_ba93:
        call    FUN_006f49a0
        mov     ebp, dword ptr [esi+0x18]
        cmp     ebp, ebx
        mov     dword ptr [esp+0x1c], ebx
        jle     L_bceb
    L_baa7:
        lea     eax, [esp+0xa4]
        mov     ecx, 0x4
    L_bab3:
        mov     edx, 0xbf800000
        mov     dword ptr [eax+0x4], edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax-0x4], edx
        mov     dword ptr [eax+0x8], edx
        add     eax, 0x10
        dec     ecx
        jnz     L_bab3
        lea     eax, [esp+0x28]
        push    eax
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, dword ptr [esp+0x1c]
        lea     edx, [esp+0x40]
        push    edx
        lea     eax, [esp+0x40]
        push    eax
        push    ebx
        call    FUN_004ba320
        mov     edi, dword ptr [esp+0x38]
        lea     eax, [ebx+0x1]
        cmp     eax, ebp
        mov     ecx, 0x10
        lea     esi, [esp+0xa0]
        mov     dword ptr [esp+0xd0], 0x3f800000
        mov     dword ptr [esp+0xc0], 0x3f800000
        mov     dword ptr [esp+0xb0], 0x3f800000
        mov     dword ptr [esp+0xa0], 0x3f800000
        mov     dword ptr [esp+0xd4], 0x3f800000
        mov     dword ptr [esp+0xc4], 0x3f800000
        mov     dword ptr [esp+0xb4], 0x3f800000
        mov     dword ptr [esp+0xa4], 0x3f800000
        mov     dword ptr [esp+0xd8], 0x3f800000
        mov     dword ptr [esp+0xc8], 0x3f800000
        mov     dword ptr [esp+0xb8], 0x3f800000
        mov     dword ptr [esp+0xa8], 0x3f800000
        mov     dword ptr [esp+0xdc], 0x3f800000
        mov     dword ptr [esp+0xcc], 0x3f800000
        mov     dword ptr [esp+0xbc], 0x3f800000
        mov     dword ptr [esp+0xac], 0x3f800000
        rep     movsd
        mov     dword ptr [esp+0x40], 0x0
        mov     dword ptr [esp+0x44], 0x0
        mov     dword ptr [esp+0x48], 0x3d7be76d
        mov     dword ptr [esp+0x4c], 0x0
        mov     dword ptr [esp+0x50], 0x3d7be76d
        mov     dword ptr [esp+0x20], eax
        jge     L_bbe4
        fld     dword ptr [g_0076d064]
        jmp     L_bbee
    L_bbe4:
        fild    dword ptr [esp+0x3c]
        fmul    dword ptr [g_0078f170]
    L_bbee:
        test    ebx, ebx
        fst     dword ptr [esp+0x54]
        mov     edi, dword ptr [esp+0x2c]
        fstp    dword ptr [esp+0x5c]
        mov     ecx, 0x8
        lea     esi, [esp+0x40]
        mov     dword ptr [esp+0x58], 0x0
        rep     movsd
        mov     dword ptr [esp+0x60], 0x0
        jle     L_bc23
        fild    dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x18]
        jmp     L_bc29
    L_bc23:
        fld     dword ptr [g_0076c5b0]
    L_bc29:
        cmp     eax, ebp
        fst     dword ptr [esp+0x64]
        fstp    dword ptr [esp+0x74]
        mov     dword ptr [esp+0x70], 0x3f800000
        mov     dword ptr [esp+0x80], 0x3f800000
        jge     L_bc52
        fild    dword ptr [esp+0x20]
        fmul    dword ptr [esp+0x18]
        jmp     L_bc58
    L_bc52:
        fld     dword ptr [g_0076d064]
    L_bc58:
        mov     edi, dword ptr [esp+0x34]
        fst     dword ptr [esp+0x84]
        mov     ecx, 0x10
        fstp    dword ptr [esp+0x94]
        lea     esi, [esp+0x60]
        mov     dword ptr [esp+0x90], 0x0
        mov     dword ptr [esp+0x68], 0x0
        mov     dword ptr [esp+0x6c], 0x3f800000
        mov     dword ptr [esp+0x78], 0x0
        mov     dword ptr [esp+0x7c], 0x3f800000
        mov     dword ptr [esp+0x88], 0x0
        mov     dword ptr [esp+0x8c], 0x3f800000
        mov     dword ptr [esp+0x98], 0x0
        mov     dword ptr [esp+0x9c], 0x3f800000
        rep     movsd
        mov     ecx, dword ptr [esp+0x24]
        mov     dl, byte ptr [ecx+0x1c]
        mov     ecx, dword ptr [esp+0x28]
        mov     ebx, eax
        cmp     ebx, ebp
        mov     byte ptr [ecx], dl
        mov     dword ptr [esp+0x1c], ebx
        jl      L_baa7
        mov     edi, dword ptr [esp+0x30]
    L_bceb:
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      L_bd0c
        mov     ecx, esi
        call    FUN_00491280
        mov     dword ptr [esi+0x18], 0x0
        jmp     L_bd0e
    L_bd0c:
        xor     esi, esi
    L_bd0e:
        mov     ecx, dword ptr [g_007da848]
        push    0x0
        push    0x78f178
        call    FUN_0048fac0
        test    eax, eax
        jnz     L_bd35
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    0x78f178
        call    FUN_0048f380
    L_bd35:
        mov     ebp, dword ptr [esi+0x10]
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi+0x4]
        mov     ebx, dword ptr [esi+0x14]
        or      ebp, 0x1f
        mov     dword ptr [esi+0x10], ebp
        mov     ebp, dword ptr [eax+0x1c]
        mov     eax, dword ptr [esi+0x8]
        and     ecx, 0xffffc000
        or      ecx, ebp
        mov     ebp, dword ptr [esi+0xc]
        and     ecx, 0xf3c67fff
        and     edx, 0xffffffec
        or      ecx, 0x4000
        or      edx, 0xc
        or      eax, 0xc39ffff
        and     ebx, 0xffffffef
        mov     dword ptr [esi], ecx
        and     ebp, 0xf3c7ffff
        mov     dword ptr [esi+0x4], edx
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi+0x8], eax
        mov     dword ptr [esi+0xc], ebp
        push    esi
        mov     esi, dword ptr [esp+0x18]
        mov     ecx, esi
        call    FUN_004c8a50
        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     eax, dword ptr [g_007f2d24]
        test    eax, eax
        jz      L_bdc1
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_007f2d24]
        push    eax
        call    dword ptr [esi+0x8]
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    dword ptr [eax+0x1c]
    L_bdc1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
