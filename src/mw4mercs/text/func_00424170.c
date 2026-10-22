/*
 * FUN_00424170 (173 B) — __thiscall, RET 0x4. MLR material/light object
 * constructor (variant of FUN_00424070 with a different base ctor).
 * Sets vtable + render-state flags, frees stale buffer, lazily allocates
 * a 0x30-byte sub-object, and initializes a 0x100-entry dword array.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00450b10(int a);
extern void __cdecl FUN_00423c40(int a);
extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void FUN_00424170(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00450b10
        mov     eax, dword ptr [esi+0x60]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [esi], 0x76de4c
        jz      L_9f
        mov     ecx, dword ptr [esi+0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi+0x5c], edi
        mov     dword ptr [esi+0x60], edi
L_9f:
        cmp     dword ptr [esi+0xc], edi
        jnz     L_dc
        push    0x30
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_d7
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
        jmp     L_d9
L_d7:
        xor     eax, eax
L_d9:
        mov     dword ptr [esi+0xc], eax
L_dc:
        cmp     dword ptr [esi+0x68], edi
        jnz     L_16
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
        jbe     L_02
        mov     edi, dword ptr [ebx]
        or      eax, -1
        rep stosd
L_02:
        mov     ecx, dword ptr [ebp+0x24]
        mov     eax, dword ptr [ebx]
        pop     ebp
        pop     ebx
        mov     dword ptr [esi+0x64], eax
        pop     edi
        mov     dword ptr [esi+0x68], ecx
        mov     eax, esi
        pop     esi
        ret     4
L_16:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
