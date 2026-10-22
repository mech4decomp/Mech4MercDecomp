/*
 * FUN_0074b640 (219 B) — OS version detection + username retrieval.
 *
 * Calls GetVersionExA, then branches on platform id (2 = NT, 1 = 9x)
 * to fetch the username via GetUserNameA (and domain name on NT).
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8b8e48;
extern void *g_76b204;   /* IAT: GetVersionExA */
extern void *g_76b000;   /* IAT: GetUserNameA */
extern void *g_76b0c8;   /* IAT: GetProcAddress */

extern void __cdecl FUN_0074ba70(void);
extern void __cdecl FUN_0074b720(void);
extern void __cdecl FUN_0074b960(void);

__declspec(naked) void __stdcall FUN_0074b640(void)
{
    __asm {
        sub     esp, 0x94
        push    esi
        push    edi
        lea     eax, [esp + 8]
        push    eax
        mov     dword ptr [esp + 0xc], 0x94
        call    dword ptr [g_76b204]
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, 2
        jnz     L_a5
        mov     ecx, dword ptr [esp + 0xac]
        mov     edx, dword ptr [esp + 0xa8]
        mov     esi, dword ptr [esp + 0xa4]
        mov     edi, dword ptr [esp + 0xa0]
        push    ecx
        push    edx
        push    esi
        push    edi
        call    FUN_0074ba70
        test    eax, eax
        jnz     L_0b
        push    esi
        push    edi
        call    dword ptr [g_76b000]
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0x94
        ret     0x10
    L_a5:
        cmp     eax, 1
        jnz     L_0b
        call    FUN_0074b720
        test    eax, eax
        jz      L_e3
        mov     eax, dword ptr [g_8b8e48]
        push    0x7ab3f4
        push    eax
        call    dword ptr [g_76b0c8]
        test    eax, eax
        jz      L_dc
        mov     ecx, dword ptr [esp + 0xac]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0xa8]
        push    edx
        push    ecx
        call    eax
    L_dc:
        call    FUN_0074b960
        jmp     L_ed
    L_e3:
        mov     edx, dword ptr [esp + 0xa8]
        mov     byte ptr [edx], 0
    L_ed:
        mov     esi, dword ptr [esp + 0xa4]
        mov     edi, dword ptr [esp + 0xa0]
        push    esi
        push    edi
        call    dword ptr [g_76b000]
        test    eax, eax
        jnz     L_0b
        mov     byte ptr [edi], al
        mov     dword ptr [esi], eax
    L_0b:
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0x94
        ret     0x10
    }
}
