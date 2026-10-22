/*
 * FUN_00721280 (800 B) - __stdcall (RET 8, 2 params). SEH-framed string
 * append helper: appends one of several constant strings (0x77a078 /
 * 0x7a50b0) into a growable buffer described by [ebp+8] (ptr/len/cap),
 * with an exception filter/handler embedded inline.
 *
 * CFLAGS: /O1
 */

extern int g_00858a30;
extern int g_00849ea8;

extern void __cdecl FUN_006fa880(void);

__declspec(naked) void FUN_00721280(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x7a50f0
        push    0x75ded2
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_00858a30]
        test    eax, eax
        je      L_1588
        mov     dword ptr [g_00849ea8], 1
        mov     dword ptr [ebp - 4], 0
        call    eax
        mov     esi, eax
        mov     dword ptr [ebp - 0x1c], esi
        test    esi, esi
        je      L_14fd
        cmp     byte ptr [esi], 0
        je      L_14fd
        mov     eax, dword ptr [ebp + 0xc]
        test    ah, 0x10
        je      L_1406
        mov     eax, 0x77a078
        test    eax, eax
        je      L_134c
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x20], eax
        mov     edx, dword ptr [ebp + 8]
        mov     esi, dword ptr [edx + 4]
        mov     ecx, dword ptr [edx]
        lea     edi, [esi + eax]
        cmp     edi, ecx
        jle     L_1319
        sub     ecx, esi
        mov     eax, ecx
        mov     dword ptr [ebp - 0x20], eax
L_1319:
        mov     edi, dword ptr [edx + 8]
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        mov     esi, 0x77a078
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [edx + 4], eax
        mov     ecx, dword ptr [edx + 8]
        mov     byte ptr [eax + ecx], 0
        mov     esi, dword ptr [ebp - 0x1c]
        jmp     L_134f
L_134c:
        mov     edx, dword ptr [ebp + 8]
L_134f:
        mov     edi, esi
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x24], eax
        mov     ecx, dword ptr [edx + 4]
        mov     edi, dword ptr [edx]
        mov     dword ptr [ebp - 0x3c], edi
        lea     ebx, [ecx + eax]
        cmp     ebx, edi
        jle     L_1377
        mov     eax, edi
        sub     eax, ecx
        mov     dword ptr [ebp - 0x24], eax
L_1377:
        mov     edi, dword ptr [edx + 8]
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [edx + 4], eax
        mov     ebx, dword ptr [edx + 8]
        mov     dword ptr [ebp - 0x40], ebx
        mov     byte ptr [eax + ebx], 0
        mov     ecx, 0x77a078
        test    ecx, ecx
        je      L_1577
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x28], eax
        mov     ecx, dword ptr [edx + 4]
        lea     edi, [ecx + eax]
        mov     esi, dword ptr [ebp - 0x3c]
        cmp     edi, esi
        jle     L_13d6
        sub     esi, ecx
        mov     eax, esi
        mov     dword ptr [ebp - 0x28], eax
L_13d6:
        mov     edi, dword ptr [edx + 4]
        mov     ecx, eax
        mov     esi, 0x77a078
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [edx + 4], eax
        mov     edx, dword ptr [ebp - 0x40]
        mov     byte ptr [eax + edx], 0
        jmp     L_1577
L_1406:
        mov     eax, 0x7a50b0
        test    eax, eax
        je      L_146a
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x2c], eax
        mov     edx, dword ptr [ebp + 8]
        mov     esi, dword ptr [edx + 4]
        mov     ecx, dword ptr [edx]
        lea     edi, [esi + eax]
        cmp     edi, ecx
        jle     L_1437
        sub     ecx, esi
        mov     eax, ecx
        mov     dword ptr [ebp - 0x2c], eax
L_1437:
        mov     edi, dword ptr [edx + 8]
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        mov     esi, 0x7a50b0
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [edx + 4], eax
        mov     ecx, dword ptr [edx + 8]
        mov     byte ptr [eax + ecx], 0
        mov     esi, dword ptr [ebp - 0x1c]
        jmp     L_146d
L_146a:
        mov     edx, dword ptr [ebp + 8]
L_146d:
        mov     edi, esi
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x30], eax
        mov     ecx, dword ptr [edx + 4]
        mov     edi, dword ptr [edx]
        mov     dword ptr [ebp - 0x3c], edi
        lea     ebx, [ecx + eax]
        cmp     ebx, edi
        jle     L_1495
        mov     eax, edi
        sub     eax, ecx
        mov     dword ptr [ebp - 0x30], eax
L_1495:
        mov     edi, dword ptr [edx + 8]
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [edx + 4], eax
        mov     ebx, dword ptr [edx + 8]
        mov     dword ptr [ebp - 0x40], ebx
        mov     byte ptr [eax + ebx], 0
        mov     ecx, 0x77a078
        test    ecx, ecx
        je      L_1577
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x34], eax
        mov     ecx, dword ptr [edx + 4]
        lea     edi, [ecx + eax]
        mov     esi, dword ptr [ebp - 0x3c]
        cmp     edi, esi
        jle     L_13d6
        sub     esi, ecx
        mov     eax, esi
        mov     dword ptr [ebp - 0x34], eax
        jmp     L_13d6
L_14fd:
        mov     eax, 0x77a078
        test    eax, eax
        je      L_1577
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        mov     dword ptr [ebp - 0x38], eax
        mov     edx, dword ptr [ebp + 8]
        mov     esi, dword ptr [edx + 4]
        mov     ecx, dword ptr [edx]
        lea     edi, [esi + eax]
        cmp     edi, ecx
        jle     L_152e
        sub     ecx, esi
        mov     eax, ecx
        mov     dword ptr [ebp - 0x38], eax
L_152e:
        mov     edi, dword ptr [edx + 8]
        mov     dword ptr [ebp - 0x40], edi
        mov     ebx, dword ptr [edx + 4]
        mov     ecx, eax
        mov     esi, 0x77a078
        add     edi, ebx
        mov     ebx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [edx + 4]
        lea     eax, [ecx + eax - 1]
        mov     dword ptr [edx + 4], eax
        mov     ecx, dword ptr [ebp - 0x40]
        mov     byte ptr [eax + ecx], 0
        jmp     L_1577
        mov     eax, 1
        ret
        mov     esp, dword ptr [ebp - 0x18]
        push    0x7a5088
        mov     ecx, dword ptr [ebp + 8]
        call    FUN_006fa880
L_1577:
        mov     dword ptr [ebp - 4], 0xffffffff
        mov     dword ptr [g_00849ea8], 0
L_1588:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
        nop
        nop
        nop
        nop
        nop
    }
}
