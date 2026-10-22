/*
 * FUN_004EDC9E (328 B, __stdcall ret 8) — Object constructor/initializer.
 * Calls FUN_004d5b10, sets up a vtable (g_774a50) and a sub-object via
 * FUN_00412a00, then calls FUN_00416110 on g_7daa38; if it returns non-null,
 * initializes it via FUN_004b83e0. Walks a linked list from g_7dc7fc looking
 * for a matching id (FUN_0041fd80), allocating a new node (FUN_004084d0 /
 * FUN_004eda20) and registering it (FUN_004179b0 / FUN_004c8a50) if not found.
 * Finally initializes several members (FUN_004161f0, FUN_0041fd80,
 * FUN_004ba320) and issues four virtual calls (vtable+0x20) on esi.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7daa38;   /* 0x007daa38 */
extern unsigned int g_7dc7fc;   /* 0x007dc7fc */
extern unsigned int g_774a50;   /* 0x00774a50 vtable */
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004b83e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004eda20(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004c8a50(void);
extern void __cdecl FUN_004161f0(void);
extern void __cdecl FUN_004ba320(void);

__declspec(naked) int FUN_004EDC9E(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call    FUN_004d5b10
        mov     esi, dword ptr [esp + 0x18]
        lea     eax, [edi + 0x10]
        push    eax
        mov     dword ptr [eax], 0
        push    esi
        mov     dword ptr [edi], offset g_774a50
        call    FUN_00412a00
        mov     ecx, dword ptr [g_7daa38]
        add     esp, 8
        call    FUN_00416110
        test    eax, eax
        je      L_ec
        push    0xe
        push    esi
        mov     ecx, eax
        call    FUN_004b83e0
        mov     dword ptr [esp + 0x14], eax
        jmp     L_f4
L_ec:
        mov     dword ptr [esp + 0x14], 0
L_f4:
        mov     eax, dword ptr [g_7dc7fc]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [eax]
        mov     dword ptr [edi + 0x14], ecx
        xor     al, al
        test    ebp, ebp
        je      L_10
        mov     ebx, dword ptr [ebp]
        mov     ebp, dword ptr [ebp + 4]
        jmp     L_12
L_10:
        xor     ebx, ebx
L_12:
        test    ebx, ebx
        je      L_33
        test    al, al
        jne     L_74
        lea     ecx, [ebx + 0x10]
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x140]
        mov     edx, dword ptr [esp + 0x14]
        cmp     ecx, edx
        sete    al
        __emit 0xEB   /* jmp L_f4: MSVC6 miscomputes backward rel8 (off-by-0x10) when call-relocs sit between branch and target */
        __emit 0xD1
L_33:
        test    al, al
        jne     L_74
        push    0x48
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_52
        push    0xa
        mov     ecx, eax
        call    FUN_004eda20
        mov     ebx, eax
        jmp     L_54
L_52:
        xor     ebx, ebx
L_54:
        mov     ecx, dword ptr [g_7dc7fc]
        push    ebx
        call    FUN_004179b0
        lea     ecx, [ebx + 0x10]
        call    FUN_0041fd80
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    FUN_004c8a50
L_74:
        mov     edx, dword ptr [ebx + 0x44]
        lea     ecx, [ebx + 0x18]
        mov     dword ptr [esp + 0x14], edx
        call    FUN_004161f0
        lea     ecx, [ebx + 0x10]
        call    FUN_0041fd80
        lea     ebx, [edi + 0x24]
        push    ebx
        lea     ebp, [edi + 0x20]
        push    ebp
        lea     ecx, [edi + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        lea     edx, [edi + 0x18]
        push    edx
        mov     edx, dword ptr [ecx + 0x10]
        push    edx
        mov     ecx, eax
        call    FUN_004ba320
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [esi]
        push    0x40
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [edi + 0x1c]
        mov     edx, dword ptr [esi]
        push    0x40
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp]
        mov     edx, dword ptr [esi]
        push    0x20
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [esi]
        push    1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
