/*
 * FUN_00695A20 (243 B) — __thiscall, RET 0xC (3 stack params).
 * String-buffer append helper. Builds a buffer via FUN_00547ba0 /
 * FUN_005634e0, copies a source range, memmoves via IAT 0x0076b28c,
 * and frees the result via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__cdecl *g_76b28c)(void *, const void *, unsigned int);  /* 0x0076b28c memmove IAT */

extern char __cdecl FUN_00696b20(void);
extern void __stdcall FUN_00547ba0(void *a, void *b);
extern void __stdcall FUN_005634e0(int a);
extern char __cdecl FUN_00696920(void);
extern void __stdcall FUN_005dddb0(void *a, void *b, void *c);
extern void __stdcall FUN_00694da0(void *a, void *b, void *c);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_00695A20(void *param_1, void *param_2, void *param_3)
{
    __asm {
        sub     esp, 0x14
        push    ebp
        mov     ebp, ecx
        call    FUN_00696b20
        test    al, al
        jz      L_5B0C
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x17]
        xor     esi, esi
        push    ecx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x24], esi
        mov     dword ptr [esp + 0x1c], esi
        call    FUN_00547ba0
        push    0x8
        lea     ecx, [esp + 0x1c]
        call    FUN_005634e0
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, ebp
        mov     byte ptr [edx], 0x0
        call    FUN_00696920
        cmp     al, 0x1
        mov     ebx, dword ptr [esp + 0x28]
        jz      L_5A7C
        cmp     ebx, esi
        jz      L_5AE2
L_5A7C:
        mov     eax, dword ptr [esp + 0x30]
        lea     ecx, [esp + 0x18]
        cmp     eax, ecx
        jz      L_5AE2
        mov     ecx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax]
        cmp     eax, ecx
        mov     esi, dword ptr [esp + 0x18]
        jz      L_5AA7
L_5A95:
        mov     edx, dword ptr [esp + 0x1c]
        cmp     esi, edx
        jz      L_5ACC
        mov     dl, byte ptr [eax]
        inc     eax
        mov     byte ptr [esi], dl
        inc     esi
        cmp     eax, ecx
        jnz     L_5A95
L_5AA7:
        mov     edx, dword ptr [esp + 0x1c]
L_5AAB:
        cmp     esi, edx
        mov     edi, edx
        jz      L_5AE2
        push    0x1
        push    edx
        push    esi
        call    dword ptr [g_76b28c]
        mov     eax, dword ptr [esp + 0x28]
        sub     esi, edi
        add     esp, 0xc
        add     eax, esi
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_5AE2
L_5ACC:
        cmp     eax, ecx
        jnz     L_5AD2
        jmp     L_5AAB
L_5AD2:
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        push    ecx
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_005dddb0
L_5AE2:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [ebp + 0x8]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edx - 0x4]
        push    ebx
        call    FUN_00694da0
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebx
        jz      L_5B0C
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5B0C:
        pop     ebp
        add     esp, 0x14
        ret     0xc
    }
}
