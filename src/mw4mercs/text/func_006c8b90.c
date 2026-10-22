/*
 * FUN_006c8b90 (165 B) — Texture buffer setup (variant of FUN_006c8ae0,
 * calls FUN_0072e000 instead of FUN_00735fc0): queries a format, allocates
 * and copies pixel data (rep movsd/movsb), and stores sizes.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int a);
extern void __stdcall FUN_006faca0(void *a, void *b, void *c);
extern void *__stdcall FUN_0072e000(void *a, void *b, void *c, void *d,
                                    void *e, int f, int g);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_006f49a0(void);
extern void __stdcall FUN_006f4230(void *a);

extern int g_82e224;      /* 0x0082e224 */

__declspec(naked) void __stdcall FUN_006c8b90(void *param_1)
{
    __asm {
        mov     eax, dword ptr [g_82e224]
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     esi, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        call    FUN_006faca0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    0x0
        push    0x0
        lea     edi, [ebx + 0x4]
        push    edi
        lea     ebp, [ebx + 0x8]
        push    ebp
        push    eax
        push    ecx
        push    esi
        call    FUN_0072e000
        mov     ebp, dword ptr [ebp]
        mov     esi, eax
        mov     al, byte ptr [ebx + 0x24]
        shl     ebp, 0x2
        test    al, al
        mov     dword ptr [ebx + 0x18], esi
        mov     dword ptr [ebx + 0xc], ebp
        mov     dword ptr [ebx + 0x10], 0x20
        jz      L_6c8c12
        imul    ebp, dword ptr [edi]
        push    0x0
        push    ebp
        call    FUN_006f3c80
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 0x2
        mov     dword ptr [ebx + 0x14], eax
        mov     edi, eax
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        jmp     L_6c8c1c
    L_6c8c12:
        mov     dword ptr [ebx + 0x14], esi
        mov     dword ptr [ebx + 0x18], 0x0
    L_6c8c1c:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006f4230
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
