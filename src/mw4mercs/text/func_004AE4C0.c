/*
 * FUN_004AE4C0 (152 B) — __thiscall (1 stack arg, RET 4). Copies a
 * growable array: resizes [this+4] to match [arg+4] (alloc/free via
 * FUN_004084D0/FUN_004084E0) and copies the elements with rep movsd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004084D0(void);

__declspec(naked) void FUN_004AE4C0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        add     eax, 4
        lea     edi, [ebp + 4]
        cmp     edi, eax
        je      loc_4ae54f
        mov     ebx, dword ptr [eax + 4]
        test    ebx, ebx
        jbe     loc_4ae539
        mov     esi, dword ptr [eax]
        cmp     ebx, dword ptr [edi + 4]
        je      loc_4ae51c
        test    ebx, ebx
        jbe     loc_4ae50b
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      loc_4ae4f5
        push    eax
        call    FUN_004084E0
        add     esp, 4
loc_4ae4f5:
        lea     ecx, [ebx + ebx*2]
        shl     ecx, 2
        push    ecx
        mov     dword ptr [edi + 4], ebx
        call    FUN_004084D0
        add     esp, 4
        mov     dword ptr [edi], eax
        jmp     loc_4ae51c
loc_4ae50b:
        mov     edx, dword ptr [edi]
        push    edx
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [edi], 0
loc_4ae51c:
        mov     eax, dword ptr [edi + 4]
        test    eax, eax
        jbe     loc_4ae54f
        mov     edi, dword ptr [edi]
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        shr     ecx, 2
        rep     movsd
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
loc_4ae539:
        mov     eax, dword ptr [edi]
        test    eax, eax
        je      loc_4ae54f
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [edi + 4], 0
loc_4ae54f:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
