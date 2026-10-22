/*
 * FUN_1002a450 (224 B) — __stdcall, RET 0x18 (6 params).
 * Initializes an object at [ESI+0xc]==0 by allocating four buffers via
 * FUN_10001dd0 and storing them at [ESI+0x1c..0x28]. Returns 0 on
 * success, -0x3eedfff3 if already initialized, -0x7ff8fff2 on alloc fail.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002a450(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        push    edi
        xor     edi, edi
        xor     ebx, ebx
        test    eax, eax
        jz      L_a46f
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000d
        pop     ebx
        ret     0x18
    L_a46f:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      L_a529
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        call    FUN_10001dd0
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_a49a
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_a4fb
    L_a49a:
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        call    FUN_10001dd0
        mov     edi, eax
        test    edi, edi
        jnz     L_a4b2
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jnz     L_a4fb
    L_a4b2:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_a4ca
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jnz     L_a4fb
    L_a4ca:
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        call    FUN_10001dd0
        mov     ecx, eax
        test    ecx, ecx
        jnz     L_a4e2
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jnz     L_a4fb
    L_a4e2:
        mov     dword ptr [esi + 0x20], edi
        pop     edi
        mov     dword ptr [esi + 0x1c], ebp
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 0x4], 0x1
        mov     dword ptr [esi + 0x28], ecx
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x18
    L_a4fb:
        test    ebp, ebp
        mov     esi, 0x8007000e
        jz      L_a50d
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_a50d:
        test    edi, edi
        jz      L_a51a
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_a51a:
        test    ebx, ebx
        jz      L_a527
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_a527:
        mov     eax, esi
    L_a529:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
