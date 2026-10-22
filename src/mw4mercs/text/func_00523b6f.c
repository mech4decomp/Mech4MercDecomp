/*
 * FUN_00523b6f (extent 0x523b6f-0x523c4c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0052e150(void);
extern void __cdecl FUN_00540090(void);
extern void __cdecl FUN_00543ec0(void);
extern void __cdecl FUN_006f8f80(void);

__declspec(naked) void FUN_00523b6f(void)
{
    __asm {
        nop
        /* jump table DATA (10 relocated DWORDs) belonging to the preceding
           function FUN_005237f0 (targets 0x523956..0x523AE5). MSVC6 inline
           asm has no data directive (dd), and this table sits INSIDE the diff
           slice (not masked), so the literal patched addresses are emitted. */
        __emit 0x56
        __emit 0x39
        __emit 0x52
        __emit 0x00
        __emit 0x83
        __emit 0x39
        __emit 0x52
        __emit 0x00
        __emit 0xB0
        __emit 0x39
        __emit 0x52
        __emit 0x00
        __emit 0xDD
        __emit 0x39
        __emit 0x52
        __emit 0x00
        __emit 0x0A
        __emit 0x3A
        __emit 0x52
        __emit 0x00
        __emit 0x37
        __emit 0x3A
        __emit 0x52
        __emit 0x00
        __emit 0x64
        __emit 0x3A
        __emit 0x52
        __emit 0x00
        __emit 0x91
        __emit 0x3A
        __emit 0x52
        __emit 0x00
        __emit 0xBB
        __emit 0x3A
        __emit 0x52
        __emit 0x00
        __emit 0xE5
        __emit 0x3A
        __emit 0x52
        __emit 0x00
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        push    edi
        mov    edi, dword ptr [ecx]
        test    edi, edi
        jge    L_3bb4
        or    eax, 0xffffffff
        pop    edi
        ret    0xc
L_3bb4:
        cmp    edi, 0x18
        jl    L_3bc0
        or    eax, 0xffffffff
        pop    edi
        ret    0xc
L_3bc0:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, edi
        imul    ecx, ecx, 0x22ac
        push    ebx
        xor    eax, edx
        push    esi
        mov    esi, dword ptr [eax + 0xc]
        xor    esi, 0x85739531
        mov    ebx, dword ptr [ecx + esi + 0x205f38]
        lea    eax, [ecx + esi]
        lea    ecx, [eax + 0x205d24]
        call    FUN_0052e150
        push    1
        push    0
        add    edi, 0x100
        push    edi
        call    FUN_006f8f80
        cmp    ebx, 8
        je    L_3c3a
        mov    ecx, esi
        call    FUN_00543ec0
        mov    edi, eax
        test    edi, edi
        je    L_3c3a
        mov    eax, dword ptr [g_007db090]
        mov    edx, dword ptr [esi]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x28]
        push    edi
        push    0
        push    0
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x30]
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_3c3a:
        mov    ecx, esi
        call    FUN_00540090
        pop    esi
        pop    ebx
        mov    eax, 1
        pop    edi
        ret    0xc
    }
}
