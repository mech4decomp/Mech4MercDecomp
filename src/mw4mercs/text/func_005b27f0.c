/*
 * FUN_005b27f0 (179 B) — __thiscall (ECX=this). Removes consecutive
 * duplicate elements from a vector at ESI+0x6bc..0x6c0 (element size 0xc),
 * using FPU comparison against a constant at 0x0077b640.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006f4950(void);
extern void FUN_00707e70(void);
extern void FUN_006f49a0(void);

__declspec(naked) void FUN_005b27f0(void)
{
    

extern int DAT_007f2450;
extern int DAT_0077b640;
__asm {
sub     esp, 8
        mov eax, dword ptr [DAT_007f2450]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        mov     dword ptr [esp + 0x10], esi
        call    FUN_006f4950
        push    0
        call    FUN_00707e70
        mov     ebx, dword ptr [esi + 0x6bc]
        cmp     ebx, dword ptr [esi + 0x6c0]
        jz      L2896
        push    ebp
        push    edi
        lea     ebp, [ebx + 0xc]
L2820:
        fld     qword ptr [ebp - 0x8]
        fsub    st, st(1)
        fcomp qword ptr [DAT_0077b640]
        fnstsw ax
        test    ah, 0x1
        jnz     L2886
        mov     edi, dword ptr [esi + 0x6c0]
        cmp     ebp, edi
        jz      L287B
        mov     ecx, edi
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        test    edx, edx
        mov     esi, ebx
        jle     L2877
        mov     dword ptr [esp + 0x10], edx
L285A:
        lea     eax, [esi + 0xc]
        mov     edx, eax
        mov     ecx, dword ptr [edx]
        mov     dword ptr [esi], ecx
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x4], ecx
        mov     edx, dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x8], edx
        mov     esi, eax
        dec     dword ptr [esp + 0x10]
        jnz     L285A
L2877:
        mov     esi, dword ptr [esp + 0x14]
L287B:
        add     edi, -0xc
        mov     dword ptr [esi + 0x6c0], edi
        jmp     L288C
L2886:
        add     ebx, 0xc
        add     ebp, 0xc
L288C:
        cmp     ebx, dword ptr [esi + 0x6c0]
        jnz     L2820
        pop     edi
        pop     ebp
L2896:
        fstp    st(0)
        call    FUN_006f49a0
        pop     esi
        pop     ebx
        add     esp, 8
        ret
    }


}
