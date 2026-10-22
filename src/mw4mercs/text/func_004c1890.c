/*
 * FUN_004C1890 (125 B) - MLR node stream read (thiscall, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6960(void *p);
extern void __cdecl FUN_00421ec0(void *p);

__declspec(naked) void __fastcall FUN_004c1890(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     ebx, ecx
        push    esi
        call    FUN_004c6960
        push    esi
        call    FUN_00421ec0
        mov     eax, dword ptr [esi]
        add     esp, 0x4
        push    0x4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0x0
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [ebx + 0x174]
        mov     edi, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx]
        push    esi
        sub     edi, eax
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        sub     eax, edx
        mov     edx, dword ptr [esi]
        sub     eax, edi
        mov     dword ptr [esp + 0x14], eax
        add     eax, 0x4
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x1c]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x18]
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
