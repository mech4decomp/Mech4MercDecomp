/*
 * data_00461985.c block (mlr) -- 320 bytes. Two methods: a getter that copies
 * two fields out of an object (ret 8), and a larger __thiscall that resizes a
 * dynamic array (alloc via FUN_004084D0, copy, free via FUN_004084E0) and
 * dispatches through vtable slots 0xa4/0xa8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00465220(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_004619E0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xa0]
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 0xa4]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        ret     8
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0xc
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     ebx, ecx
        push    esi
        mov     dword ptr [esp + 0x14], ebx
        call    FUN_00465220
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        je      L461AED
        mov     ecx, dword ptr [eax + 0x24]
        test    ecx, ecx
        jbe     L461AED
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0xa8]
        mov     esi, dword ptr [ebx + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esi + 0x24]
        cmp     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        je      L461AC7
        test    ecx, ecx
        jbe     L461AA9
        lea     eax, [ecx*4]
        push    ebp
        push    eax
        call    FUN_004084D0
        mov     ebp, dword ptr [esi + 0x20]
        add     esp, 4
        test    ebp, ebp
        mov     ebx, eax
        je      L461A9F
        mov     ecx, dword ptr [esp + 0x14]
        cmp     ecx, edi
        jb      L461A7A
        mov     ecx, edi
L461A7A:
        mov     edx, ecx
        dec     ecx
        test    edx, edx
        je      L461A96
        mov     edx, ebp
        lea     eax, [ebx + ecx*4]
        sub     edx, ebx
        inc     ecx
L461A89:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L461A89
L461A96:
        push    ebp
        call    FUN_004084E0
        add     esp, 4
L461A9F:
        mov     dword ptr [esi + 0x20], ebx
        mov     ebx, dword ptr [esp + 0x18]
        pop     ebp
        jmp     L461ABC
L461AA9:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0x20], 0
L461ABC:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x1c]
L461AC7:
        mov     eax, dword ptr [esi + 0x20]
        mov     esi, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ebx]
        mov     edi, eax
        rep     movsd
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
L461AED:
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xa8]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xa4]
        pop     esi
        mov     al, 1
        pop     ebx
        add     esp, 0xc
        ret     4
        nop
    }
}
