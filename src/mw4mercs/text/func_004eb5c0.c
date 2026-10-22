/*
 * FUN_004eb5c0 (476 B) — __thiscall MLR/Adept update/query routine.
 * FPU-heavy: compares object ranges, walks a linked list of candidates,
 * and dispatches through virtual calls. Returns bool in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004ec2e0(void);
extern void FUN_004ec400(void);
extern int FUN_00707e70(int);
extern int g_007dc868;

__declspec(naked) void FUN_004eb5c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        xor     ebx, ebx
        push    ebx
        call    dword ptr [eax+0xc]
        fst     dword ptr [esi+0x18]
        push    ebx
        fstp    dword ptr [esp+0x10]
        call    FUN_00707e70
        fld     dword ptr [esi+0x68]
        fcomp   dword ptr [esi+0x38]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_77c
        fld     dword ptr [esi+0x68]
        fcomp   dword ptr [esi+0x44]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_77c
        mov     eax, dword ptr [esi+0x30]
        test    eax, eax
        mov     ecx, dword ptr [ebp+0x8]
        mov     edi, dword ptr [ecx+0x84]
        jnz     L_69b
        jmp     L_61b
L_619:
        fstp    st(0)
L_61b:
        test    edi, edi
        jz      L_69b
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        mov     edi, dword ptr [edi+0x4]
        jz      L_69b
        fld     dword ptr [ecx+0x50]
        mov     edx, dword ptr [ecx+0x14]
        fsub    dword ptr [esi+0x60]
        fabs
        fcomp   dword ptr [edx+0x34]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_61b
        fld     dword ptr [edx+0x1c]
        fadd    qword ptr [ecx+0x28]
        fcomp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_67e
        fld     dword ptr [edx+0x10]
        fcomp   dword ptr [esi+0x10]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_61b
        fld     dword ptr [edx+0x20]
        fadd    qword ptr [ecx+0x28]
        fcomp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_61b
        fld     dword ptr [ecx+0x30]
        fcom    dword ptr [esp+0xc]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_619
        fstp    dword ptr [esp+0xc]
        mov     ebx, ecx
        jmp     L_61b
L_67e:
        test    esi, esi
        fstp    st(0)
        jz      L_791
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_69b:
        mov     edx, dword ptr [ebp+0x8]
        fstp    st(0)
        mov     eax, dword ptr [edx+0x8c]
        test    eax, eax
        jz      L_6c1
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_6c1
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax+0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_6c1:
        test    ebx, ebx
        jz      L_6df
        mov     ecx, ebx
        call    FUN_004ec2e0
        mov     edx, dword ptr [ebx]
        push    esi
        mov     ecx, ebx
        call    dword ptr [edx+0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_6df:
        mov     eax, dword ptr [esi+0x28]
        lea     ecx, [eax+eax*4]
        lea     eax, [eax+ecx*2]
        mov     ecx, dword ptr [g_007dc868]
        mov     ecx, dword ptr [ecx+0x48]
        lea     ecx, [ecx+eax*4]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_703
        mov     edi, dword ptr [eax]
        test    edi, edi
        jz      L_703
        push    edx
        jmp     L_762
L_703:
        mov     eax, dword ptr [ecx+0x8]
        test    eax, eax
        jz      L_745
L_706:
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     eax, dword ptr [eax+0x4]
        jz      L_745
        mov     edx, dword ptr [esi+0x30]
        cmp     dword ptr [edi+0x24], edx
        /* __emit: backward jnz rel-offset miscomputed off-by-4 (call-reloc after branch) */
        __emit 0x75
        __emit 0xEB
        mov     ecx, edi
        call    FUN_004ec2e0
        mov     eax, dword ptr [ebp+0x8]
        cmp     dword ptr [edi+0x10], eax
        jz      L_732
        push    eax
        mov     ecx, edi
        call    FUN_004ec400
L_732:
        mov     eax, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [eax+0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_745:
        mov     eax, dword ptr [ecx+0x8]
        test    eax, eax
        jz      L_750
        mov     edi, dword ptr [eax]
        jmp     L_752
L_750:
        xor     edi, edi
L_752:
        mov     ecx, edi
        call    FUN_004ec2e0
        mov     eax, dword ptr [ebp+0x8]
        cmp     dword ptr [edi+0x10], eax
        jz      L_769
        push    eax
L_762:
        mov     ecx, edi
        call    FUN_004ec400
L_769:
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx+0x4]
        mov     al, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_77c:
        mov     eax, dword ptr [esi+0x30]
        fstp    st(0)
        test    eax, eax
        jnz     L_791
        test    esi, esi
        jz      L_791
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]
L_791:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
