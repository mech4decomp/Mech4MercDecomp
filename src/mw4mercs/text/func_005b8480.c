/*
 * FUN_005b8480 (782 B) — __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * Vector/array reallocation + element-append routine. Calls into the
 * FUN_005b8a00/20/30 vector helpers and FUN_004084d0 (alloc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d9940(void);
extern void __stdcall FUN_005b89e0(void);
extern void __stdcall FUN_004d1f80(void);
extern void *__stdcall FUN_004084d0(unsigned int size);
extern void __stdcall FUN_005b8a30(void);
extern void __stdcall FUN_005b8a20(void);
extern void __stdcall FUN_0040c5d0(void);
extern void __stdcall FUN_005b8a00(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __stdcall FUN_005b8480(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
sub     esp, 0x58
        mov     eax, dword ptr [esp + 0x68]
        mov     edx, dword ptr [esp + 0x5c]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x6c]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x70]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_004d9940
        lea     eax, [esp + 0x70]
        push    eax
        lea     ecx, [esp + 0x78]
        xor     ebx, ebx
        push    ecx
        lea     ecx, [esi + 0x170]
        mov     dword ptr [esi + 0x168], ebx
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [esp + 0x78], ebx
        call    FUN_005b89e0
        mov     dx, word ptr [edi + 0x60]
        cmp dx, word ptr [DAT_007db0ac]
        mov     cx, word ptr [edi + 0x62]
        lea     eax, [edi + 0x60]
        mov     word ptr [esi + 0x174], 0xffff
        mov     word ptr [esi + 0x176], bx
        mov     dword ptr [esi], 0x786a14
        mov     word ptr [esi + 0x174], dx
        mov     word ptr [esi + 0x176], cx
        jnz     L850F
        cmp cx, word ptr [DAT_007db0ae]
        jz      L8783
L850F:
        push    ebp
        push    0x1
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_004d1f80
        mov     eax, dword ptr [esp + 0x24]
        push    0x4
        lea     edx, [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    dword ptr [eax + 0x20]
        mov     edi, dword ptr [esi + 0x170]
        mov     ebx, dword ptr [esi + 0x168]
        mov     ebp, dword ptr [esp + 0x78]
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, ebp
        mov     dword ptr [esp + 0x70], ebp
        jnc     L8623
        mov     ecx, dword ptr [esi + 0x16c]
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    ebx, ebx
        mov     dword ptr [esp + 0x74], edx
        jz      L85DF
        test    ebp, ebp
        jz      L8596
        lea     ecx, [ebp + ebp*2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L8598
L8596:
        xor     ebp, ebp
L8598:
        mov     edx, dword ptr [esp + 0x78]
        mov     eax, dword ptr [esi + 0x16c]
        push    edx
        push    ebp
        push    eax
        push    ebx
        call    FUN_005b8a30
        mov     ecx, dword ptr [esi + 0x168]
        sub     edi, ecx
        mov     eax, 0x2aaaaaab
        imul    edi
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    edx
        push    ecx
        mov     ebx, ebp
        mov     dword ptr [esp + 0x84], ecx
        call    FUN_005b8a20
        mov     ebp, dword ptr [esp + 0x90]
        add     esp, 0x18
        jmp     L85FD
L85DF:
        test    ebp, ebp
        jz      L85FB
        lea     ecx, [ebp + ebp*2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        mov     ebp, dword ptr [esp + 0x7c]
        add     esp, 0x4
        mov     ebx, eax
        jmp     L85FD
L85FB:
        xor     ebx, ebx
L85FD:
        mov     eax, dword ptr [esp + 0x74]
        lea     edx, [eax + eax*2]
        lea     eax, [ebx + edx*4]
        mov     dword ptr [esi + 0x16c], eax
        mov     eax, dword ptr [esp + 0x70]
        lea     ecx, [eax + eax*2]
        lea     edx, [ebx + ecx*4]
        mov     dword ptr [esi + 0x168], ebx
        mov     dword ptr [esi + 0x170], edx
L8623:
        test    ebp, ebp
        mov     dword ptr [esp + 0x70], 0x0
        jle     L876E
L8633:
        mov     edx, dword ptr [esp + 0x24]
        push    0xc
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esi + 0x170]
        mov     ebx, dword ptr [esi + 0x16c]
        cmp     ebx, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L867F
        test    ebx, ebx
        jz      L8671
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebx], eax
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx + 0x4], ecx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0x8], edx
L8671:
        add     ebx, 0xc
        mov     dword ptr [esi + 0x16c], ebx
        jmp     L8759
L867F:
        mov     edi, dword ptr [esi + 0x168]
        mov     ecx, ebx
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x74], 0x1
        mov     dword ptr [esp + 0x6c], edx
        lea     eax, [esp + 0x74]
        jc      L86B2
        lea     eax, [esp + 0x6c]
L86B2:
        add     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x6c], edx
        jz      L86CF
        lea     ecx, [edx + edx*2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x74], eax
        jmp     L86D7
L86CF:
        mov     dword ptr [esp + 0x74], 0x0
L86D7:
        mov     edx, dword ptr [esp + 0x78]
        mov     eax, dword ptr [esp + 0x74]
        push    edx
        push    eax
        push    ebx
        push    edi
        call    FUN_005b8a30
        mov     ebp, eax
        add     esp, 0x10
        test    ebp, ebp
        jz      L86FD
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, ebp
        call    FUN_0040c5d0
L86FD:
        mov     edx, dword ptr [esp + 0x78]
        push    edx
        add     ebp, 0xc
        push    ebp
        push    ebx
        push    ebx
        call    FUN_005b8a30
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, edi
        mov     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     esp, 0x10
        add     edx, eax
        push    edx
        push    edi
        mov     dword ptr [esp + 0x1c], edi
        lea     edi, [esi + 0x170]
        mov     ecx, edi
        call    FUN_005b8a00
        mov     ecx, dword ptr [esp + 0x6c]
        mov     eax, dword ptr [esp + 0x74]
        lea     ecx, [ecx + ecx*2]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [esi + 0x168], eax
        mov     dword ptr [esi + 0x16c], ebx
        mov     dword ptr [edi], edx
L8759:
        mov     eax, dword ptr [esp + 0x70]
        mov     ecx, dword ptr [esp + 0x78]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [esp + 0x70], eax
        jl      L8633
L876E:
        lea     ecx, [esp + 0x24]
        call    FUN_004d21c0
        pop     ebp
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x58
        ret     0x10
L8783:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x58
        ret     0x10
    }


}
