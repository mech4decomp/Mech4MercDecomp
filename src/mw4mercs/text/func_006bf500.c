/*
 * FUN_006bf500 (433 B) — Viewport/window update. Clamps the four
 * coordinates against the screen size globals (g_858940/g_858944),
 * selects a color-depth mode (1 or 3) from the pixel-format flag, and
 * stores the new rect as floats into the g_82e2e8 table.
 *
 * __cdecl, RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858944;
extern int g_858940;
extern int g_7b60b8;
extern int g_82f3e8;
extern float g_82e2e8;
extern float g_82e2ec;
extern float g_82e308;
extern float g_82e30c;
extern int g_82e2f8;
extern int g_82e318;

extern void __cdecl FUN_006bf4a0(void);
extern void __cdecl FUN_00713cc0(void);

__declspec(naked) void __stdcall FUN_006bf500(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        jge     L6BF517
        test    edi, edi
        jl      L6BF6AB
    L6BF517:
        mov     ebx, dword ptr [g_858944]
        cmp     esi, ebx
        jle     L6BF529
        cmp     edi, ebx
        jg      L6BF6AB
    L6BF529:
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     edx, dword ptr [esp + 0x18]
        jge     L6BF53D
        test    edx, edx
        jl      L6BF6AB
    L6BF53D:
        mov     eax, dword ptr [g_858940]
        cmp     ecx, eax
        jle     L6BF54E
        cmp     edx, eax
        jg      L6BF6AB
    L6BF54E:
        test    ecx, ecx
        jge     L6BF558
        xor     ecx, ecx
        mov     dword ptr [esp + 0x10], ecx
    L6BF558:
        test    edx, edx
        jge     L6BF562
        xor     edx, edx
        mov     dword ptr [esp + 0x18], edx
    L6BF562:
        test    esi, esi
        jge     L6BF56C
        xor     esi, esi
        mov     dword ptr [esp + 0x14], esi
    L6BF56C:
        test    edi, edi
        jge     L6BF576
        xor     edi, edi
        mov     dword ptr [esp + 0x1c], edi
    L6BF576:
        dec     eax
        cmp     ecx, eax
        jle     L6BF581
        mov     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
    L6BF581:
        cmp     edx, eax
        jle     L6BF58B
        mov     edx, eax
        mov     dword ptr [esp + 0x18], edx
    L6BF58B:
        lea     eax, [ebx - 0x1]
        cmp     esi, eax
        jle     L6BF598
        mov     esi, eax
        mov     dword ptr [esp + 0x14], esi
    L6BF598:
        cmp     edi, eax
        jle     L6BF5A2
        mov     edi, eax
        mov     dword ptr [esp + 0x1c], edi
    L6BF5A2:
        cmp     ecx, edx
        jnz     L6BF5AE
        cmp     esi, edi
        jz      L6BF6AB
    L6BF5AE:
        mov     edi, dword ptr [esp + 0x20]
        mov     eax, edi
        and     eax, 0xff000000
        cmp     eax, 0xff000000
        mov     esi, 0x1
        jz      L6BF5CA
        mov     esi, 0x3
    L6BF5CA:
        cmp     esi, dword ptr [g_7b60b8]
        jnz     L6BF5DB
        cmp     dword ptr [g_82f3e8], 0x40
        jnz     L6BF5E0
    L6BF5DB:
        call    FUN_006bf4a0
    L6BF5E0:
        mov     eax, dword ptr [g_82f3e8]
        test    eax, eax
        mov     dword ptr [g_7b60b8], esi
        jnz     L6BF663
        push    0x0
        push    0x1
        call    FUN_00713cc0
        push    0x1
        push    0x4
        call    FUN_00713cc0
        push    0x0
        push    0x5
        call    FUN_00713cc0
        push    0x0
        push    0x6
        call    FUN_00713cc0
        push    0x0
        push    0x7
        call    FUN_00713cc0
        push    0x0
        push    0x8
        call    FUN_00713cc0
        push    0x0
        push    0x9
        call    FUN_00713cc0
        push    0x0
        push    0xa
        call    FUN_00713cc0
        push    0x0
        push    0xb
        call    FUN_00713cc0
        push    0x2
        push    0x10
        call    FUN_00713cc0
        push    0x1
        push    0xf
        call    FUN_00713cc0
        push    0x0
        push    0x13
        call    FUN_00713cc0
        push    esi
        push    0xd
        call    FUN_00713cc0
    L6BF663:
        mov     ecx, dword ptr [g_82f3e8]
        fild    dword ptr [esp + 0x10]
        mov     eax, ecx
        shl     eax, 0x5
        fstp    dword ptr [eax + g_82e2e8]
        add     ecx, 0x2
        fild    dword ptr [esp + 0x14]
        mov     dword ptr [g_82f3e8], ecx
        fstp    dword ptr [eax + g_82e2ec]
        fild    dword ptr [esp + 0x18]
        fstp    dword ptr [eax + g_82e308]
        fild    dword ptr [esp + 0x1c]
        fstp    dword ptr [eax + g_82e30c]
        mov     dword ptr [eax + g_82e2f8], edi
        mov     dword ptr [eax + g_82e318], edi
    L6BF6AB:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
