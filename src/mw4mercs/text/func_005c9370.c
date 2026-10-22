/*
 * FUN_005c9370 (559 B) - __thiscall, RET 4. Iterates a list via FUN_0040c0e0,
 * computes a direction vector (FPU-heavy) and stores 3 floats to param_1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0050e1b0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_005c9290(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c5d0(void);

__declspec(naked) void __cdecl FUN_005c9370(void)
{
    
__asm {
sub     esp, 0x58
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        lea     ebp, [ebx + 0x1c8]
        push    edi
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      l_9574
        mov     edi, [ebx + 0x170]
        lea     ecx, [edi + 0x400]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_9574
        lea     eax, [edi + 0x3f8]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_004c41d0
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], 0x77d13c
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      l_940d
    l_93ce:
        mov     ecx, [esi + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jnz     l_93fe
        mov     edx, [esi + 0x1ac]
        push    edx
        call    FUN_0050e1b0
        add     esp, 0x4
        test    eax, eax
        jle     l_93fe
        _emit   0xA1            /* __emit: mov eax,[imm32] -> MSVC6 encodes as immediate load (B8) */
        _emit   0xAC
        _emit   0x20
        _emit   0x7F
        _emit   0x00
        mov     ecx, [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jz      l_9425
    l_93fe:
        lea     ecx, [esp + 0x20]
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     l_93ce
    l_940d:
        mov     eax, [esp + 0x6c]
        pop     edi
        pop     esi
        xor     ecx, ecx
        pop     ebp
        mov     [eax], ecx
        mov     [eax + 0x4], ecx
        mov     [eax + 0x8], ecx
        pop     ebx
        add     esp, 0x58
        ret     0x4
    l_9425:
        mov     eax, [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_00419480
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_00419480
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x34]
        call    FUN_0040ca10
        lea     ecx, [esp + 0x2c]
        call    FUN_0040cb00
        fstp    st(0)
        lea     ecx, [esp + 0x2c]
        call    FUN_0040cb00
        fsqrt
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_005c9290
        fstp    dword ptr [esp + 0x18]
        mov     eax, [ebx + 0x170]
        lea     esi, [eax + 0x400]
        add     esp, 0x8
        mov     ecx, esi
        call    FUN_0041fd80
        mov     ecx, [eax + 0xd8]
        lea     eax, [esp + 0x38]
        add     ecx, 0x80
        push    eax
        call    FUN_00428730
        mov     ecx, [esp + 0x38]
        mov     edx, [esp + 0x40]
        mov     [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        mov     [esp + 0x1c], edx
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_0040cb00
        fsqrt
        mov     ecx, esi
        _emit   0xD8            /* __emit: fdivr dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x3D
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        fld     dword ptr [esp + 0x14]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x14]
        fld     st(0)
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fmul    st, st(1)
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        call    FUN_0041fd80
        mov     eax, [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_00419480
        push    0x42c80000
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_0040ca40
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c9e0
        fld     dword ptr [esp + 0x10]
        fptan
        fstp    st(0)
        _emit   0xD8            /* __emit: fmul dword ptr [imm32] -> FPU mem operand w/ abs addr */
        _emit   0x0D
        _emit   0x48
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        mov     eax, [esp + 0x6c]
        mov     ecx, [esp + 0x1c]
        pop     edi
        fadd    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x10]
        pop     esi
        fstp    dword ptr [eax]
        pop     ebp
        mov     [eax + 0x8], ecx
        fstp    dword ptr [eax + 0x4]
        pop     ebx
        add     esp, 0x58
        ret     0x4
    l_9574:
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x68]
        call    FUN_0040c9c0
        mov     esi, [esp + 0x6c]
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_0040c5d0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret     0x4
    }


}
