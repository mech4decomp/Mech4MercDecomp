/*
 * FUN_007626D0 (273 B) — Object constructor/allocator.
 *
 * Allocates a 0x30-byte object via a virtual allocator call ([edi+0x18]),
 * initializes its fields, registers it in a global table indexed by a value
 * from FUN_00762940, and returns it.
 *
 * __cdecl, RET (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8bd300;
extern int __cdecl FUN_00762940(void);

__declspec(naked) void __stdcall FUN_007626D0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        xor     ebx, ebx
        cmp     edi, ebx
        jnz     L_7626e6
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_7626e6:
        push    ebx
        push    0x30
        call    dword ptr [edi + 0x18]
        add     esp, 0x8
        mov     esi, eax
        jmp     L_7626f7
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_7626f7:
        jmp     L_7626f9
L_7626f9:
        jmp     L_7626fb
L_7626fb:
        jmp     L_7626fd
L_7626fd:
        jmp     L_7626ff
L_7626ff:
        jmp     L_762701
L_762701:
        jmp     L_762703
L_762703:
        jmp     L_762705
L_762705:
        jmp     L_762707
L_762707:
        jmp     L_762709
L_762709:
        jmp     L_76270b
L_76270b:
        jmp     L_76270d
L_76270d:
        jmp     L_76270f
L_76270f:
        jmp     L_762711
L_762711:
        jmp     L_762713
L_762713:
        jmp     L_762715
L_762715:
        jmp     L_762717
L_762717:
        jmp     L_762719
L_762719:
        jmp     L_76271b
L_76271b:
        jmp     L_76271d
L_76271d:
        jmp     L_76271f
L_76271f:
        jmp     L_762721
L_762721:
        jmp     L_762723
L_762723:
        jmp     L_762725
L_762725:
        jmp     L_762727
L_762727:
        jmp     L_762729
L_762729:
        jmp     L_76272b
L_76272b:
        jmp     L_76272d
L_76272d:
        cmp     esi, ebx
        jnz     L_762738
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_762738:
        lea     ecx, [esi + 0xa]
        mov     dword ptr [esi + 0x20], edi
        xor     eax, eax
        mov     word ptr [esi + 0x8], bx
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [esi + 0x1c], ebx
        call    FUN_00762940
        mov     dword ptr [esi], eax
        jmp     L_76275f
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_76275f:
        jmp     L_762761
L_762761:
        jmp     L_762763
L_762763:
        jmp     L_762765
L_762765:
        jmp     L_762767
L_762767:
        jmp     L_762769
L_762769:
        jmp     L_76276b
L_76276b:
        jmp     L_76276d
L_76276d:
        jmp     L_76276f
L_76276f:
        jmp     L_762771
L_762771:
        jmp     L_762773
L_762773:
        jmp     L_762775
L_762775:
        jmp     L_762777
L_762777:
        jmp     L_762779
L_762779:
        jmp     L_76277b
L_76277b:
        jmp     L_76277d
L_76277d:
        jmp     L_76277f
L_76277f:
        jmp     L_762781
L_762781:
        jmp     L_762783
L_762783:
        jmp     L_762785
L_762785:
        jmp     L_762787
L_762787:
        jmp     L_762789
L_762789:
        jmp     L_76278b
L_76278b:
        jmp     L_76278d
L_76278d:
        jmp     L_76278f
L_76278f:
        jmp     L_762791
L_762791:
        jmp     L_762793
L_762793:
        jmp     L_762795
L_762795:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_8bd300 + edx*4], esi
        mov     dword ptr [esi + 0x4], eax
        jmp     L_7627aa
        __emit 0xD6          /* junk padding skipped by EB 04 jump */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L_7627aa:
        jmp     L_7627ac
L_7627ac:
        jmp     L_7627ae
L_7627ae:
        jmp     L_7627b0
L_7627b0:
        jmp     L_7627b2
L_7627b2:
        jmp     L_7627b4
L_7627b4:
        jmp     L_7627b6
L_7627b6:
        jmp     L_7627b8
L_7627b8:
        jmp     L_7627ba
L_7627ba:
        jmp     L_7627bc
L_7627bc:
        jmp     L_7627be
L_7627be:
        jmp     L_7627c0
L_7627c0:
        jmp     L_7627c2
L_7627c2:
        jmp     L_7627c4
L_7627c4:
        jmp     L_7627c6
L_7627c6:
        jmp     L_7627c8
L_7627c8:
        jmp     L_7627ca
L_7627ca:
        jmp     L_7627cc
L_7627cc:
        jmp     L_7627ce
L_7627ce:
        jmp     L_7627d0
L_7627d0:
        jmp     L_7627d2
L_7627d2:
        jmp     L_7627d4
L_7627d4:
        jmp     L_7627d6
L_7627d6:
        jmp     L_7627d8
L_7627d8:
        jmp     L_7627da
L_7627da:
        jmp     L_7627dc
L_7627dc:
        jmp     L_7627de
L_7627de:
        jmp     L_7627e0
L_7627e0:
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
    }
}
