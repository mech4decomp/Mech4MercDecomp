/*
 * FUN_1002f020 (192 B) — __fastcall (ECX = this), destructor with SEH frame.
 * Sets vtable, closes handle, drains a linked list, releases sub-objects.
 */

extern void *g_10049098;   /* IAT: CloseHandle */
extern void __cdecl FUN_1000c4c0(void);
extern void __cdecl FUN_1002f5d0(void);
extern void __cdecl FUN_1001ad90(void);

extern int g_1005504c;

__declspec(naked) void __fastcall FUN_1002f020(void)
{
    __asm {
        push    -1
        push    0x1004889b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [ebx], 0x1004ad70
        mov     eax, dword ptr [ebx + 0x14]
        xor     ebp, ebp
        cmp     eax, ebp
        mov     dword ptr [esp + 0x1c], ebp
        jz      L_f05d
        push    eax
        call    dword ptr [g_10049098]
        mov     dword ptr [ebx + 0x14], ebp
    L_f05d:
        lea     esi, [ebx + 0x18]
        mov     eax, dword ptr [esi]
        cmp     eax, esi
        jz      L_f098
    L_f066:
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi], ecx
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 0x4], esi
        mov     edi, dword ptr [eax + 0x8]
        push    eax
        mov     dword ptr [eax + 0x4], ebp
        mov     dword ptr [eax], ebp
        mov     eax, dword ptr [g_1005504c]
        push    eax
        call    FUN_1000c4c0
        mov     ecx, dword ptr [esi + 0x18]
        dec     ecx
        cmp     edi, ebp
        mov     dword ptr [esi + 0x18], ecx
        jz      L_f098
        push    edi
        mov     ecx, ebx
        call    FUN_1002f5d0
        __emit  0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (EB C8) across a call-reloc (off-by-6) */
        __emit  0xC8
    L_f098:
        mov     ebx, dword ptr [ebx + 0x8]
        cmp     ebx, ebp
        jz      L_f0a5
        mov     ecx, dword ptr [ebx]
        push    ebx
        call    dword ptr [ecx + 0x8]
    L_f0a5:
        mov     eax, dword ptr [esi]
        cmp     eax, esi
        mov     dword ptr [esp + 0x1c], 0xffffffff
        jz      L_f0c8
    L_f0b3:
        mov     edx, dword ptr [g_1005504c]
        mov     edi, dword ptr [eax]
        push    eax
        push    edx
        call    FUN_1000c4c0
        cmp     edi, esi
        mov     eax, edi
        jnz     L_f0b3
    L_f0c8:
        call    FUN_1001ad90
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
