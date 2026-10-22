/*
 * FUN_004c92c0 (559 B) — __cdecl, no args, returns char. Telephony
 * location setup: calls function pointers (g_007dac58/54), copies several
 * null-terminated strings (repne scasb / rep movsd / rep movsb) into
 * stack buffers and globals, calls printf (g_0076b2f4), and a virtual
 * call via an XOR-obfuscated object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_007dac4c;
extern int   g_007dac74;
extern int   g_007dac78;
extern int*  g_007dab44;
extern int   g_007dab40;
extern int*  g_007dac58;   /* function pointer */
extern int*  g_007dac54;   /* function pointer */
extern int*  g_0076b2f4;   /* printf */

__declspec(naked) void FUN_004c92c0(void)
{
    __asm {
        mov     al, byte ptr [g_007dac4c]
        sub     esp, 0x428
        test    al, al
        push    esi
        push    edi
        jnz     L_92dc
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0x428
        ret
    L_92dc:
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x1c], 0x19c
        call    dword ptr [g_007dac58]
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      L_9368
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x4a3
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x7dab48
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        mov     dword ptr [g_007dac74], 0x1
        mov     al, 0x1
        pop     esi
        add     esp, 0x428
        ret
    L_9368:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76b768
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     dword ptr [esp + 0x14], 0x41c
        lea     edx, [esp + 0x119]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76b768
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x19a]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x438]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x21b]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x43c]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x31c]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7718f4
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        lea     edx, [esp + 0x41d]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x434]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edx, [esp + 0x18]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        push    0x7dac78
        mov     ecx, eax
        push    0x4c9530
        and     ecx, 0x3
        push    0x1
        rep movsb
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0x0
        push    0x0
        mov     dword ptr [g_007dac78], 0x0
        call    dword ptr [g_007dac54]
        test    eax, eax
        jz      L_94e4
        push    eax
        push    0x7718e8
        call    dword ptr [g_0076b2f4]
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        add     esp, 0x8
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x4a4
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x7dab48
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
    L_94e4:
        pop     edi
        mov     al, 0x1
        pop     esi
        add     esp, 0x428
        ret
    }
}
