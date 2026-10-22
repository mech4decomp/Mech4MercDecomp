/*
 * FUN_10031C80 (599 B) - __stdcall, RET 0x8.  COM-style object builder: grows
 * a slot array on arg1->+0x20/+0x24, CoCreateInstance (IAT 0x10049234), and
 * fills per-entry data (0x118-byte stride) from arg2->+0x100..+0x108, using
 * IAT lstrlenW (0x100490b8) and 0x100491d0.  Returns an HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049234;   /* IAT: CoCreateInstance */
extern void *g_100491d0;   /* IAT */
extern void *g_100490b8;   /* IAT: lstrlenW */

__declspec(naked) void __stdcall FUN_10031C80(void)
{
    __asm {
        sub     esp, 0x2c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        xor     edi, edi
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], edi
        je      L1
        mov     ebx, dword ptr [esi + 0x24]
        mov     edx, dword ptr [eax]
        lea     ebx, [ebx*4 + 4]
        push    ebx
        push    ecx
        push    eax
        call    dword ptr [edx + 0x10]
        jmp     L2
L1:
        mov     ecx, dword ptr [eax]
        push    4
        push    eax
        call    dword ptr [ecx + 0xc]
L2:
        cmp     eax, edi
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esi + 0x20], edi
        jne     L3
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        add     esp, 0x2c
        ret     8
L3:
        lea     edx, [esp + 0x10]
        push    edx
        push    0x1004ae8c
        push    0x17
        push    edi
        push    0x1004ae9c
        call    dword ptr [g_10049234]
        mov     ebx, eax
        cmp     ebx, edi
        jl      L4
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax]
        push    0x1004addc
        push    eax
        call    dword ptr [ecx + 0x34]
        mov     ebx, eax
        cmp     ebx, edi
        jl      L4
        mov     ebp, dword ptr [esp + 0x44]
        mov     ax, word ptr [ebp + 0x104]
        cmp     ax, di
        mov     ebx, 0x80004005
        je      L5
        xor     edx, edx
        mov     dx, ax
        mov     eax, dword ptr [esp + 0x10]
        push    2
        push    4
        mov     dword ptr [esp + 0x4c], edx
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x4c]
        push    edx
        push    0x1005155c
        push    eax
        call    dword ptr [ecx + 0x48]
        mov     ebx, eax
        cmp     ebx, edi
        jl      L4
L5:
        lea     eax, [ebp + 0x108]
        mov     ecx, 4
        mov     edi, 0x1005502c
        mov     esi, eax
        xor     edx, edx
        __emit 0xF3   /* __emit: MSVC6 rejects 'repe cmpsd' operand syntax */
        __emit 0xA7
        je      L6
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        push    3
        push    0x10
        push    eax
        push    0x10051588
        push    ecx
        call    dword ptr [edx + 0x48]
        mov     ebx, eax
        test    ebx, ebx
        jge     L7
        mov     esi, dword ptr [esp + 0x40]
L4:
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi]
        push    ecx
        push    esi
        call    dword ptr [eax + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x2c
        ret     8
L6:
        mov     al, byte ptr [ebp + 0x100]
        test    al, al
        je      L8
        movzx   ecx, byte ptr [ebp + 0x103]
        movzx   edx, byte ptr [ebp + 0x102]
        push    ecx
        movzx   ecx, byte ptr [ebp + 0x101]
        push    edx
        xor     edx, edx
        mov     dl, al
        push    ecx
        lea     eax, [esp + 0x28]
        push    edx
        push    0x10051568
        push    eax
        call    dword ptr [g_100491d0]
        mov     ecx, dword ptr [esp + 0x28]
        mov     esi, dword ptr [ecx]
        add     esp, 0x18
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        call    dword ptr [g_100490b8]
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [eax + eax + 2]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x10051548
        push    edx
        call    dword ptr [esi + 0x48]
        mov     ebx, eax
        xor     edi, edi
        cmp     ebx, edi
        __emit 0x0F   /* __emit: MSVC6 miscomputes backward jl rel32 (off-by-4) */
        __emit 0x8C
        __emit 0x6E
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov     esi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x50], edi
        mov     dword ptr [esp + 0x24], edi
        call    dword ptr [eax + 0x2c]
        mov     eax, dword ptr [esp + 0x44]
        cmp     eax, edi
        je      L8
        cmp     dword ptr [esp + 0x18], edi
        jle     L9
        xor     esi, esi
L10:
        mov     cl, byte ptr [ebp + 0x100]
        cmp     cl, byte ptr [esi + eax + 0x100]
        jne     L11
        mov     dl, byte ptr [ebp + 0x101]
        cmp     dl, byte ptr [esi + eax + 0x101]
        jne     L11
        mov     cl, byte ptr [ebp + 0x102]
        cmp     cl, byte ptr [esi + eax + 0x102]
        jne     L11
        mov     dl, byte ptr [ebp + 0x103]
        cmp     dl, byte ptr [esi + eax + 0x103]
        jne     L11
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        lea     eax, [esi + eax + 0x108]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x50]
        mov     eax, dword ptr [esp + 0x44]
L11:
        mov     ecx, dword ptr [esp + 0x18]
        inc     edi
        add     esi, 0x118
        cmp     edi, ecx
        jl      L10
        mov     esi, dword ptr [esp + 0x40]
L9:
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        push    ecx
        call    dword ptr [edx + 0x14]
L8:
        test    ebx, ebx
        __emit 0x0F   /* __emit: MSVC6 miscomputes backward jl rel32 (off-by-4) */
        __emit 0x8C
        __emit 0xCB
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
L7:
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax + 0x24]
        mov     esi, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [ecx + edx*4], esi
        mov     ecx, dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        inc     ecx
        mov     dword ptr [eax + 0x24], ecx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x2c
        ret     8
    }
}
