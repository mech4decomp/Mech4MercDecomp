/*
 * FUN_1002da70 (364 B) — __stdcall, RET 0x14.
 * Enumerates items via virtual calls, collects matching ones into a buffer,
 * freeing per-item allocations on error paths.
 */

extern void __cdecl FUN_10001d50(void);
extern void __stdcall FUN_1001c2a0(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_10037bf0(void);
extern void __stdcall FUN_1002d980(void);

__declspec(naked) void __stdcall FUN_1002da70(void)
{
    __asm {
        sub     esp, 0x10
        mov     edx, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    esi
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        xor     edi, edi
        push    ebx
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x24], edi
        call    dword ptr [eax + 0x28]
        mov     esi, eax
        cmp     esi, edi
        jl      L_1002db04
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jnz     L_1002dabb
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax], edi
        mov     dword ptr [ecx], edi
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    L_1002dabb:
        lea     edx, [eax*4]
        push    edx
        call    FUN_10001d50
        mov     ebp, eax
        add     esp, 0x4
        cmp     ebp, edi
        jnz     L_1002db10
        mov     esi, 0x8007000e
    L_1002dad6:
        test    ebp, ebp
        jz      L_1002db04
        mov     eax, dword ptr [esp + 0x10]
        xor     edi, edi
        test    eax, eax
        jbe     L_1002dafb
    L_1002dae4:
        mov     eax, dword ptr [ebp + edi*4]
        test    eax, eax
        jz      L_1002daf2
        push    eax
        call    FUN_1001c2a0
    L_1002daf2:
        mov     eax, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        jc      L_1002dae4
    L_1002dafb:
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_1002db04:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    L_1002db10:
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     edi, ebp
        rep     stosd
        mov     eax, dword ptr [esp + 0x10]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x24], edi
        jbe     L_1002dbb5
    L_1002db2c:
        mov     dword ptr [esp + 0x14], ebp
    L_1002db30:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    edx
        push    ebx
        call    dword ptr [eax + 0x2c]
        mov     esi, eax
        test    esi, esi
        jl      L_1002dad6
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [eax]
        mov     esi, eax
        test    esi, esi
        jl      L_1002dad6
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jnz     L_1002dba4
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ebx
        call    FUN_1002d980
        mov     esi, eax
        test    esi, esi
        jl      L_1002dad6
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        inc     ecx
        add     eax, 0x4
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x14], eax
    L_1002dba4:
        mov     eax, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        jc      L_1002db30
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jnz     L_1002dbc0
    L_1002dbb5:
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
        xor     ebp, ebp
    L_1002dbc0:
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [ecx], ebp
        pop     edi
        mov     dword ptr [edx], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    }
}
