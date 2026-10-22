/*
 * FUN_0041f8d0 (416 B) — __thiscall tree/section save-load. If this->0x18
 * does not start with "{\r\n" (strncmp), it parses the string via
 * FUN_0041de80 and writes it out (FUN_00412780 / FUN_00412bf0 /
 * FUN_0040df40 / FUN_0041dec0). Otherwise it walks the child list
 * (FUN_0041e690, FUN_00412e70) and, for each child, emits '[' name ']'
 * sections via FUN_00412570/FUN_00412670/FUN_004125e0/FUN_00412740,
 * decrementing a shared refcount (FUN_004084e0) when it hits zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_strncmp_0076b2e0)(const char *, const char *, unsigned int);
extern char g_str_76d158[];
extern void FUN_0041de80(void);
extern void FUN_00412780(void);
extern void FUN_00412bf0(void);
extern void FUN_0040df40(void);
extern void FUN_0041dec0(void);
extern void FUN_0041e690(void);
extern void FUN_00412e70(void);
extern void FUN_00412570(void);
extern void FUN_00412670(void);
extern void FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void FUN_004125e0(void);
extern void FUN_0041e710(void);

__declspec(naked) void FUN_0041f8d0(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx+0x18]
        push    0x3
        push    offset g_str_76d158
        push    esi
        call    dword ptr [g_strncmp_0076b2e0]
        add     esp, 0xc
        test    eax, eax
        jz      L_41f93b
        push    0x0
        push    esi
        lea     ecx, [esp+0x14]
        call    FUN_0041de80
        mov     eax, dword ptr [esp+0x30]
        mov     esi, dword ptr [esp+0x40]
        push    eax
        mov     ecx, esi
        call    FUN_00412780
        lea     ecx, [esp+0xc]
        push    ecx
        lea     ecx, [esi+0xc]
        call    FUN_00412bf0
        push    0x0
        push    0x0
        push    0x0
        lea     edx, [esp+0x18]
        push    edx
        mov     ecx, esi
        call    FUN_0040df40
        lea     ecx, [esp+0xc]
        call    FUN_0041dec0
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret     0x4
L_41f93b:
        push    edi
        or      ecx, 0xffffffff
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        push    0x0
        add     ecx, -0x4
        push    ecx
        add     esi, 0x3
        push    esi
        lea     ecx, [esp+0x1c]
        call    FUN_0041e690
        mov     eax, dword ptr [ebx+0x10]
        mov     esi, dword ptr [eax+0x10]
        mov     edi, dword ptr [esp+0x44]
        lea     ecx, [esi+0xc]
        push    ecx
        lea     ecx, [edi+0xc]
        call    FUN_00412e70
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      L_41fa4c
        push    esi
        lea     ecx, [esp+0x48]
        call    FUN_00412570
        mov     edx, dword ptr [esp+0x44]
        push    0x5b
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp+0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      L_41f9b9
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_41f9b9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_41f9b9:
        mov     eax, dword ptr [ebx+0x14]
        mov     ecx, dword ptr [esp+0x44]
        push    eax
        push    ecx
        lea     ecx, [esp+0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp+0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      L_41f9f0
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_41f9f0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_41f9f0:
        mov     edx, dword ptr [esp+0x44]
        push    0x5d
        push    edx
        lea     ecx, [esp+0x14]
        call    FUN_00412670
        push    eax
        lea     ecx, [esp+0x48]
        call    FUN_00412740
        mov     eax, dword ptr [esp+0xc]
        test    eax, eax
        jz      L_41fa25
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_41fa25
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_41fa25:
        lea     eax, [esp+0x44]
        push    eax
        mov     ecx, edi
        call    FUN_00412740
        mov     eax, dword ptr [esp+0x44]
        test    eax, eax
        jz      L_41fa4c
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_41fa4c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_41fa4c:
        push    0x1
        push    0x0
        push    0x0
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, edi
        call    FUN_0040df40
        lea     ecx, [esp+0x10]
        call    FUN_0041e710
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret     0x4
    }
}
