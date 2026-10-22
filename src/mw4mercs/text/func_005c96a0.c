/*
 * FUN_005c96a0 (351 B) - __thiscall (this in ECX), RET 0xc. Computes a vector,
 * iterates a list, and calls into several helpers. FPU-heavy.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_005cb4c0(void);
extern void __cdecl FUN_00684050(void);
extern void __cdecl FUN_00683b90(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00682f70(void);
extern void __cdecl FUN_0050e1b0(void);
extern void __cdecl FUN_005ef6e0(void);

__declspec(naked) void __cdecl FUN_005c96a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    ebx
        push    esi
        mov     esi, [ebp + 0x8]
        mov     eax, [esi + 0xd8]
        push    edi
        add     eax, 0x80
        mov     edi, ecx
        push    eax
        lea     ecx, [ebp - 0x20]
        call    FUN_00419480
        mov     ecx, [edi + 0x170]
        mov     eax, [ecx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     edx, [eax + 0x9c]
        fsub    dword ptr [ebp - 0x20]
        add     eax, 0x80
        mov     eax, [eax + 0x2c]
        mov     [ebp - 0x28], edx
        fstp    dword ptr [ebp - 0x14]
        mov     [ebp - 0x24], eax
        fld     dword ptr [ebp - 0x28]
        lea     ecx, [ebp - 0x14]
        fsub    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0xc]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0x8]
        mov     eax, [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        mov     eax, [edi + 0x170]
        mov     ebx, [eax + 0x3f8]
        mov     cl, byte ptr [ebp + 0xc]
        add     eax, 0x3f8
        xor     eax, eax
        cmp     cl, 0x1
        fstp    dword ptr [ebp - 0x8]
        mov     [ebp + 0x8], eax
        jnz     l_9799
        lea     ecx, [ebp - 0x4]
        push    ecx
        lea     edx, [ebp + 0xf]
        push    edx
        lea     ecx, [ebp - 0xc]
        mov     [ebp - 0x14], eax
        mov     [ebp - 0x10], eax
        mov     [ebp - 0x4], eax
        call    FUN_005cb4c0
        lea     eax, [ebp - 0x14]
        push    eax
        add     esi, 0x370
        push    esi
        call    FUN_00684050
        mov     ecx, [ebp - 0x10]
        sub     ecx, [ebp - 0x14]
        add     esp, 0x8
        sar     ecx, 0x2
        jz      l_9789
        lea     edx, [ebp - 0x14]
        push    edx
        call    FUN_00683b90
        add     esp, 0x4
        test    eax, eax
        jz      l_9789
        mov     eax, [eax + 0x24]
        mov     [ebp + 0x8], eax
    l_9789:
        mov     eax, [ebp - 0x14]
        test    eax, eax
        jz      l_9799
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_9799:
        test    ebx, ebx
        jz      l_97f6
        mov     esi, [ebx]
        test    esi, esi
        mov     ebx, [ebx + 0x4]
        jz      l_97f6
        fld     dword ptr [edi + 0x52c]
        mov     ecx, [ebp - 0x8]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [edi + 0x528]
        fstp    qword ptr [esp]
        push    ecx
        push    esi
        call    FUN_00682f70
        add     esp, 0x18
        test    al, al
        jz      l_9799
        mov     edx, [esi + 0x1ac]
        push    edx
        call    FUN_0050e1b0
        add     esp, 0x4
        cmp     eax, -0x1
        jz      l_97e9
        cmp     byte ptr [ebp + 0x10], 0x1
        jnz     l_9799
    l_97e9:
        mov     eax, [ebp + 0x8]
        push    eax
        mov     ecx, esi
        call    FUN_005ef6e0
        jmp     l_9799
    l_97f6:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
