/*
 * FUN_005d2c60 (120 B) — __thiscall (ECX=this), RET 8 (two stack params).
 * Dispatches through virtual methods based on flags at this+0x364.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d2c60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x364]
        test    ecx, ecx
        push    edi
        jz      loc_5D2CD3
        mov     al, byte ptr [ecx + 0x1A]
        test    al, al
        jnz     loc_5D2CD3
        mov     al, byte ptr [ecx + 0x19]
        test    al, al
        jnz     loc_5D2CAA
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esi + 0x364]
        mov     eax, dword ptr [ecx]
        mov     edi, dword ptr [esi]
        call    dword ptr [eax + 0x34]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        call    dword ptr [edi + 0x140]
        pop     edi
        pop     esi
        ret     0x8
loc_5D2CAA:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    dword ptr [edx + 0x18]
        mov     ecx, dword ptr [esi + 0x364]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [esi]
        call    dword ptr [edx + 0x34]
        push    ecx
        mov     ecx, esi
        fstp    dword ptr [esp]
        call    dword ptr [edi + 0x140]
loc_5D2CD3:
        pop     edi
        pop     esi
        ret     0x8
    }
}
