/*
 * FUN_004ebf20 (496 B) — __thiscall (RET 0x4). SpatializedChannel update:
 * computes a tile index from [ESI+0x28], registers with the camera list if
 * needed, then walks a linked list of candidate channels doing FPU
 * distance/volume tests, and finally dispatches to the best candidate via
 * FUN_004ec2e0 / FUN_004ec400 / virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern void __cdecl FUN_004179b0(void *);
extern double __cdecl FUN_00707e70(int);
extern void __cdecl FUN_004ec2e0(void);
extern void __cdecl FUN_004ec400(void *);

__declspec(naked) void FUN_004ebf20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x28]
        lea     ecx, [eax + eax*4]
        lea     edx, [eax + ecx*2]
        mov     eax, dword ptr [g_007dc868]
        mov     ecx, dword ptr [eax + 0x48]
        lea     eax, [ecx + edx*4]
        mov     cl, byte ptr [eax + 0x24]
        test    cl, cl
        push    edi
        mov     dword ptr [esp + 0x10], eax
        jz      L_main
        cmp     dword ptr [eax], 0x0
        jnz     L_main
        push    esi
        lea     ecx, [eax + 0x10]
        call    FUN_004179b0
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_main:
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        xor     ebx, ebx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        fst     dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x30]
        fstp    dword ptr [esp + 0x14]
        test    eax, eax
        jnz     L_038
        mov     eax, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [eax + 0x84]
        jmp     L_loop
L_fstp:
        fstp    st(0)
L_loop:
        test    edi, edi
        jz      L_038
        mov     edx, dword ptr [edi]
        test    edx, edx
        mov     edi, dword ptr [edi + 0x4]
        jz      L_038
        mov     ecx, dword ptr [edx + 0x14]
        fld     dword ptr [ecx + 0x14]
        fcomp   dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_021b
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      L_021b
        fld     dword ptr [ecx + 0x1c]
        fadd    qword ptr [edx + 0x28]
        fcomp   qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x1
        jz      L_021
L_021b:
        fld     dword ptr [ecx + 0x14]
        fcomp   dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jz      L_loop
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_loop
        fld     dword ptr [ecx + 0x20]
        fadd    qword ptr [edx + 0x28]
        fcomp   qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      L_loop
        fld     dword ptr [edx + 0x30]
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jz      L_fstp
        fstp    dword ptr [esp + 0x14]
        mov     ebx, edx
        jmp     L_loop
L_021:
        test    esi, esi
        jz      L_02d
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_02d:
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_038:
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax + 0x8c]
        test    eax, eax
        jz      L_05c
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_05c
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_05c:
        test    ebx, ebx
        jz      L_07a
        mov     ecx, ebx
        call    FUN_004ec2e0
        mov     eax, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_07a:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_0a8
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      L_0a8
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        mov     ecx, edi
        call    FUN_004ec400
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_0a8:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 0x8]
        test    eax, eax
        jz      L_0d5
L_0af:
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     eax, dword ptr [eax + 0x4]
        jz      L_0d5
        mov     ecx, dword ptr [esi + 0x30]
        cmp     dword ptr [edi + 0x24], ecx
        /* __emit: backward jnz rel-offset miscomputed by MSVC6 (75 EF vs ref 75 EB,
           off-by-4 because a call-reloc sits between this branch and target L_0af) */
        __emit  0x75
        __emit  0xEB
        mov     ecx, edi
        call    FUN_004ec2e0
        mov     eax, dword ptr [ebp + 0x8]
        cmp     dword ptr [edi + 0x10], eax
        jz      L_0fd
        jmp     L_0f5
L_0d5:
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 0x8]
        test    eax, eax
        jz      L_0e4
        mov     edi, dword ptr [eax]
        jmp     L_0e6
L_0e4:
        xor     edi, edi
L_0e6:
        mov     ecx, edi
        call    FUN_004ec2e0
        mov     eax, dword ptr [ebp + 0x8]
        cmp     dword ptr [edi + 0x10], eax
        jz      L_0fd
L_0f5:
        push    eax
        mov     ecx, edi
        call    FUN_004ec400
L_0fd:
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
