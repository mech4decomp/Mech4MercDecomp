/*
 * FUN_5e0342af (637 B actual; CSV lists 597) — locale-aware string comparison
 * wrapper with two __try/__except blocks (SEH). Detects ANSI vs Unicode
 * codepage once (cached in g_5e77abd4), trims lengths via FUN_5e03452c, and
 * dispatches to CompareStringA/W or a MultiByteToWideChar + CompareStringW
 * path. The embedded `push 1; pop eax; ret` blocks are the __except handlers
 * (return EXCEPTION_EXECUTE_HANDLER); the cleanup code after each re-establishes
 * the frame and falls into the shared L_47c / L_4e7 bodies.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77abd4;                 /* cached codepage-mode flag */
extern int g_5e77aa8c;                 /* default codepage */
extern int (*g_5e035108)(void);        /* IAT */
extern int (*g_5e035104)(void);        /* IAT */
extern int (*g_5e0350c8)(void);        /* IAT */
extern int (*g_5e0350b8)(void);        /* IAT */
extern void __cdecl FUN_5e03452c(void);
extern void __cdecl FUN_5e030b60(void);

__declspec(naked) void FUN_5e0342af(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x5e036f10
        push    0x5e030a84
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        xor     ebx, ebx
        cmp     dword ptr [g_5e77abd4], ebx
        push    1
        pop     edi
        jnz     L_322
        push    edi
        mov     eax, 0x5e036630
        push    eax
        push    edi
        push    eax
        push    ebx
        push    ebx
        call    dword ptr [g_5e035108]
        test    eax, eax
        jz      L_2ff
        mov     dword ptr [g_5e77abd4], edi
        jmp     L_322
    L_2ff:
        push    edi
        mov     eax, 0x5e03662c
        push    eax
        push    edi
        push    eax
        push    ebx
        push    ebx
        call    dword ptr [g_5e035104]
        test    eax, eax
        jz      L_518
        mov     dword ptr [g_5e77abd4], 2
    L_322:
        mov     esi, dword ptr [ebp + 0x14]
        cmp     esi, ebx
        jle     L_339
        push    esi
        push    dword ptr [ebp + 0x10]
        call    FUN_5e03452c
        pop     ecx
        pop     ecx
        mov     esi, eax
        mov     dword ptr [ebp + 0x14], esi
    L_339:
        cmp     dword ptr [ebp + 0x1c], ebx
        jle     L_34e
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        call    FUN_5e03452c
        pop     ecx
        pop     ecx
        mov     dword ptr [ebp + 0x1c], eax
    L_34e:
        mov     eax, dword ptr [g_5e77abd4]
        cmp     eax, 2
        jnz     L_373
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_5e035104]
        jmp     L_51a
    L_373:
        cmp     eax, edi
        jnz     L_518
        cmp     dword ptr [ebp + 0x20], ebx
        jnz     L_388
        mov     eax, dword ptr [g_5e77aa8c]
        mov     dword ptr [ebp + 0x20], eax
    L_388:
        cmp     esi, ebx
        jz      L_395
        cmp     dword ptr [ebp + 0x1c], ebx
        jnz     L_42d
    L_395:
        cmp     esi, dword ptr [ebp + 0x1c]
        jnz     L_3a2
    L_39a:
        push    2
    L_39c:
        pop     eax
        jmp     L_51a
    L_3a2:
        cmp     dword ptr [ebp + 0x1c], edi
        jle     L_3ae
    L_3a7:
        mov     eax, edi
        jmp     L_51a
    L_3ae:
        cmp     esi, edi
        jg      L_3f3
        lea     eax, [ebp - 0x3c]
        push    eax
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_5e0350b8]
        test    eax, eax
        jz      L_518
        cmp     esi, ebx
        jle     L_3f7
        cmp     dword ptr [ebp - 0x3c], 2
        jc      L_3f3
        lea     eax, [ebp - 0x36]
        cmp     byte ptr [ebp - 0x36], bl
        jz      L_3f3
    L_3d9:
        mov     dl, byte ptr [eax + 1]
        cmp     dl, bl
        jz      L_3f3
        mov     ecx, dword ptr [ebp + 0x10]
        mov     cl, byte ptr [ecx]
        cmp     cl, byte ptr [eax]
        jc      L_3ed
        cmp     cl, dl
        jbe     L_39a
    L_3ed:
        inc     eax
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_3d9
    L_3f3:
        push    3
        jmp     L_39c
    L_3f7:
        cmp     dword ptr [ebp + 0x1c], ebx
        jle     L_42d
        cmp     dword ptr [ebp - 0x3c], 2
        jc      L_3a7
        lea     eax, [ebp - 0x36]
        cmp     byte ptr [ebp - 0x36], bl
        jz      L_3a7
    L_40a:
        mov     dl, byte ptr [eax + 1]
        cmp     dl, bl
        jz      L_3a7
        mov     ecx, dword ptr [ebp + 0x18]
        mov     cl, byte ptr [ecx]
        cmp     cl, byte ptr [eax]
        jc      L_422
        cmp     cl, dl
        jbe     L_39a
    L_422:
        inc     eax
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_40a
        jmp     L_3a7
    L_42d:
        push    ebx
        push    ebx
        push    esi
        push    dword ptr [ebp + 0x10]
        push    9
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_5e0350c8]
        mov     dword ptr [ebp - 0x1c], eax
        cmp     eax, ebx
        jz      L_518
        mov     dword ptr [ebp - 0x4], ebx
        add     eax, eax
        add     eax, 3
        and     al, 0xfc
        call    FUN_5e030b60
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp - 0x24], eax
        or      dword ptr [ebp - 0x4], -1
        jmp     L_47c
        /* __except handler block 1: return EXCEPTION_EXECUTE_HANDLER */
        push    1
        pop     eax
        ret
        /* cleanup 1: re-establish frame, then fall into L_47c */
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        mov     dword ptr [ebp - 0x24], ebx
        or      dword ptr [ebp - 0x4], -1
        mov     esi, dword ptr [ebp + 0x14]
        push    1
        pop     edi
    L_47c:
        cmp     dword ptr [ebp - 0x24], ebx
        jz      L_518
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp - 0x24]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    edi
        push    dword ptr [ebp + 0x20]
        mov     esi, dword ptr [g_5e0350c8]
        call    esi
        test    eax, eax
        jz      L_518
        push    ebx
        push    ebx
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    9
        push    dword ptr [ebp + 0x20]
        call    esi
        mov     esi, eax
        mov     dword ptr [ebp - 0x20], esi
        cmp     esi, ebx
        jz      L_518
        mov     dword ptr [ebp - 0x4], edi
        lea     eax, [esi + esi]
        add     eax, 3
        and     al, 0xfc
        call    FUN_5e030b60
        mov     dword ptr [ebp - 0x18], esp
        mov     edi, esp
        mov     dword ptr [ebp - 0x28], edi
        or      dword ptr [ebp - 0x4], -1
        jmp     L_4e7
        /* __except handler block 2: return EXCEPTION_EXECUTE_HANDLER */
        push    1
        pop     eax
        ret
        /* cleanup 2: re-establish frame, then fall into L_4e7 */
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        xor     edi, edi
        or      dword ptr [ebp - 0x4], -1
        mov     esi, dword ptr [ebp - 0x20]
    L_4e7:
        cmp     edi, ebx
        jz      L_518
        push    esi
        push    edi
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    1
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_5e0350c8]
        test    eax, eax
        jz      L_518
        push    esi
        push    edi
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_5e035108]
        jmp     L_51a
    L_518:
        xor     eax, eax
    L_51a:
        lea     esp, [ebp - 0x4c]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
