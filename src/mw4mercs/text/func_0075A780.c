/*
 * FUN_0075A780 (163 B) — __thiscall, RET 8 (2 stack params).
 * Constructor: sets vtable (0x7af0a0), allocates and copies two strings
 * (params 1 and 2) into this+4 and this+0xc via FUN_004084c0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_00849308;
extern void __cdecl FUN_004084c0(void);

__declspec(naked) void __fastcall FUN_0075A780(void)
{
    __asm {
        mov     eax, dword ptr [g_00849308]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     ebx, ecx
        push    edi
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        push    ecx
        mov     dword ptr [ebx + 8], 1
        mov     dword ptr [ebx + 0x10], 0
        mov     dword ptr [ebx], 0x7af0a0
        call    FUN_004084c0
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [ebx + 4], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [g_00849308]
        mov     esi, dword ptr [esp + 0x1c]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        push    ecx
        call    FUN_004084c0
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, esi
        add     esp, 0x10
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     dword ptr [ebx + 0xc], edx
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
