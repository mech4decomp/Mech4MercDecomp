/*
 * FUN_10011830 (441 B, __thiscall RET 0x4) - SEH-guarded stats write.
 * Builds a wide-string buffer from this->0x84/0x90 and param_1, calls a
 * virtual method at this->0x78 vtable+0x20, and on success builds a
 * second buffer (appending global 0x1002661c) and calls FUN_10011810.
 * Frees temporary buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100016b0(void);
extern void __cdecl FUN_10004110(void);
extern void __cdecl FUN_10011810(void);
extern void *g_100210f4;   /* IAT: wcslen */
extern void *g_100210ec;   /* IAT: free */
extern unsigned short g_1002661c; /* wide string data */

__declspec(naked) void __cdecl FUN_10011830(void)
{
    __asm {
        push    -1
        push    0x1001fd06
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x130
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        mov     ebx, ecx
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x24], 0x400
        mov     eax, dword ptr [ebx + 0x90]
        mov     dword ptr [esp + 0x148], edi
        cmp     eax, edi
        jbe     L_11888
        mov     esi, dword ptr [ebx + 0x84]
        jmp     L_1188d
    L_11888:
        mov     esi, 0x100274ec
    L_1188d:
        mov     ebp, dword ptr [g_100210f4]
        cmp     esi, edi
        jz      L_118af
        cmp     word ptr [esi], di
        jz      L_118af
        push    esi
        call    ebp
        add     esp, 4
        lea     ecx, [esp + 0x10]
        shl     eax, 1
        push    eax
        push    esi
        call    FUN_100016b0
    L_118af:
        mov     esi, dword ptr [esp + 0x150]
        cmp     esi, edi
        jz      L_118d2
        cmp     word ptr [esi], di
        jz      L_118d2
        push    esi
        call    ebp
        add     esp, 4
        lea     ecx, [esp + 0x10]
        shl     eax, 1
        push    eax
        push    esi
        call    FUN_100016b0
    L_118d2:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, edi
        mov     eax, dword ptr [esp + 0x10]
        ja      L_118e3
        mov     eax, 0x100274ec
    L_118e3:
        mov     ecx, dword ptr [ebx + 0x78]
        push    eax
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x20]
        mov     esi, dword ptr [g_100210ec]
        test    eax, eax
        jnz     L_119b8
        mov     dword ptr [esp + 0xac], edi
        mov     dword ptr [esp + 0xb0], edi
        mov     dword ptr [esp + 0xbc], 0x400
        lea     eax, [esp + 0x10]
        lea     ecx, [esp + 0xa8]
        push    eax
        mov     byte ptr [esp + 0x14c], 1
        mov     dword ptr [esp + 0xac], edi
        mov     dword ptr [esp + 0xbc], edi
        mov     dword ptr [esp + 0xb8], edi
        call    FUN_10004110
        mov     ecx, 0x1002661c
        test    ecx, ecx
        jz      L_1196d
        cmp     word ptr [g_1002661c], di
        jz      L_1196d
        push    ecx
        call    ebp
        add     esp, 4
        lea     ecx, [esp + 0xa8]
        shl     eax, 1
        push    eax
        push    0x1002661c
        call    FUN_100016b0
    L_1196d:
        mov     eax, dword ptr [esp + 0xb4]
        mov     ecx, dword ptr [esp + 0xa8]
        cmp     eax, edi
        ja      L_11984
        mov     ecx, 0x100274ec
    L_11984:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, edi
        mov     eax, dword ptr [esp + 0x10]
        ja      L_11995
        mov     eax, 0x100274ec
    L_11995:
        push    ecx
        push    eax
        mov     ecx, ebx
        call    FUN_10011810
        cmp     dword ptr [esp + 0xb4], edi
        jbe     L_119b8
        mov     eax, dword ptr [esp + 0xa8]
        cmp     eax, edi
        jz      L_119b8
        push    eax
        call    esi
        add     esp, 4
    L_119b8:
        cmp     dword ptr [esp + 0x1c], edi
        jbe     L_119cc
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jz      L_119cc
        push    eax
        call    esi
        add     esp, 4
    L_119cc:
        mov     ecx, dword ptr [esp + 0x140]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x13c
        ret     4
    }
}
