/*
 * FUN_10008320 (757 B) - __thiscall (ECX = this, one stack param, RET 0x4).
 * An XML/entity parser state machine driven by a 12-entry jump table
 * (indexed by ESI). Handles '<', '>', '/', whitespace, names, entities and
 * values, accumulating into the caller's buffer. Returns (ESI == -2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006ef0(void);
extern void __cdecl FUN_10007ED0(void);
extern void __cdecl FUN_10007F00(void);
extern void __cdecl FUN_100094a0(void);
extern void __cdecl FUN_10008670(void);
extern void __cdecl FUN_10008e10(void);
extern void __cdecl FUN_10008c20(void);
extern void __cdecl FUN_10007E00(void);
extern void __cdecl FUN_10008d30(void);
extern void __cdecl FUN_10008d60(void);
extern void *g_100210f4;
extern void *g_1002114c;
extern unsigned long g_jump_10008618[];
extern char g_str_10025820[];
extern char g_str_10025808[];
extern char g_str_100257f4[];
extern char g_str_100257f0[];
extern char g_str_100257ec[];

__declspec(naked) void __cdecl FUN_10008320(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        xor     esi, esi
L329:
        mov     ebp, dword ptr [ebx + 0x14]
        cmp     esi, 0xb
        mov     di, word ptr [ebp]
        ja      L560
        jmp     dword ptr [esi*4 + g_jump_10008618]

L340:
        cmp     di, 0x3c
        jnz     L569
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x1
        jmp     L329

L35b:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, ebx
        add     eax, 0x10
        push    eax
        call    FUN_10007ED0
        test    al, al
        jz      L588
        mov     esi, 0x2
        jmp     L329

L379:
        cmp     di, 0x3e
        jnz     L390
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x4
        jmp     L329
L390:
        cmp     di, 0x2f
        jnz     L3a7
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x6
        jmp     L329
L3a7:
        cmp     di, 0x20
        jz      L3c3
        cmp     di, 0x9
        jz      L3c3
        cmp     di, 0xd
        jz      L3c3
        cmp     di, 0xa
        jnz     L59b
L3c3:
        mov     esi, 0x3
        jmp     L329

L3cd:
        mov     ecx, ebx
        call    FUN_10007F00
        mov     esi, 0xb
        jmp     L329

L3de:
        cmp     di, 0x3e
        jnz     L3f8
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x4
        jmp     L329
L3f8:
        cmp     di, 0x2f
        jnz     L412
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x6
        jmp     L329
L412:
        push    edi
        call    FUN_100094a0
        test    al, al
        jnz     L44f
        cmp     di, 0x4e00
        jc      L42a
        cmp     di, 0x9fa5
        jbe     L44f
L42a:
        cmp     di, 0x3007
        jz      L44f
        cmp     di, 0x3021
        jc      L43f
        cmp     di, 0x3029
        jbe     L44f
L43f:
        cmp     di, 0x5f
        jz      L44f
        cmp     di, 0x3a
        jnz     L5a5
L44f:
        mov     esi, 0x5
        jmp     L329

L459:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, ebx
        call    FUN_10008670
        test    al, al
        jz      L588
        mov     esi, 0x7
        jmp     L329

L477:
        lea     edx, [esp + 0x10]
        mov     ecx, ebx
        push    edx
        call    FUN_10008e10
        test    al, al
        jz      L60b
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [eax + 0x24]
        mov     dword ptr [edx], ecx
        add     ecx, 0x4
        mov     dword ptr [ecx], 0x0
        mov     esi, dword ptr [eax + 0x28]
        inc     esi
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x28], esi
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_10008c20
        test    al, al
        jz      L588
        mov     esi, 0x2
        jmp     L329

L4c9:
        cmp     di, 0x3c
        jnz     L569
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x8
        jmp     L329

L4e7:
        cmp     di, 0x2f
        jnz     L5dd
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0x9
        jmp     L329

L505:
        mov     ecx, ebx
        call    FUN_10007E00
        test    al, al
        jz      L588
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, dword ptr [ebx + 0x14]
        sub     edi, ebp
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        sar     edi, 0x1
        call    dword ptr [g_100210f4]
        add     esp, 0x4
        cmp     edi, eax
        jnz     L5e7
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jnz     L53e
        test    ebp, ebp
        setz    al
        jmp     L54e
L53e:
        test    ebp, ebp
        jz      L556
        push    edi
        push    ebp
        push    eax
        call    dword ptr [g_1002114c]
        add     esp, 0xc
L54e:
        test    eax, eax
        jnz     L5e7
L556:
        mov     esi, 0xa
        jmp     L329

L560:
        test    esi, esi
        jl      L578
        jmp     L329

L569:
        or      esi, 0xffffffff
        push    offset g_str_10025820
L571:
        mov     ecx, ebx
        call    FUN_10008d30
L578:
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        setz    al
        pop     ecx
        ret     0x4

L588:
        or      esi, 0xffffffff
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        pop     ecx
        ret     0x4

L59b:
        or      esi, 0xffffffff
        push    offset g_str_10025808
        jmp     L571

L5a5:
        or      esi, 0xffffffff
        push    offset g_str_100257f4
        jmp     L571

L5af:
        cmp     di, 0x3e
        jnz     L5d3
        push    0x0
        lea     ecx, [ebx + 0xc]
        call    FUN_10006ef0
        mov     esi, 0xfffffffe
        xor     eax, eax
        cmp     esi, esi
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        pop     ecx
        ret     0x4
L5d3:
        or      esi, 0xffffffff
        push    offset g_str_100257f0
        jmp     L571

L5dd:
        or      esi, 0xffffffff
        push    offset g_str_100257ec
        jmp     L571

L5e7:
        mov     ecx, dword ptr [esp + 0x18]
        push    edi
        push    ebp
        or      esi, 0xffffffff
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, ebx
        push    edx
        call    FUN_10008d60
        xor     eax, eax
        cmp     esi, -0x2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        setz    al
        pop     ecx
        ret     0x4

L60b:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
