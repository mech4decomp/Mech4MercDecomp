/*
 * FUN_00686140 (623 B) — __thiscall, RET 0x1c. HUD aim/position update.
 * Frees/advances linked nodes, computes squared distance via FPU, checks
 * aim thresholds, recurses. Uses fnstsw/test-ah FPU compare idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d9500(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_00685730(void);
extern void __cdecl FUN_00685b20(void);
extern void __cdecl FUN_00685a90(void);
extern void __cdecl FUN_00685c10(void);
extern void __cdecl FUN_00686140(void);
extern float g_0076c5b0;
extern double g_00798be0;
extern double g_00798bd8;

__declspec(naked) void FUN_00686140(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        mov     eax, 0xbf800000
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x40]
        mov     dword ptr [esi+0x18], eax
        mov     dword ptr [esi+0x1c], eax
        mov     dword ptr [esi+0x20], eax
        mov     eax, dword ptr [esp+0x3c]
        xor     ebx, ebx
        mov     byte ptr [eax], bl
        cmp     dword ptr [esi+0x68], 0x7
        push    edi
        mov     byte ptr [ecx], bl
        jz      L_6863a5
        mov     edi, dword ptr [esi+0x38]
        cmp     edi, ebx
        jz      L_686203
        cmp     byte ptr [edi+0xc], bl
        jz      L_6862ad
        cmp     edi, ebx
        mov     ebp, dword ptr [edi+0x14]
        mov     dword ptr [edi+0x14], ebx
        mov     dword ptr [esi+0x64], ebp
        jz      L_6861a0
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6861a0:
        cmp     byte ptr [ebp+0x24], bl
        mov     dword ptr [esi+0x38], ebx
        jnz     L_6861e7
        mov     edx, dword ptr [esi+0x60]
        mov     eax, dword ptr [edx+0x14]
        cmp     eax, -0x1
        jz      L_6861bc
        mov     ecx, dword ptr [esi+0x34]
        push    eax
        call    FUN_005d8270
L_6861bc:
        cmp     ebp, ebx
        jz      L_6861d0
        mov     ecx, ebp
        call    FUN_0068f370
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_6861d0:
        pop     edi
        mov     dword ptr [esi+0x64], ebx
        mov     byte ptr [esi+0x3c], bl
        mov     dword ptr [esi+0x68], 0x7
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x1c
L_6861e7:
        cmp     byte ptr [ebp+0x26], bl
        jz      L_686203
        cmp     ebp, ebx
        jz      L_686200
        mov     ecx, ebp
        call    FUN_0068f370
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_686200:
        mov     dword ptr [esi+0x64], ebx
L_686203:
        mov     ebp, dword ptr [esp+0x3c]
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esi+0x68], 0x5
        call    FUN_00685730
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, esi
        call    FUN_00685b20
        mov     ecx, dword ptr [eax]
        mov     edi, dword ptr [esp+0x2c]
        fld     dword ptr [edi]
        mov     dword ptr [esp+0x10], ecx
        fsubr   dword ptr [esp+0x10]
        mov     edx, dword ptr [eax+0x4]
        mov     ecx, dword ptr [edi+0x8]
        mov     dword ptr [esp+0x14], edx
        mov     eax, dword ptr [eax+0x8]
        mov     dword ptr [esp+0x18], eax
        fld     dword ptr [esp+0x18]
        mov     dword ptr [esp+0x24], ecx
        fsub    dword ptr [esp+0x24]
        mov     dword ptr [esp+0x14], 0x0
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [esp+0x38]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esp+0x38]
        fmul    qword ptr [esp+0x30]
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        mov     al, byte ptr [esi+0x40]
        fmul    qword ptr [g_00798be0]
        __emit 0xF6                 /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        cmp     al, bl
        jz      L_6862f3
        fstp    st(0)
        push    edi
        mov     ecx, esi
        fstp    st(0)
        mov     byte ptr [esi+0x40], bl
        call    FUN_00685a90
        test    al, al
        jnz     L_6862be
        pop     edi
        mov     dword ptr [esi+0x68], 0x7
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x1c
L_6862ad:
        pop     edi
        mov     dword ptr [esi+0x68], 0x6
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x1c
L_6862be:
        cmp     byte ptr [esi+0x3c], bl
        jz      L_6863a5
        mov     edx, dword ptr [esp+0x44]
        mov     eax, dword ptr [esp+0x40]
        mov     ecx, dword ptr [esp+0x38]
        push    edx
        mov     edx, dword ptr [esp+0x38]
        push    eax
        mov     eax, dword ptr [esp+0x38]
        push    ebp
        push    ecx
        push    edx
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_00686140
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x1c
L_6862f3:
        fld     st(1)
        mov     bl, 0x1
        fcomp   qword ptr [g_00798bd8]
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0x84                 /* test bl,ah: MSVC6 swaps operand order (84 DC) */
        __emit 0xE3
        jnz     L_686328
        fld     st(0)
        fmul    st(0), st(1)
        fxch
        fxch    st(2)
        fcompp
        __emit 0xDF                 /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        fstp    st(0)
        __emit 0x84                 /* test bl,ah: MSVC6 swaps operand order (84 DC) */
        __emit 0xE3
        jnz     L_68632c
        lea     ecx, [esp+0x10]
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00685c10
        test    al, al
        jz      L_68632f
        jmp     L_68632c
L_686328:
        fstp    st(0)
        fstp    st(0)
L_68632c:
        mov     byte ptr [esi+0x40], bl
L_68632f:
        lea     edx, [esp+0x1c]
        push    edx
        mov     ecx, esi
        call    FUN_00685b20
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax+0x4]
        mov     eax, dword ptr [eax+0x8]
        mov     dword ptr [esi+0x18], ecx
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esi+0x1c], edx
        mov     dword ptr [esi+0x20], eax
        call    FUN_00685b20
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp+0x10], edx
        mov     ecx, dword ptr [eax+0x4]
        mov     dword ptr [esp+0x14], ecx
        mov     edx, dword ptr [eax+0x8]
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esp+0x1c], edx
        mov     dword ptr [esp+0x18], 0x0
        call    FUN_00685730
        mov     eax, dword ptr [esi+0x60]
        mov     esi, dword ptr [esi+0x54]
        cmp     eax, esi
        mov     ecx, eax
        jz      L_68638b
        add     ecx, 0x18
L_68638b:
        mov     eax, dword ptr [eax+0xc]
        mov     edx, dword ptr [esp+0x40]
        and     al, bl
        cmp     ecx, esi
        mov     byte ptr [edx], al
        jz      L_6863a5
        test    byte ptr [ecx+0xc], bl
        jz      L_6863a5
        mov     eax, dword ptr [esp+0x44]
        mov     byte ptr [eax], bl
L_6863a5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x1c
    }
}
