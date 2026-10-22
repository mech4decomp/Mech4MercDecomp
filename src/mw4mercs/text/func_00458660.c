/*
 * FUN_00458660 (1205 B) — MLR geometry/material helper (__thiscall, RET 0x4).
 * Resizes several 16-byte-element arrays, byte buffers, and 8-byte-element
 * arrays via malloc/free + copy loops, and calls a series of virtual methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00421100(void);

__declspec(naked) void FUN_00458660(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp+0x34]
        mov     eax, dword ptr [ebp+0xc]
        test    eax, eax
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [esp+0x14], edi
        jz      L_45878F
        mov     ecx, dword ptr [eax+0x14]
        test    ecx, ecx
        jbe     L_45878F
        mov     eax, dword ptr [ebp]
        lea     ecx, [esp+0x10]
        push    ecx
        lea     edx, [esp+0x20]
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax+0x28]
        mov     esi, dword ptr [edi+0xc]
        mov     eax, dword ptr [esp+0x10]
        mov     ebx, dword ptr [esi+0x14]
        cmp     eax, ebx
        mov     dword ptr [esp+0x30], eax
        jz      L_45875D
        test    eax, eax
        jbe     L_45873F
        mov     dword ptr [esp+0x34], eax
        lea     eax, [eax+eax*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4586DF
        mov     ecx, dword ptr [esp+0x34]
        dec     ecx
        mov     dword ptr [esp+0x34], ecx
        mov     ecx, eax
        mov     dword ptr [esp+0x18], ecx
        jmp     L_4586EB
L_4586DF:
        mov     dword ptr [esp+0x18], 0
        mov     ecx, dword ptr [esp+0x18]
L_4586EB:
        mov     edx, dword ptr [esi+0x10]
        test    edx, edx
        jz      L_45873A
        mov     eax, dword ptr [esp+0x30]
        cmp     eax, ebx
        jc      L_4586FC
        mov     eax, ebx
L_4586FC:
        mov     esi, eax
        dec     eax
        test    esi, esi
        jz      L_458727
        lea     esi, [eax+eax*2]
        mov     ebx, edx
        lea     esi, [ecx+esi*4]
        sub     ebx, ecx
        lea     edi, [eax+1]
L_458710:
        lea     edx, [ebx+esi]
        push    edx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_458710
        mov     edi, dword ptr [esp+0x14]
L_458727:
        mov     esi, dword ptr [edi+0xc]
        mov     eax, dword ptr [esi+0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp+0x1c]
        add     esp, 4
L_45873A:
        mov     dword ptr [esi+0x10], ecx
        jmp     L_458752
L_45873F:
        mov     eax, dword ptr [esi+0x10]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x10], 0
L_458752:
        mov     ecx, dword ptr [esp+0x30]
        mov     dword ptr [esi+0x14], ecx
        mov     eax, dword ptr [esp+0x10]
L_45875D:
        mov     edx, dword ptr [esi+0x10]
        mov     esi, dword ptr [esp+0x1c]
        lea     ecx, [eax+eax*2]
        shl     ecx, 2
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     esi, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x14]
        mov     eax, dword ptr [ecx]
        push    esi
        push    edx
        call    dword ptr [eax+0x24]
        mov     edi, dword ptr [esp+0x14]
        jmp     L_4587B2
L_45878F:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0x28]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x1c]
        mov     edx, dword ptr [edi]
        push    eax
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx+0x24]
L_4587B2:
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0x8c]
        mov     edx, dword ptr [ebp]
        lea     eax, [esp+0x28]
        push    eax
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0x10]
        mov     ebx, dword ptr [esp+0x28]
        mov     edx, dword ptr [esp+0x24]
        xor     ecx, ecx
        xor     esi, esi
        test    ebx, ebx
        jle     L_4587FF
L_4587E9:
        xor     eax, eax
        mov     al, byte ptr [ecx+edx]
        sub     eax, 2
        add     esi, eax
        inc     ecx
        cmp     ecx, ebx
        lea     esi, [esi+eax*2]
        jl      L_4587E9
        mov     edi, dword ptr [esp+0x14]
L_4587FF:
        mov     edi, dword ptr [edi+0xc]
        cmp     esi, dword ptr [edi+0x4]
        mov     dword ptr [esp+0x34], edi
        jz      L_458866
        test    esi, esi
        jbe     L_45884A
        push    esi
        call    FUN_004084d0
        mov     ecx, dword ptr [edi]
        add     esp, 4
        test    ecx, ecx
        mov     ebp, eax
        jz      L_458846
        mov     eax, dword ptr [edi+0x4]
        cmp     esi, eax
        jnc     L_458829
        mov     eax, esi
L_458829:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_45883D
L_458830:
        mov     dl, byte ptr [ecx+eax]
        mov     byte ptr [eax+ebp], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_458830
L_45883D:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_458846:
        mov     dword ptr [edi], ebp
        jmp     L_45885B
L_45884A:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
L_45885B:
        mov     dword ptr [edi+0x4], esi
        mov     ebx, dword ptr [esp+0x28]
        mov     edx, dword ptr [esp+0x24]
L_458866:
        xor     ebp, ebp
        xor     eax, eax
        xor     esi, esi
        test    ebx, ebx
        mov     dword ptr [esp+0x30], ebp
        mov     dword ptr [esp+0x18], eax
        jle     L_4588EA
L_458878:
        cmp     byte ptr [edx+ebp], 2
        mov     edi, 2
        jbe     L_4588CE
L_458883:
        mov     ecx, dword ptr [esp+0x34]
        mov     ecx, dword ptr [ecx]
        add     eax, edi
L_45888B:
        mov     edx, dword ptr [esp+0x20]
        mov     ebx, dword ptr [esp+0x18]
        mov     dl, byte ptr [ebx+edx]
        mov     ebp, esi
        mov     byte ptr [ecx+ebp], dl
        mov     edx, dword ptr [esp+0x20]
        mov     dl, byte ptr [eax+edx-1]
        inc     esi
        mov     ebp, esi
        mov     byte ptr [ecx+ebp], dl
        mov     edx, dword ptr [esp+0x20]
        mov     dl, byte ptr [eax+edx]
        inc     esi
        mov     ebp, esi
        mov     byte ptr [ecx+ebp], dl
        mov     edx, dword ptr [esp+0x24]
        mov     ebp, dword ptr [esp+0x30]
        xor     ebx, ebx
        mov     bl, byte ptr [edx+ebp]
        inc     esi
        inc     edi
        inc     eax
        cmp     edi, ebx
        jl      L_45888B
        mov     ebx, dword ptr [esp+0x28]
L_4588CE:
        mov     eax, dword ptr [esp+0x18]
        xor     ecx, ecx
        mov     cl, byte ptr [edx+ebp]
        add     eax, ecx
        inc     ebp
        cmp     ebp, ebx
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esp+0x30], ebp
        jl      L_458878
        mov     edi, dword ptr [esp+0x34]
L_4588EA:
        mov     ebp, dword ptr [esp+0x14]
        mov     eax, dword ptr [edi]
        mov     edx, dword ptr [ebp]
        push    esi
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx+0x88]
        mov     eax, 0x55555556
        imul    esi
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     esi, edx
        mov     edx, dword ptr [ebp]
        push    1
        push    esi
        xor     ebx, ebx
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esp+0x40], esi
        call    dword ptr [edx+0xc]
        mov     edi, dword ptr [ebp+0x60]
        cmp     esi, edi
        jz      L_4589C7
        cmp     esi, ebx
        jbe     L_4589B5
        mov     eax, esi
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_458953
        lea     ecx, [esi-1]
        mov     dword ptr [esp+0x30], ecx
        mov     ecx, eax
        mov     dword ptr [esp+0x18], ecx
        jmp     L_458959
L_458953:
        mov     dword ptr [esp+0x18], ebx
        mov     ecx, ebx
L_458959:
        mov     ebx, dword ptr [ebp+0x5c]
        test    ebx, ebx
        jz      L_4589B0
        cmp     esi, edi
        jnc     L_458966
        mov     edi, esi
L_458966:
        mov     edx, edi
        dec     edi
        test    edx, edx
        jz      L_4589A0
        mov     eax, edi
        shl     eax, 4
        lea     ebp, [eax+ebx+0xc]
        sub     ebx, ecx
        lea     esi, [eax+ecx]
        inc     edi
L_45897C:
        lea     eax, [ebx+esi]
        push    eax
        mov     ecx, esi
        call    FUN_00421100
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [esi+0xc], ecx
        dec     edi
        sub     ebp, 0x10
        sub     esi, 0x10
        test    edi, edi
        ja      L_45897C
        mov     esi, dword ptr [esp+0x34]
        mov     ebp, dword ptr [esp+0x14]
L_4589A0:
        mov     eax, dword ptr [ebp+0x5c]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp+0x1c]
        add     esp, 4
L_4589B0:
        mov     dword ptr [ebp+0x5c], ecx
        jmp     L_4589C4
L_4589B5:
        mov     edx, dword ptr [ebp+0x5c]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp+0x5c], ebx
L_4589C4:
        mov     dword ptr [ebp+0x60], esi
L_4589C7:
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax+0x94]
        mov     ebx, dword ptr [esp+0x3c]
        mov     eax, dword ptr [ebx+0xc]
        test    eax, eax
        jz      L_458ACB
        mov     ecx, dword ptr [eax+0x1c]
        test    ecx, ecx
        jbe     L_458ACB
        mov     edx, dword ptr [ebx]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x30]
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, dword ptr [esp+0x10]
        mov     edi, dword ptr [esi+0x1c]
        cmp     eax, edi
        mov     dword ptr [esp+0x34], eax
        jz      L_458A9D
        test    eax, eax
        jbe     L_458A7F
        lea     edx, [eax*8]
        push    edx
        mov     ebx, eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_458A36
        dec     ebx
        mov     dword ptr [esp+0x30], ebx
        mov     ebx, eax
        jmp     L_458A38
L_458A36:
        xor     ebx, ebx
L_458A38:
        mov     ecx, dword ptr [esi+0x18]
        test    ecx, ecx
        jz      L_458A76
        mov     edx, dword ptr [esp+0x34]
        cmp     edx, edi
        jc      L_458A49
        mov     edx, edi
L_458A49:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_458A6A
        lea     eax, [ebx+edx*8]
        sub     ecx, ebx
        inc     edx
L_458A56:
        mov     edi, dword ptr [eax+ecx]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [eax+ecx+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_458A56
L_458A6A:
        mov     eax, dword ptr [esi+0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_458A76:
        mov     dword ptr [esi+0x18], ebx
        mov     ebx, dword ptr [esp+0x3c]
        jmp     L_458A92
L_458A7F:
        mov     ecx, dword ptr [esi+0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x18], 0
L_458A92:
        mov     edx, dword ptr [esp+0x34]
        mov     dword ptr [esi+0x1c], edx
        mov     eax, dword ptr [esp+0x10]
L_458A9D:
        mov     edx, dword ptr [esi+0x18]
        mov     esi, dword ptr [esp+0x2c]
        lea     ecx, [eax*8]
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp]
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp+0x10]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax+0x2c]
        jmp     L_458AEE
L_458ACB:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x30]
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x2c]
        mov     edx, dword ptr [ebp]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx+0x2c]
L_458AEE:
        mov     edx, dword ptr [ebx]
        push    0
        mov     ecx, ebx
        call    dword ptr [edx+0x18]
        lea     edi, [ebp+0x2c]
        mov     esi, eax
        mov     ecx, 6
        rep movsd
        pop     edi
        pop     esi
        mov     word ptr [ebp+0x56], 0
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x28
        ret     0x4
    }
}
