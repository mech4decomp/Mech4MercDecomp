/*
 * FUN_00624b90 (728 B) — __thiscall ABL interpreter tree/container insert
 * helper. RET 0xc. Walks/inserts nodes in a tree keyed by a string compare
 * (FUN_00621910), allocates nodes via FUN_00625490, and dispatches through
 * FUN_00625150 / FUN_006252b0 / FUN_00625530 / FUN_00625540 / FUN_00625560.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00621910(void);
extern void __cdecl FUN_00625490(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_00625530(void);
extern void __cdecl FUN_00625150(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_00625540(void);
extern void __cdecl FUN_00625560(void);
extern void __cdecl FUN_006252b0(void);

__declspec(naked) void FUN_00624b90(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x44]
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi]
        cmp     ebp, dword ptr [edi + 0x8]
        jnz     L_624d29
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        mov     ebx, dword ptr [esp + 0x50]
        jbe     L_624c51
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_00621910
        test    al, al
        jz      L_624c51
        cmp     ebp, edi
        jz      L_624bff
        test    ebp, ebp
        jnz     L_624bff
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_00621910
        test    al, al
        jnz     L_624bff
        push    ebx
        mov     ecx, esi
        call    FUN_00625490
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        /* __emit: mov dword ptr [0x0000000C], edi — MSVC6 rejects literal [imm32] mem-dest as C2415 */
        __emit 0x89
        __emit 0x3D
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz     L_624c22
        mov     dword ptr [eax + 0xc], edi
        jmp     L_624c22
L_624bff:
        push    ebx
        mov     ecx, esi
        call    FUN_00625490
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebp, eax
        mov     dword ptr [ebp + 0x8], edi
        jnz     L_624c1a
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_624c22
L_624c1a:
        cmp     ebp, dword ptr [eax + 0x8]
        jnz     L_624c22
        mov     dword ptr [eax + 0x8], edi
L_624c22:
        mov     dword ptr [edi + 0x4], ebp
L_624c25:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 0x8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [esi + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0x48]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_624c51:
        mov     ebp, edi
        mov     edi, dword ptr [edi + 0x4]
        test    edi, edi
        mov     al, 0x1
        jz      L_624c79
L_624c5c:
        lea     eax, [edi + 0x10]
        push    eax
        mov     ecx, ebx
        mov     ebp, edi
        call    FUN_00621910
        test    al, al
        jz      L_624c72
        mov     edi, dword ptr [edi + 0x8]
        jmp     L_624c75
L_624c72:
        mov     edi, dword ptr [edi + 0xc]
L_624c75:
        test    edi, edi
        jnz     L_624c5c
L_624c79:
        test    al, al
        mov     dword ptr [esp + 0x14], ebp
        jz      L_624cc2
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_00625530
        mov     edx, dword ptr [esp + 0x14]
        cmp     edx, dword ptr [eax]
        jnz     L_624cb5
        lea     eax, [esp + 0x50]
        push    eax
        push    ebx
        push    ebp
        push    edi
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x64], 0x1
        call    FUN_00625150
        push    eax
        lea     ecx, [esp + 0x34]
        jmp     L_624d06
L_624cb5:
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_004114b0
        add     esp, 0x4
L_624cc2:
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [eax + 0x10]
        push    ebx
        call    FUN_00621910
        test    al, al
        jz      L_624cf3
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    ebx
        push    ebp
        push    edi
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, esi
        mov     byte ptr [esp + 0x60], 0x1
        call    FUN_00625150
        push    eax
        lea     ecx, [esp + 0x3c]
        jmp     L_624d06
L_624cf3:
        lea     eax, [esp + 0x13]
        lea     ecx, [esp + 0x14]
        push    eax
        push    ecx
        mov     byte ptr [esp + 0x1b], 0x0
        lea     ecx, [esp + 0x44]
L_624d06:
        call    FUN_00625540
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00625560
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_624d29:
        cmp     ebp, edi
        jnz     L_624dc7
        mov     ebx, dword ptr [edi + 0xc]
        mov     ebp, dword ptr [esp + 0x50]
        push    ebp
        lea     ecx, [ebx + 0x10]
        call    FUN_00621910
        test    al, al
        jz      L_624da8
        cmp     ebx, edi
        jz      L_624d77
        lea     eax, [ebx + 0x10]
        push    eax
        mov     ecx, ebp
        call    FUN_00621910
        test    al, al
        jnz     L_624d77
        push    ebp
        mov     ecx, esi
        call    FUN_00625490
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [ebx + 0xc], edi
        jnz     L_624da0
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_624c25
L_624d77:
        push    ebp
        mov     ecx, esi
        call    FUN_00625490
        mov     edi, eax
        mov     eax, dword ptr [esi]
        cmp     ebx, eax
        mov     dword ptr [ebx + 0x8], edi
        jnz     L_624d98
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_624c25
L_624d98:
        cmp     ebx, dword ptr [eax + 0x8]
        jnz     L_624da0
        mov     dword ptr [eax + 0x8], edi
L_624da0:
        mov     dword ptr [edi + 0x4], ebx
        jmp     L_624c25
L_624da8:
        push    ebp
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, esi
        call    FUN_006252b0
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_624dc7:
        lea     eax, [esp + 0x4c]
        push    eax
        mov     dword ptr [esp + 0x50], ebp
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x50]
        mov     edi, dword ptr [esp + 0x54]
        add     esp, 0x4
        add     ecx, 0x10
        push    edi
        call    FUN_00621910
        test    al, al
        jz      L_624e49
        lea     edx, [ebp + 0x10]
        push    edx
        mov     ecx, edi
        call    FUN_00621910
        test    al, al
        jz      L_624e49
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        push    edi
        jnz     L_624e29
        push    eax
        push    0x0
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    FUN_00625150
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_624e29:
        push    ebp
        push    ebp
        lea     edx, [esp + 0x5c]
        push    edx
        mov     ecx, esi
        call    FUN_00625150
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
L_624e49:
        push    edi
        lea     edx, [esp + 0x40]
        push    edx
        mov     ecx, esi
        call    FUN_006252b0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
