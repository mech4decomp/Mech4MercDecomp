/*
 * FUN_00699E10 (189 B) — __thiscall (ECX=this, RET 4) that, when the
 * state byte at this+0 changes to 1, drains two linked lists (at
 * this+0x4 and this+0x10) via several helper functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0069a2b0(void);
extern void __cdecl FUN_0069abd0(void);
extern void __cdecl FUN_0069a280(void);
extern void __cdecl FUN_00637dd0(void);
extern void __cdecl FUN_0069a2a0(void);

__declspec(naked) void FUN_00699e10(void)
{
    __asm {
        push    ecx
        mov     al, byte ptr [esp + 0x8]
        cmp     byte ptr [ecx], al
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ecx
        jz      l_c5
        cmp     al, 0x1
        mov     byte ptr [ecx], al
        jnz     l_c5
        mov     eax, dword ptr [ecx + 0x8]
        lea     edi, [ecx + 0x4]
        xor     ebp, ebp
        cmp     eax, ebp
        jz      l_7d
    l_3b:
        mov     eax, dword ptr [edi]
        mov     esi, dword ptr [eax + 0x4]
        cmp     esi, ebp
        jz      l_6f
    l_44:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
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
        jnz     l_44
        mov     ecx, dword ptr [esp + 0x10]
    l_6f:
        mov     eax, dword ptr [edi]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [edi + 0x4], ebp
    l_7d:
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, ebp
        lea     ebx, [ecx + 0x10]
        jz      l_c5
    l_87:
        mov     edx, dword ptr [ebx]
        mov     esi, dword ptr [edx + 0x4]
        cmp     esi, ebp
        jz      l_b7
    l_90:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_0069a2b0
        mov     edi, dword ptr [esi + 0x8]
        lea     ecx, [esi + 0x10]
        call    FUN_00637dd0
        push    0x1
        push    esi
        call    FUN_0069a2a0
        add     esp, 0x8
        cmp     edi, ebp
        mov     esi, edi
        jnz     l_90
    l_b7:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 0x4], ebp
    l_c5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
