/*
 * FUN_005e5700 (426 B) — __thiscall, RET 8 (2 stack params).
 *
 * Aiming/orientation update. Calls FUN_005e5e30 to compute a basis,
 * then normalizes and applies a heading correction to ESI+0x288.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e5e30(void);
extern void __stdcall FUN_005e5c10(void);

/* absolute-memory operands (extern symbols -> correct opcode + masked reloc) */
extern float DAT_0077de8c;
extern float DAT_0076d04c;
extern float DAT_0076c5b0;
extern float DAT_0076d070;
extern float DAT_0077d030;
extern float DAT_0076d064;

__declspec(naked) void __stdcall FUN_005e5700(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        push    ebx
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x299]
        xor     ebx, ebx
        cmp     al, bl
        push    edi
        jnz     L_5727
        cmp     dword ptr [esi + 0x2b8], 1
        jle     L_5754
        mov     byte ptr [esi + 0x299], 1
    L_5727:
        mov     dword ptr [esi + 0x17c], ebx
        mov     dword ptr [esi + 0x178], ebx
        mov     dword ptr [esi + 0x174], ebx
        pop     edi
        mov     dword ptr [esi + 0x194], ebx
        mov     dword ptr [esi + 0x190], ebx
        mov     dword ptr [esi + 0x18c], ebx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L_5754:
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x14], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     dword ptr [ebp - 0x10], edx
        mov     edx, dword ptr [ebp + 8]
        push    edx
        lea     edi, [esi + 0x284]
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 0xc], eax
        call    FUN_005e5e30
        fld     dword ptr [esi + 0x288]
        fsub    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [edi + 4]
        mov     edx, dword ptr [edi + 8]
        fcomp   dword ptr [DAT_0077de8c]
        mov     dword ptr [esi + 0x26c], eax
        mov     dword ptr [esi + 0x270], ecx
        mov     dword ptr [esi + 0x274], edx
        fnstsw  ax
        test    ah, 0x41
        jz      L_58a1
        fld     dword ptr [edi]
        fsub    dword ptr [ebp - 0x14]
        fld     dword ptr [edi + 4]
        fsub    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [edi + 8]
        fsub    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 8]
        fstp    st(0)
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fadd    dword ptr [ebp - 8]
        fstp    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 4], eax
        fld     dword ptr [ebp - 4]
        fst     dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    st(0), st(1)
        fadd    dword ptr [ebp - 8]
        fsqrt
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fcomp   dword ptr [DAT_0077de8c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_583b
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x17
        test    al, 1
        jz      L_583b
        mov     ecx, dword ptr [ebp - 4]
        push    ecx
        mov     ecx, esi
        call    FUN_005e5c10
    L_583b:
        fld     dword ptr [ebp + 0xc]
        mov     al, byte ptr [esi + 0x298]
        cmp     al, bl
        fsub    dword ptr [DAT_0076d04c]
        fstp    dword ptr [ebp + 0xc]
        jz      L_58a1
        fld     dword ptr [ebp + 0xc]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_58a1
        fld     dword ptr [ebp + 0xc]
        fmul    dword ptr [DAT_0076d070]
        fcom    dword ptr [DAT_0077d030]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_587f
        fstp    st(0)
        fld     dword ptr [DAT_0077d030]
    L_587f:
        fld     dword ptr [esi + 0x290]
        fadd    dword ptr [DAT_0076d070]
        fdivr   dword ptr [DAT_0076d064]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x288]
        fstp    dword ptr [esi + 0x288]
        fstp    st(0)
    L_58a1:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
