/*
 * FUN_0048f380 (691 B) — MLR image-instance allocator (__thiscall, RET 0x8).
 * Searches a hash/slot table for an existing image instance matching the
 * requested id, allocating a new one via FUN_00422510 when not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95a4;
extern int g_007b95c8;

extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00422510(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048f380(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10038]
        test    eax, eax
        push    edi
        mov     dword ptr [ebp - 0x4], 0
        jz      L_a8
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        call    eax
        add     esp, 0x4
        push    eax
        jmp     L_ac
L_a8:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
L_ac:
        lea     ecx, [ebp - 0x4]
        call    FUN_00412780
        mov     eax, dword ptr [ebp - 0x4]
        push    eax
        call    FUN_00412ab0
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [ebp - 0x14], eax
        xor     eax, eax
        add     esp, 0x4
        test    ecx, ecx
        mov     dword ptr [ebp - 0x10], eax
        jle     L_483
L_d3:
        mov     ecx, dword ptr [esi + 0x10]
        shl     eax, cl
        mov     ecx, dword ptr [esi + 0x14]
        mov     byte ptr [ebp + 0xb], 0
        lea     ebx, [eax + ecx]
        cmp     eax, ebx
        mov     dword ptr [ebp - 0x18], ebx
        jge     L_471
        lea     ecx, [esi + eax*4 + 0x28]
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, ebx
        sub     ecx, eax
L_fb:
        mov     edx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [edx]
        test    edx, edx
        jz      L_410
        mov     edi, dword ptr [ebp - 0x14]
        cmp     dword ptr [edx + 0x14], edi
        jnz     L_410
        mov     byte ptr [ebp + 0xb], 1
L_410:
        mov     edi, dword ptr [ebp - 0x8]
        add     edi, 0x4
        dec     ecx
        mov     dword ptr [ebp - 0x8], edi
        jnz     L_fb
        mov     cl, byte ptr [ebp + 0xb]
        test    cl, cl
        jz      L_471
        mov     edx, dword ptr [ebp - 0xc]
        mov     ecx, eax
L_428:
        mov     edi, dword ptr [edx]
        test    edi, edi
        jz      L_43d
        mov     ebx, dword ptr [ebp + 0xc]
        cmp     dword ptr [edi + 0x18], ebx
        jz      L_4f5
        mov     ebx, dword ptr [ebp - 0x18]
L_43d:
        inc     ecx
        add     edx, 0x4
        cmp     ecx, ebx
        jl      L_428
        cmp     eax, ebx
        mov     edi, eax
        jge     L_45f
        mov     eax, dword ptr [ebp - 0xc]
L_44e:
        cmp     dword ptr [eax], 0
        jz      L_4fb
        inc     edi
        add     eax, 0x4
        cmp     edi, ebx
        jl      L_44e
L_45f:
        push    0x76fee8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_471
        int     3
L_471:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [esi + 0x20]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x10], eax
        jl      L_d3
L_483:
        mov     eax, dword ptr [g_007b95a4]
        push    eax
        call    FUN_006f4950
        mov     eax, dword ptr [esi + 0x1002c]
        cmp     eax, dword ptr [esi + 0x10030]
        jge     L_5a1
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x10028]
        dec     ecx
        and     ecx, eax
        mov     edi, dword ptr [edx + ecx*4]
        mov     eax, dword ptr [g_007b95a4]
        mov     ecx, dword ptr [esi + 0x10]
        push    eax
        shl     edi, cl
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_575
        mov     ecx, dword ptr [g_007b95c8]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    0
        lea     edx, [edi + 1]
        push    edx
        mov     edx, dword ptr [ebp - 0x4]
        push    ecx
        push    edx
        push    esi
        mov     ecx, eax
        call    FUN_00422510
        mov     ebx, eax
        jmp     L_577
L_4f5:
        mov     esi, dword ptr [esi + ecx*4 + 0x28]
        jmp     L_550
L_4fb:
        mov     eax, dword ptr [g_007b95a4]
        push    eax
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_535
        mov     ecx, dword ptr [g_007b95c8]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    0
        lea     edx, [edi + 1]
        push    edx
        mov     edx, dword ptr [ebp - 0x4]
        push    ecx
        push    edx
        push    esi
        mov     ecx, eax
        call    FUN_00422510
        mov     ebx, eax
        jmp     L_537
L_535:
        xor     ebx, ebx
L_537:
        mov     dword ptr [esi + edi*4 + 0x28], ebx
        call    FUN_006f49a0
        push    ebx
        lea     ecx, [esi + 0x8]
        call    FUN_004179b0
        inc     dword ptr [esi + 0x24]
        mov     esi, dword ptr [esi + edi*4 + 0x28]
L_550:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      L_56a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_56a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_56a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_575:
        xor     ebx, ebx
L_577:
        lea     edi, [esi + edi*4 + 0x28]
        mov     dword ptr [edi], ebx
        call    FUN_006f49a0
        push    ebx
        lea     ecx, [esi + 0x8]
        call    FUN_004179b0
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x1002c]
        inc     ecx
        inc     eax
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x1002c], eax
        jmp     L_607
L_5a1:
        mov     eax, dword ptr [g_007b95a4]
        mov     ecx, dword ptr [esi + 0x10]
        mov     edi, dword ptr [esi + 0x20]
        push    eax
        shl     edi, cl
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5e3
        mov     ecx, dword ptr [g_007b95c8]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    0
        lea     edx, [edi + 1]
        push    edx
        mov     edx, dword ptr [ebp - 0x4]
        push    ecx
        push    edx
        push    esi
        mov     ecx, eax
        call    FUN_00422510
        mov     ebx, eax
        jmp     L_5e5
L_5e3:
        xor     ebx, ebx
L_5e5:
        lea     edi, [esi + edi*4 + 0x28]
        mov     dword ptr [edi], ebx
        call    FUN_006f49a0
        push    ebx
        lea     ecx, [esi + 0x8]
        call    FUN_004179b0
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x20]
        inc     ecx
        inc     eax
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x20], eax
L_607:
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        mov     edi, dword ptr [edi]
        jz      L_628
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_628
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_628:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
