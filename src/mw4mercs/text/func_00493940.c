/*
 * FUN_00493940 (136 B) — __thiscall MLR material stream-load. Reads
 * material fields from a stream vtable (call dword ptr [reg+0x24]),
 * iterates a linked list, and loads sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00421ec0(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_004935f0(void);
extern void __cdecl FUN_004adf40(void);
extern void __cdecl FUN_004add70(void);

__declspec(naked) void FUN_00493940(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ebx, ecx
        push    0x4
        lea     ecx, [ebx + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        lea     edx, [ebx + 0x4]
        push    edx
        push    eax
        call    FUN_00412a50
        mov     edi, dword ptr [ebx + 0x10]
        lea     ecx, [ebx + 0x10]
        add     esp, 0x8
        call    FUN_00417a40
        push    0x4
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
    L_493980:
        test    edi, edi
        jz      L_493995
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        mov     edi, dword ptr [edi + 0x4]
        jz      L_493995
        push    esi
        call    FUN_004935f0
        jmp     L_493980
    L_493995:
        push    esi
        lea     ecx, [ebx + 0x18]
        call    FUN_004add70
        push    esi
        lea     ecx, [ebx + 0x20]
        call    FUN_004adf40
        push    esi
        lea     ecx, [ebx + 0x34]
        call    FUN_004adf40
        push    esi
        call    FUN_00421ec0
        add     esp, 0x4
        push    esi
        lea     ecx, [ebx + 0x48]
        call    FUN_00491340
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
