/*
 * FUN_006A9C30 (1014 B) — __fastcall (ECX = this), RET 0xc (3 stack dwords).
 *
 * Animation/IK update: reads a target vector via a virtual call, normalizes
 * it (fabs/fdiv against g_76c5b0), advances this+0x20 by a scaled step, and
 * if within bounds updates a set of bone transforms (esi+0x58..0x68) through
 * FUN_00699530/FUN_00605740 and clamps angles against g_799e8c/g_76d064.
 * Returns 1 on success, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;   /* DAT_0076c5b0 */
extern float g_799e8c;   /* DAT_00799e8c */
extern float g_76d064;   /* DAT_0076d064 */
extern float g_799f3c;   /* DAT_00799f3c */
extern void __cdecl FUN_006055f0(void);
extern void __cdecl FUN_00699530(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_006056a0(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_00604f30(void);
extern void __cdecl FUN_00605700(void);

__declspec(naked) void __fastcall FUN_006A9C30(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [ebx + 0x18]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x1c]
        push    edx
        push    ebp
        call    dword ptr [eax + 8]
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        je      L_9c69
        fld     dword ptr [esp + 0x1c]
        fchs
        fstp    dword ptr [esp + 0x1c]
L_9c69:
        fld     dword ptr [esi + 0x38]
        fabs
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9c88
        fld     dword ptr [esp + 0x1c]
        fdiv    dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x14]
        jmp     L_9c90
L_9c88:
        mov     dword ptr [esp + 0x14], 0x3f800000
L_9c90:
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x30]
        fst     dword ptr [esp + 0x20]
        fadd    dword ptr [esi + 0x20]
        fst     dword ptr [esi + 0x20]
        fcomp   dword ptr [esi + 0x10]
        fnstsw  ax
        test    ah, 1
        jne     L_a01a
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esi + 0x5c]
        mov     dword ptr [edi + 0x14], eax
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        jne     L_9ce4
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x60]
        mov     eax, dword ptr [esi + 0x58]
        mov     dword ptr [ecx + 0x14], edx
        mov     ecx, edx
        mov     edx, dword ptr [esi + 0x64]
        mov     dword ptr [eax + 0x14], ecx
        mov     eax, ecx
        mov     ecx, dword ptr [esi + 0x68]
        mov     dword ptr [edx + 0x14], eax
        mov     edx, eax
        mov     dword ptr [ecx + 0x14], edx
L_9ce4:
        mov     ebx, dword ptr [ebx + 0x3c]
        push    0x3f800000
        mov     ecx, ebx
        call    FUN_006055f0
        mov     ecx, dword ptr [esi + 0x3c]
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 8]
        mov     ecx, dword ptr [esi + 0x40]
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0x30]
        push    edx
        push    ebp
        call    dword ptr [eax + 8]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9e12
        mov     eax, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        mov     ecx, dword ptr [esp + 0x20]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov     ecx, edi
        fdivp   st(1), st(0)
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00699530
        test    al, al
        je      L_9d71
        mov     ecx, edi
        call    FUN_006991d0
        fdiv    dword ptr [esp + 0x14]
        mov     ecx, ebx
        fstp    dword ptr [esi + 0x24]
        call    FUN_006056a0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_9d71:
        mov     edx, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp   st(1), st(0)
        fsub    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne     L_9e12
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        jne     L_9e12
        mov     ecx, dword ptr [esi + 0x60]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x58]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x64]
        mov     eax, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [eax + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
        mov     ecx, dword ptr [esi + 0x68]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [edx + 4]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp]
        call    FUN_00699530
L_9e12:
        fld     dword ptr [esp + 0x30]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9e55
        fld     dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x18], 0
        fcomp   dword ptr [g_799e8c]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9e45
        mov     eax, dword ptr [g_799e8c]
        mov     dword ptr [esp + 0x30], eax
L_9e45:
        fld     dword ptr [esp + 0x30]
        fdiv    dword ptr [g_799e8c]
        fstp    dword ptr [esp + 0x14]
        jmp     L_9eaf
L_9e55:
        fld     dword ptr [esp + 0x30]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        je      L_9e9f
        fld     dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x14], 0
        fchs
        fst     dword ptr [esp + 0x30]
        fcomp   dword ptr [g_799e8c]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9e8f
        mov     ecx, dword ptr [g_799e8c]
        mov     dword ptr [esp + 0x30], ecx
L_9e8f:
        fld     dword ptr [esp + 0x30]
        fdiv    dword ptr [g_799e8c]
        fstp    dword ptr [esp + 0x18]
        jmp     L_9eaf
L_9e9f:
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x14], 0
L_9eaf:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9eed
        fld     dword ptr [g_76c5b0]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_799e8c]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9ee1
        mov     edx, dword ptr [g_799e8c]
        mov     dword ptr [esp + 0x10], edx
L_9ee1:
        fld     dword ptr [esp + 0x10]
        fdiv    dword ptr [g_799e8c]
        jmp     L_9f42
L_9eed:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        je      L_9f36
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x20], 0
        fchs
        fst     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_799e8c]
        fnstsw  ax
        test    ah, 0x41
        jne     L_9f26
        mov     eax, dword ptr [g_799e8c]
        mov     dword ptr [esp + 0x10], eax
L_9f26:
        fld     dword ptr [esp + 0x10]
        fdiv    dword ptr [g_799e8c]
        fld     dword ptr [esp + 0x20]
        jmp     L_9f42
L_9f36:
        fld     dword ptr [g_76c5b0]
        fld     dword ptr [g_76c5b0]
L_9f42:
        fld     st(1)
        fadd    st(0), st(1)
        fadd    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x14]
        fcom    dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 1
        je      L_9f63
        fsubr   dword ptr [g_76d064]
        jmp     L_9f6b
L_9f63:
        fstp    st(0)
        fld     dword ptr [g_799f3c]
L_9f6b:
        mov     al, byte ptr [esp + 0x34]
        fstp    dword ptr [edi + 0x20]
        test    al, al
        jne     L_9f98
        mov     ecx, dword ptr [esi + 0x60]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 0x58]
        mov     dword ptr [ecx + 0x20], edx
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi + 0x64]
        fstp    dword ptr [edx + 0x20]
        mov     dword ptr [eax + 0x20], ecx
        mov     eax, dword ptr [esi + 0x68]
        fstp    dword ptr [eax + 0x20]
        jmp     L_9f9c
L_9f98:
        fstp    st(0)
        fstp    st(0)
L_9f9c:
        push    edi
        mov     ecx, ebx
        call    FUN_00605740
        mov     al, byte ptr [esp + 0x34]
        test    al, al
        jne     L_9fd8
        mov     ecx, dword ptr [esi + 0x58]
        push    ecx
        mov     ecx, ebx
        call    FUN_00605740
        mov     edx, dword ptr [esi + 0x60]
        push    edx
        mov     ecx, ebx
        call    FUN_00605740
        mov     eax, dword ptr [esi + 0x64]
        push    eax
        mov     ecx, ebx
        call    FUN_00605740
        mov     ecx, dword ptr [esi + 0x68]
        push    ecx
        mov     ecx, ebx
        call    FUN_00605740
L_9fd8:
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        je      L_a013
        mov     edx, dword ptr [edi + 0x18]
        fld     dword ptr [edi + 0x10]
        mov     eax, dword ptr [edx + 4]
        fsub    dword ptr [eax + 8]
        mov     esi, dword ptr [esi + 0x18]
        fld     dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [ecx + 0x34]
        fdivp   st(1), st(0)
        lea     eax, [esi + esi*2]
        lea     ecx, [edx + eax*8]
        fstp    dword ptr [esp]
        call    FUN_00604f30
        mov     eax, dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x10]
L_a013:
        mov     ecx, ebx
        call    FUN_00605700
L_a01a:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x18
        ret     0xc
    }
}
