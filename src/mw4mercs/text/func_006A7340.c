/*
 * In-.text data block 0x6A7169 (434 B) — single __stdcall function (RET 0xc,
 * 3 params). Reads a vector from a vtable[0x34/4] object, runs a loop (0x28
 * iterations) that transforms three floats via a helper + two constants
 * (0x76d04c/0x76d048), and grows/reallocates a 0xc-byte-element array
 * (division-by-3 via 0x2aaaaaab magic) copying elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_005CBB20(void);
extern void __cdecl FUN_0040C5D0(void);
extern void __cdecl FUN_004084E0(void);
extern float g_76D04C;
extern float g_76D048;

__declspec(naked) void FUN_006A7340(void)
{
    __asm {
        sub     esp, 0x24
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x10], 0x28
L6A737E:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00415020
        fmul    dword ptr [g_76D04C]
        fsub    dword ptr [g_76D048]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00415020
        fmul    dword ptr [g_76D04C]
        fsub    dword ptr [g_76D048]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00415020
        fmul    dword ptr [g_76D04C]
        mov     eax, dword ptr [esp + 0x3c]
        mov     esi, dword ptr [eax + 4]
        cmp     esi, dword ptr [eax + 8]
        fsub    dword ptr [g_76D048]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        je      L6A7410
        test    esi, esi
        je      L6A7405
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi], ecx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 4], edx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 8], ecx
L6A7405:
        add     esi, 0xc
        mov     dword ptr [eax + 4], esi
        jmp     L6A74DE
L6A7410:
        mov     ebp, dword ptr [eax]
        mov     ecx, esi
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 1
        mov     dword ptr [esp + 0x38], 1
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esp + 0x38]
        jb      L6A743F
        lea     eax, [esp + 0x14]
L6A743F:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x14], eax
        je      L6A745E
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        push    ecx
        call    FUN_004084D0
        add     esp, 4
        mov     dword ptr [esp + 0x38], eax
        jmp     L6A7466
L6A745E:
        mov     dword ptr [esp + 0x38], 0
L6A7466:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x38]
        je      L6A7484
        mov     ebx, ebp
L6A7470:
        push    ebx
        push    edi
        call    FUN_005CBB20
        add     ebx, 0xc
        add     esp, 8
        add     edi, 0xc
        cmp     ebx, esi
        jne     L6A7470
L6A7484:
        test    edi, edi
        je      L6A7494
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, edi
        call    FUN_0040C5D0
L6A7494:
        add     edi, 0xc
        cmp     esi, esi
        mov     ebx, edi
        je      L6A74B3
        mov     edi, esi
L6A749F:
        push    edi
        push    ebx
        call    FUN_005CBB20
        add     edi, 0xc
        add     esp, 8
        add     ebx, 0xc
        cmp     edi, esi
        jne     L6A749F
L6A74B3:
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], ebp
        je      L6A74C4
        push    ebp
        call    FUN_004084E0
        add     esp, 4
L6A74C4:
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x14]
        lea     ecx, [ecx + ecx*2]
        mov     dword ptr [eax], edx
        lea     edx, [edx + ecx*4]
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax + 8], edx
L6A74DE:
        dec     dword ptr [esp + 0x10]
        jne     L6A737E
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0xc
    }
}
