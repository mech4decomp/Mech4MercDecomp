/*
 * FUN_005e5af0 (220 B) — __thiscall, RET 8 (2 stack params).
 *
 * Aiming/orientation update. Calls FUN_005e5e30 to build a basis,
 * normalizes the heading, and optionally calls FUN_005e5c10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e5e30(void);
extern void __stdcall FUN_005e5c10(void);

/* absolute-memory operand (extern symbol -> correct opcode + masked reloc) */
extern float DAT_0077de8c;

__declspec(naked) void __stdcall FUN_005e5af0(void)
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
        jz      L_5b30
        mov     dword ptr [esi + 0x17c], eax
        mov     dword ptr [esi + 0x178], eax
        mov     dword ptr [esi + 0x174], eax
        mov     dword ptr [esi + 0x194], eax
        mov     dword ptr [esi + 0x190], eax
        mov     dword ptr [esi + 0x18c], eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    L_5b30:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 8]
        push    edi
        push    eax
        push    ecx
        lea     edi, [esi + 0x284]
        push    edi
        mov     ecx, esi
        call    FUN_005e5e30
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        fsubr   dword ptr [edi]
        add     eax, 0x80
        fld     dword ptr [edi + 4]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0xc], edx
        fsub    dword ptr [ebp - 0xc]
        fld     dword ptr [edi + 8]
        mov     dword ptr [ebp - 8], eax
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
        pop     edi
        fst     dword ptr [ebp + 0xc]
        fcomp   dword ptr [DAT_0077de8c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_5bc5
        mov     ecx, dword ptr [esi + 0x10]
        shr     ecx, 0x17
        test    cl, 1
        jz      L_5bc5
        mov     edx, dword ptr [ebp + 0xc]
        push    edx
        mov     ecx, esi
        call    FUN_005e5c10
    L_5bc5:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
