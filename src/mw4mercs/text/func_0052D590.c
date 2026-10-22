/*
 * FUN_0052D590 (833 B) — __thiscall (ECX = this) config/options loader.
 *
 * Reads a config object (via FUN_0040ecc0) and populates a large set of
 * fields on `this` (ebp) by calling the string-keyed loader FUN_00411cb0
 * with many key strings, clamping several numeric fields. Then reads a
 * text buffer (FUN_00411bf0), copies it, and processes a multi-line
 * section (FUN_0041de80 / FUN_0041e790 / _mbscpy IAT) into a buffer at
 * this+0x8f8. Finally loops 8 times building per-slot strings via sprintf
 * (IAT 0x76b420) and calling FUN_00412390 / FUN_0052b9d0. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* (__cdecl *g_76b410)(void*, const void*);   /* IAT 0x76b410: _mbscpy */
extern int   (__cdecl *g_76b420)(char*, const char*, ...); /* IAT 0x76b420: sprintf */

extern void __cdecl FUN_004d3460(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041e790(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_0052b9d0(void);
extern void __cdecl FUN_0040de20(void);

__declspec(naked) void FUN_0052D590(void)
{
    __asm {
        sub     esp, 0x48c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x49c]
        mov     ebp, ecx
        push    esi
        call    FUN_004d3460
        push    0x7727b4
        mov     ecx, esi
        call    FUN_0040ecc0
        mov     ebx, eax
        test    ebx, ebx
        je      L_52d8c5
        push    0
        lea     eax, [ebp + 0x30]
        push    eax
        push    0x77ac64
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     ecx, [ebp + 0x34]
        push    ecx
        push    0x77ac54
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     edx, [ebp + 0x38]
        push    edx
        push    0x77ac44
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     eax, [ebp + 0x3c]
        push    eax
        push    0x77ac30
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     esi, [ebp + 0x40]
        push    esi
        push    0x77ac1c
        mov     ecx, ebx
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        test    eax, eax
        jge     L_52d626
        mov     dword ptr [esi], 0
        jmp     L_52d631
L_52d626:
        cmp     eax, 9
        jle     L_52d631
        mov     dword ptr [esi], 9
L_52d631:
        push    0
        lea     ecx, [ebp + 0x6c]
        push    ecx
        push    0x77ab90
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     edx, [ebp + 0x70]
        push    edx
        push    0x77ab88
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     eax, [ebp + 0x80]
        push    eax
        push    0x77ab7c
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     ecx, [ebp + 0x84]
        push    ecx
        push    0x77ab60
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     edx, [ebp + 0x88]
        push    edx
        push    0x77a4b0
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     esi, [ebp + 0x8c]
        push    esi
        push    0x77a4c0
        mov     ecx, ebx
        call    FUN_00411cb0
        cmp     dword ptr [esi], 0x64
        jle     L_52d6b4
        mov     dword ptr [esi], 0x64
L_52d6b4:
        push    0
        lea     esi, [ebp + 0x90]
        push    esi
        push    0x77a9e4
        mov     ecx, ebx
        call    FUN_00411cb0
        cmp     dword ptr [esi], 0x2160ec0
        jle     L_52d6d7
        mov     dword ptr [esi], 0x2160ec0
L_52d6d7:
        push    0
        lea     eax, [ebp + 0x94]
        push    eax
        push    0x77ab54
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     ecx, [ebp + 0xe4]
        push    ecx
        push    0x77aadc
        mov     ecx, ebx
        call    FUN_00411cb0
        push    0
        lea     esi, [ebp + 0xe8]
        push    esi
        push    0x77aad0
        mov     ecx, ebx
        call    FUN_00411cb0
        mov     eax, dword ptr [esi]
        cmp     eax, 2
        jge     L_52d725
        mov     dword ptr [esi], 2
        jmp     L_52d730
L_52d725:
        cmp     eax, 8
        jle     L_52d730
        mov     dword ptr [esi], 8
L_52d730:
        push    edi
        push    0
        lea     edx, [esp + 0x18]
        push    edx
        push    0x77aa50
        mov     ecx, ebx
        mov     dword ptr [esp + 0x20], 0
        call    FUN_00411bf0
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        je      L_52d779
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebp + 0x7f8]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     L_52d780
L_52d779:
        mov     byte ptr [ebp + 0x7f8], 0
L_52d780:
        xor     esi, esi
        push    esi
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x77ace0
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], esi
        call    FUN_00411bf0
        test    al, al
        je      L_52d85f
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        je      L_52d866
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041de80
        push    esi
        push    0x400
        lea     ecx, [esp + 0xa4]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0041e790
        test    al, al
        je      L_52d84c
L_52d7dc:
        cmp     esi, 0x400
        jge     L_52d84c
        xor     eax, eax
        or      ecx, 0xffffffff
        lea     edi, [esp + 0x9c]
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, 0x400
        mov     edi, ecx
        sub     eax, esi
        cmp     edi, eax
        jle     L_52d804
        mov     edi, eax
L_52d804:
        lea     edx, [esp + 0x9c]
        push    edx
        lea     eax, [esi + ebp + 0x8f8]
        push    eax
        mov     byte ptr [esp + edi + 0xa4], 0
        call    dword ptr [g_76b410]
        add     esp, 8
        push    0
        push    0x400
        lea     ecx, [esp + 0xa4]
        add     esi, edi
        push    ecx
        mov     byte ptr [esi + ebp + 0x8f8], 0xa
        lea     ecx, [esp + 0x24]
        inc     esi
        call    FUN_0041e790
        test    al, al
        jne     L_52d7dc
L_52d84c:
        lea     ecx, [esp + 0x18]
        mov     byte ptr [esi + ebp + 0x8f7], 0
        call    FUN_0041dec0
        jmp     L_52d866
L_52d85f:
        mov     byte ptr [ebp + 0x8f8], 0
L_52d866:
        mov     edi, dword ptr [g_76b420]
        xor     esi, esi
        add     ebp, 0xec
L_52d874:
        push    0
        lea     ecx, [esp + 0x50]
        call    FUN_0040dd50
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x77aa48
        push    edx
        call    edi
        add     esp, 0xc
        push    0
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebx
        call    FUN_00412390
        test    al, al
        je      L_52d8b2
        lea     edx, [esp + 0x4c]
        push    edx
        mov     ecx, ebp
        call    FUN_0052b9d0
L_52d8b2:
        lea     ecx, [esp + 0x4c]
        call    FUN_0040de20
        inc     esi
        add     ebp, 0x50
        cmp     esi, 8
        jl      L_52d874
        pop     edi
L_52d8c5:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x48c
        ret     4
    }
}
