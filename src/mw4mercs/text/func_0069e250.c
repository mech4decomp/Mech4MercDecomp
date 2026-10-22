/*
 * FUN_0069e250 (1482 B) — HUD element update/layout function.
 *
 * __thiscall-style: ESI = param_2 (element), EDI = param_1 (owner).
 * Computes element offsets, calls virtual methods, builds HUD text
 * elements via FUN_0041ee20 / FUN_0067f7b0, dispatches on a mode
 * value (0/1/2), then accumulates into a global table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern float g_00799a20;
extern float g_0077de9c;

extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_0058b5f0(void);
extern void __cdecl FUN_0041eae0(void);

__declspec(naked) void FUN_0069e250(int param_1, int param_2)
{
    __asm {
        sub     esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi + 0x14]
        mov     ebx, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x8]
        sub     eax, ebx
        shl     eax, 0x3
        cmp     ecx, -0x14
        push    edi
        mov     dword ptr [esp + 0x30], eax
        jz      L_27a
        lea     eax, [eax + ecx*1 - 0x8]
        mov     dword ptr [esp + 0x30], eax
L_27a:
        mov     edi, dword ptr [esp + 0x60]
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [edi + 0x40c]
        mov     ebx, eax
        mov     eax, dword ptr [edi + 0x410]
        sub     eax, edx
        sar     eax, 0x2
        jz      L_2a6
        mov     ecx, edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x28], edx
        jmp     L_2ae
L_2a6:
        mov     dword ptr [esp + 0x28], 0x0
L_2ae:
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x48]
        mov     ebp, eax
        mov     eax, dword ptr [edi]
        push    edx
        mov     ecx, edi
        call    dword ptr [eax + 0x154]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        lea     edx, [esp + 0x28]
        push    edx
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        lea     eax, [esp + 0x30]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004e27f0
        mov     eax, dword ptr [edi + 0xe0]
        mov     edx, dword ptr [eax + 0x14]
        xor     ecx, ecx
        cmp     edx, 0x1
        setnz   cl
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        mov     dword ptr [esp + 0x3c], ecx
        mov     ecx, esi
        call    FUN_0041ec50
        push    0x1
        push    0xa
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea     eax, [edi + 0x430]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0xb
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea     ecx, [edi + 0x42c]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     edx, dword ptr [edi + 0xe0]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     eax, dword ptr [edx + 0x14]
        sub     eax, 0x8
        jz      L_39e
        dec     eax
        jz      L_394
        sub     eax, 0x2
        jnz     L_3a6
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_3a6
L_394:
        mov     dword ptr [esp + 0x14], 0x1
        jmp     L_3a6
L_39e:
        mov     dword ptr [esp + 0x14], 0x2
L_3a6:
        push    0x2
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        mov     eax, dword ptr [esp + 0x14]
        sub     eax, 0x0
        jz      L_5dc
        dec     eax
        jz      L_4bd
        dec     eax
        jnz     L_6e6
        push    0x3
        lea     ecx, [edi + 0x5b0]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ec50
        push    0x1
        push    0x0
        push    0x0
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea     edx, [esp + 0x54]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        lea     edx, [esp + 0x58]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     eax, dword ptr [esp + 0x50]
        push    0x1
        push    0x3
        push    0x0
        mov     dword ptr [esp + 0x44], eax
        call    FUN_0067f7b0
        fld     dword ptr [g_00799a20]
        mov     ecx, dword ptr [g_00799a20]
        fchs
        add     esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea     edx, [esp + 0x44]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x6
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [ebx + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [ebx + 0x2c4]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [edi + 0x440]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        jmp     L_6e6
L_4bd:
        push    0x1
        push    0x0
        push    0x0
        call    FUN_0067f7b0
        mov     edx, dword ptr [esp + 0x24]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea     edx, [esp + 0x54]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x30]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        lea     edx, [esp + 0x58]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     eax, dword ptr [esp + 0x50]
        push    0x1
        push    0x3
        push    0x0
        mov     dword ptr [esp + 0x48], eax
        call    FUN_0067f7b0
        fld     dword ptr [g_00799a20]
        mov     ecx, dword ptr [g_00799a20]
        fchs
        add     esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea     edx, [esp + 0x48]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x7
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        lea     eax, [edi + 0x168]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x8
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x43960000
        lea     ecx, [edi + 0x16c]
        push    0xc3960000
        push    ecx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x9
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        lea     edx, [edi + 0x170]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        jmp     L_6e6
L_5dc:
        push    0x1
        push    0x0
        push    0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x28]
        add     esp, 0xc
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        lea     edx, [esp + 0x50]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x1
        push    0x0
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x2
        push    0x0
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x30]
        add     esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea     eax, [esp + 0x58]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        mov     ecx, dword ptr [esp + 0x50]
        push    0x1
        push    0x3
        push    0x0
        mov     dword ptr [esp + 0x4c], ecx
        call    FUN_0067f7b0
        fld     dword ptr [g_00799a20]
        mov     edx, dword ptr [g_00799a20]
        fchs
        add     esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea     eax, [esp + 0x4c]
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x6
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [ebx + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add     esp, 0xc
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebx + 0x2c4]
        fstp    dword ptr [esp]
        push    ecx
        lea     edx, [edi + 0x440]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     ecx, edi
        call    FUN_0058b5f0
        mov     byte ptr [esp + 0x60], al
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0xc0]
        mov     byte ptr [esp + 0x13], al
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     ecx, esi
        call    FUN_0041eae0
        lea     edx, [esp + 0x13]
        push    edx
        mov     ecx, esi
        call    FUN_0041eae0
L_6e6:
        mov     edi, dword ptr [edi + 0x3d4]
        test    edi, edi
        mov     byte ptr [esp + 0x64], 0x1
        jz      L_710
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x64]
        sub     eax, 0x0
        jz      L_70b
        dec     eax
        jnz     L_710
        mov     byte ptr [esp + 0x64], 0x0
        jmp     L_710
L_70b:
        mov     byte ptr [esp + 0x64], 0x1
L_710:
        lea     ecx, [esp + 0x64]
        push    ecx
        mov     ecx, esi
        call    FUN_0041eae0
        push    0x1
        push    0x4
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [ebp + 0x640]
        mov     edx, dword ptr [ebp + 0x640]
        fchs
        mov     edi, dword ptr [esp + 0x34]
        add     esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea     eax, [edi + 0x19c]
        fstp    dword ptr [esp]
        push    eax
        mov     ecx, esi
        call    FUN_0041ee20
        push    0x1
        push    0x5
        push    0x0
        call    FUN_0067f7b0
        fld     dword ptr [ebp + 0x63c]
        mov     ecx, dword ptr [ebp + 0x63c]
        fchs
        add     esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea     edx, [edi + 0x198]
        fstp    dword ptr [esp]
        push    edx
        mov     ecx, esi
        call    FUN_0041ee20
        mov     dword ptr [esp + 0x2c], 0x2
        mov     eax, dword ptr [edi + 0x1e0]
        test    eax, eax
        jl      L_79b
        cmp     eax, 0x3
        mov     dword ptr [esp + 0x2c], eax
        jle     L_7a3
L_79b:
        mov     dword ptr [esp + 0x2c], 0x0
L_7a3:
        push    0x2
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    FUN_0041ec50
        mov     eax, dword ptr [esi + 0x14]
        mov     edi, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x8]
        sub     eax, edi
        shl     eax, 0x3
        cmp     esi, -0x14
        jz      L_7c8
        lea     eax, [eax + esi*1 - 0x8]
L_7c8:
        mov     ecx, dword ptr [esp + 0x30]
        mov     ebp, dword ptr [g_007dab40]
        sub     eax, ecx
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, ebp
        mov     ecx, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x68]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + edx*4 + 0x6068]
        add     ecx, 0x6060
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        pop     edi
        pop     esi
        add     edx, eax
        pop     ebp
        mov     dword ptr [ecx + 0xc00], edx
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
