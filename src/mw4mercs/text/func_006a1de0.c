/*
 * FUN_006a1de0 (443 B) — __thiscall (ECX = this), RET 8.
 *
 * Handles a UI/input event: validates flags on param_2, allocates a
 * 0x28-byte object, registers it in a list, and dispatches a callback.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f23b0;
extern int g_7f268c;
extern int g_7dab44;
extern int g_7dab40;
extern char __stdcall FUN_00415230(int a);
extern void *__stdcall FUN_004084d0(int a);
extern void *__stdcall FUN_006a0970(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_005cbc50(void *a);
extern void __stdcall FUN_006a2260(int a);
extern void __stdcall FUN_00580fb0(void *a, void *b, int c);
extern void *__stdcall FUN_0065e530(void *a);
extern void *__stdcall FUN_0065ae10(void *a, int b, void *c, void *d, void *e, int f);

__declspec(naked) void __stdcall FUN_006a1de0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0x2fc]
        test    esi, esi
        push    edi
        mov     edi, ecx
        jz      L_f93
        mov     cl, byte ptr [eax + 0xdc]
        test    cl, cl
        jnz     L_f93
        mov     eax, dword ptr [eax + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_f93
        mov     eax, dword ptr [g_7f23b0]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_f93
        push    0x28
        mov     dword ptr [esp + 0x14], esi
        call    FUN_004084d0
        mov     ebp, dword ptr [esp + 0x1c]
        add     esp, 0x4
        test    eax, eax
        jz      L_e57
        mov     edx, dword ptr [esp + 0x10]
        lea     ecx, [edi + 0x30]
        push    ecx
        push    ebp
        push    edi
        push    edx
        mov     ecx, eax
        call    FUN_006a0970
        mov     ebx, eax
        jmp     L_e59
    L_e57:
        xor     ebx, ebx
    L_e59:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, ebx
        or      eax, 0x1
        lea     esi, [ecx + 0x5f4]
        lea     edx, [esp + 0x18]
        cmp     edx, esi
        mov     dword ptr [esp + 0x18], eax
        jz      L_e8c
        mov     ecx, esi
        call    FUN_005cbc50
        mov     eax, dword ptr [esp + 0x18]
        push    0x0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esi], eax
        call    FUN_006a2260
    L_e8c:
        lea     ecx, [esp + 0x18]
        call    FUN_005cbc50
        mov     edx, dword ptr [edi + 0xc8]
        mov     eax, dword ptr [edi + 0xc4]
        cmp     eax, edx
        mov     esi, dword ptr [esp + 0x10]
        lea     ecx, [edi + 0xc4]
        jz      L_eba
    L_eaf:
        cmp     dword ptr [eax], esi
        jz      L_eba
        add     eax, 0x4
        cmp     eax, edx
        jnz     L_eaf
    L_eba:
        cmp     eax, edx
        jnz     L_ee1
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        jz      L_ed4
        test    eax, eax
        jz      L_ecc
        mov     dword ptr [eax], esi
    L_ecc:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_ee1
    L_ed4:
        push    0x1
        lea     edx, [esp + 0x14]
        push    edx
        push    eax
        call    FUN_00580fb0
    L_ee1:
        push    ebp
        mov     ecx, edi
        call    FUN_0065e530
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx + 0x30]
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x30]
        cmp     eax, edx
        jnz     L_f18
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x2c]
        xor     ecx, 0x85739531
        mov     esi, dword ptr [ecx + 0x384]
    L_f18:
        test    esi, esi
        jz      L_f93
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_f93
        mov     edx, dword ptr [esp + 0x10]
        mov     ebp, dword ptr [ebx]
        push    0x1
        add     edi, 0x30
        push    edi
        push    esi
        push    edx
        lea     eax, [esp + 0x2c]
        push    0x1388
        push    eax
        call    FUN_0065ae10
        add     esp, 0x18
        push    eax
        mov     ecx, ebx
        call    dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     L_f93
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     L_f83
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_f93
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    L_f83:
        and     ecx, 0xfffffffc
        mov     dword ptr [esp + 0x1c], ecx
        jz      L_f93
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0xc]
    L_f93:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
