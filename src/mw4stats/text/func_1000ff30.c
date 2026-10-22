/*
 * FUN_1000ff30 (211 B) - __thiscall. Destructor: frees the three internal
 * buffers, closes the handle, and calls the base destructor FUN_1001b8d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001b8d0(void);
extern void* g_1002102c;   /* IAT: CloseHandle */
extern void* g_100210ec;   /* IAT: free */
extern void* g_10021188;   /* IAT: InternetCloseHandle */

__declspec(naked) void FUN_1000ff30(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        xor     ebx, ebx
        push    edi
        mov     eax, dword ptr [esi + 0x80]
        mov     dword ptr [esi], 0x1002153c
        cmp     eax, ebx
        jz      L1
        push    eax
        call    dword ptr [g_1002102c]
L1:
        mov     edi, dword ptr [g_100210ec]
        mov     dword ptr [esi + 0x80], ebx
        cmp     dword ptr [esi + 0x1f0], ebx
        jbe     L2
        mov     eax, dword ptr [esi + 0x1e4]
        cmp     eax, ebx
        jz      L2
        push    eax
        call    edi
        add     esp, 0x4
L2:
        mov     dword ptr [esi + 0x1e4], ebx
        mov     dword ptr [esi + 0x1f4], ebx
        mov     dword ptr [esi + 0x1f0], ebx
        mov     eax, dword ptr [esi + 0x158]
        cmp     eax, ebx
        jbe     L3
        mov     eax, dword ptr [esi + 0x14c]
        cmp     eax, ebx
        jz      L3
        push    eax
        call    edi
        add     esp, 0x4
L3:
        mov     dword ptr [esi + 0x14c], ebx
        mov     dword ptr [esi + 0x15c], ebx
        mov     dword ptr [esi + 0x158], ebx
        mov     eax, dword ptr [esi + 0x90]
        cmp     eax, ebx
        jbe     L4
        mov     eax, dword ptr [esi + 0x84]
        cmp     eax, ebx
        jz      L4
        push    eax
        call    edi
        add     esp, 0x4
L4:
        cmp     esi, ebx
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [esi + 0x90], ebx
        jz      L5
        lea     edi, [esi + 0x18]
        jmp     L6
L5:
        xor     edi, edi
L6:
        mov     eax, dword ptr [edi + 0x40]
        cmp     eax, ebx
        jz      L7
        push    eax
        call    dword ptr [g_10021188]
        mov     dword ptr [edi + 0x40], ebx
L7:
        mov     ecx, esi
        call    FUN_1001b8d0
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
