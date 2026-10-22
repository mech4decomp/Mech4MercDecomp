/*
 * FUN_005ba730 (66 B) — __thiscall (ECX = this), RET 0xC.
 * Walks a linked list from this, allocates a node (FUN_004084d0),
 * and inserts it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084d0(void);

__declspec(naked) void __stdcall FUN_005ba730(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        test    esi, esi
        jz      L_747
        mov     ecx, dword ptr [esp + 0xc]
    L_73f:
        mov     eax, dword ptr [esi]
        cmp     eax, ecx
        jz      L_747
        mov     esi, eax
        test    esi, esi
        jnz     L_73f
    L_747:
        push    0x8
        call    FUN_004084d0
        lea     ecx, [eax + 0x4]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_760
        mov     edx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edx]
        mov     dword ptr [ecx], edx
    L_760:
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [esi], eax
        mov     dword ptr [ecx], eax
        mov     eax, ecx
        pop     esi
        ret     0xc
    }
}
