/* FUN_00590C10 - __thiscall, 213 bytes */
/* Iterates a linked list at this+0x34C, accumulates FPU values, returns clamped int (0-100) */

extern int DAT_007823b0;
extern int DAT_007f25a8;
extern int DAT_0076d064;
extern int DAT_00770168;
extern int DAT_007748c8;
extern int DAT_007b220c;
extern int DAT_0076d048;
extern char __stdcall FUN_00415230(int);
extern int __stdcall FUN_0075db4a(void);  /* _ftol */

__declspec(naked) void FUN_00590C10(void)
{
    __asm {
        sub     esp, 8
        mov     eax, [ecx + 0x98C]     /* eax = this->field_98C */
        add     eax, 0xA               /* eax += 10 */
        __emit 0x89  // mov dword ptr [esp+0], eax (explicit disp8=0)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xDB  // fild dword ptr [esp] (explicit disp8=0)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    esi
        push    edi
        mov     edi, [ecx + 0x34C]     /* edi = this->field_34C (linked list head) */
        fmul    dword ptr [DAT_007823b0] /* ST(0) *= DAT_007823b0 */
        mov     dword ptr [esp + 8], 0 /* local[2] = 0.0f (accumulator) */
        fstp    dword ptr [esp + 0xC]  /* local[3] = ST(0), pop */
        test    edi, edi
        jz      done_loop

loop_top:
        mov     esi, [edi]             /* esi = edi->field_0 (node data ptr) */
        test    esi, esi
        mov     edi, [edi + 4]         /* edi = edi->field_4 (next node) */
        jz      done_loop
        mov     eax, [DAT_007f25a8]
        mov     ecx, [esi + 4]         /* ecx = esi->field_4 */
        push    eax
        call    FUN_00415230
        test    al, al
        __emit 0x74  // jz loop_top (rel8; MSVC6 miscomputes off-by-4)
        __emit 0xE1
        mov     edx, [esi + 0x78]      /* edx = esi->field_78 (vtable ptr) */
        lea     ecx, [esi + 0x78]      /* ecx = &esi->field_78 */
        call    dword ptr [edx + 4]    /* call vtable[1] */
        fld     dword ptr [eax + 0x6C] /* ST(0) = result->field_6C */
        fadd    dword ptr [DAT_0076d064] /* ST(0) += DAT_0076d064 */
        fdivr   dword ptr [DAT_00770168] /* ST(0) = DAT_00770168 / ST(0) */
        fld     dword ptr [eax + 0x3C] /* ST(0) = result->field_3C, ST(1) = prev */
        fadd    st(0), st(0)           /* ST(0) *= 2 */
        fmulp   st(1), st(0)           /* ST(0) = ST(1) * ST(0), pop */
        fadd    dword ptr [esp + 8]    /* ST(0) += accumulator */
        fstp    dword ptr [esp + 8]    /* accumulator = ST(0), pop */
        __emit 0xEB  // jmp loop_top (rel8; MSVC6 miscomputes off-by-4)
        __emit 0xB8

done_loop:
        fld     dword ptr [esp + 0xC]  /* ST(0) = local[3] */
        pop     edi
        fmul    dword ptr [DAT_007748c8] /* ST(0) *= DAT_007748c8 */
        mov     ecx, 0x64              /* ecx = 100 (default return) */
        fld     dword ptr [esp + 4]    /* ST(0) = accumulator, ST(1) = prev */
        pop     esi
        fabs                          /* ST(0) = |accumulator| */
        fld     dword ptr [DAT_007b220c] /* ST(0) = DAT_007b220c, ST(1)=|acc|, ST(2)=prev */
        fcompp                        /* compare ST(1) vs ST(0), pop twice */
        fnstsw  ax
        test    ah, 1                 /* C0 flag - check if |acc| <= DAT_007b220c */
        jz      return_100

        /* |acc| > threshold */
        __emit 0xD8  // fsub dword ptr [esp] (explicit disp8=0)
        __emit 0x64
        __emit 0x24
        __emit 0x00
        __emit 0xD8  // fdiv dword ptr [esp] (explicit disp8=0)
        __emit 0x74
        __emit 0x24
        __emit 0x00
        fmul    dword ptr [DAT_0076d048] /* ST(0) *= DAT_0076d048 */
        fadd    dword ptr [DAT_0076d048] /* ST(0) += DAT_0076d048 */
        call    FUN_0075db4a          /* _ftol - converts ST(0) to int in EAX */
        test    eax, eax
        jge     check_upper
        xor     eax, eax              /* return 0 */
        add     esp, 8
        ret

check_upper:
        cmp     eax, 0x64
        __emit 0x7E  // jle done (rel8; MSVC6 miscomputes off-by-4)
        __emit 0x0D
        mov     eax, 0x64             /* return 100 */

done:
        add     esp, 8
        ret

return_100:
        fstp    st(0)                 /* pop ST(0) (the prev value) */
        mov     eax, ecx              /* eax = 100 */
        add     esp, 8
        ret
    }
}
