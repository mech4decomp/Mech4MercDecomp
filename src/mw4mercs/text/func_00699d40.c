/*
 * FUN_00699d40 (197 B) — __fastcall destructor for a doubly-linked-list
 * container with two sub-lists (this+0x10 and this+0x4).
 *
 * Calls FUN_0069a110(), zeroes global 0x0082db24, then walks each list
 * freeing nodes via FUN_0069a2b0/FUN_0069a830 (list 1) and
 * FUN_0069a2b0/FUN_0069abd0/FUN_0069a280 (list 2), resets the list
 * sentinels, and frees the sentinel nodes via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82db24;              /* 0x0082db24 */
extern void __cdecl FUN_0069a110(void);
extern void __cdecl FUN_0069a2b0(void);
extern void __cdecl FUN_0069a830(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0069abd0(void);
extern void __cdecl FUN_0069a280(void);

__declspec(naked) void __cdecl FUN_00699d40(int param_1)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_0069a110
        mov     eax, dword ptr [ebx + 0x14]
        lea     edi, [ebx + 0x10]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [g_82db24], ebp
        jz      l_after1
    l_loop1:
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax + 0x4]
        cmp     esi, ebp
        jz      l_skip1
    l_node1:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, edi
        call    FUN_0069a2b0
        mov     ebx, dword ptr [esi + 0x8]
        push    esi
        mov     ecx, edi
        call    FUN_0069a830
        cmp     ebx, ebp
        mov     esi, ebx
        jnz     l_node1
        mov     ebx, dword ptr [esp + 0x10]
    l_skip1:
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [edi + 0x4], ebp
    l_after1:
        mov     edi, dword ptr [edi]
        cmp     edi, ebp
        jz      l_free2
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    l_free2:
        mov     eax, dword ptr [ebx + 0x8]
        cmp     eax, ebp
        lea     edi, [ebx + 0x4]
        jz      l_after2
    l_loop2:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [edx + 0x4]
        cmp     esi, ebp
        jz      l_skip2
    l_node2:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        mov     ecx, edi
        call    FUN_0069a2b0
        mov     ebx, dword ptr [esi + 0x8]
        push    ebp
        lea     ecx, [esi + 0x10]
        call    FUN_0069abd0
        push    0x1
        push    esi
        mov     ecx, edi
        call    FUN_0069a280
        cmp     ebx, ebp
        mov     esi, ebx
        jnz     l_node2
    l_skip2:
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [edi + 0x4], ebp
    l_after2:
        mov     edi, dword ptr [edi]
        cmp     edi, ebp
        jz      l_done
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
    l_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
