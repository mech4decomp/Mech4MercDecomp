/*
 * FUN_0061b160 (162 B) — __thiscall (ECX = this). Uses the object at
 * *(this+0x34) to make several virtual calls at +0x24, computes a
 * string length via repne scasb, calls FUN_0061ae40, and stores
 * results into an indexed slot at this + idx*0x58. RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061ae40(void);

__declspec(naked) void __fastcall FUN_0061b160(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        mov     esi, dword ptr [ebx + 0x34]
        push    0x1
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x1
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebx + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     esi, dword ptr [ebx + 0x34]
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ebp, dword ptr [esp + 0x1c]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    eax
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [eax + eax*0x4]
        lea     edx, [eax + ecx*0x2]
        lea     ecx, [ebx + edx*0x8 + 0x38]
        call    FUN_0061ae40
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [eax + eax*0x4]
        pop     edi
        lea     edx, [eax + ecx*0x2]
        lea     ebx, [ebx + edx*0x8]
        mov     dword ptr [ebx + 0x3c], ebp
        pop     esi
        pop     ebp
        mov     dword ptr [ebx + 0x38], 0x1
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
