/*
 * FUN_006D3F20 (147 B) — Object field serializer.
 *
 * __thiscall (ECX = this), RET 0xc (three stack params).
 * Reads fields from the object and writes them to a destination
 * object via string-keyed setter calls (FUN_00411C40, FUN_00411D10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00411c40(void);
extern int __cdecl FUN_00411d10(void);

__declspec(naked) void __fastcall FUN_006d3f20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 4]
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 4]
        mov     eax, dword ptr [eax]
        mov     edi, dword ptr [esp + 0xc]
        push    eax
        push    0x79ead8
        mov     ecx, edi
        call    FUN_00411c40
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi + 8]
        sub     ecx, edx
        push    ecx
        push    0x79ead0
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi + 0xc]
        sub     edx, ecx
        push    edx
        push    0x79eac8
        mov     ecx, edi
        call    FUN_00411d10
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        push    0x79eabc
        mov     ecx, edi
        call    FUN_00411d10
        mov     ecx, dword ptr [esi + 0x14]
        push    ecx
        push    0x79eab0
        mov     ecx, edi
        call    FUN_00411d10
        xor     edx, edx
        mov     dl, byte ptr [esi]
        mov     ecx, edi
        push    edx
        push    0x79eaa4
        call    FUN_00411d10
        xor     eax, eax
        mov     al, byte ptr [esi + 1]
        mov     ecx, edi
        push    eax
        push    0x79eaa0
        call    FUN_00411d10
        pop     edi
        pop     esi
        ret     0xc
    }
}
