/*
 * FUN_004da960 (115 B) — __thiscall. Registers a node (EBX) into a
 * list (this+0xbc), sets flags, and conditionally reconfigures a
 * stream object via virtual calls (vtable+0x8/+0x10/+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004da960(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        push    edi
        mov     edi, ecx
        push    ebx
        lea     ecx, [edi+0xbc]
        mov     dword ptr [ebx+0xc4], edi
        call    FUN_004179b0
        mov     esi, dword ptr [ebx+0x10]
        mov     ecx, dword ptr [ebx+0xd8]
        or      esi, 0x20
        mov     dword ptr [ebx+0x10], esi
        mov     esi, dword ptr [edi+0xd8]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x8]
        mov     eax, dword ptr [esi+0x18]
        mov     edx, eax
        shr     edx, 0x1
        test    dl, 0x1
        jnz     L_9cd
        and     eax, 0xc0
        cmp     al, 0x40
        jnz     L_9cd
        mov     eax, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi]
        and     eax, 0xffffff7f
        or      eax, 0x48
        mov     ecx, esi
        mov     dword ptr [esi+0x18], eax
        call    dword ptr [edx+0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        or      dword ptr [edi+0x10], 0x20
L_9cd:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
