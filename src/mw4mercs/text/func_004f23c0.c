/*
 * FUN_004F23C0 (32 B) — Method.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 * Calls two functions with the parameter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004154d0(int this, int param);
extern void __fastcall FUN_004179b0(int this, int param);

__declspec(naked) void __stdcall FUN_004F23C0(int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esp + 0x0c]
        lea     eax, [esi + 8]
        push    eax
        mov     ecx, edi
        call    FUN_004154d0
        push    edi
        mov     ecx, esi
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    }
}
