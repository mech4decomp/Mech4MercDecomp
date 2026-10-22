/*
 * FUN_005237F0 (895 B) — Initialize bot AI player entry.
 *
 * __cdecl (3 params), returns int (EAX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005237f0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00547457(void);
extern void __cdecl FUN_0054645b(void);
extern void __cdecl FUN_006fa870(void);
extern void __cdecl FUN_1004d1cc9(void);
extern void __cdecl FUN_006f8bce(void);
extern void __cdecl FUN_1004d1e56(void);
extern int DAT_00523b70;   /* switch jump table base 0x00523B70 */
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x50
        /* mov eax, [0x007dab44] — MSVC6 encodes as B8 (mov reg, imm32) */
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        /* mov edx, [0x007dab40] */
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ebp + 0x10]
        xor     ecx, edx
        mov     edx, dword ptr [eax]
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        push    edi
        mov     edi, dword ptr [edx]
        mov     dword ptr [ebp - 4], ecx
        mov     ecx, dword ptr [eax]
        push    1
        push    edi
        xor     esi, 0x85739531
        mov     dword ptr [ebp - 8], edi
        mov     dword ptr [ebp + 0x10], ecx
        /* call rel32 */
        call FUN_00547457
        add     esp, 8
        test    al, al
        jnz     l_ok1
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

    l_ok1:
        xor     edx, edx
        lea     eax, [esi + 0x205f34]
        mov     ecx, 0x18
    l_count_loop:
        cmp     byte ptr [eax], 0
        jz      l_count_skip
        inc     edx
    l_count_skip:
        add     eax, 0x22ac
        dec     ecx
        jnz     l_count_loop

        /* mov eax, [0x007dab44] */
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        /* xor ecx, [0x007dab40] */
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x14]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1800]
        mov     eax, dword ptr [esi + 0x50]
        mov     ebx, dword ptr [eax + 0x10]
        test    ebx, ebx
        jz      l_no_extra
        lea     ecx, [ecx + edx - 1]
        jmp     l_check_cap
    l_no_extra:
        add     ecx, edx
    l_check_cap:
        cmp     ecx, dword ptr [eax + 0x36c]
        jl      l_cap2
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

    l_cap2:
        cmp     edx, dword ptr [eax + 0x370]
        jl      l_cap3
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

    l_cap3:
        mov     ecx, esi
        /* call rel32 */
        call FUN_0054645b
        test    eax, eax
        mov     dword ptr [ebp - 0xc], eax
        jge     l_cap4
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

    l_cap4:
        cmp     eax, 0x18
        jl      l_cap5
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc

    l_cap5:
        imul    eax, eax, 0x22ac
        or      ecx, 0xffffffff
        lea     ebx, [eax + esi]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     byte ptr [ebx + 0x205f34], 1
        lea     edx, [ebx + 0x205d34]
        mov     byte ptr [ebx + 0x205f35], 0
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [ebp + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        lea     edx, [ebx + 0x205e34]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 4]
        and     ecx, 3
        cmp     eax, 9
        rep movsb
        ja      l_default
        /* jmp dword ptr [eax*4 + 0x523b70] — switch table */
        jmp     dword ptr [eax*4 + DAT_00523b70]

    /* Case 0: "Content\\ABLScripts\\Bots\\WussyBot.abl" */
    l_case0:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a350
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 1: "Content\\ABLScripts\\Bots\\EasyBot.abl" */
    l_case1:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a32c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 2: "Content\\ABLScripts\\Bots\\MediumBot.abl" */
    l_case2:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a300
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 3: "Content\\ABLScripts\\Bots\\RookieSniperBot.abl" */
    l_case3:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a2d4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 4: "Content\\ABLScripts\\Bots\\RookieBot.abl" */
    l_case4:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a2ac
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 5: "Content\\ABLScripts\\Bots\\DodgeBot.abl" */
    l_case5:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a284
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 6: "Content\\ABLScripts\\Bots\\SniperBot.abl" */
    l_case6:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a25c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 7: "Content\\ABLScripts\\Bots\\KillerBot.abl" */
    l_case7:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a234
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 8: "Content\\ABLScripts\\Bots\\SlaughterBot.abl" */
    l_case8:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a208
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Case 9: "Content\\ABLScripts\\Bots\\UberBot.abl" */
    l_case9:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77a1e4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        lea     edx, [ebx + 0x205f40]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        jmp     l_done_switch

    /* Default: assert failure */
    l_default:
        push    eax
        push    0x77a1c4
        /* call rel32 */
        call FUN_006fa870
        add     esp, 8
        test    eax, eax
        jz      l_done_switch
        int     3

    l_done_switch:
        push    0
        push    0x77a1a4
        lea     ecx, [ebp - 0x50]
        /* call rel32 */
        call FUN_1004d1cc9
        mov     cx, word ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 8]
        mov     esi, dword ptr [ebp - 0xc]
        push    1
        mov     word ptr [ebx + 0x206040], cx
        mov     dx, word ptr [ebp - 0xe]
        push    eax
        lea     ecx, [esi + 0x100]
        push    ecx
        mov     word ptr [ebx + 0x206042], dx
        /* call rel32 */
        call FUN_006f8bce
        lea     ecx, [ebp - 0x50]
        /* call rel32 */
        call FUN_1004d1e56
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }


}
