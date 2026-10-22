/*
 * FUN_005c8b00 (213 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Walks a linked list at this->[0x170]->[0x3f8]; for each node whose key
 * matches the mode (param_2), copies 0xc dwords from FUN_00683c90 into
 * param_1. Falls back to a vtable method at this->[0x170]->[0xf0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_00683c40(int a, int b);
extern void *__stdcall FUN_00683c90(void *dst, int key);

__declspec(naked) void __stdcall FUN_005c8b00(void *param1, int param2)
{
    __asm {
        sub     esp, 0x60
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x70]
        test    ebp, ebp
        push    esi
        push    edi
        mov     ebx, ecx
        jz      L_8ba7
        mov     eax, dword ptr [ebx + 0x170]
        mov     edi, dword ptr [eax + 0x3f8]
        add     eax, 0x3f8
    L_8b26:
        test    edi, edi
        jz      L_8ba7
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x4]
        jz      L_8ba7
        cmp     ebp, 0x1
        jnz     L_8b48
        push    ebp
        push    esi
        call    FUN_00683c40
        add     esp, 0x8
        cmp     al, 0x1
        jz      L_8b59
        jmp     L_8b26
    L_8b48:
        push    0x0
        push    esi
        call    FUN_00683c40
        add     esp, 0x8
        cmp     al, 0x1
        jz      L_8b80
        jmp     L_8b26
    L_8b59:
        lea     eax, [esp + 0x40]
        push    esi
        push    eax
        call    FUN_00683c90
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x7c]
        add     esp, 0x8
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     0x8
    L_8b80:
        lea     ecx, [esp + 0x40]
        push    esi
        push    ecx
        call    FUN_00683c90
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x7c]
        add     esp, 0x8
        mov     ecx, 0xc
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     0x8
    L_8ba7:
        mov     ecx, dword ptr [ebx + 0x170]
        mov     edx, dword ptr [ecx]
        lea     eax, [esp + 0x10]
        push    eax
        call    dword ptr [edx + 0xf0]
        mov     eax, dword ptr [esp + 0x74]
        mov     ecx, 0xc
        lea     esi, [esp + 0x10]
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     0x8
    }
}
