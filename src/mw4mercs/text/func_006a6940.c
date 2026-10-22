/*
 * FUN_006a6940 (267 B) — ABL object/record factory constructor (__thiscall,
 * RET 0x10). Sets vtable pointers, initializes two growable arrays (via
 * FUN_00566570 / FUN_006a8100), appends 4 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00795450;
extern char g_00799e4c;
extern void __cdecl FUN_005b6830(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_006a8100(void);

__declspec(naked) void *FUN_006a6940(void)
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
        mov     dl, byte ptr [esp + 0x1c]
        mov     ecx, dword ptr [esi + 0x8]
        lea     edi, [ebx + 0x10]
        mov     dword ptr [edi], ebp
        mov     dword ptr [edi + 0x4], ebp
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ecx
        mov     byte ptr [edi + 0x8], dl
        mov     dword ptr [edi + 0x8], ebp
        mov     dword ptr [ebx], offset g_00799e4c
        jz      loc_6A69A3
        cmp     eax, ebp
        jz      loc_6A699B
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax], ecx
loc_6A699B:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     loc_6A69B2
loc_6A69A3:
        push    1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_00566570
loc_6A69B2:
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [edi + 0x8]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x20], ecx
        jz      loc_6A69D0
        cmp     eax, ebp
        jz      loc_6A69C8
        mov     dword ptr [eax], ecx
loc_6A69C8:
        add     eax, 0x4
        mov     dword ptr [edi + 0x4], eax
        jmp     loc_6A69DF
loc_6A69D0:
        push    1
        lea     ecx, [esp + 0x24]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_006a8100
loc_6A69DF:
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, dword ptr [esi + 0x8]
        jz      loc_6A69F9
        cmp     eax, ebp
        jz      loc_6A69F1
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax], edx
loc_6A69F1:
        add     eax, 0x4
        mov     dword ptr [esi + 0x4], eax
        jmp     loc_6A6A08
loc_6A69F9:
        push    1
        lea     ecx, [esp + 0x28]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_00566570
loc_6A6A08:
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, dword ptr [edi + 0x8]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x20], ecx
        jz      loc_6A6A30
        cmp     eax, ebp
        jz      loc_6A6A1E
        mov     dword ptr [eax], ecx
loc_6A6A1E:
        add     eax, 0x4
        mov     dword ptr [edi + 0x4], eax
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0x10
loc_6A6A30:
        push    1
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_006a8100
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x8
        ret     0x10
    }
}
