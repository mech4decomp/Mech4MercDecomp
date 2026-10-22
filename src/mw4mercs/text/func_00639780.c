/*
 * FUN_00639780 (4467 B) — cdecl (RET). Large switch-driven routine that
 * reads a mission/objective descriptor, dispatches on a type value via
 * multiple jump tables (in .rdata, not in the .text slice), computes
 * bounding-box floats, and pushes records through FUN_0041ee20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_007dab44;
extern int g_007dab40;
extern int g_007f2548;
extern int g_63a8f4;
extern int g_63a924;
extern char g_63a930;
extern int g_63a9d4;
extern char g_63a9e0;
extern int g_63aa84;
extern char g_63aa90;
extern int g_63ab34;
extern char g_63ab40;
extern int g_63abe4;
extern char g_63abf0;
extern int g_63ac94;
extern char g_63aca0;

extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005e3cc0(void);

__declspec(naked) void FUN_00639780(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x3c]
        push    edi
        mov     edi, dword ptr [esp + 0x3c]
        lea     eax, [edi + 0x10]
        push    0x20
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        push    0x20
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        mov     ecx, dword ptr [esp + 0x38]
        lea     eax, [ecx - 0x4c]
        cmp     eax, 0xb
        ja      L_63a86c
        jmp     dword ptr [eax*4 + g_63a8f4]

L_6397c0:
        lea     ebx, [edi + 0x1c]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     dl, byte ptr [eax + 0x14]
        mov     ecx, ebx
        mov     byte ptr [esp + 0x3c], dl
        call    FUN_0041fd80
        mov     ax, word ptr [eax + 0x16]
        push    0x8
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041ec50
        push    0x10
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0041ec50
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x421
        jnz     L_639814
        mov     eax, dword ptr [eax + 0x280]
L_639814:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx]
        add     ecx, 0xfffffbdd
        cmp     ecx, 0xa2
        ja      L_6398c8
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_63a930]
        jmp     dword ptr [edx*4 + g_63a924]
L_63983a:
        mov     dword ptr [esp + 0x40], 0x40a00000
        mov     dword ptr [esp + 0x10], 0x40a00000
        mov     dword ptr [esp + 0x18], 0x40a00000
        mov     dword ptr [esp + 0x38], 0xc0a00000
        mov     dword ptr [esp + 0x14], 0xc0a00000
        mov     dword ptr [esp + 0x1c], 0xc0a00000
        jmp     L_6398f8
L_63986f:
        mov     eax, dword ptr [eax + 0x124]
        test    eax, eax
        jz      L_6398c8
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x3c]
        fld     st(0)
        fadd    dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x1c]
        jmp     L_6398f8
L_6398c8:
        mov     dword ptr [esp + 0x40], 0x41700000
        mov     dword ptr [esp + 0x10], 0x41700000
        mov     dword ptr [esp + 0x18], 0x41700000
        mov     dword ptr [esp + 0x38], 0xc1700000
        mov     dword ptr [esp + 0x14], 0xc1700000
        mov     dword ptr [esp + 0x1c], 0xc1700000
L_6398f8:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63990f
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [edi + 0x24], eax
        jmp     L_639924
L_63990f:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x40]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639924
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edi + 0x24], ecx
L_639924:
        fld     dword ptr [edi + 0x28]
        lea     ebp, [edi + 0x28]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63993e
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], edx
        jmp     L_639953
L_63993e:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639953
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebp], eax
L_639953:
        fld     dword ptr [edi + 0x2c]
        lea     ebx, [edi + 0x2c]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63996c
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx], ecx
        jmp     L_63997f
L_63996c:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63997f
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx], edx
L_63997f:
        push    0x1
        push    0x0
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebx
        jmp     L_63a865

L_6399e3:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        mov     al, byte ptr [eax + 0x14]
        push    0x8
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x44], al
        call    FUN_0041ec50
        lea     ebx, [edi + 0x1c]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     dl, byte ptr [eax + 0x14]
        mov     ecx, ebx
        mov     byte ptr [esp + 0x3c], dl
        call    FUN_0041fd80
        mov     ax, word ptr [eax + 0x16]
        push    0x8
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041ec50
        push    0x10
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0041ec50
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x421
        jnz     L_639a54
        mov     eax, dword ptr [eax + 0x280]
L_639a54:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx]
        add     ecx, 0xfffffbdd
        cmp     ecx, 0xa2
        ja      L_639b08
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_63a9e0]
        jmp     dword ptr [edx*4 + g_63a9d4]
L_639a7a:
        mov     dword ptr [esp + 0x40], 0x40a00000
        mov     dword ptr [esp + 0x1c], 0x40a00000
        mov     dword ptr [esp + 0x14], 0x40a00000
        mov     dword ptr [esp + 0x38], 0xc0a00000
        mov     dword ptr [esp + 0x18], 0xc0a00000
        mov     dword ptr [esp + 0x10], 0xc0a00000
        jmp     L_639b38
L_639aaf:
        mov     eax, dword ptr [eax + 0x124]
        test    eax, eax
        jz      L_639b08
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x3c]
        fld     st(0)
        fadd    dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x10]
        jmp     L_639b38
L_639b08:
        mov     dword ptr [esp + 0x40], 0x41700000
        mov     dword ptr [esp + 0x1c], 0x41700000
        mov     dword ptr [esp + 0x14], 0x41700000
        mov     dword ptr [esp + 0x38], 0xc1700000
        mov     dword ptr [esp + 0x18], 0xc1700000
        mov     dword ptr [esp + 0x10], 0xc1700000
L_639b38:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jz      L_639b4f
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [edi + 0x24], eax
        jmp     L_639b64
L_639b4f:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x40]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639b64
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edi + 0x24], ecx
L_639b64:
        fld     dword ptr [edi + 0x28]
        lea     ebp, [edi + 0x28]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L_639b7e
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], edx
        jmp     L_639b93
L_639b7e:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639b93
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], eax
L_639b93:
        fld     dword ptr [edi + 0x2c]
        lea     ebx, [edi + 0x2c]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_639bac
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx], ecx
        jmp     L_639bbf
L_639bac:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639bbf
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], edx
L_639bbf:
        push    0x1
        push    0x0
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebx
        jmp     L_63a865

L_639c23:
        lea     ebx, [edi + 0x14]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     al, byte ptr [eax + 0x14]
        mov     ecx, ebx
        mov     byte ptr [esp + 0x3c], al
        call    FUN_0041fd80
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x16]
        push    0x10
        lea     edx, [esp + 0x24]
        push    edx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, esi
        call    FUN_0041ec50
        lea     ebx, [edi + 0x1c]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     al, byte ptr [eax + 0x14]
        mov     ecx, ebx
        mov     byte ptr [esp + 0x3c], al
        call    FUN_0041fd80
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x16]
        push    0x8
        lea     edx, [esp + 0x40]
        push    edx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, esi
        call    FUN_0041ec50
        push    0x10
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x421
        jnz     L_639ca9
        mov     eax, dword ptr [eax + 0x280]
L_639ca9:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx]
        add     ecx, 0xfffffbdd
        cmp     ecx, 0xa2
        ja      L_639d5d
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_63aa90]
        jmp     dword ptr [edx*4 + g_63aa84]
L_639ccf:
        mov     dword ptr [esp + 0x40], 0x40a00000
        mov     dword ptr [esp + 0x1c], 0x40a00000
        mov     dword ptr [esp + 0x14], 0x40a00000
        mov     dword ptr [esp + 0x38], 0xc0a00000
        mov     dword ptr [esp + 0x18], 0xc0a00000
        mov     dword ptr [esp + 0x10], 0xc0a00000
        jmp     L_639d8d
L_639d04:
        mov     eax, dword ptr [eax + 0x124]
        test    eax, eax
        jz      L_639d5d
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x3c]
        fld     st(0)
        fadd    dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x10]
        jmp     L_639d8d
L_639d5d:
        mov     dword ptr [esp + 0x40], 0x41700000
        mov     dword ptr [esp + 0x1c], 0x41700000
        mov     dword ptr [esp + 0x14], 0x41700000
        mov     dword ptr [esp + 0x38], 0xc1700000
        mov     dword ptr [esp + 0x18], 0xc1700000
        mov     dword ptr [esp + 0x10], 0xc1700000
L_639d8d:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jz      L_639da4
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [edi + 0x24], eax
        jmp     L_639db9
L_639da4:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x40]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639db9
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edi + 0x24], ecx
L_639db9:
        fld     dword ptr [edi + 0x28]
        lea     ebp, [edi + 0x28]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L_639dd3
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], edx
        jmp     L_639de8
L_639dd3:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639de8
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], eax
L_639de8:
        fld     dword ptr [edi + 0x2c]
        lea     ebx, [edi + 0x2c]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_639e01
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx], ecx
        jmp     L_639e14
L_639e01:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_639e14
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], edx
L_639e14:
        push    0x1
        push    0x0
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebx
        jmp     L_63a865

L_639e78:
        lea     eax, [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp + 0x40]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x2c]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x1
        push    0x3
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x4c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        lea     edx, [edi + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x4
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x2c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea     edx, [edi + 0x2c]
        push    edx
        jmp     L_63a865

L_639eee:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        mov     al, byte ptr [eax + 0x14]
        push    0x8
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x44], al
        call    FUN_0041ec50
        lea     edx, [esp + 0x40]
        push    edx
        lea     eax, [esp + 0x3c]
        push    eax
        mov     eax, dword ptr [g_007dab44]
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x28]
        push    edx
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x1
        push    0x3
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x4c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    edx
        push    eax
        lea     ecx, [edi + 0x24]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x4
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x2c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [edi + 0x2c]
        push    ecx
        jmp     L_63a865

L_639f80:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        xor     edx, edx
        mov     dx, word ptr [eax + 0x16]
        push    0x10
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x44], edx
        call    FUN_0041ec50
        mov     ebx, dword ptr [g_007dab40]
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        mov     edx, dword ptr [g_007dab44]
        lea     eax, [esp + 0x28]
        push    eax
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x28]
        push    ecx
        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x1
        push    0x3
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x4
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        push    ecx
        jmp     L_63a860

L_63a013:
        lea     ebx, [edi + 0x1c]
        mov     ecx, ebx
        call    FUN_0041fd80
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x16]
        push    0x10
        lea     edx, [esp + 0x24]
        push    edx
        mov     dword ptr [esp + 0x28], ecx
        mov     ecx, esi
        call    FUN_0041ec50
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x421
        jnz     L_63a04d
        mov     eax, dword ptr [eax + 0x280]
L_63a04d:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx]
        add     ecx, 0xfffffbdd
        cmp     ecx, 0xa2
        ja      L_63a101
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_63ab40]
        jmp     dword ptr [edx*4 + g_63ab34]
L_63a073:
        mov     dword ptr [esp + 0x3c], 0x40a00000
        mov     dword ptr [esp + 0x38], 0x40a00000
        mov     dword ptr [esp + 0x18], 0x40a00000
        mov     dword ptr [esp + 0x40], 0xc0a00000
        mov     dword ptr [esp + 0x1c], 0xc0a00000
        mov     dword ptr [esp + 0x14], 0xc0a00000
        jmp     L_63a131
L_63a0a8:
        mov     eax, dword ptr [eax + 0x124]
        test    eax, eax
        jz      L_63a101
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x3c]
        fld     st(0)
        fadd    dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        jmp     L_63a131
L_63a101:
        mov     dword ptr [esp + 0x3c], 0x41700000
        mov     dword ptr [esp + 0x38], 0x41700000
        mov     dword ptr [esp + 0x18], 0x41700000
        mov     dword ptr [esp + 0x40], 0xc1700000
        mov     dword ptr [esp + 0x1c], 0xc1700000
        mov     dword ptr [esp + 0x14], 0xc1700000
L_63a131:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x40]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a148
        mov     eax, dword ptr [esp + 0x40]
        mov     dword ptr [edi + 0x24], eax
        jmp     L_63a15d
L_63a148:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x3c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a15d
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [edi + 0x24], ecx
L_63a15d:
        fld     dword ptr [edi + 0x28]
        lea     ebp, [edi + 0x28]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a177
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], edx
        jmp     L_63a18c
L_63a177:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a18c
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [ebp], eax
L_63a18c:
        fld     dword ptr [edi + 0x2c]
        lea     ebx, [edi + 0x2c]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a1a5
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], ecx
        jmp     L_63a1b8
L_63a1a5:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a1b8
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx], edx
L_63a1b8:
        push    0x1
        push    0x0
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x4c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebx
        jmp     L_63a865

L_63a21c:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        mov     al, byte ptr [eax + 0x14]
        push    0x8
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x44], al
        call    FUN_0041ec50
        lea     ebx, [edi + 0x1c]
        mov     ecx, ebx
        call    FUN_0041fd80
        xor     edx, edx
        mov     dx, word ptr [eax + 0x16]
        push    0x10
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], edx
        call    FUN_0041ec50
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x421
        jnz     L_63a273
        mov     eax, dword ptr [eax + 0x280]
L_63a273:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx]
        add     ecx, 0xfffffbdd
        cmp     ecx, 0xa2
        ja      L_63a327
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_63abf0]
        jmp     dword ptr [edx*4 + g_63abe4]
L_63a299:
        mov     dword ptr [esp + 0x40], 0x40a00000
        mov     dword ptr [esp + 0x1c], 0x40a00000
        mov     dword ptr [esp + 0x14], 0x40a00000
        mov     dword ptr [esp + 0x38], 0xc0a00000
        mov     dword ptr [esp + 0x18], 0xc0a00000
        mov     dword ptr [esp + 0x10], 0xc0a00000
        jmp     L_63a357
L_63a2ce:
        mov     eax, dword ptr [eax + 0x124]
        test    eax, eax
        jz      L_63a327
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x3c]
        fld     st(0)
        fadd    dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x10]
        jmp     L_63a357
L_63a327:
        mov     dword ptr [esp + 0x40], 0x41700000
        mov     dword ptr [esp + 0x1c], 0x41700000
        mov     dword ptr [esp + 0x14], 0x41700000
        mov     dword ptr [esp + 0x38], 0xc1700000
        mov     dword ptr [esp + 0x18], 0xc1700000
        mov     dword ptr [esp + 0x10], 0xc1700000
L_63a357:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a36e
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [edi + 0x24], eax
        jmp     L_63a383
L_63a36e:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x40]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a383
        mov     ecx, dword ptr [esp + 0x40]
        mov     dword ptr [edi + 0x24], ecx
L_63a383:
        fld     dword ptr [edi + 0x28]
        lea     ebp, [edi + 0x28]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a39d
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp], edx
        jmp     L_63a3b2
L_63a39d:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a3b2
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], eax
L_63a3b2:
        fld     dword ptr [edi + 0x2c]
        lea     ebx, [edi + 0x2c]
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a3cb
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ebx], ecx
        jmp     L_63a3de
L_63a3cb:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a3de
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], edx
L_63a3de:
        push    0x1
        push    0x0
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebx
        jmp     L_63a865

L_63a442:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        mov     ax, word ptr [eax + 0x16]
        push    0x10
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0041ec50
        lea     ebx, [edi + 0x1c]
        mov     ecx, ebx
        call    FUN_0041fd80
        xor     edx, edx
        mov     dx, word ptr [eax + 0x16]
        push    0x10
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], edx
        call    FUN_0041ec50
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x4]
        cmp     dword ptr [ecx], 0x421
        jnz     L_63a49a
        mov     eax, dword ptr [eax + 0x280]
L_63a49a:
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx]
        add     ecx, 0xfffffbdd
        cmp     ecx, 0xa2
        ja      L_63a54e
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_63aca0]
        jmp     dword ptr [edx*4 + g_63ac94]
L_63a4c0:
        mov     dword ptr [esp + 0x3c], 0x40a00000
        mov     dword ptr [esp + 0x38], 0x40a00000
        mov     dword ptr [esp + 0x18], 0x40a00000
        mov     dword ptr [esp + 0x40], 0xc0a00000
        mov     dword ptr [esp + 0x1c], 0xc0a00000
        mov     dword ptr [esp + 0x14], 0xc0a00000
        jmp     L_63a57e
L_63a4f5:
        mov     eax, dword ptr [eax + 0x124]
        test    eax, eax
        jz      L_63a54e
        fld     dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [eax + 0x3c]
        fld     st(0)
        fadd    dword ptr [eax + 0x40]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x2c]
        fadd    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x18]
        fsub    dword ptr [eax + 0x40]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [eax + 0x44]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x2c]
        fsub    dword ptr [eax + 0x48]
        fstp    dword ptr [esp + 0x14]
        jmp     L_63a57e
L_63a54e:
        mov     dword ptr [esp + 0x3c], 0x41700000
        mov     dword ptr [esp + 0x38], 0x41700000
        mov     dword ptr [esp + 0x18], 0x41700000
        mov     dword ptr [esp + 0x40], 0xc1700000
        mov     dword ptr [esp + 0x1c], 0xc1700000
        mov     dword ptr [esp + 0x14], 0xc1700000
L_63a57e:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x40]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a595
        mov     eax, dword ptr [esp + 0x40]
        mov     dword ptr [edi + 0x24], eax
        jmp     L_63a5aa
L_63a595:
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [esp + 0x3c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a5aa
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [edi + 0x24], ecx
L_63a5aa:
        fld     dword ptr [edi + 0x28]
        lea     ebp, [edi + 0x28]
        fcomp   dword ptr [esp + 0x1c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a5c4
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp], edx
        jmp     L_63a5d9
L_63a5c4:
        fld     dword ptr [ebp]
        fcomp   dword ptr [esp + 0x38]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a5d9
        mov     eax, dword ptr [esp + 0x38]
        mov     dword ptr [ebp], eax
L_63a5d9:
        fld     dword ptr [edi + 0x2c]
        lea     ebx, [edi + 0x2c]
        fcomp   dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jz      L_63a5f2
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], ecx
        jmp     L_63a605
L_63a5f2:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_63a605
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ebx], edx
L_63a605:
        push    0x1
        push    0x0
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x4c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x6
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        push    ebx
        jmp     L_63a865

L_63a669:
        lea     eax, [esp + 0x3c]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp + 0x40]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x2c]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x1
        push    0x5
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x4c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        lea     edx, [edi + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x6
        push    0x6
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447a0000
        push    0xc47a0000
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x7
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x2c]
        add     esp, 0xc
        push    eax
        push    ecx
        jmp     L_63a860

L_63a6fe:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        mov     cl, byte ptr [eax + 0x14]
        push    0x8
        lea     edx, [esp + 0x40]
        mov     byte ptr [esp + 0x40], cl
        push    edx
        mov     ecx, esi
        call    FUN_0041ec50
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp + 0x28]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x28]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x1
        push    0x5
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [edi + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x6
        push    0x6
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447a0000
        push    0xc47a0000
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x7
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        push    ecx
        jmp     L_63a860

L_63a7b0:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x16]
        push    0x10
        lea     edx, [esp + 0x40]
        push    edx
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, esi
        call    FUN_0041ec50
        lea     eax, [esp + 0x40]
        push    eax
        lea     ecx, [esp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp + 0x28]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x28]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        push    0x1
        push    0x5
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x44]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [edi + 0x24]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x6
        push    0x6
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447a0000
        push    0xc47a0000
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x7
        push    0x6
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        push    ecx
L_63a860:
        push    edx
        lea     eax, [edi + 0x2c]
        push    eax
L_63a865:
        mov     ecx, esi
        call    FUN_0041ee20
L_63a86c:
        lea     ecx, [edi + 0x14]
        call    FUN_0041fd80
        lea     ecx, [edi + 0x1c]
        mov     ebx, eax
        call    FUN_0041fd80
        test    eax, eax
        jz      L_63a8eb
        mov     eax, dword ptr [ebx + 0x3f8]
        jmp     L_63a88e
L_63a88a:
        mov     eax, dword ptr [esp + 0x2c]
L_63a88e:
        test    eax, eax
        jz      L_63a8eb
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x2c], ecx
        jz      L_63a8eb
        mov     ebp, dword ptr [ebx + 0x184]
        mov     eax, dword ptr [edi + 0x10]
        mov     edx, 0x1
        mov     ecx, ebp
        shl     edx, cl
        __emit 0x85 /* test eax,edx — MSVC6 swaps operands to 85 C2 */
        __emit 0xD0
        jz      L_63a88a
        mov     eax, dword ptr [g_007f2548]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_63a88a
        lea     ecx, [edi + 0x1c]
        call    FUN_0041fd80
        push    eax
        mov     ecx, ebx
        call    FUN_005e3cc0
        test    al, al
        jz      L_63a88a
        push    0x3
        lea     eax, [edi + ebp*4 + 0x34]
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        jmp     L_63a88a
L_63a8eb:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret
    }
}
