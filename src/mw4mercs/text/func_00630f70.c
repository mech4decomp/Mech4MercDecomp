/*
 * FUN_00630f70 (39 B) — Conditional sub-object init.
 *
 * __thiscall (ECX = this, 1 stack param). Calls FUN_0041fd80 on
 * this+0x18; if it returns 0, calls FUN_0041fcd0(param) on this+0x18
 * and sets this[0x20] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_0041fd80(void *this);
extern void __fastcall FUN_0041fcd0(void *this, void *param);

__declspec(naked) void __stdcall FUN_00630f70(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x18]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jnz     l_done
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     ecx, edi
        call    FUN_0041fcd0
        mov     byte ptr [esi + 0x20], 0x1
    l_done:
        pop     edi
        pop     esi
        ret     4
    }
}
