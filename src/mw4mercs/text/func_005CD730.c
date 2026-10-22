/*
 * FUN_005CD730 (232 B) — in-.text data block function (block 0x5CD725).
 * Dynamic array insert/expand; calls FUN_004084d0 / FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005CD730(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jb      L5757
        lea     ecx, [esp + 0x10]
L5757:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        je      L5777
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        jmp     L577F
L5777:
        mov     dword ptr [esp + 0x20], 0
L577F:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        je      L579F
        mov     ecx, ebp
L578D:
        test    eax, eax
        je      L5795
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
L5795:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jne     L578D
L579F:
        cmp     esi, 1
        jne     L57B5
        test    eax, eax
        je      L57B0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
L57B0:
        add     eax, 4
        jmp     L57CD
L57B5:
        test    esi, esi
        jbe     L57CD
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
L57BF:
        test    eax, eax
        je      L57C7
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
L57C7:
        add     eax, 4
        dec     ecx
        jne     L57BF
L57CD:
        cmp     edx, edi
        mov     esi, eax
        je      L57EA
        mov     ecx, edx
        sub     ecx, eax
L57D7:
        test    esi, esi
        je      L57E0
        mov     edx, dword ptr [ecx + esi]
        mov     dword ptr [esi], edx
L57E0:
        add     esi, 4
        lea     eax, [ecx + esi]
        cmp     eax, edi
        jne     L57D7
L57EA:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        je      L57FD
        push    eax
        call    FUN_004084e0
        add     esp, 4
L57FD:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebx + 4], esi
        pop     esi
        lea     edx, [eax + ecx*4]
        pop     ebp
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 8], edx
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
