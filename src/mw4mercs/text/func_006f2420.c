/*
 * FUN_006f2420 (641 B) — __thiscall switch dispatcher (RET 8).
 *
 * Dispatches on param_2 (index) via a jump table at 0x6f26a4:
 *   case 0: free old string at this+0x134, strdup param_1 into it.
 *   case 1/2: atoi(param_1) -> this+0x138 / this+0x13c.
 *   case 3..22: atof(param_1) -> this+0x140..0x18c (floats).
 *   default: return.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: string, index).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_004084d0(unsigned int n);

extern int    (__cdecl *g_76b318)(const char *);   /* atoi  (IAT) */
extern double (__cdecl *g_76b2d8)(const char *);   /* atof  (IAT) */

__declspec(naked) void __stdcall FUN_006f2420(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x16
        push    esi
        mov     esi, ecx
        /* __emit: ja rel32 miscomputed off-by-4 (call-reloc between branch and target) */
        __emit  0x0F
        __emit  0x87
        __emit  0x6D
        __emit  0x02
        __emit  0x00
        __emit  0x00
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit  0xFF
        __emit  0x24
        __emit  0x85
        __emit  0xA4
        __emit  0x26
        __emit  0x6F
        __emit  0x00
L_2437:
        mov     eax, dword ptr [esi + 0x134]
        test    eax, eax
        jz      L_244a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_244a:
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        add     esp, 0x4
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + 0x134], edx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     ebx
        pop     esi
        ret     8
L_2491:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b318]
        add     esp, 0x4
        mov     dword ptr [esi + 0x138], eax
        pop     esi
        ret     8
L_24a9:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b318]
        add     esp, 0x4
        mov     dword ptr [esi + 0x13c], eax
        pop     esi
        ret     8
L_24c1:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x140]
        add     esp, 0x4
        pop     esi
        ret     8
L_24d9:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x144]
        add     esp, 0x4
        pop     esi
        ret     8
L_24f1:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x148]
        add     esp, 0x4
        pop     esi
        ret     8
L_2509:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x14c]
        add     esp, 0x4
        pop     esi
        ret     8
L_2521:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x150]
        add     esp, 0x4
        pop     esi
        ret     8
L_2539:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x154]
        add     esp, 0x4
        pop     esi
        ret     8
L_2551:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x158]
        add     esp, 0x4
        pop     esi
        ret     8
L_2569:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x15c]
        add     esp, 0x4
        pop     esi
        ret     8
L_2581:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x160]
        add     esp, 0x4
        pop     esi
        ret     8
L_2599:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x164]
        add     esp, 0x4
        pop     esi
        ret     8
L_25b1:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x168]
        add     esp, 0x4
        pop     esi
        ret     8
L_25c9:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x16c]
        add     esp, 0x4
        pop     esi
        ret     8
L_25e1:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x170]
        add     esp, 0x4
        pop     esi
        ret     8
L_25f9:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x174]
        add     esp, 0x4
        pop     esi
        ret     8
L_2611:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x178]
        add     esp, 0x4
        pop     esi
        ret     8
L_2629:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x17c]
        add     esp, 0x4
        pop     esi
        ret     8
L_2641:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x180]
        add     esp, 0x4
        pop     esi
        ret     8
L_2659:
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x184]
        add     esp, 0x4
        pop     esi
        ret     8
L_2671:
        mov     eax, dword ptr [esp + 0x8]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x188]
        add     esp, 0x4
        pop     esi
        ret     8
L_2689:
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [esi + 0x18c]
        add     esp, 0x4
        /* fall through to shared epilogue (case 0x16 shares pop esi; ret 8 with default) */
L_269d:
        pop     esi
        ret     8
    }
}
