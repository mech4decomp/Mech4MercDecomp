/*
 * FUN_00605490 (150 B) — __thiscall destructor. Sets vtable 0x78b9a0, walks
 * two linked lists (calling FUN_00417ad0 + virtual method per node), then
 * destroys sub-objects via FUN_00417980 / FUN_0041fc90 / FUN_00415380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_00605490(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x1c]
        mov     dword ptr [edi], 0x78b9a0
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0xc], 0x78b9c0
L_loop1:
        test    eax, eax
        jz      L_after1
        mov     esi, dword ptr [eax]
        test    esi, esi
        jz      L_after1
        lea     ecx, [esp + 0xc]
        call    FUN_00417ad0
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
        mov     eax, dword ptr [esp + 0x14]
        jmp     L_loop1
L_after1:
        mov     ecx, dword ptr [edi + 0x24]
        lea     esi, [edi + 0x24]
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x18], 0x78b9bc
L_loop2:
        test    eax, eax
        jz      L_after2
        cmp     dword ptr [eax], 0
        jz      L_after2
        lea     ecx, [esp + 0x18]
        call    FUN_00417ad0
        mov     eax, dword ptr [esp + 0x14]
        jmp     L_loop2
L_after2:
        mov     ecx, esi
        call    FUN_00417980
        mov     ecx, ebx
        call    FUN_00417980
        lea     ecx, [edi + 0x14]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }
}
