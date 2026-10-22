/*
 * FUN_007348a7 (extent 0x7348a7-0x73499a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007a6110;
extern int    g_0085b218;
extern void __cdecl FUN_00717ac0(void);
extern void __cdecl FUN_00717b30(void);
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b4a0(void);
extern void __cdecl FUN_0075b690(void);
extern void __cdecl FUN_0075b6e0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075dca0(void);

__declspec(naked) void FUN_007348a7(void)
{
    __asm {
        nop    
        adc    cl, byte ptr [eax + 0x73]
        add    byte ptr [edx], dl
        dec    eax
        jae    L_48b0
L_48b0:
        adc    cl, byte ptr [eax + 0x73]
        add    byte ptr [ebx - 0x70ff8cb8], al
        dec    eax
        jae    L_48bc
L_48bc:
        wait    
        dec    eax
        jae    L_48c0
L_48c0:
        sub    esp, 0x24
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 4]
        lea    eax, [esp + 0xc]
        push    eax
        push    edi
        call    FUN_0075b6e0
        fld    qword ptr [esp + 0x34]
        fmul    qword ptr [g_007a6110]
        call    FUN_0075db4a
        mov    ecx, dword ptr [esp + 0xc]
        sub    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        sbb    eax, edx
        mov    edx, dword ptr [esi + 0xf0]
        push    edx
        mov    edx, dword ptr [esi + 0xec]
        push    edx
        push    eax
        push    ecx
        call    FUN_0075dca0
        push    edx
        push    eax
        push    edi
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_0075b0d0
        mov    eax, dword ptr [g_0085b218]
        test    eax, eax
        jne    L_4972
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esi + 0x100]
        cmp    eax, ecx
        lea    ebx, [esi + 0xfc]
        jg    L_4972
        jl    L_493d
        mov    ecx, dword ptr [esp + 0xc]
        cmp    ecx, dword ptr [ebx]
        jae    L_4972
L_493d:
        mov    edi, dword ptr [esi + 0x18]
        push    0
        push    0
        push    0
        push    0
        push    edi
        call    FUN_0075b4a0
        lea    edx, [esp + 0xc]
        push    edx
        push    ebx
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        call    FUN_0075b690
        mov    ecx, dword ptr [esp + 0x10]
        cmp    ecx, dword ptr [ebx + 4]
        jl    L_493d
        jg    L_4972
        mov    edx, dword ptr [esp + 0xc]
        cmp    edx, dword ptr [ebx]
        jb    L_493d
L_4972:
        mov    esi, dword ptr [esi + 0xe8]
        test    esi, esi
        je    L_4991
        lea    eax, [esp + 0x1c]
        push    eax
        push    0
        push    0
        push    esi
        call    FUN_00717b30
        push    esi
        call    FUN_00717ac0
L_4991:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x24
        ret    8
    }
}
