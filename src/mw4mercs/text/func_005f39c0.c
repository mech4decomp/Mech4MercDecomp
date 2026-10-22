/*
 * FUN_005f39c0 (325 B) — __thiscall, RET 8 (2 stack params).
 *
 * Dispatches on a sub-object state via a jump table (0x5f3b08) with a byte
 * lookup table (0x5f3b18). Handles vehicle state update cases.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b4384;
extern void FUN_005f6b70(void);
extern void FUN_005fa070(void);
extern void FUN_005f4d10(void);
extern void FUN_004faed0(void);
extern void FUN_006fab90(void);

__declspec(naked) void __fastcall FUN_005f39c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x4bd]
        test    al, al
        push    edi
        jz      skip_cb
        mov     ecx, dword ptr [esi + 0x3b0]
        test    ecx, ecx
        jz      skip_cb
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    edx
        call    dword ptr [eax + 0x40]
skip_cb:
        mov     ecx, esi
        call    FUN_005f6b70
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    eax
        mov     ecx, esi
        call    FUN_005fa070
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edi, dword ptr [ecx + 0x14]
        mov     ecx, esi
        call    FUN_005f4d10
        fld     qword ptr [ebp + 0x8]
        fsub    qword ptr [esi + 0xe4]
        lea     eax, [edi - 2]
        cmp     eax, 0xc
        fstp    dword ptr [ebp - 0x4]
        ja      exit
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x5f3b18]
        jmp     dword ptr [edx*4 + 0x5f3b08]
case10:
        mov     edi, dword ptr [esi + 0x2f4]
        mov     eax, dword ptr [edi + 0x14]
        cmp     eax, 0x2
        jl      c10_call
        cmp     eax, 0x5
        jle     c10_after
c10_call:
        mov     eax, dword ptr [edi]
        push    0x0
        push    0x0
        push    0x2
        mov     ecx, edi
        call    dword ptr [eax + 0x8]
c10_after:
        mov     eax, dword ptr [esi + 0x2bc]
        test    eax, eax
        jle     c10_fin
        mov     eax, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [edi]
        push    0x0
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
c10_fin:
        mov     ecx, dword ptr [ebp + 0x8]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_004faed0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
case9:
        mov     eax, dword ptr [esi + 0xd8]
        fld     dword ptr [eax + 0x90]
        mov     edx, dword ptr [DAT_007b4384]
        add     eax, 0x80
        fchs
        fld     dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xc], edx
        fchs
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [eax + 0x18]
        pop     edi
        fchs
        fstp    dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + 0x180]
        fstp    dword ptr [esi + 0x180]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + 0x184]
        fstp    dword ptr [esi + 0x184]
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp + 0xc]
        fadd    dword ptr [esi + 0x188]
        fstp    dword ptr [esi + 0x188]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
case2:
        push    0x78a780
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      exit
        int     3
exit:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
