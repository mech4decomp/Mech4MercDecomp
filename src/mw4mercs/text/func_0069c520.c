/*
 * FUN_0069C520 (393 B) — __cdecl, no params, RET.
 *
 * Iterates a global list (DAT_008058ac == 0x1e loop), collects entries,
 * frees them, and cleans up a linked list of objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_00649fb0(void);
extern void __cdecl FUN_0064d170(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_006498f0(void);
extern void __cdecl FUN_0069c420(void);
extern void __cdecl FUN_0064a020(void);
extern void __cdecl FUN_0064a040(void);
extern void __cdecl FUN_0064a090(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0069ae70(void);

extern int g_0080d9b4;
extern int g_008058ac;
extern int g_008058b8;

__declspec(naked) void __cdecl FUN_0069c520(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        call    FUN_00649150
        xor     ebx, ebx
        push    ebx
        call    FUN_00649fb0
        add     esp, 0x4
        mov     edi, eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_0064d170
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, 0x1
        jz      L_69c558
        cmp     eax, 0x2
        jnz     L_69c560
L_69c558:
        cmp     esi, dword ptr [g_0080d9b4]
        jnz     L_69c56a
L_69c560:
        push    0x10
        call    FUN_00562f40
        add     esp, 0x4
L_69c56a:
        push    ebp
        push    ebx
        push    ebx
        push    0x7b5ff0
        call    FUN_00649920
        mov     eax, dword ptr [g_008058ac]
        mov     ebp, 0x1e
        add     esp, 0xc
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], ebx
        jnz     L_69c5d4
L_69c58c:
        call    FUN_00649150
        push    0x7b6008
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L_69c5ba
        push    esi
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        call    FUN_0069c420
        add     esp, 0x10
L_69c5ba:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00649fb0
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_008058ac]
        add     esp, 0x4
        cmp     eax, ebp
        jz      L_69c58c
L_69c5d4:
        push    edi
        call    FUN_0064a020
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_0064a040
        mov     ebp, dword ptr [esp + 0x20]
        add     esp, 0x8
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x1c], ebp
        jz      L_69c678
L_69c5f7:
        mov     edx, dword ptr [ebp]
        push    edx
        call    FUN_0064a040
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_0064a090
        mov     eax, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [g_008058b8]
        add     esp, 0x8
        test    ebp, ebp
        mov     dword ptr [esp + 0x24], eax
        jz      L_69c66c
L_69c61d:
        mov     esi, dword ptr [ebx + 0x10]
        cmp     esi, dword ptr [ebx + 0x14]
        jz      L_69c662
L_69c625:
        lea     edi, [esi + 0x4]
L_69c628:
        cmp     dword ptr [esi], ebp
        jnz     L_69c657
        mov     edx, dword ptr [ebx + 0x14]
        cmp     edi, edx
        jz      L_69c64f
        mov     eax, edx
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, esi
        jle     L_69c64f
L_69c640:
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], ebp
        add     ecx, 0x4
        dec     eax
        jnz     L_69c640
        mov     ebp, dword ptr [esp + 0x1c]
L_69c64f:
        add     edx, -0x4
        mov     dword ptr [ebx + 0x14], edx
        jmp     L_69c65d
L_69c657:
        add     esi, 0x4
        add     edi, 0x4
L_69c65d:
        cmp     esi, dword ptr [ebx + 0x14]
        jnz     L_69c628
L_69c662:
        push    ebp
        call    FUN_006f4230
        mov     eax, dword ptr [esp + 0x24]
L_69c66c:
        test    eax, eax
        mov     ebp, eax
        mov     dword ptr [esp + 0x1c], ebp
        jnz     L_69c5f7
        xor     ebx, ebx
L_69c678:
        push    0x3a
        push    0x2d
        call    FUN_0069ae70
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x8
        cmp     eax, ebx
        pop     ebp
        jz      L_69c6a2
L_69c68d:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_0064a020
        add     esp, 0x4
        cmp     eax, ebx
        mov     dword ptr [esp + 0xc], eax
        jnz     L_69c68d
L_69c6a2:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }
}
