/*
 * FUN_004E8FF0 (173 B) — Adept Zone destructor (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004c4480(void);

__declspec(naked) void __fastcall FUN_004e8ff0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     ebx, [edi + 0x174]
        mov     dword ptr [edi], 0x7744f4
        mov     esi, dword ptr [ebx]
    L9003:
        test    esi, esi
        jz      L901B
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 4]
        jz      L901B
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xc]
        jmp     L9003
    L901B:
        mov     esi, dword ptr [edi + 0x144]
    L9021:
        test    esi, esi
        jz      L9039
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 4]
        jz      L9039
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xc]
        jmp     L9021
    L9039:
        mov     ecx, dword ptr [edi + 0x17c]
        test    ecx, ecx
        jz      L9049
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    L9049:
        lea     ecx, [edi + 0x1c4]
        call    FUN_004d21c0
        lea     ecx, [edi + 0x180]
        call    FUN_004d21c0
        mov     ecx, ebx
        call    FUN_00417980
        lea     ecx, [edi + 0x16c]
        call    FUN_00417980
        lea     ecx, [edi + 0x164]
        call    FUN_00417980
        lea     ecx, [edi + 0x15c]
        call    FUN_00417980
        lea     ecx, [edi + 0x154]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_004c4480
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
