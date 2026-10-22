/*
 * FUN_006d4910 (673 B) - __thiscall fgd-file loader/initializer. Reads a
 * version header and geometry counts from a stream object (vtable call at
 * +0x20), allocates/resizes the this-object's buffer arrays (offsets
 * 0x114-0x12c), and initializes per-tile records via FUN_006d3b90. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);   /* assert */
extern void __cdecl FUN_004084d0(void);   /* alloc */
extern void __cdecl FUN_004084e0(void);   /* free */
extern void __cdecl FUN_006d3b90(void);
extern void __cdecl FUN_006d5240(void);

__declspec(naked) void FUN_006d4910(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        push    0x4
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        cmp     dword ptr [ebp - 0x4], 0x6
        jge     L_4942
        push    0x79eae0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4942
        int     3
    L_4942:
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        push    ebx
        lea     ebx, [esi + 0x4]
        jle     L_4959
        mov     edx, dword ptr [edi]
        push    0x4
        push    ebx
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        jmp     L_495f
    L_4959:
        mov     dword ptr [ebx], 0x8
    L_495f:
        mov     ecx, dword ptr [ebx]
        mov     edx, dword ptr [edi]
        mov     eax, 0x1
        shl     eax, cl
        push    0x4
        lea     ebx, [esi + 0x8]
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi], eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     edi, [esi + 0xc]
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        lea     ecx, [esi + 0x118]
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esi + 0x118]
        mov     edi, dword ptr [edi]
        imul    edi, dword ptr [ebx]
        mov     eax, 0x51eb851f
        imul    ecx
        sar     edx, 0x5
        mov     eax, edx
        shr     eax, 0x1f
        lea     edx, [edx + eax*1 + 0x1]
        lea     eax, [edx + edx*4]
        mov     dword ptr [ebp - 0x10], ecx
        lea     eax, [eax + eax*4]
        shl     eax, 0x2
        lea     ecx, [edi*8 + 0x4]
        push    ecx
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [esi + 0x114], eax
        call    FUN_004084d0
        xor     ebx, ebx
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_49f9
        lea     ecx, [edi - 0x1]
        cmp     ecx, ebx
        lea     edx, [eax + 0x4]
        mov     dword ptr [eax], edi
        mov     eax, edx
        jl      L_49fb
        inc     ecx
    L_49ec:
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        add     eax, 0x8
        dec     ecx
        jnz     L_49ec
        jmp     L_49fb
    L_49f9:
        xor     edx, edx
    L_49fb:
        cmp     edi, dword ptr [esi + 0x12c]
        mov     dword ptr [esi + 0x124], edx
        jz      L_4a8d
        cmp     edi, ebx
        jbe     L_4a72
        lea     edx, [edi*4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x128]
        add     esp, 0x4
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [ebp - 0xc], ebx
        jz      L_4a68
        mov     ecx, dword ptr [esi + 0x12c]
        cmp     edi, ecx
        jnc     L_4a3c
        mov     ecx, edi
    L_4a3c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_4a59
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
    L_4a49:
        mov     ebx, dword ptr [edx + eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_4a49
        mov     ebx, dword ptr [ebp - 0xc]
    L_4a59:
        mov     eax, dword ptr [esi + 0x128]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_4a68:
        mov     dword ptr [esi + 0x128], ebx
        xor     ebx, ebx
        jmp     L_4a87
    L_4a72:
        mov     ecx, dword ptr [esi + 0x128]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x128], ebx
    L_4a87:
        mov     dword ptr [esi + 0x12c], edi
    L_4a8d:
        cmp     edi, ebx
        jle     L_4a9f
        mov     edx, dword ptr [esi + 0x128]
        mov     ecx, edi
        xor     eax, eax
        mov     edi, edx
        rep     stosd
    L_4a9f:
        mov     ebx, dword ptr [esi + 0x120]
        mov     ecx, dword ptr [ebp - 0x8]
        cmp     ecx, ebx
        jz      L_4b2a
        test    ecx, ecx
        jbe     L_4b06
        lea     edx, [ecx*4 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x11c]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        jz      L_4afe
        mov     ecx, dword ptr [ebp - 0x8]
        cmp     ecx, ebx
        jc      L_4ad5
        mov     ecx, ebx
    L_4ad5:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_4aef
        lea     eax, [edi + ecx*4]
        sub     edx, edi
        inc     ecx
    L_4ae2:
        mov     ebx, dword ptr [edx + eax*1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_4ae2
    L_4aef:
        mov     eax, dword ptr [esi + 0x11c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_4afe:
        mov     dword ptr [esi + 0x11c], edi
        jmp     L_4b1f
    L_4b06:
        mov     ecx, dword ptr [esi + 0x11c]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x11c], 0x0
    L_4b1f:
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [esi + 0x120], edx
        mov     ecx, edx
    L_4b2a:
        mov     ebx, dword ptr [ebp - 0x10]
        xor     eax, eax
        test    ebx, ebx
        jle     L_4b8e
        mov     edi, dword ptr [esi + 0x11c]
        mov     dword ptr [ebp - 0x10], ebx
    L_4b3c:
        push    0x3c
        call    FUN_004084d0
        xor     ecx, ecx
        add     esp, 0x4
        cmp     eax, ecx
        jz      L_4b6b
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     byte ptr [eax], cl
        mov     byte ptr [eax + 0x1], cl
        jmp     L_4b6d
    L_4b6b:
        xor     eax, eax
    L_4b6d:
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [edi], eax
        mov     ecx, dword ptr [ebp - 0x4]
        push    ecx
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006d3b90
        add     edi, 0x4
        dec     ebx
        jnz     L_4b3c
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x10]
    L_4b8e:
        cmp     eax, ecx
        pop     ebx
        jge     L_4ba2
        mov     edx, dword ptr [esi + 0x11c]
        lea     edi, [edx + eax*4]
        sub     ecx, eax
        xor     eax, eax
        rep     stosd
    L_4ba2:
        mov     ecx, esi
        call    FUN_006d5240
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
