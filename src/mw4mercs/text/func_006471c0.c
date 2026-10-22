/*
 * FUN_006471C0 (294 B) — __thiscall (ECX = this) destructor.
 *
 * Tears down several embedded linked-list containers (at +0xc, +0x18,
 * +0x0), freeing each element via the container's helper functions and
 * re-linking the sentinel. Also calls FUN_00417980 on +0x2c and +0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00647b00(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_00647e70(void);
extern void __cdecl FUN_00647f50(void);
extern void __cdecl FUN_00647a80(void);
extern void __cdecl FUN_00647f30(void);
extern void __cdecl FUN_00647ab0(void);
extern void __cdecl FUN_00647ac0(void);
extern void __cdecl FUN_00647f10(void);
extern void __cdecl FUN_00647aa0(void);

__declspec(naked) void __fastcall FUN_006471c0(void *this)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x10]
        lea     esi, [ebp + 0xc]
        xor     ebx, ebx
        cmp     eax, ebx
        push    edi
        jz      l_skip1
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [eax + 0x4]
        push    ecx
        mov     ecx, esi
        call    FUN_00647b00
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [esi + 0x4], ebx
    l_skip1:
        lea     ecx, [ebp + 0x2c]
        call    FUN_00417980
        lea     ecx, [ebp + 0x24]
        call    FUN_00417980
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, ebx
        lea     edi, [ebp + 0x18]
        jz      l_skip2
        mov     edx, dword ptr [edi]
        mov     ebx, dword ptr [edx + 0x4]
        test    ebx, ebx
        jz      l_skip3
    l_loop2:
        mov     eax, dword ptr [ebx + 0xc]
        push    eax
        mov     ecx, edi
        call    FUN_00647e70
        mov     ecx, dword ptr [ebx + 0x8]
        mov     dword ptr [esp + 0x10], ecx
        push    ebx
        mov     ecx, edi
        call    FUN_00647f50
        mov     ebx, dword ptr [esp + 0x10]
        test    ebx, ebx
        jnz     l_loop2
    l_skip3:
        mov     eax, dword ptr [edi]
        xor     ecx, ecx
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [edi + 0x4], ecx
        xor     ebx, ebx
    l_skip2:
        mov     edx, dword ptr [edi]
        push    1
        push    edx
        mov     ecx, edi
        call    FUN_00647a80
        cmp     dword ptr [esi + 0x4], ebx
        jz      l_skip4
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [eax + 0x4]
        cmp     edi, ebx
        jz      l_skip5
    l_loop3:
        mov     ecx, dword ptr [edi + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_00647b00
        mov     ebx, dword ptr [edi + 0x8]
        push    edi
        mov     ecx, esi
        call    FUN_00647f30
        test    ebx, ebx
        mov     edi, ebx
        jnz     l_loop3
    l_skip5:
        mov     eax, dword ptr [esi]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [esi + 0x4], ebx
    l_skip4:
        mov     edx, dword ptr [esi]
        push    1
        push    edx
        call    FUN_00647ab0
        mov     eax, dword ptr [ebp + 0x4]
        add     esp, 0x8
        cmp     eax, ebx
        jz      l_skip6
        mov     eax, dword ptr [ebp]
        mov     esi, dword ptr [eax + 0x4]
        cmp     esi, ebx
        jz      l_skip7
    l_loop4:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebp
        call    FUN_00647ac0
        mov     edi, dword ptr [esi + 0x8]
        push    esi
        mov     ecx, ebp
        call    FUN_00647f10
        cmp     edi, ebx
        mov     esi, edi
        jnz     l_loop4
    l_skip7:
        mov     eax, dword ptr [ebp]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebp + 0x4], ebx
    l_skip6:
        mov     edx, dword ptr [ebp]
        push    1
        push    edx
        call    FUN_00647aa0
        add     esp, 0x8
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
