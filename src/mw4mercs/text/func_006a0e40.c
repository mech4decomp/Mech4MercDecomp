/*
 * FUN_006A0E40 (113 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Checks a flag at this+4 -> +0x4E0; if clear returns 0. Otherwise
 * builds a local structure via FUN_00682170 / FUN_006a0e10 /
 * FUN_006824D0 and dispatches a virtual call (this->vtable[2]),
 * returning 1 - (result != 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00682170(void *this, int param);
extern void *__fastcall FUN_006a0e10(void *this, int param);
extern void __fastcall FUN_006824D0(void *this, int a, int b);

__declspec(naked) void __fastcall FUN_006a0e40(void)
{
    __asm {
        sub     esp, 0x24
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        test    dword ptr [eax + 0x4E0], 0xFFFFFFFC
        jnz     L_cont
        xor     al, al
        pop     esi
        add     esp, 0x24
        ret     4
L_cont:
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00682170
        lea     eax, [esp + 0x1C]
        push    eax
        mov     ecx, esi
        call    FUN_006a0e10
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 4], ecx
        mov     edx, dword ptr [eax + 4]
        push    0
        lea     ecx, [esp + 8]
        mov     dword ptr [esp + 0xC], edx
        mov     eax, dword ptr [eax + 8]
        push    ecx
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x14], eax
        call    FUN_006824D0
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        neg     al
        sbb     al, al
        inc     al
        pop     esi
        add     esp, 0x24
        ret     4
    }
}
