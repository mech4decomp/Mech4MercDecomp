/*
 * FUN_004acbd0 (402 B) -- __thiscall (RET 0x8). MLR sub-object type
 * dispatcher (2-arg variant): switch on *this (cases 4..11) via jump table
 * at 0x4acd64, calling pairs of matrix/transform helpers (FUN_004ae5a0/
 * FUN_004addd0/FUN_004adf70/FUN_004add90) then a virtual slot +0x20 call.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004add90(void);

__declspec(naked) void FUN_004acbd0(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        add     eax, -0x4
        cmp     eax, 0x7
        push    edi
        ja      L_default
        /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x64
        __emit 0xCD
        __emit 0x4A
        __emit 0x00
L_c4:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004addd0
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x1c
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c5:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x1c
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c6:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae5a0
        push    ebx
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004adf70
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x24
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c7:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x18
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c8:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_004addd0
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x18
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c9:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004add90
        push    ebx
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_004adf70
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x20
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c10:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea     ecx, [esi + 0x18]
        call    FUN_004addd0
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x24
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
L_c11:
        mov     ebx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004adf70
        push    ebx
        push    edi
        lea     ecx, [esi + 0x18]
        call    FUN_004adf70
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x2c
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
L_default:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
