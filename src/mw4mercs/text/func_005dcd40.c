/*
 * FUN_005DCD40 (113 B) — Formats a "Script name %s" string from [this+0x2d4..]
 * via sprintf (import at 0x0076b420), calls the callback param with it, then
 * calls the callback again with a status string depending on [this+0x2f9].
 *
 * __thiscall (ECX = this), one stack param (callback), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005DCD40(void *callback)
{
    

extern int DAT_0076b420;
__asm {
sub     esp, 0x64
        push    esi
        mov     esi, ecx
        push    edi
        sub     esp, 0xc
        lea     eax, [esi + 0x2d4]
        mov     edx, dword ptr [eax]
        mov     ecx, esp
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x4], edx
        mov     dword ptr [ecx + 0x8], eax
        lea     ecx, [esp + 0x14]
        push    0x7884f4
        push    ecx
        call dword ptr [DAT_0076b420]
        mov     edi, dword ptr [esp + 0x84]
        lea     edx, [esp + 0x1c]
        push    edx
        call    edi
        mov     al, byte ptr [esi + 0x2f9]
        add     esp, 0x18
        test    al, al
        jz      L9F
        push    0x7884ec
        call    edi
        add     esp, 0x4
        pop     edi
        pop     esi
        add     esp, 0x64
        ret     4
L9F:
        push    0x7884e4
        call    edi
        add     esp, 0x4
        pop     edi
        pop     esi
        add     esp, 0x64
        ret     4
    }


}
