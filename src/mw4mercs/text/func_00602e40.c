/*
 * FUN_00602e40 (88 B) — __fastcall (ECX = this) list teardown helper.
 *
 * Walks a linked list from [this+4], calling FUN_006030a0 (thiscall)
 * and FUN_00602ea0 (thiscall) per node, freeing each node, then
 * re-initializes the head node's links and nulls [this+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006030a0(void *this, void *arg);
extern void __fastcall FUN_00602ea0(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00602e40(void *this)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        test    eax, eax
        jz      L_96
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        jz      L_7f
        push    edi
L_55:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        mov     ecx, ebx
        call    FUN_006030a0
        mov     edi, dword ptr [esi + 0x8]
        lea     ecx, [esi + 0x14]
        call    FUN_00602ea0
        test    esi, esi
        jz      L_78
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_78:
        test    edi, edi
        mov     esi, edi
        jnz     L_55
        pop     edi
L_7f:
        mov     eax, dword ptr [ebx]
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [ebx + 0x4], 0x0
        pop     esi
L_96:
        pop     ebx
        ret
    }
}
