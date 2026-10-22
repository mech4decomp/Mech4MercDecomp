/*
 * FUN_004363e0 (1825 B) — MLR __thiscall render/transform function. Heavy
 * FPU matrix-vector math, per-vertex transform, index/color buffer fill.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00455680(void);
extern int __cdecl FUN_00491cd0(void);
extern char __cdecl FUN_00421f00(int);

extern int g_7da848;   /* 0x007da848 */
extern int g_7da864;   /* 0x007da864 */
extern int g_7da600;   /* 0x007da600 */
extern int g_7da5f4;   /* 0x007da5f4 */
extern char g_7da86c;  /* 0x007da86c */
extern int g_7b2210;   /* 0x007b2210 */
extern float g_76d064; /* 0x0076d064 */
extern float g_7da87c; /* 0x007da87c */
extern float g_7da874; /* 0x007da874 */
extern float g_7da878; /* 0x007da878 */
extern float g_7da870; /* 0x007da870 */
extern float g_76d070; /* 0x0076d070 */
extern float g_76dd60; /* 0x0076dd60 */
extern int g_7d98fc;   /* 0x007d98fc */

__declspec(naked) void FUN_004363e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx+0xac]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     L_436419
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
        call    FUN_00455680
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_436419:
        mov     eax, dword ptr [ebx+0x24]
        and     eax, 0x3fff
        push    esi
        mov     byte ptr [ebp+0x17], 0
        mov     dword ptr [ebp-0x10], 0
        mov     dword ptr [ebp-0x14], 0
        jz      L_4364ef
        cmp     eax, edi
        jle     L_4364ef
        mov     edx, dword ptr [g_7da848]
        mov     esi, dword ptr [edx+eax*4+0x24]
        cmp     esi, edi
        jz      L_4364ef
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+4]
        mov     ecx, eax
        call    FUN_00491cd0
        cmp     eax, 0x100
        jl      L_436476
        mov     dword ptr [g_7da864], 1
        jmp     L_4364d1
L_436476:
        cmp     eax, 0x80
        jl      L_436489
        mov     dword ptr [g_7da864], 2
        jmp     L_4364d1
L_436489:
        cmp     eax, 0x40
        jl      L_43649a
        mov     dword ptr [g_7da864], 4
        jmp     L_4364d1
L_43649a:
        cmp     eax, 0x20
        jl      L_4364ab
        mov     dword ptr [g_7da864], 8
        jmp     L_4364d1
L_4364ab:
        cmp     eax, 0x10
        jl      L_4364bc
        mov     dword ptr [g_7da864], 0x10
        jmp     L_4364d1
L_4364bc:
        xor     ecx, ecx
        cmp     eax, 8
        setl    cl
        dec     ecx
        and     ecx, 0xffffffe0
        add     ecx, 0x40
        mov     dword ptr [g_7da864], ecx
L_4364d1:
        mov     al, byte ptr [esi+0x24]
        test    al, al
        jnz     L_4364fe
        mov     esi, dword ptr [esi+0x28]
        cmp     esi, edi
        jz      L_4364fe
        mov     edx, dword ptr [esi+0xc]
        mov     eax, dword ptr [esi+0x1c]
        mov     byte ptr [ebp+0x17], 1
        mov     dword ptr [ebp-0x10], edx
        mov     dword ptr [ebp-0x14], eax
L_4364ef:
        mov     dl, byte ptr [ebp+0x18]
        test    dl, dl
        jz      L_436504
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, dword ptr [esi+0x38]
        jmp     L_436516
L_4364fe:
        mov     byte ptr [ebp+0x17], 0
        jmp     L_4364ef
L_436504:
        mov     ecx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [ecx+4]
        mov     ecx, dword ptr [ecx+0x18]
        mov     esi, dword ptr [ebp+0xc]
        lea     eax, [eax+eax*4]
        lea     eax, [ecx+eax*8]
L_436516:
        mov     dword ptr [ebx+0xa4], eax
        mov     eax, dword ptr [ebx+0x68]
        and     eax, 0x3fff
        mov     dword ptr [ebp-0x18], 0
        mov     dword ptr [ebp-0x1c], 0
        jz      L_436560
        cmp     eax, edi
        jle     L_436560
        mov     ecx, dword ptr [g_7da848]
        mov     eax, dword ptr [ecx+eax*4+0x24]
        cmp     eax, edi
        jz      L_436560
        mov     cl, byte ptr [eax+0x24]
        test    cl, cl
        jnz     L_436560
        mov     eax, dword ptr [eax+0x28]
        cmp     eax, edi
        jz      L_436560
        mov     ecx, dword ptr [eax+0xc]
        mov     eax, dword ptr [eax+0x1c]
        mov     dword ptr [ebp-0x18], ecx
        mov     dword ptr [ebp-0x1c], eax
L_436560:
        mov     eax, dword ptr [ebx+0x18]
        cmp     eax, 0x100
        mov     dword ptr [ebp-0xc], eax
        jle     L_436574
        mov     dword ptr [ebp-0xc], 0x100
L_436574:
        test    dl, dl
        jz      L_43657d
        mov     eax, dword ptr [esi+0x30]
        jmp     L_436587
L_43657d:
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi+0x10]
        shl     eax, 5
        add     eax, ecx
L_436587:
        test    dl, dl
        mov     dword ptr [ebx+0x44], eax
        jz      L_436593
        mov     eax, dword ptr [esi+0x38]
        jmp     L_43659f
L_436593:
        mov     eax, dword ptr [esi+4]
        lea     ecx, [eax+eax*4]
        mov     eax, dword ptr [esi+0x18]
        lea     eax, [eax+ecx*8]
L_43659f:
        cmp     word ptr [ebx+0x56], di
        mov     dword ptr [ebx+0xa4], eax
        mov     word ptr [ebx+0xa], di
        jnz     L_4365bc
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x98]
        mov     dl, byte ptr [ebp+0x18]
L_4365bc:
        mov     ecx, dword ptr [ebp-0xc]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp-4], eax
        jle     L_4368f0
        mov     dword ptr [ebp-8], eax
L_4365cf:
        mov     eax, dword ptr [g_7da600]
        mov     ecx, dword ptr [eax]
        cmp     byte ptr [ecx+edi], 0
        jnz     L_4365e4
        inc     dword ptr [ebp-4]
        jmp     L_4368db
L_4365e4:
        mov     ecx, dword ptr [ebp-4]
        mov     eax, dword ptr [g_7da5f4]
        mov     edx, edi
        sub     edx, ecx
        mov     dword ptr [eax+edi*2], edx
        test    byte ptr [g_7da86c], 2
        jle     L_436764
        mov     eax, dword ptr [ebx+0x28]
        __emit 0xF6 /* TEST AH,0x3c: MSVC6 rejects test ah,imm8 */ 
        __emit 0xC4
        __emit 0x3C
        jz      L_436764
        cmp     dword ptr [g_7b2210], 1
        jnz     L_436764
        mov     ecx, dword ptr [ebx+0x1c]
        fld     dword ptr [ebx+0x9c]
        fmul    dword ptr [ecx+edi*8]
        mov     eax, dword ptr [ebx+0x14]
        mov     edx, dword ptr [ebp-8]
        lea     esi, [ecx+edi*8]
        fadd    dword ptr [ebx+0x94]
        mov     ecx, dword ptr [ebx+0xa4]
        add     edx, eax
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [esi+4]
        mov     dword ptr [ebp-0x24], edx
        fmul    dword ptr [ebx+0xa0]
        fadd    dword ptr [ebx+0x98]
        lea     eax, [eax+eax*4]
        lea     ecx, [ecx+eax*8]
        fstp    dword ptr [ebp-0x28]
        mov     dword ptr [ebp-0x20], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x24]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x20]
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
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [ecx+0xc]
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     eax, dword ptr [ebp-0x28]
        mov     dword ptr [ecx+0x24], eax
        mov     dword ptr [ecx+0x18], edx
        mov     edx, dword ptr [ebp-0x2c]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        mov     dword ptr [ecx+0x20], edx
        lea     eax, [eax+eax*4]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_7da87c]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [ecx]
        fmul    dword ptr [ecx+4]
        fmul    dword ptr [g_7da878]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [ecx+4]
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0xa4]
        mov     edx, dword ptr [edx+edi*4]
        mov     dword ptr [ecx+eax*8+0x10], edx
        jmp     L_436873
L_436764:
        mov     edx, dword ptr [ebx+0x14]
        mov     ecx, dword ptr [ebp-8]
        mov     eax, dword ptr [ebx+0x1c]
        add     ecx, edx
        mov     edx, dword ptr [ebx+0x44]
        mov     dword ptr [ebp-0x20], ecx
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        lea     esi, [eax+edi*8]
        shl     ecx, 5
        add     ecx, edx
        mov     dword ptr [ebp-0x24], ecx
        mov     edx, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp-0x20]
        fld     dword ptr [eax]
        fld     dword ptr [eax+4]
        fld     dword ptr [eax+8]
        mov     eax, dword ptr [ebp-0x24]
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
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [ecx+0xc]
        fst     dword ptr [ecx+0xc]
        fld     st(0)
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [ecx+8]
        fld     st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_7da87c]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [ecx]
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx+0x18], edx
        fmul    dword ptr [ecx+4]
        fmul    dword ptr [g_7da878]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [ecx+4]
        mov     eax, dword ptr [esi+4]
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [ebx+0xb0]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx+0x44]
        mov     edx, dword ptr [edx+edi*4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        shl     eax, 5
        mov     dword ptr [eax+ecx+0x10], edx
L_436873:
        mov     al, byte ptr [ebp+0x17]
        test    al, al
        jz      L_4368ac
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
L_4368ac:
        mov     ecx, dword ptr [ebp+0x10]
        test    ecx, ecx
        jz      L_4368d1
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
L_4368d1:
        inc     word ptr [ebx+0xa]
        mov     esi, dword ptr [ebp+0xc]
        mov     dl, byte ptr [ebp+0x18]
L_4368db:
        mov     ecx, dword ptr [ebp-8]
        mov     eax, dword ptr [ebp-0xc]
        inc     edi
        add     ecx, 0xc
        cmp     edi, eax
        mov     dword ptr [ebp-8], ecx
        jl      L_4365cf
L_4368f0:
        cmp     dword ptr [g_7b2210], 1
        jnz     L_436ae1
        test    byte ptr [g_7da86c], 2
        jle     L_4369e3
        mov     eax, dword ptr [ebx+0x28]
        __emit 0xF6 /* TEST AH,0x3c: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x3C
        jz      L_4369e3
        test    dl, dl
        jnz     L_436af9
        mov     ecx, dword ptr [esi+4]
        xor     eax, eax
        mov     ax, word ptr [ebx+0xa]
        add     ecx, eax
        mov     dword ptr [esi+4], ecx
L_43692c:
        mov     eax, dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0x28]
        lea     eax, [ecx+eax*2]
L_436935:
        mov     ecx, dword ptr [ebx+0x58]
        xor     edx, edx
        xor     esi, esi
        cmp     ecx, edx
        mov     dword ptr [ebx+0x50], eax
        mov     word ptr [ebx+0x54], si
        mov     dword ptr [ebp+0x10], edx
        mov     dword ptr [ebp+8], edx
        jle     L_4369b3
        mov     ecx, dword ptr [g_7d98fc]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp+0x14], ecx
        mov     ecx, dword ptr [g_7da5f4]
L_43695e:
        mov     edi, dword ptr [ebp+0x14]
        cmp     byte ptr [edi+edx], 0
        jz      L_4369a4
        mov     edx, dword ptr [ebx+0x48]
        mov     edi, dword ptr [ebp+8]
        add     edi, edx
        xor     edx, edx
        mov     dl, byte ptr [edi]
        add     eax, 2
        inc     esi
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-4], dx
        xor     edx, edx
        mov     dl, byte ptr [edi+2]
        inc     esi
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], dx
        xor     edx, edx
        mov     dl, byte ptr [edi+1]
        inc     esi
        add     eax, 2
        mov     dx, word ptr [ecx+edx*2]
        mov     word ptr [eax-2], dx
        mov     edx, dword ptr [ebp+0x10]
L_4369a4:
        add     dword ptr [ebp+8], 3
        mov     edi, dword ptr [ebx+0x58]
        inc     edx
        cmp     edx, edi
        mov     dword ptr [ebp+0x10], edx
        jl      L_43695e
L_4369b3:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        mov     word ptr [ebx+0x54], si
        jnz     L_4369cf
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [eax+0xc]
        and     esi, 0xffff
        add     ecx, esi
        mov     dword ptr [eax+0xc], ecx
L_4369cf:
        cmp     word ptr [ebx+0xa], 0
        pop     esi
        setnz   al
        pop     edi
        mov     byte ptr [ebx+0x10], al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
L_4369e3:
        mov     esi, dword ptr [ebx+0x44]
        xor     ecx, ecx
        mov     cx, word ptr [ebx+0xa]
        mov     dword ptr [ebp-4], 0
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
        test    edx, edx
        jle     L_436ac1
        mov     eax, dword ptr [ebx+0x44]
        mov     ecx, edx
        shl     ecx, 5
        lea     ecx, [ecx+eax+0xc]
        lea     esi, [eax+0x1c]
        mov     edi, edx
L_436a26:
        fld     dword ptr [esi-4]
        fmul    dword ptr [ebx+0x9c]
        fadd    dword ptr [ebx+0x94]
        fadd    dword ptr [ebp-0x18]
        fstp    dword ptr [ecx+0xc]
        fld     dword ptr [ebx+0xa0]
        fmul    dword ptr [esi]
        fadd    dword ptr [ebp-0x1c]
        fadd    dword ptr [ebx+0x98]
        fstp    dword ptr [ecx+0x10]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebx+0x8c]
        __emit 0xDF /* FNSTSW AX: MSVC6 inserts 9B WAIT prefix */ 
        __emit 0xE0
        __emit 0xF6 /* TEST AH,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_436a67
        and     dword ptr [ecx+4], 0xffffff
        jmp     L_436aad
L_436a67:
        fld     dword ptr [ecx]
        mov     eax, dword ptr [ebp-4]
        fcomp   dword ptr [ebx+0x88]
        inc     eax
        mov     dword ptr [ebp-4], eax
        __emit 0xDF /* FNSTSW AX: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* TEST AH,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_436aad
        fld     dword ptr [ecx]
        fsub    dword ptr [ebx+0x8c]
        fmul    dword ptr [ebx+0x90]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp+8]
        mov     eax, dword ptr [ebp+8]
        and     eax, 0xffff
        shl     eax, 0x18
        or      eax, 0xffffff
        and     dword ptr [ecx+4], eax
L_436aad:
        add     esi, 0x20
        add     ecx, 0x20
        dec     edi
        jnz     L_436a26
        mov     eax, dword ptr [ebp-4]
        test    eax, eax
        jnz     L_436ac7
L_436ac1:
        mov     byte ptr [ebx+0x64], 0
        jmp     L_436acb
L_436ac7:
        mov     byte ptr [ebx+0x64], 1
L_436acb:
        mov     al, byte ptr [ebp+0x18]
        test    al, al
        jnz     L_436af6
        mov     eax, dword ptr [ebp+0xc]
        lea     ecx, [edx+edx]
        add     dword ptr [eax], ecx
        mov     esi, eax
        jmp     L_43692c
L_436ae1:
        test    dl, dl
        jnz     L_436af9
        mov     eax, dword ptr [esi]
        xor     edx, edx
        mov     dx, word ptr [ebx+0xa]
        add     eax, edx
        mov     dword ptr [esi], eax
        jmp     L_43692c
L_436af6:
        mov     esi, dword ptr [ebp+0xc]
L_436af9:
        mov     eax, dword ptr [esi+0x48]
        jmp     L_436935
    }
}
