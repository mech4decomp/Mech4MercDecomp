/*
 * FUN_00706570 (739 B) — Game-list update routine (RET 4).
 *
 * Iterates a game list, matches "Handle" entries against a name, updates
 * timestamps, and (after acquiring a mutex) re-scans the list. Uses a
 * large EBP-relative local block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7afaf0;
extern int g_7afaf4;
extern int g_7afaf8;
extern int g_7afafc;
extern int g_8589a4;
extern int g_8589a8;
extern int g_8589ac;
extern int g_8589b0;
extern double g_7a1310;
extern char g_7a1318[];
extern char g_79fab8[];
extern char g_799ea4[];
extern char g_79fac8[];
extern void *g_76b0f4;   /* IAT: WaitForSingleObject */
extern void *g_76b210;   /* IAT: ReleaseMutex */
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5ed0(void);
extern int __cdecl FUN_006f8430(void);
extern char __cdecl FUN_006f7970(void);
extern int __cdecl FUN_006fabf0(void);
extern void *__cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_00705d60(void);

__declspec(naked) void __stdcall FUN_00706570(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x54
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 8]
        mov     eax, dword ptr [esi + 0x28]
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     L_6590
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    L_6590:
        mov     eax, dword ptr [g_7afaf0]
        mov     ecx, dword ptr [g_7afaf4]
        mov     edx, dword ptr [g_7afaf8]
        mov     dword ptr [ebp - 0x4c], eax
        mov     eax, dword ptr [g_7afafc]
        mov     dword ptr [ebp - 0x48], ecx
        mov     ecx, dword ptr [g_8589a4]
        mov     dword ptr [ebp - 0x44], edx
        mov     edx, dword ptr [g_8589a8]
        mov     dword ptr [ebp - 0x40], eax
        mov     eax, dword ptr [g_8589ac]
        mov     dword ptr [ebp - 0x3c], ecx
        mov     ecx, dword ptr [g_8589b0]
        mov     dword ptr [ebp - 0x54], 0x50
        mov     dword ptr [ebp - 0x50], edi
        mov     dword ptr [ebp - 0x38], edx
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0x2c], edi
        mov     dword ptr [ebp - 0x28], edi
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x20], edi
        mov     dword ptr [ebp - 0x1c], edi
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x14], edi
        mov     dword ptr [ebp - 0x10], edi
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp - 0x8], edi
        call    FUN_006f89f0
        call    FUN_006f5ed0
        call    FUN_006f89f0
        mov     ebx, dword ptr [eax + 0x3c]
        mov     ecx, ebx
        call    FUN_006f8430
        test    eax, eax
        jle     L_66b9
    L_661e:
        lea     edx, [ebp - 4]
        push    edx
        push    edi
        mov     ecx, ebx
        call    FUN_006f7970
        test    al, al
        jnz     L_6643
        push    edi
        push    offset g_7a1318
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_66a9
        int     3
        jmp     L_66a9   /* dead code after int 3 (ref EB 66) — reproduce to keep offsets */
    L_6643:
        mov     eax, dword ptr [ebp - 4]
        push    offset g_79fab8
        push    eax
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        jz      L_66a9
        add     esi, 0x14
    L_665f:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_6683
        test    cl, cl
        jz      L_667f
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L_6683
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_665f
    L_667f:
        xor     eax, eax
        jmp     L_6688
    L_6683:
        sbb     eax, eax
        sbb     eax, -1
    L_6688:
        test    eax, eax
        jnz     L_66a6
        call    FUN_006f89f0
        mov     ecx, dword ptr [ebp - 4]
        mov     edx, dword ptr [eax]
        push    offset g_799ea4
        push    offset g_79fac8
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 8]
    L_66a6:
        mov     esi, dword ptr [ebp + 8]
    L_66a9:
        mov     ecx, ebx
        inc     edi
        call    FUN_006f8430
        cmp     edi, eax
        jl      L_661e
    L_66b9:
        call    FUN_006f89f0
        call    FUN_006f5ee0
        fld     qword ptr [esi + 0x20]
        fcomp   qword ptr [g_7a1310]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_684f
        mov     edx, dword ptr [esi + 0x6c]
        push    0xa
        push    edx
        call    dword ptr [g_76b0f4]
        test    eax, eax
        jnz     L_684f
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [eax]
        push    0x52
        push    esi
        push    offset FUN_00705d60
        push    0x9c4
        lea     edx, [ebp - 0x54]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x34]
        test    eax, eax
        jge     L_6722
        mov     dword ptr [esi + 0x20], 0
        pop     edi
        mov     dword ptr [esi + 0x24], 0xc0140000
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    L_6722:
        mov     eax, dword ptr [esi + 0x6c]
        push    eax
        call    dword ptr [g_76b210]
        call    FUN_006f89f0
        call    FUN_006f5ed0
        call    FUN_006f89f0
        mov     ebx, dword ptr [eax + 0x3c]
        mov     ecx, ebx
        xor     edi, edi
        call    FUN_006f8430
        test    eax, eax
        jle     L_6845
    L_674f:
        lea     ecx, [ebp - 4]
        push    ecx
        push    edi
        mov     ecx, ebx
        call    FUN_006f7970
        test    al, al
        jnz     L_677b
        push    edi
        push    offset g_7a1318
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_6835
        int     3
        jmp     L_6835   /* dead code after int 3 (ref E9 BA 00 00 00) — reproduce to keep offsets */
    L_677b:
        mov     edx, dword ptr [ebp - 4]
        push    offset g_79fab8
        push    edx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        jnz     L_67aa
        call    FUN_006f89f0
        mov     ecx, dword ptr [ebp - 4]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x10]
        dec     edi
        jmp     L_6835
    L_67aa:
        add     esi, 0x14
    L_67ad:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_67d1
        test    cl, cl
        jz      L_67cd
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L_67d1
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_67ad
    L_67cd:
        xor     eax, eax
        jmp     L_67d6
    L_67d1:
        sbb     eax, eax
        sbb     eax, -1
    L_67d6:
        test    eax, eax
        jnz     L_6832
        mov     eax, dword ptr [ebp - 4]
        push    offset g_79fac8
        push    eax
        mov     esi, offset g_799ea4
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
    L_67f4:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_6818
        test    cl, cl
        jz      L_6814
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L_6818
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_67f4
    L_6814:
        xor     eax, eax
        jmp     L_681d
    L_6818:
        sbb     eax, eax
        sbb     eax, -1
    L_681d:
        test    eax, eax
        jnz     L_6832
        call    FUN_006f89f0
        mov     ecx, dword ptr [ebp - 4]
        mov     edx, dword ptr [eax]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x10]
        dec     edi
    L_6832:
        mov     esi, dword ptr [ebp + 8]
    L_6835:
        mov     ecx, ebx
        inc     edi
        call    FUN_006f8430
        cmp     edi, eax
        jl      L_674f
    L_6845:
        call    FUN_006f89f0
        call    FUN_006f5ee0
    L_684f:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
