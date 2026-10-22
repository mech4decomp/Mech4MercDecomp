/*
 * FUN_0060AC70 (528 B) — __thiscall (ECX = this), RET 8. Sets filter bounds
 * based on param_1, iterates a collection (FUN_00416cc0), and copies
 * matching entries into output arrays with FPU scaling. Uses
 * FUN_00416bc0/00416cc0/00416c60, FUN_004d1f80/004d21c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void __fastcall FUN_0060ac70(void)
{
    __asm {
        sub     esp, 0x8c
        mov     eax, dword ptr [esp + 0x94]
        mov     edx, dword ptr [eax + 0x14]
        mov     dword ptr [esp + 0x8], edx
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [eax + 0x1c]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [eax + 0x20]
        push    ebp
        mov     ebp, dword ptr [eax + 0xc]
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [eax + 0x24]
        push    edi
        mov     edi, dword ptr [eax + 0x10]
        add     ecx, 0x18
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [eax + 0x28]
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x3c], eax
        mov     dword ptr [esp + 0x2c], 0x0
        call    FUN_00416bc0
        mov     eax, dword ptr [esp + 0xa0]
        xor     ecx, ecx
        sub     eax, ecx
        mov     edx, 0x7b
        mov     dword ptr [esp + 0x44], 0x78c058
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], edx
        jz      L_ad17
        dec     eax
        jz      L_ad09
        dec     eax
        jnz     L_ad27
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], 0x12
        jmp     L_ad27
L_ad09:
        mov     dword ptr [esp + 0x14], 0x64
        mov     dword ptr [esp + 0x10], edx
        jmp     L_ad27
L_ad17:
        mov     dword ptr [esp + 0x14], 0x33
        mov     dword ptr [esp + 0x10], 0x4e
L_ad27:
        lea     ecx, [esp + 0x44]
        call    FUN_00416cc0
        test    eax, eax
        jz      L_ae5b
        mov     ecx, edi
        sub     ecx, esi
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [esp + 0x24]
        sub     ecx, esi
        mov     dword ptr [esp + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        sub     ecx, esi
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x20]
        sub     ecx, esi
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        sub     ecx, esi
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x30]
        sub     ebp, esi
        sub     ebx, esi
        sub     edi, esi
        sub     ecx, esi
        mov     dword ptr [esp + 0x40], ebp
        mov     dword ptr [esp + 0x3c], ecx
L_ad80:
        mov     ecx, dword ptr [eax + 0x18]
        cmp     ecx, dword ptr [esp + 0x14]
        jl      L_ae4a
        cmp     ecx, dword ptr [esp + 0x10]
        jg      L_ae4a
        mov     ecx, dword ptr [eax + 0x1c]
        test    ecx, ecx
        mov     dword ptr [esp + 0x30], ecx
        jz      L_ae4a
        mov     cx, word ptr [eax + 0x14]
        mov     dx, word ptr [eax + 0x16]
        push    0x1
        lea     eax, [esp + 0x1c]
        mov     word ptr [esp + 0x1c], cx
        push    eax
        lea     ecx, [esp + 0x60]
        mov     word ptr [esp + 0x22], dx
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x6c]
        mov     edx, dword ptr [eax + 0x2c]
        fild    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [eax + 0x30]
        cmp     ecx, 0x4e
        fmul    dword ptr [eax + 0x54]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax + 0x28]
        mov     dword ptr [esi + ebp*0x1], edx
        mov     edx, dword ptr [eax + 0x1c]
        fstp    dword ptr [edi + esi*0x1]
        mov     ebp, dword ptr [esp + 0x34]
        mov     dword ptr [ebx + esi*0x1], ecx
        mov     dword ptr [esi + ebp*0x1], edx
        jnz     L_adfc
        mov     dword ptr [edi + esi*0x1], 0x42200000
L_adfc:
        mov     ecx, dword ptr [eax + 0x58]
        fld     dword ptr [eax + 0x3c]
        mov     edx, dword ptr [esp + 0x24]
        fadd    st(0), st(0)
        mov     dword ptr [edx + esi*0x1], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [eax + 0x6c]
        fstp    dword ptr [ecx + esi*0x1]
        mov     ecx, dword ptr [esp + 0x20]
        fild    dword ptr [eax + 0x24]
        mov     dword ptr [ecx + esi*0x1], edx
        mov     edx, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx + esi*0x1], edx
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x3c]
        inc     ecx
        fstp    dword ptr [edx + esi*0x1]
        mov     dword ptr [esp + 0x28], ecx
        lea     ecx, [esp + 0x58]
        add     esi, 0x4
        call    FUN_004d21c0
        mov     ebp, dword ptr [esp + 0x40]
L_ae4a:
        lea     ecx, [esp + 0x44]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_ad80
L_ae5b:
        mov     eax, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [ecx], eax
        lea     ecx, [esp + 0x44]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x8c
        ret     8
    }
}
