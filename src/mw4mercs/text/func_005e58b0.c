/*
 * FUN_005e58b0 (248 B) — __thiscall, RET 8 (2 stack params).
 *
 * Aiming/orientation update variant. Calls FUN_005e5e30 to build a
 * basis, computes a normalized heading, and optionally calls
 * FUN_005e5c10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e5e30(void);
extern void __stdcall FUN_005e5c10(void);

/* absolute-memory operands (extern symbols -> correct opcode + masked reloc) */
extern double DAT_007890a0;
extern float  DAT_0077de8c;

__declspec(naked) void __stdcall FUN_005e58b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [esi + 0x299]
        xor     eax, eax
        cmp     cl, al
        push    edi
        jz      L_58f2
        mov     dword ptr [esi + 0x17c], eax
        mov     dword ptr [esi + 0x178], eax
        mov     dword ptr [esi + 0x174], eax
        pop     edi
        mov     dword ptr [esi + 0x194], eax
        mov     dword ptr [esi + 0x190], eax
        mov     dword ptr [esi + 0x18c], eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    L_58f2:
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [ebp + 8]
        push    edx
        lea     edi, [esi + 0x284]
        push    edi
        mov     ecx, esi
        mov     dword ptr [ebp - 8], eax
        call    FUN_005e5e30
        fld     dword ptr [esi + 0x288]
        fsub    dword ptr [ebp - 0xc]
        fcomp   qword ptr [DAT_007890a0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_59a0
        fld     dword ptr [edi]
        fsub    dword ptr [ebp - 0x10]
        fld     dword ptr [edi + 4]
        fsub    dword ptr [ebp - 0xc]
        fld     dword ptr [edi + 8]
        fsub    dword ptr [ebp - 8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0xc]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 4], eax
        fld     dword ptr [ebp - 4]
        fst     dword ptr [ebp + 0xc]
        fcomp   dword ptr [DAT_0077de8c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_59a0
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x17
        test    al, 1
        jz      L_59a0
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_005e5c10
    L_59a0:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
