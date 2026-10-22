/*
 * FUN_006a6aa0 (371 B) — ABL object/record factory constructor (__thiscall,
 * RET 0x18). Sets vtable pointers, initializes two growable arrays, appends
 * 6 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00795450;
extern char g_00799e4c;
extern void __cdecl FUN_005b6830(void);
extern void __cdecl FUN_006a8040(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_006a8100(void);
extern void __cdecl FUN_006a8230(void);

__declspec(naked) void *FUN_006a6aa0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        lea     eax, [esp + 0x14]
        lea     esi, [ebx + 0x4]
        push    eax
        lea     ecx, [esp + 0x17]
        xor     ebp, ebp
        push    ecx
        mov     dword ptr [ebx], offset g_00795450
        lea     ecx, [esi + 0x8]
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_005b6830
        lea     edx, [esp + 0x14]
        lea     edi, [ebx + 0x10]
        push    edx
        lea     eax, [esp + 0x17]
        push    eax
        lea     ecx, [edi + 0x8]
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x4], ebp
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_006a8040
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        mov     dword ptr [ebx], offset g_00799e4c
        jz      loc_6A6B0D
        cmp     eax, ebp
        jz      loc_6A6B05
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
loc_6A6B05:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     loc_6A6B1C
loc_6A6B0D:
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00566570
loc_6A6B1C:
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [edi + 0x8]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        jz      loc_6A6B3A
        cmp     eax, ebp
        jz      loc_6A6B32
        mov     dword ptr [eax], ecx
loc_6A6B32:
        add     eax, 0x4
        mov     dword ptr [edi + 0x4], eax
        jmp     loc_6A6B49
loc_6A6B3A:
        push    1
        lea     ecx, [esp + 0x24]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_006a8100
loc_6A6B49:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      loc_6A6B63
        cmp     eax, ebp
        jz      loc_6A6B5B
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax], edx
loc_6A6B5B:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     loc_6A6B72
loc_6A6B63:
        push    1
        lea     ecx, [esp + 0x28]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_00566570
loc_6A6B72:
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [edi + 0x8]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x20], ecx
        jz      loc_6A6B90
        cmp     eax, ebp
        jz      loc_6A6B88
        mov     dword ptr [eax], ecx
loc_6A6B88:
        add     eax, 0x4
        mov     dword ptr [edi + 0x4], eax
        jmp     loc_6A6B9F
loc_6A6B90:
        push    1
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_006a8100
loc_6A6B9F:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      loc_6A6BB9
        cmp     eax, ebp
        jz      loc_6A6BB1
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax], ecx
loc_6A6BB1:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     loc_6A6BC8
loc_6A6BB9:
        push    1
        lea     edx, [esp + 0x30]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00566570
loc_6A6BC8:
        mov     eax, dword ptr [esp + 0x30]
        mov     esi, dword ptr [edi + 0x4]
        mov     dword ptr [esp + 0x20], eax
        cmp     esi, dword ptr [edi + 0x8]
        jz      loc_6A6BF8
        lea     ecx, [esp + 0x20]
        push    ecx
        push    esi
        call    FUN_006a8230
        add     esp, 0x8
        add     esi, 0x4
        mov     dword ptr [edi + 0x4], esi
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0x18
loc_6A6BF8:
        push    1
        lea     edx, [esp + 0x24]
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_006a8100
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0x18
    }
}
