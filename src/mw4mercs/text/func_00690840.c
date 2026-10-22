/*
 * FUN_00690840 (2103 B) — Large pathfinding/grid update routine.
 *
 * __fastcall (ECX = this). Heavy integer math (div-by-10 via 0x66666667
 * magic), linked-list manipulation, and a 0x80x0x80 grid table at 0x80db0c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006907a0(void);
extern void __cdecl FUN_006907f0(void);
extern void __cdecl FUN_006919a0(void);
extern void __cdecl FUN_005d8c20(void);
extern void __cdecl FUN_005d8a30(void);
extern void __cdecl FUN_00691a30(void);
extern void __cdecl FUN_006918f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00691af0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00691890(void);

extern int g_7f2464;
extern int g_7f2438;
extern int g_82db10;
extern int g_82db0c;
extern int g_7b5c50;
extern int g_7b5c54;
extern float g_770168;

__declspec(naked) void __fastcall FUN_00690840(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x44
        mov     eax, dword ptr [g_7f2464]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        mov     dword ptr [ebp - 4], esi
        call    FUN_006f4950
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [esi + 0x18]
        mov     dword ptr [ebp - 0x24], edx
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [esi + 0x1c]
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [ebp - 0x28], edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [esi + 0x20]
        mov     dword ptr [ebp - 0x18], edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        xor     ebx, ebx
        shr     eax, 0x1f
        add     edx, eax
        mov     byte ptr [esi + 0x26], bl
        mov     dword ptr [ebp - 0x2c], edx
        mov     byte ptr [esi + 0x24], bl
        xor     eax, eax
L08BF:
        inc     eax
        cmp     eax, 0xfa
        mov     dword ptr [ebp - 0x14], eax
        jg      L0BE8
        cmp     dword ptr [esi + 0x3c], ebx
        jz      L0BE1
        mov     ecx, dword ptr [esi + 0x3c]
        lea     eax, [esi + 0x34]
        dec     ecx
        mov     dword ptr [eax + 8], ecx
        mov     eax, dword ptr [eax + 4]
        mov     esi, eax
        mov     edi, dword ptr [esi]
        cmp     edi, ebx
        mov     dword ptr [ebp - 0x10], eax
        jz      L093F
L08EF:
        mov     ebx, dword ptr [edi + 0xc]
        mov     eax, dword ptr [edi + 8]
        push    ebx
        push    eax
        call    FUN_006907a0
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [edi + 8]
        push    ebx
        push    eax
        call    FUN_006907f0
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 8]
        push    ecx
        push    edx
        mov     ebx, eax
        call    FUN_006907a0
        mov     ecx, dword ptr [esi + 8]
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        push    ecx
        call    FUN_006907f0
        add     eax, dword ptr [ebp - 0x20]
        mov     edx, dword ptr [ebp - 0x1c]
        add     ebx, edx
        add     esp, 0x20
        cmp     ebx, eax
        jge     L0939
        mov     esi, edi
L0939:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L08EF
L093F:
        mov     ecx, dword ptr [esi + 4]
        test    ecx, ecx
        jz      L094A
        mov     eax, dword ptr [esi]
        mov     dword ptr [ecx], eax
L094A:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L0953
        mov     dword ptr [eax + 4], ecx
L0953:
        cmp     dword ptr [ebp - 0x10], esi
        jnz     L0961
        mov     ecx, dword ptr [ebp - 4]
        add     ecx, 0x34
        mov     dword ptr [ecx + 4], eax
L0961:
        test    esi, esi
        mov     edi, dword ptr [esi + 8]
        mov     ebx, dword ptr [esi + 0xc]
        mov     dword ptr [ebp - 0x44], edi
        mov     dword ptr [ebp - 0x40], ebx
        jz      L097A
        push    0x1
        mov     ecx, esi
        call    FUN_006919a0
L097A:
        mov     ecx, dword ptr [ebp - 0x18]
        cmp     ecx, edi
        jnz     L098C
        mov     esi, dword ptr [ebp - 0x2c]
        cmp     esi, ebx
        jz      L0C86
L098C:
        push    ebx
        push    edi
        call    FUN_006907a0
        add     esp, 8
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 8], 0
        mov     dword ptr [ebp - 0x10], 0x7b5c60
L09A7:
        mov     eax, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [eax - 0xc]
        mov     ebx, dword ptr [ebp - 0x40]
        mov     esi, dword ptr [eax - 0x10]
        mov     eax, dword ptr [ebp - 4]
        mov     edx, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 0x44]
        add     edi, ebx
        xor     ebx, ebx
        mov     bx, word ptr [eax + 0x2c]
        add     esi, ecx
        mov     ecx, dword ptr [eax + 0x30]
        mov     dword ptr [ebp - 0x20], ecx
        push    ebx
        push    edx
        push    edi
        push    esi
        call    FUN_005d8c20
        test    al, al
        jz      L0BB9
        mov     ecx, dword ptr [ebp - 0x20]
        push    ebx
        mov     ebx, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebx - 4]
        push    eax
        push    edi
        push    esi
        call    FUN_005d8a30
        test    eax, eax
        jnz     L09FA
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [ebp - 0xc], ecx
        jmp     L0A29
L09FA:
        cmp     eax, 0x1
        jnz     L0A15
        mov     eax, dword ptr [ebx]
        xor     edx, edx
        cmp     eax, 0xa
        setnz   dl
        dec     edx
        and     edx, 0xfffffff9
        add     edx, 0x15
        mov     dword ptr [ebp - 0xc], edx
        jmp     L0A29
L0A15:
        mov     ecx, dword ptr [ebx]
        xor     eax, eax
        cmp     ecx, 0xa
        setnz   al
        dec     eax
        and     eax, 0xfffffffa
        add     eax, 0x13
        mov     dword ptr [ebp - 0xc], eax
L0A29:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0xc]
        mov     ebx, dword ptr [ebp - 4]
        add     edx, ecx
        mov     ecx, dword ptr [ebx + 0x1c]
        mov     dword ptr [ebp - 0xc], edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     edx, dword ptr [ebx + 0x20]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebx, edx
        sub     ecx, esi
        sub     ebx, edi
        test    ecx, ecx
        jge     L0A6D
        neg     ecx
L0A6D:
        test    ebx, ebx
        jge     L0A73
        neg     ebx
L0A73:
        cmp     ebx, ecx
        jge     L0A82
        mov     eax, ebx
        cdq
        sub     eax, edx
        sar     eax, 1
        add     eax, ecx
        jmp     L0A8B
L0A82:
        mov     eax, ecx
        cdq
        sub     eax, edx
        sar     eax, 1
        add     eax, ebx
L0A8B:
        mov     ecx, dword ptr [g_82db10]
        lea     ebx, [eax + eax*4]
        shl     ebx, 1
        mov     eax, esi
        sub     eax, ecx
        mov     dword ptr [ebp - 0x20], ebx
        js      L0BB9
        mov     edx, dword ptr [g_82db0c]
        mov     ecx, edi
        sub     ecx, edx
        js      L0BB9
        cmp     eax, 0x80
        jge     L0BB9
        cmp     ecx, 0x80
        jge     L0BB9
        push    edi
        push    esi
        call    FUN_006907a0
        add     esp, 8
        test    eax, eax
        jz      L0B00
        push    edi
        push    esi
        call    FUN_006907f0
        push    edi
        push    esi
        mov     ebx, eax
        call    FUN_006907a0
        mov     ecx, dword ptr [ebp - 0xc]
        add     ebx, eax
        mov     eax, ebx
        mov     ebx, dword ptr [ebp - 0x20]
        lea     edx, [ebx + ecx]
        add     esp, 0x10
        cmp     eax, edx
        jc      L0BB9
L0B00:
        mov     edx, dword ptr [g_82db10]
        mov     ecx, esi
        sub     ecx, edx
        mov     edx, dword ptr [g_82db0c]
        shl     ecx, 7
        mov     eax, ecx
        sub     eax, edx
        mov     edx, dword ptr [ebp - 0xc]
        add     eax, edi
        shl     eax, 3
        mov     dword ptr [eax + 0x80db0c], edx
        mov     dword ptr [eax + 0x80db10], ebx
        mov     eax, dword ptr [ebp - 4]
        mov     eax, dword ptr [eax + 0x38]
        test    eax, eax
        mov     dword ptr [ebp - 0x3c], esi
        mov     dword ptr [ebp - 0x38], edi
        jz      L0B6F
L0B3B:
        cmp     esi, dword ptr [eax + 8]
        jnz     L0B45
        cmp     edi, dword ptr [eax + 0xc]
        jz      L0B4D
L0B45:
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      L0B6F
        jmp     L0B3B
L0B4D:
        mov     edx, dword ptr [ebp - 4]
        lea     ecx, [ebp - 0x3c]
        lea     esi, [edx + 0x34]
        push    ecx
        mov     ecx, esi
        call    FUN_00691a30
        test    al, al
        jz      L0BB9
        lea     eax, [ebp - 0x3c]
        push    eax
        mov     ecx, esi
        call    FUN_006918f0
        jmp     L0BB9
L0B6F:
        push    0x10
        call    FUN_004084d0
        xor     esi, esi
        add     esp, 4
        cmp     eax, esi
        jz      L0B98
        mov     dword ptr [eax + 8], esi
        mov     dword ptr [eax + 0xc], esi
        mov     ecx, dword ptr [ebp - 0x3c]
        mov     dword ptr [eax + 8], ecx
        mov     edx, dword ptr [ebp - 0x38]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 4], esi
        mov     dword ptr [eax], esi
        jmp     L0B9A
L0B98:
        xor     eax, eax
L0B9A:
        mov     ecx, dword ptr [ebp - 4]
        mov     ebx, dword ptr [ecx + 0x3c]
        mov     edx, dword ptr [ecx + 0x38]
        add     ecx, 0x34
        inc     ebx
        cmp     edx, esi
        mov     dword ptr [eax + 4], esi
        mov     dword ptr [ecx + 8], ebx
        mov     dword ptr [eax], edx
        jz      L0BB6
        mov     dword ptr [edx + 4], eax
L0BB6:
        mov     dword ptr [ecx + 4], eax
L0BB9:
        mov     eax, dword ptr [ebp - 0x10]
        mov     esi, dword ptr [ebp - 8]
        add     eax, 0x14
        inc     esi
        cmp     eax, 0x7b5d00
        mov     dword ptr [ebp - 8], esi
        mov     dword ptr [ebp - 0x10], eax
        jl      L09A7
        mov     eax, dword ptr [ebp - 0x14]
        mov     esi, dword ptr [ebp - 4]
        xor     ebx, ebx
        jmp     L08BF
L0BE1:
        cmp     eax, 0xfa
        jle     L0C42
L0BE8:
        mov     ecx, dword ptr [esi + 0x28]
        add     ecx, eax
        mov     eax, ecx
        cmp     eax, 0x1388
        mov     dword ptr [esi + 0x28], ecx
        jle     L106B
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, ebx
        jz      L0C1E
L0C04:
        cmp     eax, ebx
        mov     edi, dword ptr [eax]
        jz      L0C18
        push    eax
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax], ebx
        call    FUN_004084e0
        add     esp, 4
L0C18:
        cmp     edi, ebx
        mov     eax, edi
        jnz     L0C04
L0C1E:
        mov     edx, dword ptr [g_7f2438]
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     byte ptr [esi + 0x24], 0
        mov     byte ptr [edx + 0x14], 1
        mov     byte ptr [esi + 0x25], 0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L0C42:
        mov     eax, dword ptr [esi + 0x38]
        cmp     eax, ebx
        jz      L0C63
L0C49:
        cmp     eax, ebx
        mov     edi, dword ptr [eax]
        jz      L0C5D
        push    eax
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax], ebx
        call    FUN_004084e0
        add     esp, 4
L0C5D:
        cmp     edi, ebx
        mov     eax, edi
        jnz     L0C49
L0C63:
        mov     eax, dword ptr [g_7f2438]
        mov     dword ptr [esi + 0x38], ebx
        mov     dword ptr [esi + 0x3c], ebx
        mov     byte ptr [esi + 0x24], 0
        mov     byte ptr [eax + 0x14], 1
        mov     byte ptr [esi + 0x25], 0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L0C86:
        mov     ebx, dword ptr [ebp - 4]
        mov     eax, dword ptr [ebx + 0x38]
        test    eax, eax
        jz      L0CB8
L0C90:
        test    eax, eax
        mov     edi, dword ptr [eax]
        jz      L0CAC
        push    eax
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [eax], 0
        call    FUN_004084e0
        add     esp, 4
L0CAC:
        test    edi, edi
        mov     eax, edi
        jnz     L0C90
        mov     ebx, dword ptr [ebp - 4]
        mov     ecx, dword ptr [ebp - 0x18]
L0CB8:
        add     ebx, 8
        mov     dword ptr [ebx + 0x30], 0
        mov     eax, dword ptr [ebx + 4]
        mov     dword ptr [ebx + 0x34], 0
        cmp     eax, dword ptr [ebx + 8]
        mov     edi, ecx
        mov     dword ptr [ebp - 0x1c], 0xffffffff
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x2c], esi
        mov     dword ptr [ebp - 0x44], ecx
        mov     dword ptr [ebp - 0x40], esi
        mov     dword ptr [ebp - 0x20], ebx
        jz      L0D04
        test    eax, eax
        jz      L0CFC
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp - 0x40]
        mov     dword ptr [eax + 4], ecx
L0CFC:
        add     eax, 8
        mov     dword ptr [ebx + 4], eax
        jmp     L0D12
L0D04:
        push    0x1
        lea     edx, [ebp - 0x44]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_00691af0
L0D12:
        mov     dword ptr [ebp - 0x14], 0
L0D19:
        mov     eax, dword ptr [ebp - 0x14]
        inc     eax
        cmp     eax, 0x9c4
        mov     dword ptr [ebp - 0x14], eax
        jg      L1006
        mov     eax, dword ptr [g_7b5c50]
        mov     ecx, dword ptr [g_7b5c54]
        mov     esi, dword ptr [g_82db10]
        lea     edx, [edi + eax]
        mov     eax, dword ptr [ebp - 0x2c]
        add     ecx, eax
        xor     ebx, ebx
        mov     eax, edx
        sub     eax, esi
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x18], ecx
        js      L0DAE
        mov     ebx, dword ptr [g_82db0c]
        mov     esi, ecx
        sub     esi, ebx
        jns     L0D71
        xor     ebx, ebx
        mov     dword ptr [ebp - 8], 1
        mov     esi, 0x7b5c68
        jmp     L0DBF
L0D71:
        cmp     eax, 0x80
        jl      L0D88
        xor     ebx, ebx
        mov     dword ptr [ebp - 8], 1
        mov     esi, 0x7b5c68
        jmp     L0DBF
L0D88:
        cmp     esi, 0x80
        jl      L0DA0
        xor     ebx, ebx
        mov     dword ptr [ebp - 8], 1
        mov     esi, 0x7b5c68
        jmp     L0DBF
L0DA0:
        shl     eax, 7
        sub     eax, ebx
        add     eax, ecx
        mov     ebx, dword ptr [eax*8 + 0x80db0c]
L0DAE:
        mov     dword ptr [ebp - 8], 1
        mov     esi, 0x7b5c68
        jmp     L0DBF
L0DBC:
        mov     edi, dword ptr [ebp - 0x30]
L0DBF:
        cmp     edx, dword ptr [ebp - 0x24]
        jnz     L0DCD
        cmp     ecx, dword ptr [ebp - 0x28]
        jz      L0E66
L0DCD:
        mov     edx, dword ptr [esi - 4]
        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [esi]
        add     edx, edi
        mov     edi, dword ptr [g_82db10]
        add     ecx, eax
        mov     eax, edx
        sub     eax, edi
        jns     L0DE9
        xor     eax, eax
        jmp     L0E22
L0DE9:
        mov     edi, ecx
        sub     edi, dword ptr [g_82db0c]
        jns     L0DF7
        xor     eax, eax
        jmp     L0E22
L0DF7:
        cmp     eax, 0x80
        jl      L0E02
        xor     eax, eax
        jmp     L0E22
L0E02:
        cmp     edi, 0x80
        jl      L0E0E
        xor     eax, eax
        jmp     L0E22
L0E0E:
        mov     edi, dword ptr [g_82db0c]
        shl     eax, 7
        sub     eax, edi
        add     eax, ecx
        mov     eax, dword ptr [eax*8 + 0x80db0c]
L0E22:
        cmp     eax, ebx
        jnc     L0E2A
        test    eax, eax
        jnz     L0E2E
L0E2A:
        test    ebx, ebx
        jnz     L0E36
L0E2E:
        mov     ebx, eax
        mov     eax, dword ptr [ebp - 8]
        mov     dword ptr [ebp - 0xc], eax
L0E36:
        mov     eax, dword ptr [ebp - 8]
        inc     eax
        add     esi, 0x14
        cmp     esi, 0x7b5cf4
        mov     dword ptr [ebp - 8], eax
        jl      L0DBC
        test    ebx, ebx
        jnz     L0F26
        mov     eax, dword ptr [ebp - 0x34]
        sub     eax, dword ptr [g_82db10]
        mov     dword ptr [ebp - 0xc], ebx
        jns     L0E72
        xor     edi, edi
        jmp     L0EAB
L0E66:
        mov     ecx, dword ptr [ebp - 8]
        dec     ecx
        mov     dword ptr [ebp - 0xc], ecx
        jmp     L0F26
L0E72:
        mov     ecx, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_82db0c]
        sub     ecx, edx
        jns     L0E83
        xor     edi, edi
        jmp     L0EAB
L0E83:
        cmp     eax, 0x80
        jl      L0E8E
        xor     edi, edi
        jmp     L0EAB
L0E8E:
        cmp     ecx, 0x80
        jl      L0E9A
        xor     edi, edi
        jmp     L0EAB
L0E9A:
        mov     ecx, dword ptr [ebp - 0x18]
        shl     eax, 7
        sub     eax, edx
        add     eax, ecx
        mov     edi, dword ptr [eax*8 + 0x80db0c]
L0EAB:
        mov     ebx, 1
        mov     edx, 0x7b5c68
L0EB5:
        mov     ecx, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [edx - 4]
        mov     esi, dword ptr [edx]
        add     eax, ecx
        mov     ecx, dword ptr [ebp - 0x2c]
        add     ecx, esi
        sub     eax, dword ptr [g_82db10]
        jns     L0ED0
        xor     eax, eax
        jmp     L0F09
L0ED0:
        mov     esi, ecx
        sub     esi, dword ptr [g_82db0c]
        jns     L0EDE
        xor     eax, eax
        jmp     L0F09
L0EDE:
        cmp     eax, 0x80
        jl      L0EE9
        xor     eax, eax
        jmp     L0F09
L0EE9:
        cmp     esi, 0x80
        jl      L0EF5
        xor     eax, eax
        jmp     L0F09
L0EF5:
        mov     esi, dword ptr [g_82db0c]
        shl     eax, 7
        sub     eax, esi
        add     eax, ecx
        mov     eax, dword ptr [eax*8 + 0x80db0c]
L0F09:
        cmp     eax, edi
        jnc     L0F11
        test    eax, eax
        jnz     L0F15
L0F11:
        test    edi, edi
        jnz     L0F1A
L0F15:
        mov     edi, eax
        mov     dword ptr [ebp - 0xc], ebx
L0F1A:
        add     edx, 0x14
        inc     ebx
        cmp     edx, 0x7b5cf4
        jl      L0EB5
L0F26:
        mov     edx, dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp - 0x30]
        fadd    dword ptr [g_770168]
        mov     esi, dword ptr [ebp - 0x2c]
        lea     eax, [edx + edx*4]
        shl     eax, 2
        fstp    dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [eax + 0x7b5c50]
        mov     ebx, dword ptr [eax + 0x7b5c54]
        add     edi, ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        add     esi, ebx
        xor     al, al
        cmp     ecx, edx
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x2c], esi
        jz      L0FAB
        mov     ebx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebx + 4]
        cmp     eax, dword ptr [ebx + 8]
        mov     ecx, edi
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 0x44], ecx
        mov     dword ptr [ebp - 0x40], esi
        jz      L0F93
        test    eax, eax
        jz      L0F86
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp - 0x40]
        mov     dword ptr [eax + 4], ecx
L0F86:
        add     eax, 8
        mov     dword ptr [ebx + 4], eax
        mov     al, 1
        mov     dword ptr [ebp - 0x1c], edx
        jmp     L0FAE
L0F93:
        push    0x1
        lea     edx, [ebp - 0x44]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_00691af0
        mov     edx, dword ptr [ebp - 0xc]
        mov     al, 1
        mov     dword ptr [ebp - 0x1c], edx
        jmp     L0FAE
L0FAB:
        mov     ebx, dword ptr [ebp - 0x20]
L0FAE:
        cmp     dword ptr [ebp - 0x24], edi
        jnz     L0D19
        cmp     dword ptr [ebp - 0x28], esi
        jnz     L0D19
        test    al, al
        jnz     L0FFD
        mov     eax, dword ptr [ebx + 4]
        cmp     eax, dword ptr [ebx + 8]
        mov     ecx, edi
        mov     dword ptr [ebp - 0x44], ecx
        mov     dword ptr [ebp - 0x40], esi
        jz      L0FEF
        test    eax, eax
        jz      L0FE0
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [ebp - 0x40]
        mov     dword ptr [eax + 4], ecx
L0FE0:
        mov     esi, dword ptr [ebp - 4]
        add     eax, 8
        mov     dword ptr [ebx + 4], eax
        mov     byte ptr [esi + 0x24], 1
        jmp     L1019
L0FEF:
        push    0x1
        lea     edx, [ebp - 0x44]
        push    edx
        push    eax
        mov     ecx, ebx
        call    FUN_00691af0
L0FFD:
        mov     esi, dword ptr [ebp - 4]
        mov     byte ptr [esi + 0x24], 1
        jmp     L1019
L1006:
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, dword ptr [g_7f2438]
        mov     byte ptr [eax + 0x24], 0
        mov     byte ptr [ecx + 0x14], 1
        mov     esi, eax
L1019:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jnz     L104C
        push    0x798fd0
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L1032
        int     3
L1032:
        mov     edx, dword ptr [g_7f2438]
        mov     byte ptr [edx + 0x14], 1
        mov     byte ptr [esi + 0x25], 0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L104C:
        mov     ecx, esi
        call    FUN_00691890
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 4], eax
        cmp     eax, dword ptr [esi + 0xc]
        jz      L1063
        add     eax, 8
        mov     dword ptr [esi + 4], eax
L1063:
        mov     byte ptr [esi + 0x24], 1
        mov     byte ptr [esi + 0x25], 0
L106B:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
