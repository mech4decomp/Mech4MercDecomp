/*
 * FUN_006477D0 (239 B) — __thiscall, RET 8 (2 stack params).
 * Tree/container insert helper. Walks a binary tree rooted at this+0x18,
 * finds the insertion point, and either inserts or updates a node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_00647eb0(void *a, void *b);
extern void __stdcall FUN_00648400(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_004114b0(void *a);
extern void *__stdcall FUN_00647f70(void *a, void *b);
extern void __stdcall FUN_00647950(void *a);

__declspec(naked) void __stdcall FUN_006477D0(void *param_1, void *param_2)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    esi
        push    edi
        lea     ebx, [ecx + 0x18]
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, ebx
        call    FUN_00647eb0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        jz      L_47800
        mov     edx, dword ptr [esp + 0x38]
        pop     edi
        pop     esi
        mov     dword ptr [eax + 0x14], edx
        pop     ebx
        add     esp, 0x24
        ret     0x8
L_47800:
        mov     eax, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x18], edx
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        mov     edi, ecx
        mov     al, 0x1
        jz      L_47835
L_4781D:
        cmp     edx, dword ptr [esi + 0x10]
        setl    al
        test    al, al
        mov     edi, esi
        jz      L_4782E
        mov     esi, dword ptr [esi + 0x8]
        jmp     L_47831
L_4782E:
        mov     esi, dword ptr [esi + 0xc]
L_47831:
        test    esi, esi
        jnz     L_4781D
L_47835:
        test    al, al
        mov     dword ptr [esp + 0xc], edi
        jz      L_4786B
        cmp     edi, dword ptr [ecx + 0x8]
        jnz     L_4785E
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        push    esi
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, ebx
        call    FUN_00648400
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0x8
L_4785E:
        lea     eax, [esp + 0xc]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
L_4786B:
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [edx + 0x10], ecx
        jge     L_47894
        lea     eax, [esp + 0x18]
        push    eax
        push    edi
        push    esi
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebx
        call    FUN_00648400
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0x8
L_47894:
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x28]
        mov     byte ptr [esp + 0x40], 0x0
        call    FUN_00647f70
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00647950
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret     0x8
    }
}
