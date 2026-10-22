/*
 * FUN_00446e70 (89 B) — MLR method (__thiscall, RET 0xc): builds a vertex
 * buffer, dispatches through vtable slots +0x14/+0x18 and arg3's vtable +0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00423e00(void);

__declspec(naked) void FUN_00446e70(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0x20]
        mov     esi, ecx
        push    eax
        lea     ecx, [esi + 0x24]
        call    FUN_004206b0
        mov     eax, dword ptr [esi + 0xa0]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    0x1
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esi]
        push    0x0
        push    edx
        push    ecx
        lea     eax, [edi + 0x1c]
        mov     ecx, esp
        push    eax
        call    FUN_00423e00
        mov     ecx, esi
        call    dword ptr [ebx + 0x18]
        test    eax, eax
        jz      Lc3
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        add     edi, 0x4
        push    edi
        push    esi
        call    dword ptr [edx + 0xc]
Lc3:
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
