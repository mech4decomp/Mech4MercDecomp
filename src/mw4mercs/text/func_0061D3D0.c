/*
 * FUN_0061D3D0 (816 B) - in-.text data block transcription. Walks a
 * linked list of descriptors (via [esp+0x28] chain), appending typed
 * values into a growable buffer at g_0080592c (with grow helper
 * FUN_00563060), and finalizes via FUN_0064a6b0.
 *
 * CFLAGS: /O1
 */

extern int g_00805928;
extern int g_00805940;
extern int g_007f299c;
extern int g_008058dc;
extern int g_008058e0;
extern int g_007de630;
extern int g_00805924;
extern int g_008058c0;
extern int g_0080d994;
extern int g_00805930;
extern int g_0080592c;
extern int g_0080d9b4;
extern int g_0080d9bc;
extern int g_008058b8;
extern int g_0080d960;

extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0061ebc0(void);
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_0064a6b0(void);

__declspec(naked) void FUN_0061D3D0(void)
{
    __asm {
        mov     ecx, dword ptr [g_00805928]
        mov     eax, dword ptr [g_00805940]
        sub     esp, 0xc
        push    ebx
        xor     ebx, ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_007f299c]
        inc     esi
        lea     eax, [ecx + eax*4 + 4]
        mov     dword ptr [g_007f299c], esi
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        push    edi
        mov     dword ptr [g_008058dc], ebx
        mov     dword ptr [g_008058e0], ebx
        mov     dword ptr [g_007de630], ebx
        mov     dword ptr [g_00805924], ebx
        mov     dword ptr [g_008058c0], 1
        mov     dword ptr [g_0080d994], ebx
        mov     dword ptr [g_00805930], eax
        mov     dword ptr [g_0080592c], eax
        jb      L_441
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_441:
        mov     ecx, dword ptr [g_00805928]
        add     eax, 4
        mov     dword ptr [esi], ebx
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], eax
        jb      L_46b
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_46b:
        mov     edx, dword ptr [g_00805928]
        add     eax, 4
        mov     dword ptr [esi], ebx
        mov     esi, eax
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_0080592c], eax
        jb      L_495
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_495:
        mov     ecx, dword ptr [g_00805928]
        add     eax, 4
        mov     dword ptr [esi], ebx
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], eax
        jb      L_4bf
        push    ebx
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_4bf:
        mov     ecx, dword ptr [esp + 0x28]
        cmp     ecx, ebx
        mov     dword ptr [esi], ebx
        je      L_6cc
        mov     edx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [edx + 0x28]
        cmp     edi, ebx
        mov     dword ptr [esp + 0x28], edi
        je      L_6cc
        lea     ebx, [ecx + 4]
        jmp     L_4e9
L_4e5:
        mov     edi, dword ptr [esp + 0x28]
L_4e9:
        mov     ecx, dword ptr [edi + 0x18]
        mov     ebp, dword ptr [edi + 0x3c]
        cmp     ecx, 4
        mov     ecx, dword ptr [g_0080d9b4]
        jne     L_651
        cmp     ebp, ecx
        jne     L_581
        mov     cl, byte ptr [ebx - 4]
        cmp     cl, 1
        jne     L_544
        mov     ecx, dword ptr [g_00805928]
        fild    dword ptr [ebx]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        fstp    dword ptr [esp + 0x14]
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], eax
        jb      L_539
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_539:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi], edx
        jmp     L_5c4
L_544:
        cmp     cl, 2
        jne     L_5c4
        mov     edx, dword ptr [g_00805928]
        mov     ecx, dword ptr [ebx + 4]
        add     eax, 4
        mov     esi, eax
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [g_0080592c], eax
        jb      L_579
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_579:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi], ecx
        jmp     L_5c4
L_581:
        cmp     ebp, dword ptr [g_0080d9bc]
        jne     L_5c4
        cmp     byte ptr [ebx - 4], 1
        jne     L_6f6
        mov     edx, dword ptr [g_00805928]
        mov     edi, dword ptr [ebx]
        add     eax, 4
        mov     esi, eax
        add     edx, 0xa000
        cmp     esi, edx
        mov     dword ptr [g_0080592c], eax
        jb      L_5be
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_5be:
        mov     dword ptr [esi], edi
        mov     edi, dword ptr [esp + 0x28]
L_5c4:
        cmp     dword ptr [ebp + 4], 3
        jne     L_6b8
        mov     esi, dword ptr [g_008058b8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     edi, dword ptr [ebp + 8]
        je      L_64d
        push    eax
        push    edi
        call    FUN_006f3c80
        mov     edx, dword ptr [esi + 0x14]
        lea     ecx, [esi + 0x10]
        cmp     edx, dword ptr [ecx + 8]
        mov     dword ptr [esp + 0x10], eax
        je      L_606
        test    edx, edx
        je      L_5fe
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x10]
L_5fe:
        add     edx, 4
        mov     dword ptr [ecx + 4], edx
        jmp     L_617
L_606:
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        push    edx
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp + 0x10]
L_617:
        test    eax, eax
        mov     ebp, eax
        jne     L_62c
L_61d:
        push    0x78c8f8
        push    0
        call    FUN_00562f10
        add     esp, 8
L_62c:
        mov     eax, dword ptr [g_0080592c]
        mov     esi, dword ptr [eax]
        mov     ecx, edi
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ebp
        jmp     L_6b8
L_64d:
        xor     ebp, ebp
        jmp     L_61d
L_651:
        cmp     ebp, ecx
        jne     L_685
        mov     ecx, dword ptr [g_00805928]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], eax
        jb      L_67e
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_67e:
        lea     edx, [ebx + 4]
        mov     dword ptr [esi], edx
        jmp     L_6b8
L_685:
        cmp     ebp, dword ptr [g_0080d9bc]
        jne     L_6f6
        mov     ecx, dword ptr [g_00805928]
        add     eax, 4
        mov     esi, eax
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     dword ptr [g_0080592c], eax
        jb      L_6b6
        push    0
        call    FUN_00563060
        mov     eax, dword ptr [g_0080592c]
        add     esp, 4
L_6b6:
        mov     dword ptr [esi], ebx
L_6b8:
        mov     ecx, dword ptr [edi + 0xc]
        add     ebx, 0xc
        test    ecx, ecx
        mov     dword ptr [esp + 0x28], ecx
        jne     L_4e5
        xor     ebx, ebx
L_6cc:
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        call    FUN_0064a6b0
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 4
        cmp     eax, ebx
        je      L_6e9
        mov     ecx, dword ptr [g_0080d960]
        mov     dword ptr [eax], ecx
L_6e9:
        mov     eax, dword ptr [g_00805924]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
L_6f6:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xc
        ret
    }
}
