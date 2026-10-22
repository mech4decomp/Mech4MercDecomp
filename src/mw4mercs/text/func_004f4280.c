/*
 * FUN_004F4280 (129 B) — MLR/Adept render-state update. __thiscall (ECX = this),
 * RET 8 (2 stack params). Copies 0xc dwords from [this+0x170]->+0xd8+0x80 to
 * this+0x180, calls FUN_004dad70, then walks a linked list at this+0xbc
 * dispatching virtual [+0x40] or FUN_004d67d0 per node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dad70(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern void __cdecl FUN_004d67d0(void);

__declspec(naked) void __fastcall FUN_004f4280(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x170]
        push    esi
        mov     esi, dword ptr [eax + 0xd8]
        push    edi
        add     esi, 0x80
        lea     edi, [ebx + 0x180]
        mov     ecx, 0xc
        rep movsd
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    FUN_004dad70
        mov     esi, dword ptr [ebx + 0xbc]
        test    esi, esi
        jz      L3
L1:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L3
        cmp     ecx, dword ptr [ebx + 0x178]
        jz      L2
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        push    edi
        push    eax
        call    dword ptr [edx + 0x40]
        /* __emit: MSVC6 miscomputes this backward jmp rel-offset by +4 (call-reloc between branch and target) */
        _emit 0xEB
        _emit 0xDE
L2:
        push    ecx
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        call    FUN_004d67d0
        /* __emit: MSVC6 miscomputes this backward jmp rel-offset by +4 (call-reloc sits between branch and target) */
        _emit 0xEB
        _emit 0xC0
L3:
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
