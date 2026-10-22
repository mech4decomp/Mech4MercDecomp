/*
 * FUN_1002b210 (341 B) — __stdcall, RET 0x14.
 * Enumerates items via virtual calls, collects matching ones into a buffer.
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10037bf0(void);
extern void __cdecl FUN_10001d60(void);
extern char g_10049b5c;

__declspec(naked) void __stdcall FUN_1002b210(void)
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
        xor     edi, edi
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x1c], edi
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x28], edi
        call    dword ptr [eax + 0x28]
        mov     esi, eax
        cmp     esi, edi
        jl      L_1002b359
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, edi
        jnz     L_1002b263
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
    L_1002b263:
        lea     edx, [eax*4]
        push    edx
        call    FUN_10001d50
        mov     ebp, eax
        add     esp, 0x4
        cmp     ebp, edi
        jnz     L_1002b283
        mov     esi, 0x8007000e
        jmp     L_1002b34c
    L_1002b283:
        mov     ecx, dword ptr [esp + 0x10]
        xor     eax, eax
        mov     edi, ebp
        rep     stosd
        mov     eax, dword ptr [esp + 0x10]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esp + 0x24], edi
        jbe     L_1002b323
        nop
    L_1002b2a0:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edi
        push    edx
        push    ebx
        call    dword ptr [eax + 0x2c]
        mov     esi, eax
        test    esi, esi
        jl      L_1002b34a
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [eax]
        mov     esi, eax
        test    esi, esi
        jl      L_1002b34a
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        call    FUN_10037bf0
        add     esp, 0x8
        test    eax, eax
        jnz     L_1002b312
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x1c]
        push    eax
        push    offset g_10049b5c
        push    ecx
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     esi, eax
        test    esi, esi
        jl      L_1002b34a
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + eax*4], edx
        inc     eax
        mov     dword ptr [esp + 0x24], eax
    L_1002b312:
        mov     eax, dword ptr [esp + 0x10]
        inc     edi
        cmp     edi, eax
        jc      L_1002b2a0
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jnz     L_1002b32e
    L_1002b323:
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
        xor     ebp, ebp
    L_1002b32e:
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax], ebp
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        pop     ebx
        add     esp, 0x10
        ret     0x14
    L_1002b34a:
        xor     edi, edi
    L_1002b34c:
        cmp     ebp, edi
        jz      L_1002b359
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_1002b359:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x14
    }
}
