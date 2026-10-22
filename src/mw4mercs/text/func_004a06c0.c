/*
 * FUN_004a06c0 (2004 B) — MLR particle/shrapnel: computes a fragment's
 * position/velocity via polynomial evaluation + matrix transforms, writes
 * results into output buffers. __thiscall, RET 0x18. FPU heavy.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_00495e60(float a, int b);
extern float __cdecl FUN_00495e10(float a, int b);
extern void __cdecl FUN_004a0500(int idx);
extern void __cdecl FUN_0040ca40(void *a, void *b);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041c7d0(int a, void *b);
extern int __cdecl FUN_00495e30(float a);
extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) void FUN_004a06c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc4
        mov     eax, dword ptr [ebp+0x8]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx+0xbc]
        lea     eax, [eax+eax*8]
        fld     dword ptr [ecx+eax*8+0x3c]
        push    esi
        lea     esi, [ecx+eax*8]
        fst     dword ptr [ebp-0x4]
        fcomp   dword ptr [g_0076d064]
        push    edi
        mov     dword ptr [ebp-0x18], ebx
        mov     dword ptr [ebp-0x1c], esi
        fnstsw  ax
        test    ah, 0x1
        jnz     L0702
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x18
L0702:
        mov     eax, dword ptr [ebp-0x4]
        mov     edx, dword ptr [esi+0x44]
        mov     edi, dword ptr [ebx+0x10]
        push    0x0
        push    eax
        lea     ecx, [edi+0xd4]
        mov     dword ptr [ebp-0x8], edx
        call    FUN_00495e60
        fstp    dword ptr [ebp-0x10]
        mov     al, byte ptr [edi+0xf4]
        test    al, al
        jz      L0750
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [edi+0xec]
        fadd    dword ptr [edi+0xf0]
        fmul    dword ptr [ebp-0x8]
        fadd    dword ptr [edi+0xe8]
        fmul    dword ptr [ebp-0x8]
        fadd    dword ptr [edi+0xe4]
        fmul    dword ptr [ebp-0x10]
        fstp    dword ptr [ebp-0x10]
L0750:
        mov     ecx, dword ptr [ebp-0x4]
        push    0x0
        push    ecx
        lea     ecx, [edi+0xac]
        call    FUN_00495e60
        fstp    dword ptr [ebp-0x14]
        mov     al, byte ptr [edi+0xcc]
        test    al, al
        jz      L0785
        mov     edx, dword ptr [ebp-0x8]
        push    0x0
        push    edx
        lea     ecx, [edi+0xb8]
        call    FUN_00495e10
        fmul    dword ptr [ebp-0x14]
        fstp    dword ptr [ebp-0x14]
L0785:
        mov     al, byte ptr [edi+0x231]
        test    al, al
        jz      L079a
        mov     eax, dword ptr [ebp+0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_004a0500
L079a:
        mov     ecx, dword ptr [ebp-0x14]
        push    ecx
        add     esi, 0x30
        push    esi
        lea     ecx, [ebp-0x34]
        call    FUN_0040ca40
        lea     ecx, [ebp-0x64]
        call    FUN_00419e70
        mov     edx, dword ptr [ebp-0x10]
        mov     eax, edx
        mov     ecx, edx
        mov     dword ptr [ebp-0x64], edx
        mov     edx, dword ptr [ebp-0x34]
        mov     dword ptr [ebp-0x50], eax
        mov     eax, dword ptr [ebp-0x30]
        mov     dword ptr [ebp-0x3c], ecx
        mov     ecx, dword ptr [ebp-0x2c]
        mov     dword ptr [ebp-0x58], edx
        mov     dword ptr [ebp-0x48], eax
        lea     edx, [ebp-0x64]
        lea     eax, [ebp-0xc4]
        mov     dword ptr [ebp-0x38], ecx
        mov     dword ptr [ebp-0x14], edx
        mov     dword ptr [ebp-0xc], eax
        mov     edx, dword ptr [ebp-0x14]
        push    esi
        mov     esi, dword ptr [ebp-0x1c]
        mov     eax, dword ptr [ebp-0xc]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        lea     ecx, [ebp-0xc4]
        lea     edx, [ebp-0x94]
        mov     dword ptr [ebp-0xc], ecx
        mov     dword ptr [ebp-0x1c], edx
        mov     edx, dword ptr [ebp-0xc]
        push    esi
        mov     esi, dword ptr [ebp+0x10]
        mov     eax, dword ptr [ebp-0x1c]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        fld     dword ptr [ebp-0x88]
        mov     eax, dword ptr [ebp+0x1c]
        mov     ecx, dword ptr [ebp-0x78]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [ebp-0x68]
        mov     dword ptr [eax+0x4], ecx
        mov     ecx, dword ptr [ebp-0x10]
        mov     dword ptr [eax+0xc], ecx
        mov     ecx, dword ptr [edi+0x22c]
        mov     dword ptr [eax+0x8], edx
        mov     eax, dword ptr [edi+0x238]
        mov     esi, eax
        imul    esi, dword ptr [ebp+0xc]
        cmp     ecx, 0x1
        mov     dword ptr [ebp+0x10], eax
        jz      L0b73
        test    eax, eax
        jbe     L0b73
        mov     eax, dword ptr [ebp-0x18]
        mov     ecx, dword ptr [eax+0xd0]
        mov     eax, dword ptr [ebp+0x10]
        mov     ebx, dword ptr [edi+0x234]
        lea     edx, [esi+esi*2]
        lea     edx, [ecx+edx*4]
        mov     dword ptr [ebp+0x1c], edx
        mov     dword ptr [ebp-0xc], eax
L0b4e:
        lea     ecx, [ebp-0x94]
        push    ecx
        mov     ecx, dword ptr [ebp+0x1c]
        push    ebx
        call    FUN_0041c7d0
        mov     ecx, dword ptr [ebp+0x1c]
        mov     eax, dword ptr [ebp-0xc]
        add     ecx, 0xc
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp+0x1c], ecx
        mov     dword ptr [ebp-0xc], eax
        jnz     L0b4e
L0b73:
        mov     edx, dword ptr [ebp-0x4]
        lea     ebx, [edi+0x17c]
        push    edx
        mov     ecx, ebx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebx+0x4]
        lea     eax, [eax+eax*2]
        fsub    dword ptr [ecx+eax*4]
        lea     eax, [ecx+eax*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x19c]
        test    al, al
        fstp    dword ptr [ebp-0x14]
        jz      L0bbd
        mov     edx, dword ptr [ebp-0x8]
        push    0x0
        push    edx
        lea     ecx, [edi+0x188]
        call    FUN_00495e10
        fmul    dword ptr [ebp-0x14]
        fstp    dword ptr [ebp-0x14]
L0bbd:
        mov     eax, dword ptr [ebp-0x4]
        lea     ebx, [edi+0x1a4]
        push    eax
        mov     ecx, ebx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebx+0x4]
        lea     ecx, [eax+eax*2]
        fsub    dword ptr [edx+ecx*4]
        lea     eax, [edx+ecx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x1c4]
        test    al, al
        fstp    dword ptr [ebp-0xc]
        jz      L0c09
        mov     ebx, dword ptr [ebp-0x8]
        push    0x0
        push    ebx
        lea     ecx, [edi+0x1b0]
        call    FUN_00495e10
        fmul    dword ptr [ebp-0xc]
        fstp    dword ptr [ebp-0xc]
        jmp     L0c0c
L0c09:
        mov     ebx, dword ptr [ebp-0x8]
L0c0c:
        fld     dword ptr [ebp-0x4]
        mov     al, byte ptr [edi+0x1f4]
        test    al, al
        fmul    dword ptr [edi+0x1d8]
        fadd    dword ptr [edi+0x1dc]
        fmul    dword ptr [ebp-0x4]
        fadd    dword ptr [edi+0x1d4]
        fmul    dword ptr [ebp-0x4]
        fadd    dword ptr [edi+0x1d0]
        fstp    dword ptr [ebp+0x1c]
        jz      L0c4e
        push    0x0
        push    ebx
        lea     ecx, [edi+0x1e0]
        call    FUN_00495e10
        fmul    dword ptr [ebp+0x1c]
        fstp    dword ptr [ebp+0x1c]
L0c4e:
        fld     dword ptr [ebp-0x4]
        mov     al, byte ptr [edi+0x224]
        test    al, al
        fmul    dword ptr [edi+0x208]
        fadd    dword ptr [edi+0x20c]
        fmul    dword ptr [ebp-0x4]
        fadd    dword ptr [edi+0x204]
        fmul    dword ptr [ebp-0x4]
        fadd    dword ptr [edi+0x200]
        fstp    dword ptr [ebp-0x10]
        jz      L0c90
        push    0x0
        push    ebx
        lea     ecx, [edi+0x210]
        call    FUN_00495e10
        fmul    dword ptr [ebp-0x10]
        fstp    dword ptr [ebp-0x10]
L0c90:
        mov     eax, dword ptr [ebp+0xc]
        mov     edx, dword ptr [ebp+0x10]
        test    edx, edx
        mov     dword ptr [ebp-0x20], eax
        mov     dword ptr [ebp-0x1c], 0x0
        fild    qword ptr [ebp-0x20]
        fmul    dword ptr [ebp+0x1c]
        fadd    dword ptr [edi+0x244]
        fadd    dword ptr [ebp-0x14]
        fstp    dword ptr [ebp+0xc]
        jbe     L0ce7
        mov     ecx, dword ptr [ebp-0x18]
        mov     eax, dword ptr [ecx+0xd8]
        lea     ecx, [eax+esi*8]
        mov     eax, dword ptr [edi+0x23c]
        add     eax, 0x4
L0ccb:
        fld     dword ptr [ebp-0x10]
        mov     ebx, dword ptr [ebp+0xc]
        fmul    dword ptr [eax]
        mov     dword ptr [ecx], ebx
        add     eax, 0x8
        add     ecx, 0x8
        dec     edx
        fadd    dword ptr [ebp-0xc]
        fstp    dword ptr [ecx-0x4]
        jnz     L0ccb
        mov     edx, dword ptr [ebp+0x10]
L0ce7:
        mov     eax, dword ptr [ebp-0x18]
        mov     ecx, dword ptr [ebp+0x8]
        cmp     ecx, dword ptr [eax+0xa8]
        jnz     L0d49
        mov     al, byte ptr [edi+0x233]
        test    al, al
        jz      L0d1f
        fld     dword ptr [g_0076c5b0]
        mov     dword ptr [ebp-0x28], 0x3f800000
        mov     dword ptr [ebp-0x24], 0x3f800000
        mov     dword ptr [ebp-0x20], 0x3f800000
        jmp     L0e59
L0d1f:
        mov     al, byte ptr [edi+0x232]
        test    al, al
        jz      L0d49
        fld     dword ptr [g_0076c5b0]
        mov     dword ptr [ebp-0x28], 0x0
        mov     dword ptr [ebp-0x24], 0x0
        mov     dword ptr [ebp-0x20], 0x0
        jmp     L0e59
L0d49:
        mov     ecx, dword ptr [ebp-0x4]
        lea     ebx, [edi+0xfc]
        push    ecx
        mov     ecx, ebx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [ebx+0x4]
        fsub    dword ptr [eax+edx*4]
        lea     eax, [eax+edx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x114]
        test    al, al
        jz      L0d8a
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [edi+0x110]
        fadd    dword ptr [edi+0x10c]
        fmulp   st(1), st(0)
L0d8a:
        mov     ecx, dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x28]
        lea     ebx, [edi+0x11c]
        push    ecx
        mov     ecx, ebx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [ebx+0x4]
        fsub    dword ptr [eax+edx*4]
        lea     eax, [eax+edx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x134]
        test    al, al
        jz      L0dce
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [edi+0x130]
        fadd    dword ptr [edi+0x12c]
        fmulp   st(1), st(0)
L0dce:
        mov     ecx, dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x24]
        lea     ebx, [edi+0x13c]
        push    ecx
        mov     ecx, ebx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [ebx+0x4]
        fsub    dword ptr [eax+edx*4]
        lea     eax, [eax+edx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x154]
        test    al, al
        jz      L0e12
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [edi+0x150]
        fadd    dword ptr [edi+0x14c]
        fmulp   st(1), st(0)
L0e12:
        mov     ecx, dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x20]
        lea     ebx, [edi+0x15c]
        push    ecx
        mov     ecx, ebx
        call    FUN_00495e30
        fld     dword ptr [ebp-0x4]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [ebx+0x4]
        fsub    dword ptr [eax+edx*4]
        lea     eax, [eax+edx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [edi+0x174]
        test    al, al
        jz      L0e56
        fld     dword ptr [ebp-0x8]
        fmul    dword ptr [edi+0x170]
        fadd    dword ptr [edi+0x16c]
        fmulp   st(1), st(0)
L0e56:
        mov     edx, dword ptr [ebp+0x10]
L0e59:
        test    edx, edx
        jbe     L0e87
        mov     ecx, dword ptr [ebp-0x18]
        mov     eax, dword ptr [ecx+0xd4]
        shl     esi, 0x4
        add     esi, eax
        mov     eax, esi
L0e6d:
        mov     ecx, dword ptr [ebp-0x28]
        fst     dword ptr [eax+0xc]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp-0x24]
        mov     dword ptr [eax+0x4], ecx
        mov     ecx, dword ptr [ebp-0x20]
        mov     dword ptr [eax+0x8], ecx
        add     eax, 0x10
        dec     edx
        jnz     L0e6d
L0e87:
        pop     edi
        fstp    st(0)
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x18
    }
}
