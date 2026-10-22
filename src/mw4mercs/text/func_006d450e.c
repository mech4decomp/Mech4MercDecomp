/*
 * FUN_006D450E (491 B) — __thiscall (ecx = this), 4 params (ret 0x10).
 *
 * Object constructor/initializer: sets up a 2D array (ebp x eax entries
 * of 8 bytes each), allocates/frees backing buffers at [this+0x128] and
 * [this+0x11c], and initializes counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) int __cdecl FUN_006D450E(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [esp + 0x1c]
        xor     ebx, ebx
        test    cl, cl
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x11c], ebx
        mov     dword ptr [esi + 0x120], ebx
        push    edi
        mov     dword ptr [esi + 0x128], ebx
        mov     dword ptr [esi + 0x12c], ebx
        mov     dword ptr [esi + 0xc], ebp
        mov     dword ptr [esi + 8], eax
        jne     L_6d455c
        mov     dword ptr [esi], 0x100
        mov     dword ptr [esi + 4], 8
        jmp     L_6d4569
L_6d455c:
        mov     dword ptr [esi], 0x200
        mov     dword ptr [esi + 4], 9
L_6d4569:
        imul    ebp, eax
        lea     ecx, [ebp*8 + 4]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        je      L_6d459c
        lea     ecx, [ebp - 1]
        cmp     ecx, ebx
        lea     edi, [eax + 4]
        mov     dword ptr [eax], ebp
        mov     eax, edi
        jl      L_6d459e
        inc     ecx
L_6d458f:
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 4], ebx
        add     eax, 8
        dec     ecx
        jne     L_6d458f
        jmp     L_6d459e
L_6d459c:
        xor     edi, edi
L_6d459e:
        cmp     ebp, ebx
        mov     dword ptr [esi + 0x124], edi
        jle     L_6d45d9
        mov     dword ptr [esp + 0x20], ebp
L_6d45ac:
        cmp     dword ptr [edi + 4], ebx
        je      L_6d45cb
        mov     edx, dword ptr [edi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
        mov     dword ptr [edi + 4], 0
        xor     ebx, ebx
L_6d45cb:
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 8
        dec     eax
        mov     dword ptr [esp + 0x20], eax
        jne     L_6d45ac
L_6d45d9:
        mov     ebx, dword ptr [esi + 0x12c]
        cmp     ebp, ebx
        je      L_6d4667
        test    ebp, ebp
        jbe     L_6d4648
        __emit  0x8D /* lea eax, [ebp*4] (no-base SIB 8D 04 AD) */
        __emit  0x04
        __emit  0xAD
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [esi + 0x128]
        add     esp, 4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [esp + 0x20], edi
        je      L_6d4640
        cmp     ebp, ebx
        mov     ecx, ebp
        jb      L_6d4613
        mov     ecx, ebx
L_6d4613:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      L_6d4631
        lea     eax, [edi + ecx*4]
        sub     edx, edi
        inc     ecx
L_6d4620:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6d4620
        mov     edi, dword ptr [esp + 0x20]
L_6d4631:
        mov     eax, dword ptr [esi + 0x128]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_6d4640:
        mov     dword ptr [esi + 0x128], edi
        jmp     L_6d4661
L_6d4648:
        mov     ecx, dword ptr [esi + 0x128]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x128], 0
L_6d4661:
        mov     dword ptr [esi + 0x12c], ebp
L_6d4667:
        test    ebp, ebp
        jle     L_6d4677
        mov     edi, dword ptr [esi + 0x128]
        mov     ecx, ebp
        xor     eax, eax
        rep     stosd
L_6d4677:
        mov     ebp, dword ptr [esi + 0x120]
        cmp     ebp, 0x64
        mov     dword ptr [esi + 0x114], 0x64
        mov     dword ptr [esi + 0x118], 0
        je      L_6d46f0
        push    0x190
        call    FUN_004084d0
        mov     ebx, dword ptr [esi + 0x11c]
        add     esp, 4
        test    ebx, ebx
        mov     edi, eax
        je      L_6d46e0
        cmp     ebp, 0x64
        mov     ecx, 0x64
        ja      L_6d46bb
        mov     ecx, ebp
L_6d46bb:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L_6d46d7
        mov     edx, ebx
        lea     eax, [edi + ecx*4]
        sub     edx, edi
        inc     ecx
L_6d46ca:
        mov     ebp, dword ptr [edx + eax]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_6d46ca
L_6d46d7:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
L_6d46e0:
        mov     dword ptr [esi + 0x11c], edi
        mov     dword ptr [esi + 0x120], 0x64
L_6d46f0:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
