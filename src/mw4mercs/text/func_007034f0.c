/*
 * FUN_007034f0 (1323 B) — Command/chat parser with critical-section
 * serialization.
 *
 * __stdcall, RET 0xc (3 stack params). Parses a command string, looks it up
 * in a linked list of handlers, and dispatches to a network/chat subsystem.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8aaaf4;
extern void *g_8aaaf8;
extern void *g_849308;
extern void *g_8aab04;
extern void *g_85697c;
extern void *g_8569fc;
extern void *g_8aaa68;
extern void *g_8aaa70;
extern void *g_8aaa74;
extern void *g_8aaa78;
extern void *g_8aaa7c;
extern void *g_8aaaa8;
extern void *g_8aaaac;
extern void *g_8aaab0;
extern void *g_8aaab4;
extern void *g_8aaa98;
extern void *g_8aaa9c;
extern void *g_8aaae4;
extern void *g_87dd0a;
extern void *g_8aaae8;
extern void *g_849314;
extern void *g_8aaa40;
extern void *g_8aaab8;
extern void *g_8aaabc;
extern void *g_8aaac1;
extern void *g_8aaac0;
extern void *g_8aaa6c;
extern void *g_8aaa90;
extern void *g_8aaa80;
extern void *g_8aaa84;
extern void *g_8aaa88;
extern void *g_8aaa8c;

/* IAT function pointers */
extern void *g_76b110;   /* EnterCriticalSection */
extern void *g_76b100;   /* LeaveCriticalSection */
extern void *g_76b2ac;   /* strcmp */

extern void __cdecl FUN_00701970(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006ff9b0(void);
extern void __cdecl FUN_006f8d70(void);
extern void __cdecl FUN_00741980(void);
extern void __cdecl FUN_007418a0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00701740(void);
extern void __cdecl FUN_007018a0(void);
extern void __cdecl FUN_00740fd0(void);
extern void __cdecl FUN_00740ec0(void);
extern void __cdecl FUN_00741700(void);
extern void __cdecl FUN_00741f90(void);
extern void __cdecl FUN_00742830(void);
extern void __cdecl FUN_006f8b20(void);

__declspec(naked) void __cdecl FUN_007034f0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_00701970
        mov     eax, dword ptr [g_8aaaf4]
        cmp     eax, 0x3
        jz      L_350f
        cmp     eax, 0x4
        jnz     L_35ab
L_350f:
        push    0x0
        push    0x0
        push    0x1d
        call    FUN_00701f20
        test    eax, eax
        jnz     L_354f
        mov     eax, dword ptr [g_8aaaf8]
        cmp     eax, 0x8877015e
        jz      L_3674
        test    eax, eax
        jz      L_3674
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_8aaaf8], 0x0
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_354f:
        push    0x8aaa20
        call    dword ptr [g_76b110]
        push    0x8aaa20
        call    dword ptr [g_76b100]
        mov     ebx, dword ptr [esp + 0x2c]
        test    ebx, ebx
        jnz     L_357f
        mov     eax, dword ptr [g_849308]
        push    eax
        push    0x80
        call    FUN_006f3c80
        mov     ebx, eax
L_357f:
        push    0x0
        push    0x0
        push    0x1e
        call    FUN_00701f20
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, ebx
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        jmp     L_35af
L_35ab:
        mov     ebx, dword ptr [esp + 0x2c]
L_35af:
        call    FUN_006ff9b0
        test    ebx, ebx
        jnz     L_35c7
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_35c7:
        cmp     byte ptr [ebx], 0x20
        jnz     L_35d4
L_35cc:
        mov     al, byte ptr [ebx + 0x1]
        inc     ebx
        cmp     al, 0x20
        jz      L_35cc
L_35d4:
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        jz      L_35ee
        cmp     byte ptr [eax], 0x20
        jnz     L_35ee
L_35e1:
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        cmp     cl, 0x20
        jz      L_35e1
        mov     dword ptr [esp + 0x34], eax
L_35ee:
        cmp     byte ptr [ebx], 0x0
        jnz     L_3602
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_3602:
        mov     edi, dword ptr [esp + 0x30]
        test    edi, edi
        jnz     L_3619
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_3619:
        cmp     byte ptr [edi], 0x20
        jnz     L_362a
L_361e:
        mov     al, byte ptr [edi + 0x1]
        inc     edi
        cmp     al, 0x20
        jz      L_361e
        mov     dword ptr [esp + 0x30], edi
L_362a:
        cmp     byte ptr [edi], 0x0
        jnz     L_363e
L_362f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x2
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_363e:
        mov     ebp, dword ptr [g_8aab04]
        test    ebp, ebp
        jz      L_3674
L_3648:
        lea     eax, [ebp + 0x59]
        push    ebx
        push    eax
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L_3670
        mov     ebp, dword ptr [ebp]
        test    ebp, ebp
        jnz     L_3648
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_3670:
        test    ebp, ebp
        jnz     L_3683
L_3674:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_3683:
        mov     esi, dword ptr [ebp + 0x54]
        test    esi, esi
        jz      L_36a2
L_368a:
        lea     ecx, [esi + 0x14]
        push    edi
        push    ecx
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jz      L_362f
        mov     esi, dword ptr [esi]
        test    esi, esi
        jnz     L_368a
L_36a2:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x8569fc
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [esp + 0x34]
        test    edi, edi
        jz      L_36ec
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x85697c
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     L_36f3
L_36ec:
        mov     byte ptr [g_85697c], 0x0
L_36f3:
        xor     eax, eax
        mov     ecx, 0x14
        mov     edi, 0x8aaa68
        rep     stosd
        lea     ecx, [ebp + 0xc]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [g_8aaa70], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [g_8aaa74], eax
        mov     eax, dword ptr [ecx + 0xc]
        add     ebp, 0x44
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [g_8aaa78], edx
        mov     edx, dword ptr [ebp + 0x4]
        mov     dword ptr [g_8aaa7c], eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_8aaaa8], ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    0x8aaa20
        mov     dword ptr [g_8aaa68], 0x50
        mov     dword ptr [g_8aaa98], 0x8569fc
        mov     dword ptr [g_8aaa9c], 0x85697c
        mov     dword ptr [g_8aaaac], edx
        mov     dword ptr [g_8aaab0], eax
        mov     dword ptr [g_8aaab4], ecx
        call    dword ptr [g_76b110]
        push    0x8aaae4
        push    ebx
        call    FUN_006f8d70
        mov     edx, dword ptr [g_8aaae4]
        push    0x81
        push    0x8aaa68
        mov     ebx, 0x1
        push    edx
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00741980
        push    0x8aaa20
        mov     esi, eax
        mov     byte ptr [g_87dd0a], 0x0
        call    dword ptr [g_76b100]
        cmp     esi, 0x8877003c
        jnz     L_37cb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x6
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_37cb:
        cmp     esi, 0x8877014a
        jnz     L_37e2
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x6
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_37e2:
        cmp     esi, 0x88770154
        jnz     L_37f9
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x5
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_37f9:
        xor     edi, edi
        cmp     esi, edi
        jge     L_380e
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_380e:
        mov     ecx, dword ptr [g_8aaae4]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x1c], edi
        mov     byte ptr [g_87dd0a], bl
        call    FUN_007418a0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        mov     byte ptr [g_87dd0a], 0x0
        jnz     L_3848
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x3
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_3848:
        mov     edx, dword ptr [g_849308]
        push    edx
        push    eax
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_8aaae4]
        mov     esi, eax
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    ecx
        call    FUN_007418a0
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x40]
        mov     dword ptr [g_8aaa6c], edx
        mov     edx, dword ptr [esi + 0x44]
        mov     dword ptr [g_8aaa90], eax
        mov     eax, dword ptr [esi + 0x48]
        mov     dword ptr [g_8aaaac], edx
        mov     dword ptr [g_8aaaa8], ecx
        mov     ecx, dword ptr [esi + 0x4c]
        mov     dword ptr [g_8aaab0], eax
        lea     edx, [esi + 0x18]
        mov     eax, dword ptr [edx]
        mov     dword ptr [g_8aaab4], ecx
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [g_8aaa80], eax
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [g_8aaa84], ecx
        mov     ecx, dword ptr [edx + 0xc]
        push    esi
        mov     dword ptr [g_8aaa88], eax
        mov     dword ptr [g_8aaa8c], ecx
        call    FUN_006f4230
        mov     edx, dword ptr [g_849314]
        push    edx
        push    0x1c
        call    FUN_006f3c80
        cmp     eax, edi
        jz      L_38eb
        push    ebx
        mov     ecx, eax
        call    FUN_00701740
        cmp     eax, edi
        jz      L_38eb
        push    eax
        call    FUN_007018a0
L_38eb:
        mov     edx, dword ptr [g_8aaa40]
        mov     ecx, dword ptr [esp + 0x30]
        xor     eax, eax
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        push    edi
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], eax
        push    edi
        push    edx
        mov     edx, dword ptr [g_8aaae4]
        mov     dword ptr [esp + 0x34], eax
        lea     eax, [esp + 0x28]
        mov     dword ptr [esp + 0x30], ecx
        push    eax
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x34], 0x10
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00740fd0
        cmp     eax, edi
        mov     byte ptr [g_87dd0a], 0x0
        jge     L_3958
        mov     eax, dword ptr [g_8aaae4]
        push    eax
        call    FUN_00740ec0
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x7
        pop     ebx
        add     esp, 0x18
        ret     0xc
L_3958:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [g_8aaae4]
        lea     ecx, [esp + 0x34]
        push    ecx
        push    edi
        push    edx
        push    eax
        mov     dword ptr [g_8aaab8], edi
        mov     dword ptr [esp + 0x44], edi
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00741700
        mov     eax, dword ptr [esp + 0x34]
        cmp     eax, edi
        jz      L_39ee
        mov     ecx, dword ptr [g_849308]
        push    ecx
        push    eax
        mov     byte ptr [g_87dd0a], 0x0
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_8aaae4]
        lea     edx, [esp + 0x34]
        push    edx
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x18]
        push    esi
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00741700
        cmp     eax, edi
        mov     byte ptr [g_87dd0a], 0x0
        jnz     L_39e8
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [g_8aaae8]
        push    edi
        push    edx
        push    esi
        push    0x7423d0
        push    eax
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00741f90
        mov     byte ptr [g_87dd0a], 0x0
L_39e8:
        push    esi
        call    FUN_006f4230
L_39ee:
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [g_8aaabc], ecx
        mov     byte ptr [g_8aaac1], bl
        mov     byte ptr [g_8aaac0], 0x0
        call    FUN_00742830
        call    FUN_006f8b20
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x18
        ret     0xc
    }
}
