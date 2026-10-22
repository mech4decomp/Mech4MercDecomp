/*
 * FUN_006e6d80 (544 B) — __cdecl window-message handler. Sends WM_GETCOUNT
 * (0x190) to a window, allocates a per-item array, then iterates items via
 * WM_GETITEM (0x199), dispatching on obfuscated (XOR 0x85739531) type fields
 * and calling string/registry helpers.
 *
 * __cdecl, RET (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b560;   /* IAT: SendMessageA */

extern void *__cdecl FUN_004084d0(int size);
extern void  __cdecl FUN_004084e0(void *p);
extern int   __cdecl FUN_005477a0(int a, int b);
extern void *__cdecl FUN_0072d830(int a, int b);
extern void *__cdecl FUN_00412570(void *p);
extern void  __cdecl FUN_004125e0(void *a, void *b);
extern void  __cdecl FUN_006e4210(void *a, int b, int c);

extern int g_7dab44;    /* dword at 0x007dab44 */
extern int g_7dab40;    /* dword at 0x007dab40 */
extern int g_841a90;    /* dword array at 0x00841a90 */
extern int g_841838;    /* dword array at 0x00841838 */
extern int g_841768;    /* dword at 0x00841768 */
extern char g_76cb8c;   /* string literal 0x0076cb8c */

__declspec(naked) void __cdecl FUN_006e6d80(void *p1, void *p2)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        mov     ebx, dword ptr [g_76b560]
        push    ebp
        mov     ebp, dword ptr [esp + 0x28]
        push    esi
        push    0
        push    0
        push    0x190
        push    ebp
        call    ebx
        mov     esi, eax
        test    esi, esi
        jz      L_02
        lea     eax, [esi*4]
        push    edi
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     edi, eax
        push    edi
        push    esi
        push    0x191
        push    ebp
        mov     dword ptr [esp + 0x38], edi
        call    ebx
        test    esi, esi
        jle     L_f8
        mov     dword ptr [esp + 0x1c], esi
        jmp     L_db
L_d5:
        mov     ebx, dword ptr [g_76b560]
L_db:
        mov     ecx, dword ptr [edi]
        push    0
        push    ecx
        push    0x199
        push    ebp
        call    ebx
        mov     edx, dword ptr [g_7dab44]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0x4c]
        xor     cl, cl
        xor     bl, bl
        xor     edx, 0x85739531
        jz      L_09
        mov     cl, 0x1
L_09:
        mov     edx, dword ptr [eax + 0x58]
        xor     edx, 0x85739531
        jz      L_16
        mov     bl, 0x1
L_16:
        test    cl, cl
        jnz     L_e5
        mov     ecx, dword ptr [eax + 0xc]
        push    0x1
        push    esi
        xor     ecx, 0x85739531
        call    FUN_005477a0
        cmp     eax, 0x1
        jnz     L_e5
        mov     eax, dword ptr [esi*4 + g_841a90]
        mov     ecx, dword ptr [g_841768]
        push    eax
        push    ecx
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        mov     edx, dword ptr [eax]
        push    offset g_76cb8c
        push    edx
        lea     ecx, [esp + 0x38]
        call    FUN_004125e0
        mov     eax, dword ptr [g_841768]
        push    0x1781
        push    eax
        call    FUN_0072d830
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x30]
        test    eax, eax
        jz      L_a1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_a1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_a1:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      L_bc
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bc:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_841768]
        push    0
        push    edx
        push    0x1771
        push    eax
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0xc
        jmp     L_be
L_e5:
        test    bl, bl
        jnz     L_d7
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        push    0x2
        push    esi
        xor     ecx, 0x85739531
        call    FUN_005477a0
        cmp     eax, 0x1
        jnz     L_d7
        mov     edx, dword ptr [esi*4 + g_841a90]
        mov     eax, dword ptr [g_841768]
        push    edx
        push    eax
        call    FUN_0072d830
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        mov     ecx, dword ptr [eax]
        push    offset g_76cb8c
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        mov     edx, dword ptr [g_841768]
        push    0x1782
        push    edx
        call    FUN_0072d830
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_7e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_7e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_7e:
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        jz      L_99
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_99
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_99:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [g_841768]
        push    0
        push    ecx
        push    0x1771
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006e4210
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0xc
L_be:
        test    eax, eax
        jz      L_e2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_e2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_e2
L_d7:
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [esi*4 + g_841838], eax
L_e2:
        mov     eax, dword ptr [esp + 0x1c]
        add     edi, 0x4
        dec     eax
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_d5
        mov     edi, dword ptr [esp + 0x28]
L_f8:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        pop     edi
L_02:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
