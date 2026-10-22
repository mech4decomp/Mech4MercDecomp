/*
 * FUN_00630930 (901 B) — __fastcall (ECX = param_1), RET 0.
 *
 * Builds a grid of HUD element placement data: computes a clamped angle,
 * then for each of [this+0x24] rows fills a 4x4 matrix of float values
 * and copies them into output buffers via FUN_0041fd80/FUN_004ba320.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004ba320(void);

extern void *g_76b2e4;          /* floor function pointer @ 0x76b2e4 */
extern float g_78d0e0;          /* float constant @ 0x78d0e0 */
extern float g_76c5b0;          /* float constant 0.0 @ 0x76c5b0 */
extern float g_77deac;          /* float constant @ 0x77deac */
extern float g_76d064;          /* float constant 1.0 @ 0x76d064 */
extern float g_775980;          /* float constant @ 0x775980 */
extern float g_77dfc0;          /* float constant @ 0x77dfc0 */
extern float g_78d7a4;          /* float constant @ 0x78d7a4 */
extern float g_76e2bc;          /* float constant @ 0x76e2bc */
extern int g_858944;            /* int constant @ 0x858944 */

__declspec(naked) void __cdecl FUN_00630930(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xc8
        push    ebx
        push    ebp
        mov     ebp, ecx
        fld     dword ptr [ebp + 0x2c]
        push    esi
        fmul    dword ptr [g_78d0e0]
        push    edi
        sub     esp, 0x8
        mov     dword ptr [esp + 0x2c], ebp
        fstp    qword ptr [esp]
        call    dword ptr [g_76b2e4]
        fcom    dword ptr [g_76c5b0]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x1
        jz      L_30975
        fstp    st(0)
        fld     dword ptr [g_76c5b0]
        jmp     L_3098a
    L_30975:
        fcom    dword ptr [g_77deac]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_3098a
        fstp    st(0)
        fld     dword ptr [g_77deac]
    L_3098a:
        fld     st(0)
        push    0x0
        fadd    dword ptr [g_76d064]
        push    0x0
        push    0x0
        push    0x2
        fstp    dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x28], 0x0
        fmul    dword ptr [g_775980]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [g_775980]
        fstp    dword ptr [esp + 0x24]
        call    FUN_00704a80
        test    eax, eax
        mov     dword ptr [esp + 0x1c], 0x0
        jnz     L_309d7
        mov     dword ptr [esp + 0x1c], 0x3f000000
    L_309d7:
        mov     eax, dword ptr [ebp + 0x24]
        xor     ebx, ebx
        test    eax, eax
        jle     L_30cad
        jmp     L_309ea
    L_309e6:
        mov     ebp, dword ptr [esp + 0x24]
    L_309ea:
        lea     eax, [esp + 0x9c]
        mov     ecx, 0x4
    L_309f6:
        mov     edx, 0xbf800000
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + -0x4], edx
        mov     dword ptr [eax + 0x8], edx
        add     eax, 0x10
        dec     ecx
        jnz     L_309f6
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        push    ebx
        lea     ecx, [ebp + 0x10]
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_004ba320
        mov     edx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x48]
        mov     eax, edx
        mov     ecx, 0x10
        lea     esi, [esp + 0x98]
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [ebp + 0x24]
        mov     dword ptr [esp + 0xc8], 0x3f800000
        mov     dword ptr [esp + 0xb8], 0x3f800000
        mov     dword ptr [esp + 0xa8], 0x3f800000
        mov     dword ptr [esp + 0x98], 0x3f800000
        mov     dword ptr [esp + 0xcc], 0x3f800000
        mov     dword ptr [esp + 0xbc], 0x3f800000
        mov     dword ptr [esp + 0xac], 0x3f800000
        mov     dword ptr [esp + 0x9c], 0x3f800000
        mov     dword ptr [esp + 0xd0], 0x3f800000
        mov     dword ptr [esp + 0xc0], 0x3f800000
        mov     dword ptr [esp + 0xb0], 0x3f800000
        mov     dword ptr [esp + 0xa0], 0x3f800000
        mov     dword ptr [esp + 0xd4], 0x3f800000
        mov     dword ptr [esp + 0xc4], 0x3f800000
        mov     dword ptr [esp + 0xb4], 0x3f800000
        mov     dword ptr [esp + 0xa4], 0x3f800000
        rep movsd
        mov     ecx, dword ptr [esp + 0x20]
        lea     ebp, [ebx + 0x1]
        cmp     ebp, edx
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], 0x0
        mov     dword ptr [esp + 0x34], 0x0
        mov     dword ptr [esp + 0x38], eax
        jge     L_30b2c
        mov     dword ptr [esp + 0x3c], 0x3f800000
        jmp     L_30b3d
    L_30b2c:
        mov     ecx, dword ptr [esp + 0x24]
        fild    dword ptr [ecx + 0x3c]
        fmul    dword ptr [g_77dfc0]
        fstp    dword ptr [esp + 0x3c]
    L_30b3d:
        fld     dword ptr [g_76c5b0]
        mov     eax, dword ptr [esp + 0x20]
        fcomp   dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x40], eax
        mov     dword ptr [esp + 0x44], ecx
        fnstsw  ax
        test    ah, 0x40
        jz      L_30bae
        fld     dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x2c], 0x39800000
        fadd    dword ptr [g_78d7a4]
        mov     dword ptr [esp + 0x34], 0x39800000
        fst     dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [g_78d7a4]
        fst     dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x3c]
        fadd    dword ptr [g_78d7a4]
        fstp    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x44]
        fadd    dword ptr [g_78d7a4]
        fstp    dword ptr [esp + 0x44]
    L_30bae:
        test    ebx, ebx
        mov     edi, dword ptr [esp + 0x4c]
        mov     ecx, 0x8
        lea     esi, [esp + 0x28]
        rep movsd
        mov     dword ptr [esp + 0x58], 0x0
        jle     L_30bd9
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x1c]
        fidiv   dword ptr [g_858944]
        jmp     L_30bdf
    L_30bd9:
        fld     dword ptr [g_76c5b0]
    L_30bdf:
        cmp     ebp, edx
        fst     dword ptr [esp + 0x5c]
        fstp    dword ptr [esp + 0x6c]
        mov     dword ptr [esp + 0x68], 0x3f800000
        mov     dword ptr [esp + 0x78], 0x3f800000
        jge     L_30c11
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [g_76e2bc]
        fsub    dword ptr [esp + 0x1c]
        fidiv   dword ptr [g_858944]
        jmp     L_30c17
    L_30c11:
        fld     dword ptr [g_76d064]
    L_30c17:
        mov     edi, dword ptr [esp + 0x50]
        fst     dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x8c]
        fld     dword ptr [esp + 0x18]
        mov     ecx, 0x10
        fadd    dword ptr [g_76e2bc]
        lea     esi, [esp + 0x58]
        mov     dword ptr [esp + 0x88], 0x0
        mov     dword ptr [esp + 0x60], 0x0
        mov     dword ptr [esp + 0x64], 0x3f800000
        fstp    dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x70], 0x0
        mov     dword ptr [esp + 0x74], 0x3f800000
        mov     dword ptr [esp + 0x80], 0x0
        mov     dword ptr [esp + 0x84], 0x3f800000
        mov     dword ptr [esp + 0x90], 0x0
        mov     dword ptr [esp + 0x94], 0x3f800000
        rep movsd
        mov     cl, byte ptr [eax + 0x28]
        mov     eax, dword ptr [esp + 0x54]
        mov     ebx, ebp
        cmp     ebx, edx
        mov     byte ptr [eax], cl
        jl      L_309e6
    L_30cad:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
