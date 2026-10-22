/*
 * FUN_006F3310 (146 B) — Linked-list node processor with alloc/free.
 *
 * __cdecl, RET 8 (two stack params). Allocates a 0xc-byte node,
 * links it into a list, then walks the list calling vtable[0xc]
 * on each node. Frees nodes via FUN_004084E0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084c0(void);
extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern int __cdecl FUN_004eddf0(void);

__declspec(naked) void __cdecl FUN_006f3310(void)
{
    __asm {
        _emit   0xA1
        _emit   0x10
        _emit   0x88
        _emit   0x7B
        _emit   0x00
        push    ebx
        push    esi
        push    edi
        push    eax
        push    0xc
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        je      l_null_node
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x44]
        add     ecx, 0x44
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     l_walk
    l_null_node:
        xor     edi, edi
    l_walk:
        mov     ebx, dword ptr [esp + 0x14]
    l_loop:
        mov     eax, dword ptr [edi + 8]
        test    eax, eax
        je      l_free_node
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [edi + 8], eax
        je      l_free_node
        push    0x28
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_null_item
        _emit   0x8B
        _emit   0x0D
        _emit   0xF8
        _emit   0xC7
        _emit   0x7D
        _emit   0x00
        push    esi
        push    ecx
        mov     ecx, eax
        call    FUN_004eddf0
        mov     esi, eax
        jmp     l_call_vtable
    l_null_item:
        xor     esi, esi
    l_call_vtable:
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        test    esi, esi
        je      l_loop
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
        jmp     l_loop
    l_free_node:
        push    edi
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
