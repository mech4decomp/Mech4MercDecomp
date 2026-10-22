/*
 * FUN_00424070 (211 B) — __thiscall, RET 0xc. MLR material/light object
 * constructor. Calls base ctor FUN_00450a00, sets vtable + render-state
 * flags, frees a stale buffer, lazily allocates a 0x30-byte sub-object,
 * and initializes a 0x100-entry dword array (fill 0xFFFFFFFF).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00450a00(int a, int b, int c);
extern void __cdecl FUN_00423c40(int a);
extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void FUN_00424070(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x4]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x10]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_00450a00
        mov     eax, dword ptr [esi+0x30]
        mov     ecx, dword ptr [esi+0x3c]
        and     eax, 0xfffffc5f
        or      eax, 0x40
        mov     dword ptr [esi+0x30], eax
        mov     eax, dword ptr [esi+0x60]
        or      ecx, 0x3e0
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esi], 0x76de4c
        mov     dword ptr [esi+0x3c], ecx
        jz      L_c5
        mov     ecx, dword ptr [esi+0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x5c], edi
        mov     dword ptr [esi+0x60], edi
L_c5:
        cmp     dword ptr [esi+0xc], edi
        jnz     L_02
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_fd
        mov     dword ptr [eax], edi
        mov     dword ptr [eax+4], edi
        mov     dword ptr [eax+8], edi
        mov     dword ptr [eax+0xc], edi
        mov     dword ptr [eax+0x10], edi
        mov     dword ptr [eax+0x14], edi
        mov     dword ptr [eax+0x18], edi
        mov     dword ptr [eax+0x1c], edi
        mov     dword ptr [eax+0x20], edi
        mov     dword ptr [eax+0x24], edi
        mov     dword ptr [eax+0x28], edi
        mov     dword ptr [eax+0x2c], edi
        jmp     L_ff
L_fd:
        xor     eax, eax
L_ff:
        mov     dword ptr [esi+0xc], eax
L_02:
        cmp     dword ptr [esi+0x68], edi
        jnz     L_3c
        mov     edx, dword ptr [esi+0x18]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esi+0xc]
        lea     ebx, [ebp+0x20]
        push    edx
        mov     ecx, ebx
        call    FUN_00423c40
        mov     ecx, dword ptr [ebx+4]
        cmp     ecx, edi
        jbe     L_28
        mov     edi, dword ptr [ebx]
        or      eax, -1
        rep stosd
L_28:
        mov     ecx, dword ptr [ebp+0x24]
        mov     eax, dword ptr [ebx]
        pop     ebp
        pop     ebx
        mov     dword ptr [esi+0x64], eax
        pop     edi
        mov     dword ptr [esi+0x68], ecx
        mov     eax, esi
        pop     esi
        ret     0xc
L_3c:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
