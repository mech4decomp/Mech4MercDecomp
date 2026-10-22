/*
 * FUN_0067fdf0 (913 B) — HUD draw/render routine. Reads the XOR-obfuscated
 * global table, does FPU math (clamping via fnstsw/test ah), calls member
 * helpers, and updates per-slot counters. __thiscall, RET 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern double g_0077b648;
extern float g_0076d070;
extern float g_0076d064;
extern float g_0078235c;
extern void FUN_0041eb40(void);
extern int FUN_006fab90(int, int);
extern int FUN_005bcdc0(int, int, int, int);
extern void FUN_00707e70(int);
extern void FUN_0041ea60(void);
extern void FUN_0067f980(void);
extern void FUN_0041fd80(void);

__declspec(naked) void FUN_0067fdf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0x8]
        mov     ebx, ecx
        push    0x8
        lea     eax, [ebp-0x4]
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebp-0x14], ebx
        mov     byte ptr [ebp-0x4], 0x0
        call    FUN_0041eb40
        push    0x20
        lea     ecx, [ebp-0xc]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [ebp-0xc], 0x0
        call    FUN_0041eb40
        push    0x20
        lea     edx, [ebp-0x8]
        push    edx
        mov     ecx, edi
        mov     dword ptr [ebp-0x8], 0x0
        call    FUN_0041eb40
        cmp     dword ptr [ebp+0x18], 0x1
        mov     esi, dword ptr [ebp+0x14]
        jle     loc_fea9
        push    0x8
        lea     eax, [ebp+0xb]
        push    eax
        mov     ecx, edi
        mov     byte ptr [ebp+0xb], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     edx, dword ptr [eax+esi*4+0x1820]
        add     eax, 0x1818
        mov     ecx, 0x8
        add     edx, ecx
        mov     dword ptr [eax+esi*4+0x8], edx
        add     dword ptr [eax+0xc00], ecx
        cmp     byte ptr [ebp+0xb], 0xaa
        jz      loc_fea9
        mov     ecx, dword ptr [ebx+0x18]
        push    ecx
        push    0x7988fc
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      loc_fea9
        int     3
loc_fea9:
        mov     eax, dword ptr [ebp-0x4]
        xor     edx, edx
        mov     dl, byte ptr [ebx+0x50]
        push    0xff
        push    0x28
        and     eax, 0xff
        push    edx
        push    eax
        call    FUN_005bcdc0
        add     esp, 0x10
        test    al, al
        jnz     loc_8017a
        mov     ecx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [ecx]
        mov     edx, dword ptr [g_007dab40]
        push    0x1
        xor     ebx, edx
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        mov     edx, dword ptr [ebx]
        mov     ecx, dword ptr [g_007dab44]
        mov     ebx, dword ptr [g_007dab40]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x930]
        mov     edx, dword ptr [ecx]
        fld     st(0)
        fsub    dword ptr [ebp-0x8]
        xor     edx, ebx
        lea     ecx, [edx+0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx]
        fstp    dword ptr [eax+0x14]
        mov     eax, esi
        fsub    dword ptr [ebp-0x8]
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        sub     eax, esi
        shl     eax, 0x3
        fadd    dword ptr [ebp-0xc]
        xor     edx, 0x85739531
        xor     ecx, 0x85739531
        fstp    dword ptr [edx+eax+0x35a4]
        fld     dword ptr [ecx+eax+0x35a4]
        fmul    dword ptr [g_0076d070]
        fcom    dword ptr [g_0076d064]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loc_ff63
        fstp    st(0)
        fld     dword ptr [g_0076d064]
loc_ff63:
        mov     ebx, dword ptr [ebp-0x14]
        fmul    dword ptr [g_0078235c]
        mov     eax, dword ptr [ebp+0xc]
        mov     dl, byte ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp+0x10]
        fstp    dword ptr [ebp-0x18]
        mov     dword ptr [ebx+0x48], eax
        mov     eax, dword ptr [ebx+0x10]
        mov     byte ptr [ebx+0x50], dl
        mov     dword ptr [ebx+0x4c], ecx
        mov     dword ptr [ebp-0x10], 0x0
loc_ff8b:
        test    eax, eax
        jz      loc_8009e
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        mov     edx, dword ptr [eax+0x4]
        mov     dword ptr [ebp-0x1c], edx
        jz      loc_8009b
        lea     eax, [ebp+0xb]
        push    eax
        mov     ecx, edi
        call    FUN_0041ea60
        mov     al, byte ptr [ebp+0xb]
        test    al, al
        jz      loc_ffd2
        mov     ecx, dword ptr [ebp+0x1c]
        mov     edx, dword ptr [ebp+0x18]
        mov     eax, dword ptr [ebp-0x18]
        push    ecx
        mov     ecx, dword ptr [ebp+0x10]
        push    edx
        mov     edx, dword ptr [ebp+0xc]
        push    esi
        push    eax
        push    ecx
        push    edx
        push    edi
        mov     ecx, ebx
        call    FUN_0067f980
loc_ffd2:
        cmp     dword ptr [ebp+0x18], 0x1
        jle     loc_80089
        push    0x8
        lea     eax, [ebp+0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebp+0x14], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     edx, dword ptr [eax+esi*4+0x1820]
        add     eax, 0x1818
        mov     ecx, 0x8
        add     edx, ecx
        mov     dword ptr [eax+esi*4+0x8], edx
        add     dword ptr [eax+0xc00], ecx
        mov     ecx, dword ptr [ebp+0x14]
        cmp     ecx, dword ptr [ebp-0x10]
        jz      loc_80089
        lea     ecx, [ebx+0x10]
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_80068
        mov     eax, dword ptr [eax+0x2c]
        test    eax, eax
        jz      loc_80068
        mov     edx, dword ptr [ebx+0x18]
        mov     ecx, dword ptr [ebp-0x10]
        push    edx
        mov     edx, dword ptr [ebp-0x14]
        push    ecx
        mov     ecx, dword ptr [edx+0x18]
        push    ecx
        push    eax
        push    0x7988b8
        call    FUN_006fab90
        add     esp, 0x14
        test    eax, eax
        jz      loc_80089
        int     3
        jmp     loc_80089
loc_80068:
        mov     edx, dword ptr [ebx+0x18]
        mov     eax, dword ptr [ebp-0x10]
        mov     ecx, dword ptr [ebp-0x14]
        push    edx
        mov     edx, dword ptr [ecx+0x18]
        push    eax
        push    edx
        push    0x798870
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      loc_80089
        int     3
loc_80089:
        mov     eax, dword ptr [ebp-0x10]
        mov     ebx, dword ptr [ebp-0x14]
        inc     eax
        mov     dword ptr [ebp-0x10], eax
        mov     eax, dword ptr [ebp-0x1c]
        jmp     loc_ff8b
loc_8009b:
        mov     ebx, dword ptr [ebp-0x14]
loc_8009e:
        mov     eax, dword ptr [ebp+0x18]
        test    eax, eax
        jle     loc_8010b
        push    0x8
        lea     eax, [ebp+0x1b]
        push    eax
        mov     ecx, edi
        mov     byte ptr [ebp+0x1b], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     edi, dword ptr [eax+esi*4+0x1820]
        add     eax, 0x1818
        mov     ecx, 0x8
        add     edi, ecx
        mov     dword ptr [eax+esi*4+0x8], edi
        add     dword ptr [eax+0xc00], ecx
        cmp     byte ptr [ebp+0x1b], 0xaa
        jz      loc_8010b
        mov     ecx, dword ptr [ebx+0x18]
        push    ecx
        push    0x798854
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      loc_8010b
        int     3
loc_8010b:
        mov     edx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [g_007dab44]
        lea     ecx, [edx+0x8]
        mov     edx, dword ptr [eax]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x14]
        add     edx, 0x14
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     ebx, dword ptr [eax+esi*4+0x1820]
        add     eax, 0x1818
        add     ebx, ecx
        mov     dword ptr [eax+esi*4+0x8], ebx
        mov     edi, dword ptr [eax+0xc00]
        add     edi, ecx
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax+0xc00], edi
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx+0x1814]
        mov     edi, dword ptr [eax+esi*4+0x1820]
        add     eax, 0x1818
        mov     ecx, 0x40
        add     edi, ecx
        mov     dword ptr [eax+esi*4+0x8], edi
        add     dword ptr [eax+0xc00], ecx
loc_8017a:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x18
    }
}
