/*
 * FUN_004aca50 (345 B) -- __thiscall (RET 0x4). MLR sub-object type
 * dispatcher: switch on *this (cases 4..11) via jump table at 0x4acbac,
 * calling pairs of matrix/transform helpers (FUN_004ae560/FUN_004addb0/
 * FUN_004adf40/FUN_004add70) then a virtual slot +0x24 call.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004ae560(void);
extern void __cdecl FUN_004addb0(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004add70(void);

__declspec(naked) void FUN_004aca50(void)
{
    __asm {
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
        __emit 0xAC
        __emit 0xCB
        __emit 0x4A
        __emit 0x00
L_c4:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae560
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004addb0
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x1c
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c5:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae560
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004ae560
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x1c
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c6:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004ae560
        push    edi
        lea     ecx, [esi + 0x10]
        call    FUN_004adf40
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x24
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c7:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004add70
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_004ae560
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x18
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c8:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004add70
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_004addb0
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x18
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c9:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004add70
        push    edi
        lea     ecx, [esi + 0xc]
        call    FUN_004adf40
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x20
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c10:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004adf40
        push    edi
        lea     ecx, [esi + 0x18]
        call    FUN_004addb0
        mov     eax, dword ptr [edi]
        push    0x1
        add     esi, 0x24
        push    esi
        mov     ecx, edi
        call    dword ptr [eax + 0x24]
        pop     edi
        pop     esi
        ret     0x4
L_c11:
        mov     edi, dword ptr [esp + 0xc]
        push    edi
        lea     ecx, [esi + 0x4]
        call    FUN_004adf40
        push    edi
        lea     ecx, [esi + 0x18]
        call    FUN_004adf40
        mov     edx, dword ptr [edi]
        push    0x1
        add     esi, 0x2c
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x24]
L_default:
        pop     edi
        pop     esi
        ret     0x4
    }
}
