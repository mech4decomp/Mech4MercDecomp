/*
 * FUN_005f86c0 (159 B) — __thiscall (ECX = this).
 *
 * Clears a global table, iterates a linked list, and conditionally
 * registers entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0066c3c0(void);
extern void __stdcall FUN_004084e0(void *param);
extern void __stdcall FUN_0066b3f0(void);

extern int g_7f25d0;

__declspec(naked) void __stdcall FUN_005f86c0(void)
{
    __asm {
        push    ecx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp + 0x398]
        or      eax, 0xffffffff
        mov     ecx, 0x2f
        mov     edi, 0x7f25d0
        rep     stosd
        xor     edi, edi
loc_86dd:
        test    esi, esi
        jz      loc_872d
loc_86e1:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      loc_872d
        mov     edx, dword ptr [eax + 0x2c]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0066c3c0
        add     esp, 0x8
        cmp     eax, -0x1
        jz      loc_870f
        mov     dword ptr [eax*0x4 + g_7f25d0], edi
loc_870f:
        mov     eax, dword ptr [esp + 0xc]
        inc     edi
        test    eax, eax
        jz      loc_86dd
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_86dd
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     loc_86dd
loc_872d:
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [eax + 0x4]
        mov     cl, byte ptr [eax + 0x88]
        add     eax, 0x88
        test    cl, cl
        jz      loc_875a
        mov     ecx, dword ptr [ebp + 0x2f4]
        mov     dl, byte ptr [ecx + 0x1c]
        test    dl, dl
        jnz     loc_875a
        push    0x1
        push    eax
        call    FUN_0066b3f0
loc_875a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret
    }
}
