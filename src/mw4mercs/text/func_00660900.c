/*
 * FUN_00660900 (68 B) — __thiscall destructor, RET 4 (one stack param).
 * Calls FUN_006a22e0 on this+0x24, +0x4C, +0x30, +0x24, then FUN_00661e50
 * on this; if (param & 1) frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006a22e0(void *this);
extern void __fastcall FUN_00661e50(void *this);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __fastcall FUN_00660900(void *this, int param)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi + 0x24]
        lea     ecx, [esi + 0x28]
        call    FUN_006a22e0
        lea     ecx, [esi + 0x1c]
        call    FUN_006a22e0
        lea     ecx, [esi + 0xc]
        call    FUN_006a22e0
        mov     ecx, esi
        call    FUN_006a22e0
        mov     ecx, edi
        call    FUN_00661e50
        test    byte ptr [esp + 0xc], 0x1
        jz      L_skip
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
