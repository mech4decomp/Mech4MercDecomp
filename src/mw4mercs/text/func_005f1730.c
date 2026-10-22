/*
 * FUN_005f1730 (1547 B) — __thiscall dispatcher with a 10-entry jump table.
 *
 * Validates a global/state, builds a sub-object, then switches on this->field_0
 * (0..9) via a jump table at 0x5F1D3C. Each case appends one or more 32-bit
 * values to a growing buffer (local_14), then a common tail iterates the
 * buffer calling FUN_0063b2e0 per element.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_005faef0(void);
extern int  __stdcall FUN_0063af40(int a);
extern void __stdcall FUN_005f2980(void *a);
extern void __stdcall FUN_005f29a0(void *a, void *b, int c);
extern void __stdcall FUN_005f2ab0(void *a, void *b);
extern void __stdcall FUN_005f28a0(void *a);
extern void __stdcall FUN_005f2780(void *a);
extern char __stdcall FUN_0063b2e0(int a, int b, void *c);
extern void __stdcall FUN_005f27b0(void *a);
extern void __stdcall FUN_0065d1c0(void *a, void *b);
extern void __stdcall FUN_005f27a0(void);
extern void __stdcall FUN_005f2890(void);

__declspec(naked) void __stdcall FUN_005f1730(void *p1, void *p2)
{
    

extern int DAT_007dd268;
__asm {
sub     esp, 0x74
        push    esi
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0x80]
        test    ecx, ecx
        mov     dword ptr [esp + 0x60], edi
        jz      L1D31
        call    FUN_005faef0
        mov     ecx, dword ptr [eax + 4]
        sub     ecx, dword ptr [eax]
        test    ecx, 0xFFFFFFFC
        jz      L1D31
        mov eax, dword ptr [DAT_007dd268]
        test    eax, eax
        mov     esi, 2
        jz      L1796
        cmp     dword ptr [eax + 0x40EE0], esi
        jnz     L1796
        push    0x3B6
        mov     byte ptr [esp + 0xE], 1
        call    FUN_0063af40
        add     esp, 4
        cmp     eax, esi
        jge     L17BB
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x74
        ret     8
L1796:
        push    1
        mov     byte ptr [esp + 0xE], 0
        call    FUN_0063af40
        add     esp, 4
        cmp     eax, esi
        jge     L17BB
        push    esi
        call    FUN_0063af40
        add     esp, 4
        cmp     eax, 1
        jl      L1D31
L17BB:
        lea     edx, [esp + 0xB]
        push    edx
        lea     ecx, [esp + 0x68]
        call    FUN_005f2980
        mov     eax, dword ptr [edi]
        cmp     eax, 9
        ja      L1D28
        mov     edi, 4
        jmp     dword ptr [eax*4 + 0x5F1D3C]
L17E0:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x44], 1
        jz      L180B
        test    eax, eax
        jz      L1800
        mov     dword ptr [eax], 1
        mov     eax, dword ptr [esp + 0x68]
L1800:
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L180B:
        push    1
        lea     ecx, [esp + 0x48]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L1821:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x48], esi
        jz      L1844
        test    eax, eax
        jz      L1839
        mov     dword ptr [eax], esi
        mov     eax, dword ptr [esp + 0x68]
L1839:
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L1844:
        push    1
        lea     edx, [esp + 0x4C]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L185A:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x4C], 3
        jz      L1885
        test    eax, eax
        jz      L187A
        mov     dword ptr [eax], 3
        mov     eax, dword ptr [esp + 0x68]
L187A:
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L1885:
        push    1
        lea     ecx, [esp + 0x50]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L189B:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x50], 1
        jz      L18C3
        test    eax, eax
        jz      L18BB
        mov     dword ptr [eax], 1
        mov     eax, dword ptr [esp + 0x68]
L18BB:
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L18D8
L18C3:
        push    1
        lea     edx, [esp + 0x54]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L18D8:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0xC], esi
        jz      L18FC
        lea     ecx, [esp + 0xC]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1911
L18FC:
        push    1
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1911:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x10], 3
        jz      L193C
        lea     ecx, [esp + 0x10]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L193C:
        push    1
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L1952:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x14], edi
        jz      L197D
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L197D:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L1993:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x18], 5
        jz      L19C2
        lea     ecx, [esp + 0x18]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L19C2:
        push    1
        lea     edx, [esp + 0x1C]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L19D8:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x1C], 6
        jz      L1A07
        lea     ecx, [esp + 0x1C]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L1A07:
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L1A1D:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x20], 7
        jz      L1A4C
        lea     ecx, [esp + 0x20]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L1A4C:
        push    1
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L1A62:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x24], edi
        jz      L1A8A
        lea     ecx, [esp + 0x24]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1A9F
L1A8A:
        push    1
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1A9F:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x28], 5
        jz      L1AC7
        lea     ecx, [esp + 0x28]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1ADC
L1AC7:
        push    1
        lea     edx, [esp + 0x2C]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1ADC:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x2C], 6
        jz      L1B04
        lea     ecx, [esp + 0x2C]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1B19
L1B04:
        push    1
        lea     edx, [esp + 0x30]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1B19:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x30], 7
        jz      L1B44
        lea     ecx, [esp + 0x30]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C88
L1B44:
        push    1
        lea     edx, [esp + 0x34]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        jmp     L1C88
L1B5A:
        mov     eax, dword ptr [esp + 0x68]
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x34], 1
        jz      L1B86
        lea     ecx, [esp + 0x34]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1B9B
L1B86:
        push    1
        lea     edx, [esp + 0x38]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1B9B:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x38], esi
        jz      L1BBF
        lea     ecx, [esp + 0x38]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1BD4
L1BBF:
        push    1
        lea     edx, [esp + 0x3C]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1BD4:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x3C], 3
        jz      L1BFC
        lea     ecx, [esp + 0x3C]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C11
L1BFC:
        push    1
        lea     edx, [esp + 0x40]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
        mov     eax, dword ptr [esp + 0x68]
L1C11:
        cmp     eax, dword ptr [esp + 0x6C]
        mov     dword ptr [esp + 0x40], edi
        jz      L1C35
        lea     ecx, [esp + 0x40]
        push    ecx
        push    eax
        call    FUN_005f2ab0
        mov     eax, dword ptr [esp + 0x70]
        add     esp, 8
        add     eax, edi
        mov     dword ptr [esp + 0x68], eax
        jmp     L1C46
L1C35:
        push    1
        lea     edx, [esp + 0x44]
        push    edx
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_005f29a0
L1C46:
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x58], 5
        call    FUN_005f28a0
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x5C], 6
        call    FUN_005f28a0
        lea     edx, [esp + 0x5C]
        push    edx
        lea     ecx, [esp + 0x68]
        mov     dword ptr [esp + 0x60], 7
        call    FUN_005f28a0
L1C88:
        lea     eax, [esp + 0xB]
        push    eax
        lea     ecx, [esp + 0x74]
        call    FUN_005f2780
        mov     eax, dword ptr [esp + 0x64]
        cmp     eax, dword ptr [esp + 0x68]
        mov     esi, eax
        jz      L1CED
L1CA2:
        mov     eax, dword ptr [esi]
        cmp     eax, 3
        ja      L1CBA
        mov     cl, byte ptr [esp + 0xA]
        neg     cl
        sbb     ecx, ecx
        and     ecx, 0x3B5
        inc     ecx
        jmp     L1CC2
L1CBA:
        mov     ecx, 2
        add     eax, -4
L1CC2:
        lea     edx, [esp + 0x5C]
        push    edx
        push    eax
        push    ecx
        call    FUN_0063b2e0
        add     esp, 0xC
        cmp     al, 1
        jnz     L1CE3
        lea     eax, [esp + 0x5C]
        push    eax
        lea     ecx, [esp + 0x74]
        call    FUN_005f27b0
L1CE3:
        mov     eax, dword ptr [esp + 0x68]
        add     esi, edi
        cmp     esi, eax
        jnz     L1CA2
L1CED:
        mov     edx, dword ptr [esp + 0x84]
        lea     ecx, [esp + 0x70]
        push    ecx
        push    edx
        call    FUN_0065d1c0
        mov     eax, dword ptr [esp + 0x68]
        add     esp, 8
        lea     ecx, [esp + 0x70]
        mov     dword ptr [eax], 0xA
        call    FUN_005f27a0
        lea     ecx, [esp + 0x64]
        call    FUN_005f2890
        pop     edi
        mov     al, 1
        pop     esi
        add     esp, 0x74
        ret     8
L1D28:
        lea     ecx, [esp + 0x64]
        call    FUN_005f2890
L1D31:
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x74
        ret     8
    }


}
