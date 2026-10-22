/*
 * FUN_00410500 (907 B) — red-black tree node deletion with rebalancing.
 * Unlinks the node, fixes up the tree (rotations / recoloring), and returns
 * the node's key pointer. Pure pointer/byte manipulation, no external calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00410500(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        push    edi
        mov     ebx, edx
        jnz     L_10519
        mov     ebp, dword ptr [edx+0xc]
        jmp     L_105ae

    L_10519:
        mov     ecx, dword ptr [edx+0xc]
        test    ecx, ecx
        jnz     L_10527
        mov     ebp, esi
        jmp     L_105ae

    L_10527:
        mov     eax, ecx
        mov     ecx, dword ptr [eax+8]
        test    ecx, ecx
        mov     dword ptr [esp+0x14], eax
        jz      L_10543
    L_10534:
        mov     dword ptr [esp+0x14], ecx
        mov     ecx, dword ptr [ecx+8]
        test    ecx, ecx
        jnz     L_10534
        mov     eax, dword ptr [esp+0x14]

    L_10543:
        cmp     eax, edx
        mov     ebp, dword ptr [eax+0xc]
        jz      L_105aa
        mov     edi, dword ptr [esp+0x14]
        mov     ecx, dword ptr [edx+8]
        mov     esi, dword ptr [edx+0xc]
        cmp     edi, esi
        mov     dword ptr [ecx+4], edi
        mov     dword ptr [edi+8], ecx
        jz      L_10576
        test    ebp, ebp
        mov     ecx, dword ptr [edi+4]
        jz      L_10568
        mov     dword ptr [ebp+4], ecx
    L_10568:
        mov     dword ptr [edi+0xc], esi
        mov     eax, dword ptr [edx+0xc]
        mov     dword ptr [ecx+8], ebp
        mov     dword ptr [eax+4], edi
        jmp     L_10578
    L_10576:
        mov     ecx, edi

    L_10578:
        mov     eax, dword ptr [esp+0x18]
        cmp     dword ptr [eax], edx
        jnz     L_10584
        mov     dword ptr [eax], edi
        jmp     L_10594
    L_10584:
        mov     esi, dword ptr [edx+4]
        cmp     dword ptr [esi+8], edx
        jnz     L_10591
        mov     dword ptr [esi+8], edi
        jmp     L_10594
    L_10591:
        mov     dword ptr [esi+0xc], edi
    L_10594:
        mov     eax, dword ptr [edx+4]
        mov     bl, byte ptr [edx]
        mov     dword ptr [edi+4], eax
        mov     al, byte ptr [edi]
        mov     byte ptr [edi], bl
        mov     byte ptr [edx], al
        mov     dword ptr [esp+0x14], edx
        mov     ebx, edx
        jmp     L_10628

    L_105aa:
        mov     ebx, dword ptr [esp+0x14]
    L_105ae:
        test    ebp, ebp
        mov     ecx, dword ptr [ebx+4]
        jz      L_105b8
        mov     dword ptr [ebp+4], ecx
    L_105b8:
        mov     eax, dword ptr [esp+0x18]
        cmp     dword ptr [eax], edx
        jnz     L_105c4
        mov     dword ptr [eax], ebp
        jmp     L_105d4
    L_105c4:
        mov     esi, dword ptr [edx+4]
        cmp     dword ptr [esi+8], edx
        jnz     L_105d1
        mov     dword ptr [esi+8], ebp
        jmp     L_105d4
    L_105d1:
        mov     dword ptr [esi+0xc], ebp

    L_105d4:
        mov     eax, dword ptr [esp+0x1c]
        cmp     dword ptr [eax], edx
        jnz     L_105fe
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        jnz     L_105ea
        mov     esi, dword ptr [edx+4]
        mov     dword ptr [eax], esi
        jmp     L_105fe
    L_105ea:
        mov     esi, dword ptr [ebp+8]
        test    esi, esi
        mov     edi, ebp
        jz      L_105fc
    L_105f3:
        mov     edi, esi
        mov     esi, dword ptr [edi+8]
        test    esi, esi
        jnz     L_105f3
    L_105fc:
        mov     dword ptr [eax], edi
    L_105fe:
        mov     eax, dword ptr [esp+0x20]
        cmp     dword ptr [eax], edx
        jnz     L_10628
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        jnz     L_10614
        mov     edx, dword ptr [edx+4]
        mov     dword ptr [eax], edx
        jmp     L_10628
    L_10614:
        mov     edx, dword ptr [ebp+0xc]
        test    edx, edx
        mov     esi, ebp
        jz      L_10626
    L_1061d:
        mov     esi, edx
        mov     edx, dword ptr [esi+0xc]
        test    edx, edx
        jnz     L_1061d
    L_10626:
        mov     dword ptr [eax], esi

    L_10628:
        cmp     byte ptr [ebx], 0
        jz      L_10884
        mov     eax, dword ptr [esp+0x18]
        mov     eax, dword ptr [eax]
        cmp     ebp, eax
        jz      L_1087c
    L_1063f:
        test    ebp, ebp
        jz      L_1064d
        cmp     byte ptr [ebp], 1
        jnz     L_1087c

    L_1064d:
        mov     edx, dword ptr [ecx+8]
        cmp     ebp, edx
        jnz     L_106bc
        mov     edx, dword ptr [ecx+0xc]
        cmp     byte ptr [edx], 0
        jnz     L_1069a
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        mov     byte ptr [edx], 1
        mov     byte ptr [ecx], 0
        mov     dword ptr [ecx+0xc], esi
        jz      L_1066f
        mov     dword ptr [esi+4], ecx
    L_1066f:
        cmp     ecx, eax
        mov     esi, dword ptr [ecx+4]
        mov     dword ptr [edx+4], esi
        jnz     L_10681
        mov     eax, dword ptr [esp+0x18]
        mov     dword ptr [eax], edx
        jmp     L_10691
    L_10681:
        mov     esi, dword ptr [ecx+4]
        cmp     ecx, dword ptr [esi+8]
        jnz     L_1068e
        mov     dword ptr [esi+8], edx
        jmp     L_10691
    L_1068e:
        mov     dword ptr [esi+0xc], edx
    L_10691:
        mov     dword ptr [edx+8], ecx
        mov     dword ptr [ecx+4], edx
        mov     edx, dword ptr [ecx+0xc]
    L_1069a:
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        jz      L_106aa
        cmp     byte ptr [esi], 1
        jnz     L_1073a
    L_106aa:
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        jz      L_1071f
        cmp     byte ptr [esi], 1
        jnz     L_1073a
        jmp     L_1071f

    L_106bc:
        cmp     byte ptr [edx], 0
        jnz     L_106ff
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        mov     byte ptr [edx], 1
        mov     byte ptr [ecx], 0
        mov     dword ptr [ecx+8], esi
        jz      L_106d4
        mov     dword ptr [esi+4], ecx
    L_106d4:
        cmp     ecx, eax
        mov     esi, dword ptr [ecx+4]
        mov     dword ptr [edx+4], esi
        jnz     L_106e6
        mov     eax, dword ptr [esp+0x18]
        mov     dword ptr [eax], edx
        jmp     L_106f6
    L_106e6:
        mov     esi, dword ptr [ecx+4]
        cmp     ecx, dword ptr [esi+0xc]
        jnz     L_106f3
        mov     dword ptr [esi+0xc], edx
        jmp     L_106f6
    L_106f3:
        mov     dword ptr [esi+8], edx
    L_106f6:
        mov     dword ptr [edx+0xc], ecx
        mov     dword ptr [ecx+4], edx
        mov     edx, dword ptr [ecx+8]
    L_106ff:
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        jz      L_1070f
        cmp     byte ptr [esi], 1
        jnz     L_107e2
    L_1070f:
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        jz      L_1071f
        cmp     byte ptr [esi], 1
        jnz     L_107e2

    L_1071f:
        mov     byte ptr [edx], 0
        mov     edx, dword ptr [esp+0x18]
        mov     eax, dword ptr [edx]
        mov     ebp, ecx
        cmp     ebp, eax
        mov     ecx, dword ptr [ecx+4]
        jnz     L_1063f
        jmp     L_1087c

    L_1073a:
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        jz      L_10746
        cmp     byte ptr [esi], 1
        jnz     L_1078b
    L_10746:
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        jz      L_10750
        mov     byte ptr [esi], 1
    L_10750:
        mov     edi, dword ptr [esi+0xc]
        test    edi, edi
        mov     byte ptr [edx], 0
        mov     dword ptr [edx+8], edi
        jz      L_10760
        mov     dword ptr [edi+4], edx
    L_10760:
        mov     eax, dword ptr [edx+4]
        mov     dword ptr [esi+4], eax
        mov     eax, dword ptr [esp+0x18]
        cmp     edx, dword ptr [eax]
        jnz     L_10772
        mov     dword ptr [eax], esi
        jmp     L_10782
    L_10772:
        mov     edi, dword ptr [edx+4]
        cmp     edx, dword ptr [edi+0xc]
        jnz     L_1077f
        mov     dword ptr [edi+0xc], esi
        jmp     L_10782
    L_1077f:
        mov     dword ptr [edi+8], esi
    L_10782:
        mov     dword ptr [esi+0xc], edx
        mov     dword ptr [edx+4], esi
        mov     edx, dword ptr [ecx+0xc]
    L_1078b:
        mov     al, byte ptr [ecx]
        mov     byte ptr [edx], al
        mov     edx, dword ptr [edx+0xc]
        test    edx, edx
        mov     byte ptr [ecx], 1
        jz      L_1079c
        mov     byte ptr [edx], 1
    L_1079c:
        mov     edx, dword ptr [ecx+0xc]
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        mov     dword ptr [ecx+0xc], esi
        jz      L_107ac
        mov     dword ptr [esi+4], ecx
    L_107ac:
        mov     eax, dword ptr [ecx+4]
        mov     dword ptr [edx+4], eax
        mov     eax, dword ptr [esp+0x18]
        cmp     ecx, dword ptr [eax]
        jnz     L_107c4
        mov     dword ptr [eax], edx
        mov     dword ptr [edx+8], ecx
        jmp     L_10879
    L_107c4:
        mov     esi, dword ptr [ecx+4]
        cmp     ecx, dword ptr [esi+8]
        jnz     L_107d7
        mov     dword ptr [esi+8], edx
        mov     dword ptr [edx+8], ecx
        jmp     L_10879
    L_107d7:
        mov     dword ptr [esi+0xc], edx
        mov     dword ptr [edx+8], ecx
        jmp     L_10879

    L_107e2:
        mov     esi, dword ptr [edx+8]
        test    esi, esi
        jz      L_107ee
        cmp     byte ptr [esi], 1
        jnz     L_10833
    L_107ee:
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        jz      L_107f8
        mov     byte ptr [esi], 1
    L_107f8:
        mov     edi, dword ptr [esi+8]
        test    edi, edi
        mov     byte ptr [edx], 0
        mov     dword ptr [edx+0xc], edi
        jz      L_10808
        mov     dword ptr [edi+4], edx
    L_10808:
        mov     eax, dword ptr [edx+4]
        mov     dword ptr [esi+4], eax
        mov     eax, dword ptr [esp+0x18]
        cmp     edx, dword ptr [eax]
        jnz     L_1081a
        mov     dword ptr [eax], esi
        jmp     L_1082a
    L_1081a:
        mov     edi, dword ptr [edx+4]
        cmp     edx, dword ptr [edi+8]
        jnz     L_10827
        mov     dword ptr [edi+8], esi
        jmp     L_1082a
    L_10827:
        mov     dword ptr [edi+0xc], esi
    L_1082a:
        mov     dword ptr [esi+8], edx
        mov     dword ptr [edx+4], esi
        mov     edx, dword ptr [ecx+8]
    L_10833:
        mov     al, byte ptr [ecx]
        mov     byte ptr [edx], al
        mov     edx, dword ptr [edx+8]
        test    edx, edx
        mov     byte ptr [ecx], 1
        jz      L_10844
        mov     byte ptr [edx], 1
    L_10844:
        mov     edx, dword ptr [ecx+8]
        mov     esi, dword ptr [edx+0xc]
        test    esi, esi
        mov     dword ptr [ecx+8], esi
        jz      L_10854
        mov     dword ptr [esi+4], ecx
    L_10854:
        mov     eax, dword ptr [ecx+4]
        mov     dword ptr [edx+4], eax
        mov     eax, dword ptr [esp+0x18]
        cmp     ecx, dword ptr [eax]
        jnz     L_10866
        mov     dword ptr [eax], edx
        jmp     L_10876
    L_10866:
        mov     esi, dword ptr [ecx+4]
        cmp     ecx, dword ptr [esi+0xc]
        jnz     L_10873
        mov     dword ptr [esi+0xc], edx
        jmp     L_10876
    L_10873:
        mov     dword ptr [esi+8], edx
    L_10876:
        mov     dword ptr [edx+0xc], ecx
    L_10879:
        mov     dword ptr [ecx+4], edx

    L_1087c:
        test    ebp, ebp
        jz      L_10884
        mov     byte ptr [ebp], 1
    L_10884:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret
    }
}
