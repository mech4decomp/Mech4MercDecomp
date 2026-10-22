/*
 * FUN_00412ec0 (186 B) — __thiscall method (RET 0xc, 3 args). String-system
 * lookup: searches an existing object via FUN_004156f0, else allocates a new
 * node via FUN_004084c0 and inserts via FUN_004156c0. Returns AL=1 on found/
 * inserted, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004156f0(void);
extern void __cdecl FUN_006fbce0(void);
extern int g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004156c0(void);

__declspec(naked) void FUN_00412ec0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x10], ecx
        call    FUN_004156f0
        test    eax, eax
        jz      not_found
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        add     eax, 0x10
        cmp     ecx, edx
        jl      ret0
        jg      ret1
        mov     edx, dword ptr [eax]
        cmp     edx, dword ptr [esp + 0x18]
        jbe     ret0
ret1_found:
        pop     edi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0xc
not_found:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_006fbce0
        mov     ebx, eax
        mov     edi, edx
        mov     ecx, ebx
        and     ecx, edi
        cmp     ecx, -0x1
        jz      ret0
        mov     edx, dword ptr [g_007b8810]
        push    esi
        push    edx
        push    0x18
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      esi_zero
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi], 0x76d220
        jmp     after_alloc
esi_zero:
        xor     esi, esi
after_alloc:
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        call    FUN_004156c0
        cmp     edi, dword ptr [esp + 0x20]
        pop     esi
        jl      ret0
        jg      ret1
        cmp     ebx, dword ptr [esp + 0x18]
        jbe     ret0
ret1:
        pop     edi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0xc
ret0:
        pop     edi
        pop     ebp
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
