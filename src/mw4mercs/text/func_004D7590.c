/*
 * FUN_004D7590 (576 B) — __stdcall(4). Compares arg2 against a series of
 * string tags (0x79fa2c / 0x79fa6c / 0x79fa54 / 0x79fb70) and, depending
 * on the match, copies arg3 into [ebp+0x1678], scans a registry-style
 * value via the fn ptrs at 0x76b300 / 0x76b2f0 / 0x858a2c, formats into
 * [ebp+0x16c8], or stores arg3 into [ebp+0x17c4] / a [ebp+0x1f8] slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D7DA0(void *obj);

extern unsigned int g_76b300;   /* DAT_0076b300 (fn ptr) */
extern unsigned int g_76b2f0;   /* DAT_0076b2f0 (fn ptr) */
extern unsigned int g_858a2c;   /* DAT_00858a2c (IAT fn ptr) */
extern unsigned int g_76b420;   /* DAT_0076b420 (IAT fn ptr) */
extern unsigned int g_76b320;   /* DAT_0076b320 (IAT fn ptr) */

__declspec(naked) void FUN_004D7590(void)
{
    __asm {
        sub     esp, 0x100
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x118]
        mov     esi, 0x79fa2c
        mov     eax, edi
L_4d75a8:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d75d0
        test    cl, cl
        je      L_4d75cc
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d75d0
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_4d75a8
L_4d75cc:
        xor     eax, eax
        jmp     L_4d75d5
L_4d75d0:
        sbb     eax, eax
        sbb     eax, -1
L_4d75d5:
        test    eax, eax
        mov     ebp, dword ptr [esp + 0x114]
        jne     L_4d760f
        mov     edi, dword ptr [esp + 0x11c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebp + 0x1678]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     L_4d77b7
L_4d760f:
        mov     esi, 0x79fa6c
        mov     eax, edi
L_4d7616:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d763e
        test    cl, cl
        je      L_4d763a
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d763e
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_4d7616
L_4d763a:
        xor     eax, eax
        jmp     L_4d7643
L_4d763e:
        sbb     eax, eax
        sbb     eax, -1
L_4d7643:
        test    eax, eax
        jne     L_4d76e0
        mov     edi, dword ptr [esp + 0x11c]
        mov     ebx, dword ptr [g_76b300]
        xor     esi, esi
L_4d765a:
        lea     eax, [esp + 0x10]
        push    eax
        push    0x100
        push    esi
        push    0
        call    dword ptr [g_858a2c]
        lea     ecx, [esp + 0x20]
        push    edi
        push    ecx
        call    ebx
        add     esp, 0x18
        test    eax, eax
        mov     al, byte ptr [esp + 0x10]
        je      L_4d7687
        test    al, al
        je      L_4d768b
        inc     esi
        jmp     L_4d765a
L_4d7687:
        test    al, al
        jne     L_4d76c5
L_4d768b:
        mov     ebx, dword ptr [g_76b2f0]
        xor     esi, esi
L_4d7693:
        lea     edx, [esp + 0x10]
        push    edx
        push    0x100
        push    esi
        push    0
        call    dword ptr [g_858a2c]
        lea     eax, [esp + 0x20]
        push    edi
        push    eax
        call    ebx
        add     esp, 0x18
        test    eax, eax
        mov     al, byte ptr [esp + 0x10]
        je      L_4d76c0
        test    al, al
        je      L_4d76c4
        inc     esi
        jmp     L_4d7693
L_4d76c0:
        test    al, al
        jne     L_4d76c5
L_4d76c4:
        dec     esi
L_4d76c5:
        push    esi
        lea     ecx, [ebp + 0x16c8]
        push    0x772f4c
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     L_4d77b7
L_4d76e0:
        mov     esi, 0x79fa54
        mov     eax, edi
L_4d76e7:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d770f
        test    cl, cl
        je      L_4d770b
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d770f
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_4d76e7
L_4d770b:
        xor     eax, eax
        jmp     L_4d7714
L_4d770f:
        sbb     eax, eax
        sbb     eax, -1
L_4d7714:
        test    eax, eax
        jne     L_4d772a
        mov     eax, dword ptr [esp + 0x11c]
        mov     dword ptr [ebp + 0x17c4], eax
        jmp     L_4d77b7
L_4d772a:
        mov     esi, 0x79fb70
        mov     eax, edi
L_4d7731:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d7759
        test    cl, cl
        je      L_4d7755
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     L_4d7759
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_4d7731
L_4d7755:
        xor     eax, eax
        jmp     L_4d775e
L_4d7759:
        sbb     eax, eax
        sbb     eax, -1
L_4d775e:
        test    eax, eax
        jne     L_4d77b7
        mov     ecx, dword ptr [ebp + 0x17bc]
        test    ecx, ecx
        jle     L_4d7788
        mov     esi, dword ptr [esp + 0x120]
        lea     edx, [ebp + 0x1f8]
L_4d7779:
        cmp     esi, dword ptr [edx]
        je      L_4d7788
        inc     eax
        add     edx, 0xa4
        cmp     eax, ecx
        jl      L_4d7779
L_4d7788:
        cmp     eax, ecx
        jge     L_4d77b7
        lea     ecx, [eax + eax*4]
        lea     edx, [eax + ecx*8]
        mov     eax, dword ptr [esp + 0x11c]
        lea     esi, [ebp + edx*4]
        push    0x50
        push    eax
        lea     ecx, [esi + 0x1a8]
        push    ecx
        call    dword ptr [g_76b320]
        add     esp, 0xc
        mov     byte ptr [esi + 0x1f7], 0
L_4d77b7:
        mov     ecx, ebp
        call    FUN_004D7DA0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x100
        ret     0x10
    }
}
