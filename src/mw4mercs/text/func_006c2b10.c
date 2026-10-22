/*
 * FUN_006c2b10 (306 B) — Operator dispatcher. Switch on (param_3 >> 8)
 * via a jump table at 0x6c2c44, applying the binary operator to
 * param_1/param_2. __stdcall, RET 0xc (3 args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006bfa50(void);

__declspec(naked) void FUN_006c2b10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sar     eax, 0x8
        dec     eax
        cmp     eax, 0x11
        ja      L_2c30
        jmp     dword ptr [eax*4 + 0x6c2c44]
L_2b28:
        mov     eax, dword ptr [esp + 0x4]
        sub     eax, dword ptr [esp + 0x8]
        ret     0xc
L_2b33:
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        lea     eax, [ecx + edx]
        ret     0xc
L_2b41:
        mov     eax, dword ptr [esp + 0x4]
        cdq
        idiv    dword ptr [esp + 0x8]
        ret     0xc
L_2b4d:
        mov     eax, dword ptr [esp + 0x4]
        imul    eax, dword ptr [esp + 0x8]
        ret     0xc
L_2b59:
        mov     eax, dword ptr [esp + 0x4]
        cdq
        idiv    dword ptr [esp + 0x8]
        mov     eax, edx
        ret     0xc
L_2b67:
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        shl     eax, cl
        ret     0xc
L_2b74:
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        xor     eax, eax
        cmp     ecx, edx
        setnz   al
        ret     0xc
L_2b86:
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        cmp     edx, ecx
        setle   al
        ret     0xc
L_2b98:
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        xor     eax, eax
        cmp     ecx, edx
        setl    al
        ret     0xc
L_2baa:
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        sar     eax, cl
        ret     0xc
L_2bb7:
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        cmp     edx, ecx
        setge   al
        ret     0xc
L_2bc9:
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        xor     eax, eax
        cmp     ecx, edx
        setg    al
        ret     0xc
L_2bdb:
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        cmp     edx, ecx
        setz    al
        ret     0xc
L_2bed:
        mov     eax, dword ptr [esp + 0x4]
        xor     eax, dword ptr [esp + 0x8]
        ret     0xc
L_2bf8:
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_2c3d
        jmp     L_2c15
L_2c02:
        mov     eax, dword ptr [esp + 0x4]
        and     eax, dword ptr [esp + 0x8]
        ret     0xc
L_2c0d:
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jnz     L_2c1d
L_2c15:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      L_2c3d
L_2c1d:
        mov     eax, 0x1
        ret     0xc
L_2c25:
        mov     eax, dword ptr [esp + 0x4]
        or      eax, dword ptr [esp + 0x8]
        ret     0xc
L_2c30:
        push    0x79d104
        call    FUN_006bfa50
        add     esp, 0x4
L_2c3d:
        xor     eax, eax
        ret     0xc
    }
}
